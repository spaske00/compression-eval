## 1. Research Setup

- [x] 1.1 Create a dedicated output directory for the literature review artifacts.
- [x] 1.2 Record the final metric-family list and search aliases for each metric.
- [x] 1.3 Select the citation-count source priority order, including fallback behavior when citation counts are unavailable.
- [x] 1.4 Define the report schema for selected entries, rejected candidates, source provenance, and ambiguity notes.

## 2. Literature Discovery

- [ ] 2.1 Search scholarly metadata sources for file size and compression-overhead literature.
- [ ] 2.2 Search scholarly metadata sources for byte entropy and information-theory literature.
- [ ] 2.3 Search scholarly metadata sources for chi-square frequency-deviation and randomness-testing literature.
- [ ] 2.4 Search scholarly metadata sources for Monte Carlo pi randomness-estimation literature.
- [ ] 2.5 Search scholarly metadata sources for serial correlation and dependence-testing literature.
- [ ] 2.6 Search scholarly metadata sources for conditional entropy and sequence-predictability literature.
- [ ] 2.7 Search scholarly metadata sources for n-gram entropy and sequence-modeling literature.
- [ ] 2.8 Search scholarly metadata sources for Lempel-Ziv complexity and dictionary-compression literature.
- [ ] 2.9 Search scholarly metadata sources for executable section-size ratio and binary-layout literature.
- [ ] 2.10 Search scholarly metadata sources for section-level entropy and executable packing/malware/binary-analysis literature.

## 3. Selection and Metadata Cleanup

- [ ] 3.1 Deduplicate candidate sources across indexes and metric queries by DOI or normalized title.
- [ ] 3.2 Rank candidates for each metric by citation count after relevance filtering.
- [ ] 3.3 Select 10 sources per metric and record relevance notes for each selected source.
- [ ] 3.4 Record exclusions for high-citation candidates rejected as off-topic or low-quality.
- [ ] 3.5 Mark canonical books or monographs separately when they are included in a top-10 list.

## 4. Outputs

- [ ] 4.1 Write the Markdown report with one ranked section per metric.
- [ ] 4.2 Generate a BibTeX file for all selected sources using stable citation keys.
- [ ] 4.3 Add a compact summary table mapping metrics to the strongest citation candidates.
- [ ] 4.4 Verify that each metric has exactly 10 selected sources or a documented exception.

## 5. Validation

- [ ] 5.1 Validate that every selected entry includes title, authors, year, venue or publisher, citation count, citation source, retrieval date, DOI or stable URL when available, and relevance note.
- [ ] 5.2 Spot-check DOI/URL availability and BibTeX syntax.
- [ ] 5.3 Review the report for ambiguous metric interpretation and document any unresolved decisions.
