## 1. Verification Contract and Fixtures

- [ ] 1.1 Define the stable assertion identifier inventory and map every identifier to the exact `extend-evaluation-file-metrics` design section, expected invariant, and required evidence.
- [ ] 1.2 Add deterministic builders for empty, short, constant, alternating, uniform-frequency, random-like, non-ELF, ELF32, ELF64, duplicate-section-name, empty-section, `SHT_NOBITS`, and malformed-ELF fixtures.
- [ ] 1.3 Implement verifier-local metric and ELF expectations from the design without importing production metric or serialization functions.
- [ ] 1.4 Load and validate every committed ENT reference row as a legacy-prefix oracle without invoking ENT.

## 2. Black-Box Runner and Reports

- [ ] 2.1 Implement a subprocess runner for `compute_file_metrics`, `compute_entropy`, and `join_results` that captures commands, exit status, standard streams, and generated files under a requested output directory.
- [ ] 2.2 Implement the assertion result model with stable identifier, design source, description, expected value or invariant, observed value, pass/fail/skip status, reason, and normalized evidence paths.
- [ ] 2.3 Make independent checks continue after a command failure while recording dependent checks as failed or skipped with explicit reasons.
- [ ] 2.4 Add the verification CLI with `--output-dir`, deterministic fixture/evidence layout, zero-on-complete-pass exit behavior, and nonzero failure behavior.
- [ ] 2.5 Write authoritative `report.json` and reviewer-facing `report.md` outputs with summary counts, failures before passing details, and all required assertion identifiers.

## 3. Design-to-Output Comparisons

- [ ] 3.1 Verify default and `--no-header` single-file CSV shape, exact column order, row width, integer and six-decimal formatting, `NaN`, clean successful streams, deterministic repeated output, and rejected-input behavior.
- [ ] 3.2 Compare all seven legacy fields for every captured ENT fixture at exact serialized precision.
- [ ] 3.3 Compare byte-distribution, Monte Carlo, adjacent correlation, conditional entropy, overlapping bigram entropy, and LZ78 outputs with independent expectations for all tractable fixtures and edge cases.
- [ ] 3.4 Compare ELF32/ELF64 section format, ordered keys, ratios, entropies, duplicate-name preservation, exclusions, non-ELF output, and malformed-ELF failure with independent fixture metadata.
- [ ] 3.5 Verify corpus `bin/` selection, executable regular-file filtering, sorted filenames, extended schema, progress and completion messages, and absence of a published CSV on per-file failure.
- [ ] 3.6 Verify `join_results` header order and exact preservation of quoted JSON section cells through CSV read, merge, and write.

## 4. Verification of the Verifier

- [ ] 4.1 Add tests for independent oracle functions, assertion inventory completeness, normalized evidence, report serialization, and the prohibition on production metric imports.
- [ ] 4.2 Add end-to-end tests proving a conforming checkout produces complete passing reports and a controlled output mismatch produces retained evidence, failed reports, and a nonzero exit status.
- [ ] 4.3 Run the verifier against the current repository, inspect the generated CSV and JSON evidence, and reconcile every failure with either the implementation or the source design before marking the run complete.
- [ ] 4.4 Document the verification command, output directory contents, assertion scope, dependency-free setup, report interpretation, and failure investigation workflow.
