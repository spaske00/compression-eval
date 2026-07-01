## Context

The input context defines ten metric families used to explain compression behavior: file size, byte entropy, chi-square byte-frequency deviation, Monte Carlo pi randomness estimate, serial correlation coefficient, conditional entropy, n-gram entropy, Lempel-Ziv complexity, section-size ratios, and section-level entropy. The current need is a reproducible research artifact, not a code change to the compression pipeline.

The output should support dissertation writing: it must distinguish foundational sources from application-specific sources, avoid uncited generic web content, and preserve enough metadata to audit why a paper was selected.

## Goals / Non-Goals

**Goals:**

- Produce 10 highly cited research sources for each metric family named in the supplied context.
- Prefer sources that are directly relevant to information theory, randomness testing, compression, executable/binary analysis, or metric use in software/security contexts.
- Capture citation counts with the source and retrieval date because counts differ across scholarly indexes and change over time.
- Generate a human-readable report and a BibTeX file suitable for LaTeX integration.
- Flag source-selection ambiguities instead of silently mixing unrelated interpretations of the same metric name.

**Non-Goals:**

- Do not rewrite the dissertation metric section during this change.
- Do not claim citation counts are globally exact or stable.
- Do not require implementation changes to compressor benchmarks or metric computation code.
- Do not include patents, blog posts, tutorials, or non-scholarly pages unless explicitly marked as excluded evidence.

## Decisions

1. Use metric families, not every phrase variant, as the research unit.

   Rationale: The context has overlapping terms, such as entropy and section-level entropy. Grouping by metric family keeps the result useful while still allowing section-level entropy to receive executable-analysis-specific papers.

   Alternative considered: Treat each paragraph as a separate independent query. That would duplicate many entropy and information-theory sources and make the bibliography harder to use.

2. Rank by citation count but require topical relevance.

   Rationale: “Most cited” alone can return broadly related but unhelpful works. A selected source must have an explicit connection to the metric, its theory, its measurement, or its use in compression/randomness/binary analysis.

   Alternative considered: Sort raw search results by citations without filtering. This would be more mechanical but less defensible for dissertation use.

3. Record citation source, count, and retrieval date per entry.

   Rationale: OpenAlex, Semantic Scholar, Crossref, publisher pages, and Google Scholar report different citation counts. The report must be reproducible enough to audit later.

   Alternative considered: Store only the final rank. That would lose provenance and make later updates difficult.

4. Produce both Markdown and BibTeX outputs.

   Rationale: Markdown is reviewable and useful for selection notes; BibTeX is directly useful for the LaTeX manuscript.

   Alternative considered: BibTeX only. That would omit relevance notes, query provenance, exclusions, and ambiguity handling.

## Risks / Trade-offs

- Citation-count inconsistency across indexes → Record the metadata source and retrieval date, and rank within a single preferred index when possible.
- Foundational books or monographs may outrank papers for some metrics → Include them only when they are canonical for the metric and mark the item type clearly.
- Some metrics have sparse direct literature, especially executable section-size ratios → Broaden within a documented hierarchy: direct metric use, binary/executable analysis, then compression-adjacent structural metrics.
- Automated metadata may contain duplicates or incorrect BibTeX → Deduplicate by DOI/title and manually inspect the final top-10 list for each metric.
- Query terms can drift into unrelated domains → Keep per-metric search strings and exclusion notes in the report.

## Migration Plan

No runtime migration is required. Implementation should add research outputs under a dedicated project path, for example `research/metric-literature/`, and leave existing benchmark code unchanged.

Rollback is file removal of the generated research artifacts if the source-selection approach is rejected.

## Open Questions

- Which scholarly index should be treated as authoritative when citation counts disagree?
- Should canonical books count toward the 10 items, or should the list be papers only with books recorded separately?
- Should the final output include all 100 entries, or a shorter curated list after the top-10 fetch is complete?
