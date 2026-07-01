## ADDED Requirements

### Requirement: Compute metrics for one input file
The metric CLI SHALL accept one readable file path, compute a complete metric record for that file, and write an RFC 4180 CSV header followed by exactly one CSV data row to standard output. It SHALL support a `--no-header` mode that writes exactly one data row, and it SHALL reserve standard error for diagnostics.

#### Scenario: Measure one file with a header
- **WHEN** the user invokes the metric CLI with one readable file and no output-mode option
- **THEN** standard output contains the fixed metric header and one same-width data row

#### Scenario: Measure one file without a header
- **WHEN** the user invokes the metric CLI with one readable file and `--no-header`
- **THEN** standard output contains only one metric data row in the fixed column order

#### Scenario: Reject an unreadable input
- **WHEN** the input path is missing, is not a regular file, or cannot be read completely
- **THEN** the CLI exits nonzero, reports the problem on standard error, and emits no partial CSV data row

### Requirement: Preserve the legacy ENT-compatible schema prefix
The metric CLI SHALL emit `0`, `File-bits`, `Entropy`, `Chi-square`, `Mean`, `Monte-Carlo-Pi`, and `Serial-Correlation` as its first seven columns in that exact order and SHALL reproduce the six-decimal values and bit-stream semantics of the existing `ent -t -b` workflow for supported inputs.

#### Scenario: Preserve the compatibility marker and size
- **WHEN** the CLI measures an input containing `N` bytes
- **THEN** the `0` field is `1` and `File-bits` is `8N`

#### Scenario: Match a legacy reference fixture
- **WHEN** the CLI measures a fixture with captured `ent -t -b` output
- **THEN** every legacy field matches the captured serialized value in the corresponding column

### Requirement: Compute byte-distribution metrics
The metric CLI SHALL append `File-Size-Bytes`, `Byte-Entropy`, `Byte-Chi-Square`, `Byte-Monte-Carlo-Pi`, and `Byte-Serial-Correlation`, using the entire file as a byte sequence and the metric definitions fixed in the design.

#### Scenario: Measure a constant byte sequence
- **WHEN** the input is a non-empty sequence containing one repeated byte value
- **THEN** `File-Size-Bytes` equals the sequence length, `Byte-Entropy` is zero, `Byte-Chi-Square` reflects deviation from the 256-value uniform distribution, and `Byte-Serial-Correlation` is `NaN`

#### Scenario: Measure Monte Carlo coordinates
- **WHEN** the input contains one or more complete six-byte coordinate groups
- **THEN** `Byte-Monte-Carlo-Pi` is computed from all complete groups using the defined 24-bit coordinate mapping and ignores only the final incomplete group

#### Scenario: Measure an empty file
- **WHEN** the input file contains zero bytes
- **THEN** `File-Size-Bytes` and `File-bits` are zero and byte distribution metrics without observations are serialized as `NaN`

### Requirement: Compute sequence-dependence metrics
The metric CLI SHALL append `Conditional-Entropy` from all adjacent byte pairs and `Bigram-Entropy` from all overlapping two-byte sequences, using base-2 logarithms and deterministic six-decimal serialization.

#### Scenario: Measure a deterministic alternating sequence
- **WHEN** each observed byte in the input uniquely determines its successor
- **THEN** `Conditional-Entropy` is zero

#### Scenario: Include overlapping bigrams
- **WHEN** the input contains `N` bytes with `N` at least two
- **THEN** `Bigram-Entropy` is calculated from exactly `N-1` overlapping bigram observations

#### Scenario: Handle insufficient adjacent data
- **WHEN** the input contains fewer than two bytes
- **THEN** `Conditional-Entropy`, `Bigram-Entropy`, and `Byte-Serial-Correlation` are serialized as `NaN`

### Requirement: Compute deterministic Lempel–Ziv complexity
The metric CLI SHALL append `Lempel-Ziv-Complexity` as the raw phrase count produced by the LZ78 parsing variant fixed in the design, including a final non-empty residual phrase.

#### Scenario: Parse repeated input deterministically
- **WHEN** the same repeated-pattern file is measured more than once
- **THEN** every run emits the same integer Lempel–Ziv phrase count

#### Scenario: Parse an empty input
- **WHEN** the input file is empty
- **THEN** `Lempel-Ziv-Complexity` is zero

### Requirement: Compute ELF section metrics
The metric CLI SHALL append `Section-Format`, `Section-Size-Ratios`, and `Section-Entropies`. For a valid ELF32 or ELF64 input, it SHALL represent every non-empty file-backed section in deterministic JSON objects keyed by section index and name, compute each size ratio relative to whole-file byte size, and compute each section's byte entropy.

#### Scenario: Measure a valid ELF file
- **WHEN** the input is a valid ELF file with file-backed sections
- **THEN** `Section-Format` is `ELF`, both section fields contain valid JSON objects with matching section keys, and each value follows the corresponding size-ratio or entropy definition

#### Scenario: Preserve duplicate section names
- **WHEN** an ELF input contains two file-backed sections with the same name
- **THEN** their distinct section indices produce distinct keys and neither section overwrites the other

#### Scenario: Ignore non-file-backed sections
- **WHEN** an ELF input contains a null or `SHT_NOBITS` section
- **THEN** that section is absent from both section JSON objects

#### Scenario: Measure a valid non-ELF file
- **WHEN** the input does not carry the ELF magic
- **THEN** all whole-file metrics are computed, `Section-Format` is `none`, and both section JSON objects are empty

#### Scenario: Reject a malformed ELF file
- **WHEN** the input carries the ELF magic but has invalid or out-of-bounds section metadata
- **THEN** the CLI exits nonzero with a diagnostic and emits no partial CSV data row

### Requirement: Integrate metrics into corpus evaluation
The corpus metric command SHALL retain its current directory discovery, executable filtering, sorted file order, output naming, and leading `filename` column while replacing all `ent` invocations with the Python metric CLI and appending the new metric columns to every row.

#### Scenario: Evaluate an executable corpus
- **WHEN** the corpus metric command is run on a directory containing executable files
- **THEN** it writes one same-width CSV row per discovered file in sorted order with the legacy columns followed by every new metric column

#### Scenario: Stop on a per-file metric failure
- **WHEN** any discovered file cannot produce a complete metric row
- **THEN** the corpus command exits nonzero and does not present the output as a successful complete evaluation

### Requirement: Preserve merged evaluation compatibility
The result-joining workflow SHALL merge an extended metric CSV with lzbench data by normalized filename, retain every metric column in its input order, and produce valid CSV when section cells contain JSON commas and quotes.

#### Scenario: Join extended metric results
- **WHEN** an extended metric CSV and matching lzbench CSV are passed to `join_results`
- **THEN** the merged header contains `Filename`, all legacy and new metric columns, and all lzbench columns in their established order

#### Scenario: Preserve section JSON through a join
- **WHEN** section metric cells contain valid non-empty JSON objects
- **THEN** reading the merged CSV yields section cell values identical to the metric input values
