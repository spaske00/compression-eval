## Context

`extend-evaluation-file-metrics` introduced `compute_file_metrics`, converted
`compute_entropy` to a Python corpus driver, and retained `join_results` as the
merge command. Its design fixes the column order, formulas, precision, undefined
values, LZ78 variant, ELF section rules, corpus behavior, and merge contract.
Focused tests cover these components, but they do not produce one reviewable
artifact that maps observed public-command output back to the design decisions.

The verifier must run without ENT or third-party Python packages. It must not use
the production metric functions as its expected-value oracle, because doing so
would confirm that the implementation agrees with itself rather than with the
design.

## Goals / Non-Goals

**Goals:**

- Exercise `compute_file_metrics`, `compute_entropy`, and `join_results` through
  their public command-line interfaces.
- Map every relevant design decision to a stable verification assertion and
  retained evidence.
- Compare serialized values at the specified six-decimal boundary and validate
  structured CSV and JSON fields after parsing.
- Produce machine-readable and human-readable reports suitable for reviewing the
  completed metric change before archival.
- Return a reliable process status for local and automated use.

**Non-Goals:**

- Change metric formulas, column names, corpus discovery, or merge behavior.
- Benchmark performance or run the full executable corpus.
- Require ENT, `readelf`, `pyelftools`, or another external oracle at verification
  time.
- Treat existing unit-test success as a substitute for running the public commands.

## Decisions

### Verify public commands as black boxes

The verifier will invoke each repository command in a subprocess from a controlled
working directory and parse only its exit status, standard streams, and output
files. It will not import `compute_metrics`, `compute_file`, `serialize_record`,
or corpus-driver helpers. This catches entry-point, CSV composition, path, and
diagnostic regressions that direct function tests cannot expose.

Calling production functions directly was rejected because it would bypass the
interfaces named in the design and could share the defect being checked.

### Use a stable assertion catalog tied to design sections

Each check will have a stable identifier, a design source, a description, an
expected value or invariant, an observed value, a status, and evidence paths.
The catalog will cover:

- default and `--no-header` single-file CSV behavior;
- the exact legacy and appended column order;
- six-decimal scalar formatting and `NaN` cases;
- captured ENT legacy rows;
- file size, byte distribution, Monte Carlo, adjacent correlation, conditional
  entropy, overlapping bigram entropy, and fixed LZ78 phrase counts;
- ELF32/ELF64 section keys, ratios, entropies, duplicate names, empty sections,
  `SHT_NOBITS`, non-ELF input, and malformed ELF failure;
- corpus discovery, `bin/` selection, executable filtering, sorting, leading
  filename, atomic failure, and progress/success messages;
- merged column order and byte-preservation of JSON section cells.

Stable identifiers make missing coverage visible when the source design changes.
A narrative-only checklist was rejected because it cannot detect skipped checks
or support automated failure handling.

### Build controlled fixtures and independent expected values

The verifier will create byte and synthetic ELF fixtures in its output workspace.
Simple sequences will have analytically derived expectations. More involved
expected values will be calculated by small verifier-local oracle functions that
implement the design equations independently and never call production metric
code. The legacy prefix will be compared with the committed ENT reference rows.

Fixture generation will be deterministic. The set includes empty, one-byte,
constant, alternating, uniform-frequency, deterministic random-like, non-ELF,
valid ELF32, valid ELF64, duplicate-name ELF, and malformed ELF inputs.

Reusing the existing output row as expected data was rejected because it would
make the comparison tautological. Requiring live ENT was rejected because the
metric change explicitly removes that runtime dependency.

### Compare at both serialization and semantic boundaries

CSV headers, row widths, integer fields, floating-point strings, and captured ENT
fields will be compared exactly. Section cells will first be checked as exact CSV
cell values where preservation matters, then parsed as strict JSON for key order,
ratio, and entropy checks. Floating-point oracles will be formatted to six decimal
places before comparison, matching the design's public contract.

The verifier will run the same single-file command twice and compare its complete
standard output byte for byte. Diagnostics must be absent from successful runs.

### Retain reports and raw evidence

The command will accept `--output-dir`; the directory will contain `report.json`,
`report.md`, generated fixtures, captured standard streams, and produced CSV
files. `report.json` is authoritative and records summary counts plus every
assertion. `report.md` presents the same results for review and names failures
before passing details.

The verifier exits zero only when every assertion passes. It exits nonzero after
writing both reports when a comparison or invoked command fails. Unexpected
verifier errors also exit nonzero and retain available diagnostics.

## Risks / Trade-offs

- [Independent oracle code can repeat a misunderstanding of the design] → Prefer
  analytically tractable fixtures and captured external ENT rows; keep oracle
  functions small and cite the exact design decision for each assertion.
- [A design update can leave the assertion catalog incomplete] → Give assertions
  stable identifiers and add a coverage test that locks the required identifier
  set to the reviewed design areas.
- [Temporary paths and platform details can make reports noisy] → Normalize paths
  relative to the requested output directory and exclude timestamps from compared
  evidence.
- [Corpus output names include timestamps] → Discover the single generated file by
  its fixed prefix/suffix pattern and record its normalized evidence name.
- [One early command failure can hide later mismatches] → Record the failure, skip
  only checks that depend on its missing output, and continue independent checks.

## Migration Plan

1. Add the verifier and its fixture/oracle helpers without changing production
   commands.
2. Run it in a temporary output directory and review all design assertion results.
3. Add an automated smoke test for report structure, success, and deliberate
   mismatch failure.
4. Document the verification command and report layout.

Rollback removes the verifier, its tests, and documentation; production metric
behavior and stored evaluation CSV files are unaffected.

## Open Questions

None.
