## Context

`compute_entropy` currently discovers executable files, invokes `ent -t -b` once per file, and writes a CSV headed by `filename,0,File-bits,Entropy,Chi-square,Mean,Monte-Carlo-Pi,Serial-Correlation`. `join_results` treats every non-filename field as opaque data and can already carry appended columns into the merged output. The `-b` invocation is significant: the legacy entropy, chi-square, mean, and correlation fields describe the bit stream, whereas the proposed research metrics are defined over the 256-value byte alphabet. Reusing the legacy names for byte-level values would silently change existing analyses.

The evaluated executable corpus is Linux-oriented, so ELF is the required section format. Whole-file metrics must still work for arbitrary non-ELF files. The implementation must be deterministic, usable for one file from the command line, and practical for corpus automation.

## Goals / Non-Goals

**Goals:**

- Replace the `ent` process dependency with a Python implementation while preserving the existing columns, order, formatting, and bit-stream semantics.
- Add explicitly named byte-level, sequence-level, Lempel–Ziv, and ELF section-level fields without changing `join_results` behavior.
- Define the parsing variant, n-gram order, edge cases, and section serialization precisely enough for reproducible results and tests.
- Keep the single-file CLI composable with the existing `compute_entropy` corpus driver.

**Non-Goals:**

- Predict compression performance or calculate correlations in the metric collector.
- Change `lzbench`, existing compression measurements, filename normalization, or historical CSV files.
- Support PE or Mach-O sections in this change.
- Make the n-gram order or Lempel–Ziv parsing variant configurable; doing so would make rows from different runs semantically incomparable under one schema.

## Decisions

### Preserve legacy fields and append unambiguous byte metrics

The Python CLI will emit RFC 4180 CSV. Its default output will contain one header and one data row; `--no-header` will emit only the data row for corpus use. Standard output is reserved for CSV and diagnostics go to standard error.

The legacy prefix remains exactly:

`0,File-bits,Entropy,Chi-square,Mean,Monte-Carlo-Pi,Serial-Correlation`

The `0` data field remains the compatibility value `1`, `File-bits` remains `8N`, floating-point values retain six decimal places, and the remaining legacy values reproduce `ent -t -b` semantics. The following fixed fields are appended in this order:

`File-Size-Bytes,Byte-Entropy,Byte-Chi-Square,Byte-Monte-Carlo-Pi,Byte-Serial-Correlation,Conditional-Entropy,Bigram-Entropy,Lempel-Ziv-Complexity,Section-Format,Section-Size-Ratios,Section-Entropies`

This duplicates some statistical concepts deliberately. It keeps old plots and correlation scripts valid while making the byte-alphabet definitions explicit. Replacing the values in `Entropy` and related legacy fields with byte statistics was rejected because the unchanged header would conceal a semantic break.

### Use fixed, fully specified whole-file formulas

`File-Size-Bytes` is the number of input bytes. `Byte-Entropy` uses base-2 Shannon entropy over 256 empirical byte frequencies. `Byte-Chi-Square` compares the 256 byte counts with the expected count `N/256`. `Byte-Serial-Correlation` is the non-circular Pearson correlation of adjacent byte values from positions `(1..N-1)` and `(2..N)`, matching the stated metric definition rather than ENT's legacy calculation. `Byte-Monte-Carlo-Pi` uses ENT's conventional non-overlapping six-byte mapping into two 24-bit coordinates so that the mapping is deterministic and independently testable.

`Conditional-Entropy` is the first-order empirical entropy `H(X_i | X_{i-1})` over all `N-1` adjacent pairs. `Bigram-Entropy` is Shannon entropy over all overlapping two-byte sequences. The fixed order `n=2` is selected because it captures order beyond single bytes, requires at most 65,536 counters, matches the motivating example, and keeps every output row comparable.

Metrics with no observations or a zero denominator are serialized as `NaN`: byte distribution metrics for an empty file, Monte Carlo pi when no complete coordinate pair exists, adjacent metrics for fewer than two bytes, and serial correlation when either adjacent series has zero variance. Lempel–Ziv complexity and file size remain defined as zero for an empty file.

### Define Lempel–Ziv complexity as an LZ78 phrase count

`Lempel-Ziv-Complexity` will be the number of phrases from deterministic LZ78 incremental parsing. The parser tracks dictionary transitions `(prefix phrase, next byte)`, adds a phrase on the first missing transition, resets to the root, and counts a final non-empty residual phrase at end of input. The output is the raw phrase count described by the metric; normalization can be performed downstream using `File-Size-Bytes`. An unspecified “Lempel–Ziv complexity” implementation was rejected because LZ76, LZ77, and LZ78 can produce different values for the same bytes.

### Represent all ELF sections in two fixed CSV cells

Section discovery will support ELF32 and ELF64 inputs. Only sections backed by bytes in the file participate; the null section and `SHT_NOBITS` sections are omitted because they do not contribute bytes to whole-file compression. Each section is identified as `<section-index>:<section-name>` so duplicate or empty names cannot overwrite one another.

`Section-Size-Ratios` is a compact JSON object mapping each section identifier to `section_file_size / N`. `Section-Entropies` is a parallel JSON object containing byte entropy for each non-empty file-backed section. Object keys are emitted in section-index order and numbers use the same deterministic precision as scalar metrics. JSON-in-CSV preserves every individual section without creating a variable number of CSV columns. `Section-Format` is `ELF` when sections were parsed and `none` for a valid non-ELF input; both JSON cells are `{}` for non-ELF files. A malformed file carrying the ELF magic is an error rather than silently producing missing section metrics.

Dynamic per-section columns were rejected because different binaries would produce incompatible headers. Reducing sections to only `.text`, `.data`, and `.rodata` was rejected because it would discard debug, symbol, runtime-specific, and duplicate-name sections explicitly covered by the requested metrics.

### Implement formulas in Python and isolate executable parsing

There is no known single, widely used Python implementation that computes this entire metric set with the required definitions and CSV compatibility. ENT covers only the legacy randomness statistics; SciPy/pyitlib cover parts of the statistical calculations; AntroPy exposes an LZ complexity implementation with its own definition; and pyelftools or LIEF can provide executable sections but not the whole metric set. Combining those packages would still require custom semantic and output glue.

The proposed implementation therefore owns the metric formulas in one standard-library Python module. Executable parsing is isolated behind a small section-reader function. For ELF parsing, a mature partial implementation such as `pyelftools` is preferable to maintaining a binary parser, but it is not an all-metrics solution; if selected, it will be declared as the metric script's only runtime dependency. A minimal standard-library ELF reader remains the dependency-free alternative. This distinction is documented so the dependency decision can be made before implementation without changing the public schema or formulas.

### Retain the corpus entry point and merge contract

`compute_entropy` remains the corpus-level command for backward compatibility, but it is converted to a Python driver that calls the same metric module used by the single-file CLI rather than invoking `ent`. It writes `filename` followed by the exact metric header, processes the already sorted executable list, and fails the run if any file cannot be measured. CSV composition will use Python's CSV handling rather than shell string concatenation so the JSON section cells are quoted correctly.

`join_results` requires no schema-specific change: it retains all fields after the filename and appends them before the lzbench fields. Tests will nevertheless lock down the merged header and values because the new JSON cells contain commas and quotes.

### Bound work to a linear pass where possible

Byte, pair, bigram, legacy, and Monte Carlo counters can be updated during a chunked sequential read. LZ78 parsing also proceeds incrementally, although its dictionary grows with the phrase count. ELF section entropy may require an additional bounded read of section ranges. Runtime is therefore linear in input size; memory is bounded by fixed statistical counters plus the LZ78 dictionary and section metadata.

## Risks / Trade-offs

- [A Python implementation may not reproduce legacy ENT rounding or edge cases exactly] → Capture representative ENT outputs as fixtures, compare all legacy columns at their six-decimal serialization boundary, and document any unavoidable platform-independent correction before replacing the command.
- [Raw LZ78 phrase dictionaries can consume substantial memory on large, high-complexity files] → Use integer phrase identifiers and byte transitions, test a large high-entropy fixture, and fail with a clear diagnostic rather than emitting a partial row.
- [JSON section fields are not immediately numeric in pandas] → Keep strict, deterministic JSON so analysis code can expand selected section keys without schema drift; scalar whole-file metrics remain ordinary numeric columns.
- [ELF-only section parsing leaves PE and Mach-O section metrics empty] → Mark format explicitly as `none` and keep the parser boundary extensible for later formats.
- [An added ELF library introduces environment setup] → Keep section parsing isolated and document the dependency-free alternative before implementation; pin whichever approach is selected in the test environment.

## Migration Plan

1. Implement and test the single-file Python CLI without changing the corpus driver.
2. Validate legacy columns against stored ENT fixtures and validate all new metrics against analytically tractable byte sequences and ELF fixtures.
3. Switch `compute_entropy` to the Python CLI and run a small corpus end to end through `join_results`.
4. Preserve existing CSV files; only newly generated files receive the appended columns.
5. Roll back by restoring the `ent` invocation in `compute_entropy`; no stored-data migration is required.

## Open Questions

- Choose the ELF section reader before implementation: declare the mature, focused `pyelftools` dependency (recommended for parser correctness) or implement and maintain the limited ELF32/ELF64 reader in the standard library. No known all-in-one implementation can replace the custom metric layer.
