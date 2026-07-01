## Why

The dissertation text references multiple file-structure and randomness metrics, but the supporting literature is currently sparse and uneven. A repeatable research step is needed to identify highly cited foundational and applied papers for each metric so the final related-work and metric-definition sections are better grounded.

## What Changes

- Add a literature-discovery workflow that extracts the metrics named in the supplied compression-metrics context.
- For each metric, fetch and rank 10 highly cited research papers or books/articles where books are canonical sources for the metric.
- Capture bibliographic metadata, citation counts, source database, DOI/URL, and relevance notes for each selected item.
- Produce a citation-ready report and BibTeX file that can be used to revise the metric descriptions.
- Record ambiguity handling for overlapping metrics, for example byte entropy versus section-level entropy.

## Capabilities

### New Capabilities

- `metric-literature-discovery`: Defines how to identify metrics from the compression context and produce a ranked, citation-ready bibliography for each metric.

### Modified Capabilities

- None.

## Impact

- Adds research artifacts and optional bibliography files under the project workspace.
- May require access to scholarly metadata services such as Semantic Scholar, OpenAlex, Crossref, Google Scholar via manual/exported data, or publisher pages.
- Does not change compressor evaluation code or existing experiment outputs.
