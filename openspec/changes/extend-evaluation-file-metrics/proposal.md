## Why

The evaluation pipeline currently delegates a small set of whole-file statistics to the external `ent` utility, leaving sequence-aware and executable-section metrics unavailable and making the metric stage depend on a separately installed system program. A single Python metric implementation is needed so every evaluated file produces a reproducible, schema-compatible feature row for subsequent compression analysis.

## What Changes

- Add a Python CLI that accepts one input file and computes file size, byte entropy, byte-frequency chi-square, byte mean, Monte Carlo pi, serial correlation, first-order conditional entropy, fixed-order n-gram entropy, Lempel–Ziv complexity, executable section-size ratios, and section-level entropy.
- Define deterministic formulas, defaults, numeric formatting, empty/short-file behavior, and non-executable/unsupported-format behavior for every metric.
- Replace `ent` invocations in the corpus metric workflow with the Python CLI while retaining the existing CSV columns and appending columns for the newly supported metrics.
- Preserve filename normalization and compatibility with the existing `join_results` merge path and final evaluation schema.
- Add tests against analytically simple byte sequences, representative executable formats, malformed inputs, and an `ent` compatibility fixture for the legacy columns.
- Document whether a mature implementation covers the complete metric set and the dependency trade-offs for reusable statistical and executable-parsing libraries.

## Capabilities

### New Capabilities

- `file-metrics-evaluation`: Compute all required whole-file, sequence, Lempel–Ziv, and executable-section metrics from one file and integrate the results into the existing evaluation CSV schema.

### Modified Capabilities

None.

## Impact

The change replaces the `ent` runtime dependency in `compute_entropy`, adds a Python metric module/CLI and its tests, and extends the metric and merged CSV schemas with additional columns. Existing legacy metric column names and merge behavior remain compatible; downstream consumers that reject unknown columns may need to allow the appended fields. Executable-section metrics may introduce a focused parser dependency unless the implementation uses standard-library parsing for the supported formats.
