## Why

The extended metric implementation has automated tests, but there is no single
repeatable verification run that executes the public commands and compares their
observed CSV output directly with every relevant decision in the originating
design. A design-to-output verification is needed before the completed metric
change is archived or its data is used in evaluation results.

## What Changes

- Add a verification command that runs the single-file metric CLI, corpus metric
  command, and result joiner on controlled fixtures.
- Compare emitted headers, scalar formatting, undefined values, deterministic
  output, mathematical metric values, ELF section JSON, corpus row behavior, and
  merged CSV preservation with the `extend-evaluation-file-metrics` design.
- Compare the legacy seven-column prefix with captured `ent -t -b` reference rows
  without requiring ENT during the verification run.
- Produce a machine-readable result and a concise human-readable report that
  identifies each design assertion, its evidence, and its pass or failure state.
- Exit nonzero and retain diagnostic evidence when any comparison fails.

## Capabilities

### New Capabilities

- `file-metrics-design-verification`: Execute and report a reproducible comparison
  between file-metric command outputs and the metric design contract.

### Modified Capabilities

None.

## Impact

The change adds verification code, controlled fixtures, and report output for
`compute_file_metrics`, `compute_entropy`, and `join_results`. It does not change
the metric CSV schema or production metric formulas. Verification uses the Python
standard library and the existing captured ENT references; no new runtime
dependency is introduced.
