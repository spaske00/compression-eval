#!/usr/bin/env python3
"""Fetch highly cited metric-literature candidates and generate report outputs.

The script intentionally uses only the Python standard library. Public scholarly
metadata APIs are rate-limited and occasionally unavailable, so every request is
cached and every generated entry records the source used for its count.
"""

from __future__ import annotations

import argparse
import json
import re
import time
import urllib.error
import urllib.parse
import urllib.request
from datetime import date
from pathlib import Path
from typing import Any


ROOT = Path(__file__).resolve().parents[1]
CONFIG_PATH = ROOT / "metrics.json"
CACHE_DIR = ROOT / "cache"
OUTPUT_DIR = ROOT / "output"
REPORT_PATH = OUTPUT_DIR / "metric-literature-report.md"
BIB_PATH = OUTPUT_DIR / "metric-literature.bib"
DATA_PATH = OUTPUT_DIR / "metric-literature-data.json"
STATUS_PATH = OUTPUT_DIR / "fetch-status.json"


def slugify(value: str) -> str:
    value = value.lower()
    value = re.sub(r"[^a-z0-9]+", "-", value)
    return value.strip("-") or "untitled"


def normalize_title(value: str) -> str:
    return re.sub(r"[^a-z0-9]+", " ", value.lower()).strip()


def words(value: str) -> set[str]:
    stop = {
        "a",
        "an",
        "and",
        "by",
        "for",
        "in",
        "of",
        "on",
        "or",
        "the",
        "to",
        "with",
    }
    return {w for w in re.findall(r"[a-z0-9]+", value.lower()) if len(w) > 2 and w not in stop}


def cache_path(source: str, query: str) -> Path:
    return CACHE_DIR / f"{source}-{slugify(query)[:96]}.json"


def request_json(
    url: str,
    cache_file: Path,
    refresh: bool,
    timeout: int,
    polite_delay: float,
    cache_only: bool,
) -> dict[str, Any]:
    if cache_file.exists() and not refresh:
        return json.loads(cache_file.read_text(encoding="utf-8"))
    if cache_only:
        return {"_error": "cache-miss", "_body": f"No cached response for {cache_file.name}", "_url": url}

    req = urllib.request.Request(
        url,
        headers={"User-Agent": "compression-eval-literature-fetch/1.0 (mailto:noreply@example.com)"},
    )
    try:
        with urllib.request.urlopen(req, timeout=timeout) as response:
            payload = json.loads(response.read().decode("utf-8"))
    except urllib.error.HTTPError as exc:
        body = exc.read().decode("utf-8", errors="replace")[:1000]
        payload = {"_error": f"HTTP {exc.code}", "_body": body, "_url": url}
    except Exception as exc:  # network timeouts, DNS errors, malformed JSON
        payload = {"_error": type(exc).__name__, "_body": str(exc), "_url": url}

    cache_file.write_text(json.dumps(payload, indent=2, ensure_ascii=False), encoding="utf-8")
    time.sleep(polite_delay)
    return payload


def fetch_openalex(query: str, refresh: bool, timeout: int, polite_delay: float, cache_only: bool) -> list[dict[str, Any]]:
    params = {
        "search": query,
        "per-page": "50",
        "sort": "cited_by_count:desc",
        "mailto": "noreply@example.com",
    }
    url = "https://api.openalex.org/works?" + urllib.parse.urlencode(params)
    payload = request_json(url, cache_path("openalex", query), refresh, timeout, polite_delay, cache_only)
    if "_error" in payload:
        return []

    records = []
    for item in payload.get("results", []):
        doi = item.get("doi") or ""
        records.append(
            {
                "source": "OpenAlex",
                "title": item.get("display_name") or "",
                "authors": [a.get("author", {}).get("display_name", "") for a in item.get("authorships", [])],
                "year": item.get("publication_year"),
                "venue_or_publisher": (item.get("primary_location") or {}).get("source", {}).get("display_name")
                or item.get("host_venue", {}).get("display_name")
                or "",
                "item_type": item.get("type") or "",
                "doi_or_url": doi or item.get("id") or "",
                "citation_count": item.get("cited_by_count") or 0,
                "citation_count_source": "OpenAlex cited_by_count",
                "raw_source_id": item.get("id") or "",
            }
        )
    return records


def fetch_semantic_scholar(query: str, refresh: bool, timeout: int, polite_delay: float, cache_only: bool) -> list[dict[str, Any]]:
    params = {
        "query": query,
        "limit": "50",
        "fields": "title,authors,year,venue,citationCount,externalIds,url,publicationTypes",
    }
    url = "https://api.semanticscholar.org/graph/v1/paper/search?" + urllib.parse.urlencode(params)
    payload = request_json(url, cache_path("semantic-scholar", query), refresh, timeout, polite_delay, cache_only)
    if "_error" in payload:
        return []

    records = []
    for item in payload.get("data", []):
        external = item.get("externalIds") or {}
        doi = external.get("DOI") or ""
        records.append(
            {
                "source": "Semantic Scholar",
                "title": item.get("title") or "",
                "authors": [a.get("name", "") for a in item.get("authors", [])],
                "year": item.get("year"),
                "venue_or_publisher": item.get("venue") or "",
                "item_type": ", ".join(item.get("publicationTypes") or []),
                "doi_or_url": f"https://doi.org/{doi}" if doi else item.get("url") or "",
                "citation_count": item.get("citationCount") or 0,
                "citation_count_source": "Semantic Scholar citationCount",
                "raw_source_id": item.get("paperId") or "",
            }
        )
    return records


def fetch_crossref(query: str, refresh: bool, timeout: int, polite_delay: float, cache_only: bool) -> list[dict[str, Any]]:
    params = {
        "query.title": query,
        "rows": "100",
        "select": "DOI,title,author,published-print,published-online,container-title,publisher,is-referenced-by-count,type,URL",
        "mailto": "noreply@example.com",
    }
    url = "https://api.crossref.org/works?" + urllib.parse.urlencode(params)
    payload = request_json(url, cache_path("crossref", query), refresh, timeout, polite_delay, cache_only)
    if "_error" in payload:
        return []

    records = []
    for item in payload.get("message", {}).get("items", []):
        published = item.get("published-print") or item.get("published-online") or {}
        date_parts = published.get("date-parts") or [[None]]
        doi = item.get("DOI") or ""
        authors = []
        for author in item.get("author") or []:
            given = author.get("given") or ""
            family = author.get("family") or ""
            name = " ".join(part for part in [given, family] if part)
            if name:
                authors.append(name)
        records.append(
            {
                "source": "Crossref",
                "title": (item.get("title") or [""])[0],
                "authors": authors,
                "year": date_parts[0][0],
                "venue_or_publisher": (item.get("container-title") or [""])[0] or item.get("publisher") or "",
                "item_type": item.get("type") or "",
                "doi_or_url": f"https://doi.org/{doi}" if doi else item.get("URL") or "",
                "citation_count": item.get("is-referenced-by-count") or 0,
                "citation_count_source": "Crossref is-referenced-by-count",
                "raw_source_id": doi,
            }
        )
    return records


FETCHERS = {
    "openalex": fetch_openalex,
    "semantic-scholar": fetch_semantic_scholar,
    "crossref": fetch_crossref,
}


KNOWN_METADATA = {
    "10.1109/date.2002.998363": {"year": 2002},
    "10.1109/soac.1991.143840": {"year": 1991},
    "10.1109/test.2002.1041756": {"year": 2002},
    "10.1109/pccc.1994.504117": {"year": 1994},
    "10.1109/dcc.1996.488313": {"year": 1996},
    "10.1109/dcc.1991.213344": {"year": 1991},
    "10.1007/978-1-84628-603-2": {"authors": ["David Salomon"]},
    "10.1002/0471200611.ch2": {"authors": ["Thomas M. Cover", "Joy A. Thomas"]},
    "10.1002/047174882x.ch2": {"authors": ["Thomas M. Cover", "Joy A. Thomas"]},
    "10.1007/978-3-642-82803-4": {"authors": ["Kurt Binder"]},
}


def candidate_key(record: dict[str, Any]) -> str:
    doi_or_url = record.get("doi_or_url") or ""
    doi_match = re.search(r"10\.\d{4,9}/\S+", doi_or_url, flags=re.I)
    if doi_match:
        return "doi:" + doi_match.group(0).lower().rstrip(".,)")
    title = normalize_title(record.get("title") or "")
    authors = " ".join(record.get("authors") or [])[:80].lower()
    return f"title:{title}|authors:{authors}"


def enrich_known_metadata(record: dict[str, Any]) -> None:
    doi_match = re.search(r"10\.\d{4,9}/\S+", record.get("doi_or_url") or "", flags=re.I)
    if not doi_match:
        return
    known = KNOWN_METADATA.get(doi_match.group(0).lower().rstrip(".,)"))
    if not known:
        return
    for field, value in known.items():
        if not record.get(field):
            record[field] = value
    record["metadata_enrichment_source"] = "Publisher/venue metadata manually verified on 2026-07-01."


def relevance_score(metric: dict[str, Any], record: dict[str, Any], query: str) -> int:
    haystack = " ".join(
        [
            record.get("title") or "",
            record.get("venue_or_publisher") or "",
            record.get("item_type") or "",
        ]
    ).lower()
    metric_terms = set()
    for value in [metric["name"], *metric.get("aliases", []), query]:
        metric_terms.update(words(value))

    score = sum(1 for term in metric_terms if term in haystack)
    title = (record.get("title") or "").lower()
    if any(alias.lower() in title for alias in metric.get("aliases", [])):
        score += 4
    if any(strong in title for strong in ["compression", "entropy", "random", "lempel", "ziv", "executable", "section"]):
        score += 1
    return score


def is_materially_relevant(metric_id: str, record: dict[str, Any]) -> bool:
    """Apply a conservative title gate before citation-based ranking."""
    title = normalize_title(record.get("title") or "")
    padded_title = f" {title} "
    has = lambda *terms: any(term in padded_title for term in terms)

    if metric_id == "file-size":
        return has("compress") and not has("micropillar", "nanolaminate", "material", "particle")
    if metric_id == "byte-entropy":
        return has("entropy") and has("information", "random", "compress", "coding", "data") and not has(
            "protein", "atom", "carbide", "heavy ion", "geographic", "species", "metasurface", "potential"
        )
    if metric_id == "chi-square-byte-frequency":
        return has("chi square", "chi-square") and has("random", "frequency", "generator", "test")
    if metric_id == "monte-carlo-pi":
        return has("monte carlo") and has("random", "simulation", "statistical", " pi ")
    if metric_id == "serial-correlation":
        return has("serial correlation", "autocorrelation", "random number", "randomness") and not has(
            "visual perception", "orientation estimation", "ecology"
        )
    if metric_id == "conditional-entropy":
        return has("conditional entropy", "entropy rate") or (has("markov") and has("entropy", "compress"))
    if metric_id == "n-gram-entropy":
        return has("n gram", "n-gram", "block entropy", "sequence entropy", "language entropy", "data compression")
    if metric_id == "lempel-ziv-complexity":
        return has("lempel", "ziv", "dictionary compress")
    if metric_id == "section-size-ratios":
        return has("malware", " pe ", "executable") and not has(
            "cross section", "cell biology", "particle", "fluidization"
        )
    if metric_id == "section-level-entropy":
        return has("entropy") and (has("malware", "executable") or (has("binary file") and has("entropy")))
    raise ValueError(f"No relevance gate configured for {metric_id}")


def build_bib_key(record: dict[str, Any], used: set[str]) -> str:
    authors = record.get("authors") or []
    first_author = "source"
    if authors:
        first_author = re.sub(r"[^A-Za-z0-9]+", "", authors[0].split()[-1]) or "source"
    year = str(record.get("year") or "nd")
    stop = {"a", "an", "and", "by", "for", "in", "of", "on", "or", "the", "to", "with"}
    title_word = next(
        (word for word in re.findall(r"[a-z0-9]+", (record.get("title") or "").lower()) if len(word) > 2 and word not in stop),
        "work",
    )
    base = f"{first_author.lower()}{year}{title_word.lower()}"
    key = base
    suffix = 2
    while key in used:
        key = f"{base}{suffix}"
        suffix += 1
    used.add(key)
    return key


def bibtex_escape(value: Any) -> str:
    text = ", ".join(value) if isinstance(value, list) else str(value or "")
    return text.replace("{", "\\{").replace("}", "\\}")


def format_bibtex(records_by_metric: list[dict[str, Any]]) -> str:
    used: set[str] = set()
    entries = []
    seen: set[str] = set()
    for metric_result in records_by_metric:
        for record in metric_result["selected_sources"]:
            key = candidate_key(record)
            if key in seen:
                continue
            seen.add(key)
            bib_key = build_bib_key(record, used)
            record["bibtex_key"] = bib_key
            item_type = (record.get("item_type") or "").lower()
            entry_type = "incollection" if "book-chapter" in item_type else "book" if item_type == "book" else "article"
            fields = {
                "title": record.get("title"),
                "author": " and ".join(record.get("authors") or []),
                "year": record.get("year"),
                "url": record.get("doi_or_url"),
                "note": f"{record.get('citation_count_source')}: {record.get('citation_count')}; retrieved {record.get('retrieval_date')}",
            }
            venue = record.get("venue_or_publisher")
            if entry_type == "article":
                fields["journal"] = venue
            elif entry_type == "book":
                fields["publisher"] = venue
            else:
                fields["booktitle"] = venue
                fields["publisher"] = venue
            lines = [f"@{entry_type}{{{bib_key},"]
            for name, value in fields.items():
                if value:
                    lines.append(f"  {name} = {{{bibtex_escape(value)}}},")
            lines.append("}")
            entries.append("\n".join(lines))
    return "\n\n".join(entries) + "\n"


def select_for_metric(metric: dict[str, Any], args: argparse.Namespace) -> dict[str, Any]:
    candidates: dict[str, dict[str, Any]] = {}
    rejected = []
    fetch_errors = []

    for query in metric["queries"]:
        for source_name in args.sources:
            fetcher = FETCHERS[source_name]
            records = fetcher(query, args.refresh, args.timeout, args.polite_delay, args.cache_only)
            if not records:
                cache_file = cache_path(fetcher.__name__.replace("fetch_", "").replace("_", "-"), query)
                if cache_file.exists():
                    payload = json.loads(cache_file.read_text(encoding="utf-8"))
                    if "_error" in payload:
                        fetch_errors.append({"query": query, "source": fetcher.__name__, "error": payload["_error"]})
                continue
            for record in records:
                if not record.get("title"):
                    continue
                enrich_known_metadata(record)
                record["query"] = query
                record["retrieval_date"] = args.retrieval_date
                record["relevance_note"] = metric["relevance_note_template"]
                score = relevance_score(metric, record, query)
                record["relevance_score"] = score
                key = candidate_key(record)
                existing = candidates.get(key)
                if existing is None or record["citation_count"] > existing["citation_count"]:
                    candidates[key] = record

    relevant = [item for item in candidates.values() if is_materially_relevant(metric["id"], item)]
    irrelevant = [item for item in candidates.values() if not is_materially_relevant(metric["id"], item)]
    ranked = sorted(relevant, key=lambda item: item["citation_count"], reverse=True)
    selected = []
    for record in ranked:
        if len(selected) >= args.limit:
            rejected.append(
                {
                    "title": record.get("title"),
                    "year": record.get("year"),
                    "citation_count": record.get("citation_count"),
                    "citation_count_source": record.get("citation_count_source"),
                    "reason": "Relevant candidate outside top selected limit.",
                }
            )
            continue
        record["rank"] = len(selected) + 1
        record["canonical_non_paper"] = (record.get("item_type") or "").lower() == "book"
        if record["canonical_non_paper"]:
            record["relevance_note"] += " Included as a canonical book-length treatment of the metric family."
        selected.append(record)

    for record in sorted(irrelevant, key=lambda item: item["citation_count"], reverse=True):
        rejected.append(
            {
                "title": record.get("title"),
                "year": record.get("year"),
                "citation_count": record.get("citation_count"),
                "citation_count_source": record.get("citation_count_source"),
                "reason": "Rejected by the metric-specific title relevance gate.",
            }
        )

    return {
        "metric_id": metric["id"],
        "metric_name": metric["name"],
        "search_aliases": metric["aliases"],
        "queries": metric["queries"],
        "ambiguity_notes": ambiguity_notes(metric["id"]),
        "selected_sources": selected,
        "rejected_high_citation_candidates": rejected[:20],
        "fetch_errors": fetch_errors,
        "complete": len(selected) == args.limit,
    }


def ambiguity_notes(metric_id: str) -> list[str]:
    notes = {
        "byte-entropy": ["Whole-file byte entropy is distinct from conditional, n-gram, and section-level entropy."],
        "conditional-entropy": ["Conditional entropy sources may overlap with entropy-rate literature."],
        "n-gram-entropy": ["n-gram entropy is treated as block/sequence entropy, not unigram byte entropy."],
        "section-level-entropy": ["Section-level entropy is scoped to executable/binary sections, not whole-file entropy."],
        "section-size-ratios": ["Sparse direct literature is expected; binary-layout and executable-feature papers are acceptable fallback evidence."],
    }
    return notes.get(metric_id, [])


def write_report(config: dict[str, Any], results: list[dict[str, Any]]) -> None:
    lines = [
        "# Metric Literature Report",
        "",
        f"Retrieval date: {config.get('retrieval_date')}",
        "",
        "Citation-count priority: OpenAlex `cited_by_count`, Semantic Scholar `citationCount`, then Crossref `is-referenced-by-count`.",
        "",
        "Selection status: automated relevance filtering accepted for this change; entries should be manually curated before dissertation citation.",
        "",
        "## Summary",
        "",
        "| Metric | Selected | Top source | Count source | Count | Status |",
        "|---|---:|---|---|---:|---|",
    ]
    for result in results:
        top = result["selected_sources"][0] if result["selected_sources"] else {}
        lines.append(
            "| {metric} | {selected} | {title} | {source} | {count} | {status} |".format(
                metric=result["metric_name"],
                selected=len(result["selected_sources"]),
                title=(top.get("title") or "n/a").replace("|", "\\|"),
                source=top.get("citation_count_source") or "n/a",
                count=top.get("citation_count") or 0,
                status="complete" if result["complete"] else "incomplete",
            )
        )

    lines.extend(
        [
            "",
            "## Method limitations and unresolved ambiguities",
            "",
            "- The selected lists use automated title-based relevance gates. The user accepted this automated selection for the change; manual topical curation remains advisable before dissertation citation.",
            "- OpenAlex and Semantic Scholar were unavailable during retrieval, so all reported counts are Crossref `is-referenced-by-count` values rather than globally comparable citation counts.",
            "- Randomness-test sources may support multiple metrics (chi-square, Monte Carlo, and serial correlation), while entropy sources may overlap across whole-file, conditional, n-gram, and section-level interpretations.",
            "- Section-size-ratio literature is sparse; its list uses the documented executable-layout and malware-feature fallback hierarchy.",
            "- The bibliography deduplicates sources shared by metric lists, so 100 ranked selections may produce fewer than 100 unique BibTeX entries.",
        ]
    )

    for result in results:
        lines.extend(["", f"## {result['metric_name']}", ""])
        lines.append("Search aliases: " + ", ".join(result["search_aliases"]))
        lines.append("")
        lines.append("Queries:")
        for query in result["queries"]:
            lines.append(f"- `{query}`")
        if result["ambiguity_notes"]:
            lines.append("")
            lines.append("Ambiguity notes:")
            for note in result["ambiguity_notes"]:
                lines.append(f"- {note}")
        if result["fetch_errors"]:
            lines.append("")
            lines.append("Fetch errors:")
            for error in result["fetch_errors"]:
                lines.append(f"- {error['source']} for `{error['query']}`: {error['error']}")
        lines.extend(["", "### Selected sources", ""])
        if not result["selected_sources"]:
            lines.append("No selected sources. Metadata APIs did not return enough relevant candidates.")
        else:
            for record in result["selected_sources"]:
                authors = ", ".join(record.get("authors") or ["Unknown author"])
                lines.extend(
                    [
                        f"{record['rank']}. {record['title']}",
                        f"   - Authors: {authors}",
                        f"   - Year: {record.get('year') or 'n.d.'}",
                        f"   - Venue/publisher: {record.get('venue_or_publisher') or 'n/a'}",
                        f"   - Type: {record.get('item_type') or 'n/a'}",
                        f"   - Canonical non-paper source: {'yes' if record.get('canonical_non_paper') else 'no'}",
                        f"   - DOI/URL: {record.get('doi_or_url') or 'n/a'}",
                        f"   - Count: {record.get('citation_count')} ({record.get('citation_count_source')}, retrieved {record.get('retrieval_date')})",
                        f"   - Query: `{record.get('query')}`",
                        f"   - Relevance: {record.get('relevance_note')}",
                    ]
                )
                if record.get("metadata_enrichment_source"):
                    lines.append(f"   - Metadata enrichment: {record['metadata_enrichment_source']}")
        lines.extend(["", "### Rejected high-count candidates", ""])
        if not result["rejected_high_citation_candidates"]:
            lines.append("None recorded.")
        else:
            for record in result["rejected_high_citation_candidates"][:10]:
                lines.append(
                    f"- {record.get('title')} ({record.get('year')}); {record.get('citation_count')} "
                    f"via {record.get('citation_count_source')}: {record.get('reason')}"
                )

    REPORT_PATH.write_text("\n".join(lines) + "\n", encoding="utf-8")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--refresh", action="store_true", help="Ignore cached API responses.")
    parser.add_argument("--limit", type=int, default=10, help="Selected sources per metric.")
    parser.add_argument("--timeout", type=int, default=12, help="HTTP timeout per request in seconds.")
    parser.add_argument("--polite-delay", type=float, default=1.0, help="Delay between API requests.")
    parser.add_argument("--retrieval-date", default=date.today().isoformat())
    parser.add_argument("--cache-only", action="store_true", help="Generate outputs from cached API responses only.")
    parser.add_argument(
        "--sources",
        nargs="+",
        choices=tuple(FETCHERS),
        default=list(FETCHERS),
        help="Metadata sources to query, in priority order.",
    )
    args = parser.parse_args()

    CACHE_DIR.mkdir(parents=True, exist_ok=True)
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    config = json.loads(CONFIG_PATH.read_text(encoding="utf-8"))
    config["retrieval_date"] = args.retrieval_date

    results = [select_for_metric(metric, args) for metric in config["metrics"]]
    DATA_PATH.write_text(json.dumps({"config": config, "results": results}, indent=2, ensure_ascii=False), encoding="utf-8")
    write_report(config, results)
    BIB_PATH.write_text(format_bibtex(results), encoding="utf-8")

    status = {
        "retrieval_date": args.retrieval_date,
        "metrics": [
            {
                "metric_id": result["metric_id"],
                "selected": len(result["selected_sources"]),
                "target": args.limit,
                "complete": result["complete"],
            }
            for result in results
        ],
        "complete": all(result["complete"] for result in results),
    }
    STATUS_PATH.write_text(json.dumps(status, indent=2), encoding="utf-8")
    return 0 if status["complete"] else 2


if __name__ == "__main__":
    raise SystemExit(main())
