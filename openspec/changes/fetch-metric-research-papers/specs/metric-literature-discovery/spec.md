## ADDED Requirements

### Requirement: Metric extraction from supplied context
The system SHALL identify the metric families explicitly described in the supplied compression-metrics context before searching for literature.

#### Scenario: Extract all named metric families
- **WHEN** the supplied context is processed
- **THEN** the system identifies file size, byte entropy, chi-square byte-frequency deviation, Monte Carlo pi estimate, serial correlation coefficient, conditional entropy, n-gram entropy, Lempel-Ziv complexity, section-size ratios, and section-level entropy as search targets

#### Scenario: Preserve overlapping metric distinctions
- **WHEN** two metrics share terminology such as entropy
- **THEN** the system records whether the search target is whole-file byte entropy, conditional entropy, n-gram entropy, or section-level entropy

### Requirement: Literature search and ranking
The system SHALL fetch candidate scholarly sources for each metric family and select 10 highly cited relevant sources per metric.

#### Scenario: Rank relevant candidates
- **WHEN** candidate sources are retrieved for a metric
- **THEN** the system ranks candidates by citation count while excluding sources that are not materially relevant to the metric, its measurement, its theory, or its use in compression, randomness testing, executable analysis, or binary analysis

#### Scenario: Handle sparse direct literature
- **WHEN** fewer than 10 directly relevant sources are available for a metric
- **THEN** the system broadens the search using a documented hierarchy and records the reason each broadened source is included

### Requirement: Metadata provenance
The system SHALL record enough metadata for each selected source to audit and update the bibliography.

#### Scenario: Capture bibliographic metadata
- **WHEN** a source is selected
- **THEN** the system records title, authors, year, venue or publisher, DOI or stable URL when available, item type, citation count, citation-count source, retrieval date, and metric relevance note

#### Scenario: Deduplicate repeated sources
- **WHEN** the same source appears from multiple queries or scholarly indexes
- **THEN** the system deduplicates the source by DOI when available and otherwise by normalized title and author set

### Requirement: Citation-ready outputs
The system SHALL produce reviewable and citation-ready outputs for the selected literature.

#### Scenario: Generate ranked report
- **WHEN** literature discovery is complete
- **THEN** the system writes a Markdown report grouping selected sources by metric, preserving rank order, metadata provenance, relevance notes, search queries, and any exclusions or ambiguities

#### Scenario: Generate BibTeX bibliography
- **WHEN** literature discovery is complete
- **THEN** the system writes a BibTeX file containing entries for the selected sources with stable citation keys suitable for use in the LaTeX manuscript

### Requirement: Source quality constraints
The system SHALL prefer scholarly and primary sources over generic web summaries.

#### Scenario: Exclude non-scholarly sources
- **WHEN** search results include blogs, tutorials, marketing pages, encyclopedia pages, or uncited summaries
- **THEN** the system excludes them from the top-10 selected sources unless the report explicitly marks them as non-selected background material

#### Scenario: Include canonical non-paper sources only when justified
- **WHEN** a canonical book or monograph is more appropriate than a paper for a metric
- **THEN** the system may include it in the ranked list only if the report marks the item type and explains why it is canonical for that metric
