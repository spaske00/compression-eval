## ADDED Requirements

### Requirement: Execute the public metric workflow
The verifier SHALL run `compute_file_metrics`, `compute_entropy`, and
`join_results` through their public command-line interfaces in controlled working
directories and SHALL derive observations only from process results and emitted
files.

#### Scenario: Run all public commands
- **WHEN** the verifier runs against a conforming repository checkout
- **THEN** its evidence contains an invocation result for the single-file command, corpus command, and merge command

#### Scenario: Avoid a production-code oracle
- **WHEN** the verifier calculates an expected metric or output invariant
- **THEN** it does not call the production metric or serialization functions to obtain that expectation

### Requirement: Compare the fixed CSV contract with the design
The verifier SHALL compare the exact legacy and appended column order, row width,
integer fields, six-decimal scalar serialization, `NaN` representation, default
header behavior, `--no-header` behavior, successful standard-error behavior, and
failed-input behavior with the originating design.

#### Scenario: Verify a successful single-file row
- **WHEN** `compute_file_metrics` measures a controlled readable fixture
- **THEN** the verifier confirms the exact header, one same-width row, fixed field formatting, empty standard error, and zero exit status

#### Scenario: Verify no-header mode
- **WHEN** `compute_file_metrics --no-header` measures a controlled readable fixture
- **THEN** the verifier confirms that standard output contains exactly one data row and no header

#### Scenario: Verify rejected input
- **WHEN** the single-file command receives a missing file or malformed ELF fixture
- **THEN** the verifier confirms a nonzero exit status, a standard-error diagnostic, and no partial CSV row on standard output

### Requirement: Verify legacy ENT compatibility
The verifier SHALL compare all seven legacy prefix fields with the committed
`ent -t -b` reference rows at their serialized precision without requiring an ENT
executable during the verification run.

#### Scenario: Compare every captured ENT row
- **WHEN** the verifier measures each byte sequence represented in the ENT reference fixture
- **THEN** `0`, `File-bits`, `Entropy`, `Chi-square`, `Mean`, `Monte-Carlo-Pi`, and `Serial-Correlation` exactly match the corresponding stored values

### Requirement: Verify whole-file and sequence metric definitions
The verifier SHALL compare file size, byte entropy, byte chi-square, byte Monte
Carlo pi, adjacent-byte Pearson correlation, first-order conditional entropy,
overlapping bigram entropy, and the fixed LZ78 phrase count with independent
expectations derived from the design.

#### Scenario: Verify analytically tractable sequences
- **WHEN** the verifier measures empty, one-byte, constant, alternating, uniform-frequency, and deterministic random-like fixtures
- **THEN** every defined metric matches its independently formatted expectation and every undefined metric is `NaN`

#### Scenario: Verify incomplete Monte Carlo input
- **WHEN** two fixtures share the same complete six-byte groups and differ only in a final incomplete group
- **THEN** the verifier confirms that their byte Monte Carlo pi values are equal

#### Scenario: Verify deterministic LZ78 parsing
- **WHEN** the verifier measures fixtures with known LZ78 phrase boundaries and a final residual phrase
- **THEN** `Lempel-Ziv-Complexity` equals the independently counted raw phrase total

### Requirement: Verify ELF section output
The verifier SHALL compare ELF32 and ELF64 section output with independently
parsed fixture metadata, including section identifiers, deterministic key order,
size ratios, byte entropies, exclusions, duplicate names, non-ELF behavior, and
malformed-ELF behavior.

#### Scenario: Verify valid ELF section maps
- **WHEN** the verifier measures controlled ELF32 and ELF64 fixtures
- **THEN** `Section-Format` is `ELF`, both JSON objects have matching ordered keys, and every serialized ratio and entropy matches the fixture definition

#### Scenario: Verify duplicate and excluded sections
- **WHEN** an ELF fixture contains duplicate names, an empty file-backed section, a null section, and a `SHT_NOBITS` section
- **THEN** distinct section indices preserve both duplicate names and all excluded sections are absent from both JSON objects

#### Scenario: Verify non-ELF section fields
- **WHEN** the verifier measures a valid non-ELF fixture
- **THEN** `Section-Format` is `none` and both section JSON cells are `{}`

### Requirement: Verify corpus and merge integration
The verifier SHALL confirm executable discovery and sorted corpus rows, the fixed
extended corpus schema, atomic failure behavior, merge column order, and exact
preservation of section JSON cells through CSV read, join, and write.

#### Scenario: Verify a successful corpus run
- **WHEN** `compute_entropy` processes a controlled directory with a `bin/` subtree containing executable and non-executable fixtures
- **THEN** the verifier confirms one sorted same-width row per executable regular file, the leading `filename` field, progress messages, and a successful completion message

#### Scenario: Verify atomic corpus failure
- **WHEN** one executable fixture carries malformed ELF metadata
- **THEN** the verifier confirms a nonzero exit status, no published corpus CSV, a diagnostic, and no successful completion message

#### Scenario: Verify merged output
- **WHEN** `join_results` merges controlled metric and lzbench CSV files whose section cells contain JSON commas and quotes
- **THEN** the verifier confirms the designed header order and byte-identical section cell values in the parsed merged row

### Requirement: Verify deterministic output
The verifier SHALL execute the single-file command repeatedly on the same fixture
and compare the complete CSV output byte for byte.

#### Scenario: Repeat a metric run
- **WHEN** the same fixture is measured twice without repository changes
- **THEN** both standard-output byte sequences are identical and both standard-error streams are empty

### Requirement: Report traceable pass and failure evidence
The verifier SHALL write `report.json` and `report.md` plus raw command evidence to
the requested output directory. Each assertion SHALL have a stable identifier,
design source, expected value or invariant, observed value, status, and relevant
evidence paths.

#### Scenario: Report a conforming implementation
- **WHEN** every comparison passes
- **THEN** both reports record zero failures, every required assertion identifier is present, and the verifier exits zero

#### Scenario: Report a mismatch
- **WHEN** any observed output differs from its design expectation
- **THEN** both reports identify the failed assertion and retained evidence, and the verifier exits nonzero

#### Scenario: Continue independent checks after failure
- **WHEN** one invoked command fails before producing expected output
- **THEN** dependent assertions are recorded as failed or skipped with reasons while independent assertions continue to run
