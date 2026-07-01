# Metric Literature Discovery

This directory contains the implementation artifacts for the OpenSpec change
`fetch-metric-research-papers`.

## Outputs

- `metrics.json`: metric families, search aliases, source priority, selection policy, and report schema.
- `scripts/fetch_metric_literature.py`: retryable metadata fetcher and report/BibTeX generator.
- `cache/`: raw API responses, keyed by source and query.
- `output/metric-literature-report.md`: generated ranked report.
- `output/metric-literature.bib`: generated BibTeX entries.
- `output/metric-literature-data.json`: normalized selected/rejected candidate data.

## Citation-count policy

Citation counts are not stable across databases. The configured priority is:

1. OpenAlex `cited_by_count`
2. Semantic Scholar `citationCount`
3. Crossref `is-referenced-by-count`

If the selected source is Crossref, the report labels the value as a Crossref
reference count rather than a global citation count.

## Report schema

Each selected source must include title, authors, year, venue or publisher,
item type, DOI or stable URL when available, citation count, citation-count
source, retrieval date, relevance note, and the query that produced it.

Rejected candidates are retained when high-citation/high-reference results are
excluded as off-topic or low-quality.
