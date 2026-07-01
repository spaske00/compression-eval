# Metric fixtures

`ent_bit_references.csv` contains rows captured from Debian ENT 1.2 with
`ent -t -b`. The `hex` field is the complete input, so tests recreate each byte
sequence without depending on ENT at runtime. The rows cover a one-byte constant,
alternating bytes, text, and mixed low/high byte values.

`tests/elf_fixtures.py` builds bounded synthetic ELF32 and ELF64 files. Their
section tables contain a string table, a four-byte `.text` section, an empty
file-backed section, and a `SHT_NOBITS` section. The duplicate-name variant adds
two distinct `.dup` sections. `malformed_elf()` carries ELF magic but ends before
the file header. The tests state the expected section keys, ratios, entropies,
exclusions, and failure behavior.

The remaining byte fixtures are literal values in `test_file_metrics.py`: empty,
one-byte, constant, alternating, uniform-frequency, and deterministic
random-like sequences. Their expected properties are asserted next to their
definitions.
