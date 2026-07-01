from __future__ import annotations

import csv
import io
import json
import math
import subprocess
import sys
from pathlib import Path

import pytest

from elf_fixtures import build_elf, malformed_elf

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from file_metrics import (  # noqa: E402
    LEGACY_COLUMNS,
    METRIC_COLUMNS,
    MetricError,
    compute_metrics,
    lz78_phrase_count,
    serialize_record,
    write_csv_record,
)


def assert_nan(value: object) -> None:
    assert isinstance(value, float) and math.isnan(value)


def test_empty_and_one_byte_undefined_values() -> None:
    empty = compute_metrics(b"")
    assert empty["File-bits"] == 0
    assert empty["File-Size-Bytes"] == 0
    assert empty["Lempel-Ziv-Complexity"] == 0
    for name in (
        "Byte-Entropy",
        "Byte-Chi-Square",
        "Byte-Monte-Carlo-Pi",
        "Byte-Serial-Correlation",
        "Conditional-Entropy",
        "Bigram-Entropy",
    ):
        assert_nan(empty[name])

    one = compute_metrics(b"A")
    assert one["Byte-Entropy"] == 0.0
    assert one["Byte-Chi-Square"] == 255.0
    assert_nan(one["Byte-Monte-Carlo-Pi"])
    assert_nan(one["Byte-Serial-Correlation"])
    assert_nan(one["Conditional-Entropy"])
    assert_nan(one["Bigram-Entropy"])


def test_tractable_byte_distributions_and_sequences() -> None:
    constant = compute_metrics(b"A" * 12)
    assert constant["Byte-Entropy"] == 0.0
    assert constant["Byte-Chi-Square"] == 12 * 255
    assert_nan(constant["Byte-Serial-Correlation"])

    uniform = compute_metrics(bytes(range(256)))
    assert uniform["Byte-Entropy"] == 8.0
    assert uniform["Byte-Chi-Square"] == 0.0

    alternating = compute_metrics(b"AB" * 32)
    assert alternating["Conditional-Entropy"] == 0.0
    assert alternating["Bigram-Entropy"] == pytest.approx(0.999818, abs=1e-6)
    assert alternating["Byte-Serial-Correlation"] == pytest.approx(-1.0)

    random_like = compute_metrics(bytes((index * 73 + 41) % 256 for index in range(4096)))
    assert random_like["Byte-Entropy"] == 8.0
    assert random_like["Byte-Chi-Square"] == 0.0
    assert 0.0 <= random_like["Byte-Monte-Carlo-Pi"] <= 4.0


def test_monte_carlo_ignores_incomplete_group() -> None:
    complete = compute_metrics(b"\0" * 6)["Byte-Monte-Carlo-Pi"]
    trailing = compute_metrics(b"\0" * 6 + b"abcde")["Byte-Monte-Carlo-Pi"]
    assert complete == 4.0
    assert trailing == complete


@pytest.mark.parametrize(
    ("data", "expected"),
    [(b"", 0), (b"a", 1), (b"aa", 2), (b"aaa", 2), (b"abababa", 4)],
)
def test_lz78_phrase_count(data: bytes, expected: int) -> None:
    assert lz78_phrase_count(data) == expected


def test_ent_bit_reference_rows() -> None:
    reference_path = ROOT / "tests/fixtures/ent_bit_references.csv"
    with reference_path.open(newline="") as file:
        references = list(csv.DictReader(file))
    assert len(references) >= 4
    for reference in references:
        record = compute_metrics(bytes.fromhex(reference["hex"]))
        serialized = dict(zip(METRIC_COLUMNS, serialize_record(record)))
        for column in LEGACY_COLUMNS:
            assert serialized[column] == reference[column], (
                reference["fixture"],
                column,
                serialized[column],
                reference[column],
            )


@pytest.mark.parametrize("elf_class", [1, 2])
def test_elf32_and_elf64_sections(elf_class: int) -> None:
    data = build_elf(elf_class)
    record = compute_metrics(data)
    assert record["Section-Format"] == "ELF"
    ratios = record["Section-Size-Ratios"]
    entropies = record["Section-Entropies"]
    assert list(ratios) == ["1:.shstrtab", "2:.text"]
    assert list(entropies) == list(ratios)
    assert ratios["2:.text"] == 4 / len(data)
    assert entropies["2:.text"] == 2.0


def test_duplicate_names_are_preserved_and_nobits_is_excluded() -> None:
    record = compute_metrics(build_elf(2, duplicate_names=True))
    assert list(record["Section-Size-Ratios"]) == [
        "1:.shstrtab",
        "2:.text",
        "3:.dup",
        "4:.dup",
    ]
    assert not any("empty" in key for key in record["Section-Size-Ratios"])
    assert not any("bss" in key for key in record["Section-Size-Ratios"])


def test_non_elf_and_malformed_elf() -> None:
    non_elf = compute_metrics(b"plain data")
    assert non_elf["Section-Format"] == "none"
    assert non_elf["Section-Size-Ratios"] == {}
    assert non_elf["Section-Entropies"] == {}
    with pytest.raises(MetricError, match="malformed ELF"):
        compute_metrics(malformed_elf())


def test_csv_is_fixed_width_strict_json_and_rfc4180() -> None:
    output = io.StringIO()
    write_csv_record(output, compute_metrics(build_elf(2, duplicate_names=True)))
    rows = list(csv.reader(io.StringIO(output.getvalue())))
    assert tuple(rows[0]) == METRIC_COLUMNS
    assert len(rows[1]) == len(METRIC_COLUMNS)
    row = dict(zip(rows[0], rows[1]))
    ratios = json.loads(row["Section-Size-Ratios"])
    entropies = json.loads(row["Section-Entropies"])
    assert list(ratios) == list(entropies)
    assert "3:.dup" in ratios and "4:.dup" in ratios


def test_cli_header_no_header_errors_and_determinism(tmp_path: Path) -> None:
    fixture = tmp_path / "fixture.bin"
    fixture.write_bytes(bytes(range(256)))
    command = [sys.executable, str(ROOT / "compute_file_metrics"), str(fixture)]
    first = subprocess.run(command, check=True, capture_output=True, text=True)
    second = subprocess.run(command, check=True, capture_output=True, text=True)
    assert first.stdout == second.stdout
    assert first.stderr == second.stderr == ""
    assert len(list(csv.reader(io.StringIO(first.stdout)))) == 2

    without_header = subprocess.run(
        [sys.executable, str(ROOT / "compute_file_metrics"), "--no-header", str(fixture)],
        check=True,
        capture_output=True,
        text=True,
    )
    assert len(list(csv.reader(io.StringIO(without_header.stdout)))) == 1
    assert without_header.stderr == ""

    missing = subprocess.run(
        [sys.executable, str(ROOT / "compute_file_metrics"), str(tmp_path / "missing")],
        capture_output=True,
        text=True,
    )
    assert missing.returncode != 0
    assert missing.stdout == ""
    assert "not a regular file" in missing.stderr
