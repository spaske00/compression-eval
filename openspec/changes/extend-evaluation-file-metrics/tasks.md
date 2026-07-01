## 1. Metric Contract and Fixtures

- [x] 1.1 Select and document the ELF reader approach from the design (`pyelftools` or the limited standard-library reader), and declare any chosen runtime dependency.
- [x] 1.2 Add representative byte-sequence, empty/short-file, valid ELF32/ELF64, duplicate-section-name, non-ELF, and malformed-ELF fixtures with their expected metric properties.
- [x] 1.3 Capture stable `ent -t -b` reference rows for representative fixtures so the legacy seven-column prefix can be verified without requiring ENT at test time.

## 2. Single-File Metric Implementation

- [x] 2.1 Create the reusable Python metric module and single-file CLI with fixed column order, RFC 4180 output, `--no-header`, six-decimal scalar formatting, `NaN` handling, and clean error reporting.
- [x] 2.2 Implement the ENT-compatible bit-stream statistics and verify the compatibility marker, bit count, entropy, chi-square, mean, Monte Carlo pi, and serial correlation against the stored reference rows.
- [x] 2.3 Implement file byte size, byte entropy, byte chi-square, byte Monte Carlo pi, and adjacent-byte Pearson correlation with the specified empty, incomplete-group, and zero-variance behavior.
- [x] 2.4 Implement first-order conditional entropy and overlapping bigram entropy with fixed order two and bounded pair counters.
- [x] 2.5 Implement deterministic LZ78 phrase counting, including the final residual phrase and memory-conscious integer dictionary transitions.

## 3. Executable Section Metrics

- [x] 3.1 Implement ELF32/ELF64 section discovery with bounds validation, duplicate-name-safe identifiers, and exclusion of the null and `SHT_NOBITS` sections.
- [x] 3.2 Compute section size ratios and byte entropies, then serialize the parallel maps as deterministic strict JSON inside correctly quoted CSV cells.
- [x] 3.3 Verify valid ELF, valid non-ELF, malformed ELF, empty section, and duplicate section-name behavior against the section fixtures.

## 4. Corpus Pipeline Integration

- [x] 4.1 Convert `compute_entropy` into a Python corpus driver that preserves directory validation, `bin/` selection, executable filtering, sorted order, output naming, progress messages, and the leading `filename` field while using the shared metric module.
- [x] 4.2 Add an end-to-end corpus test proving every output row has the fixed extended schema and that one per-file failure makes the command fail without reporting a successful complete result.
- [x] 4.3 Add `join_results` regression coverage proving all new columns remain ordered and JSON section cells survive CSV read, merge, and write unchanged.

## 5. Verification and Documentation

- [x] 5.1 Run unit tests for analytically tractable constant, alternating, uniform-frequency, random-like, empty, and one-byte inputs, including all undefined-value cases.
- [x] 5.2 Run the metric CLI repeatedly on the same fixtures and verify byte-for-byte deterministic CSV output and no diagnostics on standard output.
- [x] 5.3 Run the extended metric and merge pipeline on a small executable corpus, inspect the resulting header and section JSON, and compare all legacy columns with ENT reference values.
- [x] 5.4 Document the single-file and corpus commands, exact appended columns and units, fixed bigram/LZ78 definitions, ELF-only section scope, undefined-value representation, and selected dependency setup.
