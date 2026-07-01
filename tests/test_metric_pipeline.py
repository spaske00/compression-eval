from __future__ import annotations

import csv
import json
import subprocess
import sys
from pathlib import Path

from elf_fixtures import build_elf, malformed_elf

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from file_metrics import METRIC_COLUMNS  # noqa: E402


def make_executable(path: Path, data: bytes) -> None:
    path.write_bytes(data)
    path.chmod(path.stat().st_mode | 0o111)


def test_corpus_driver_fixed_schema_sorted_order_and_sections(tmp_path: Path) -> None:
    corpus = tmp_path / "corpus"
    output_dir = tmp_path / "output"
    (corpus / "bin").mkdir(parents=True)
    output_dir.mkdir()
    make_executable(corpus / "bin/z-plain", b"#!/bin/sh\nexit 0\n")
    make_executable(corpus / "bin/a-elf", build_elf(2, duplicate_names=True))
    (corpus / "bin/ignored-symlink").symlink_to(corpus / "bin/z-plain")

    result = subprocess.run(
        [sys.executable, str(ROOT / "compute_entropy"), str(corpus)],
        cwd=output_dir,
        check=True,
        capture_output=True,
        text=True,
    )
    outputs = list(output_dir.glob("results_*entropy_*.csv"))
    assert len(outputs) == 1
    with outputs[0].open(newline="") as file:
        rows = list(csv.DictReader(file))
        assert tuple(rows[0]) == ("filename", *METRIC_COLUMNS)
    assert [row["filename"] for row in rows] == ["./bin/a-elf", "./bin/z-plain"]
    assert json.loads(rows[0]["Section-Size-Ratios"])["3:.dup"] > 0
    assert rows[1]["Section-Format"] == "none"
    assert "Wrote 2 rows" in result.stdout


def test_corpus_driver_failure_does_not_publish_partial_output(tmp_path: Path) -> None:
    corpus = tmp_path / "corpus"
    output_dir = tmp_path / "output"
    (corpus / "bin").mkdir(parents=True)
    output_dir.mkdir()
    make_executable(corpus / "bin/a-good", b"#!/bin/sh\nexit 0\n")
    make_executable(corpus / "bin/z-bad", malformed_elf())

    result = subprocess.run(
        [sys.executable, str(ROOT / "compute_entropy"), str(corpus)],
        cwd=output_dir,
        capture_output=True,
        text=True,
    )
    assert result.returncode != 0
    assert not list(output_dir.glob("results_*entropy_*.csv"))
    assert "malformed ELF" in result.stderr
    assert "Wrote" not in result.stdout


def test_join_results_preserves_extended_order_and_json(tmp_path: Path) -> None:
    entropy_path = tmp_path / "sample_entropy.csv"
    lzbench_path = tmp_path / "sample_lzbench.csv"
    ratios = '{"1:.text":0.500000,"2:.quoted\\\"name":0.250000}'
    entropies = '{"1:.text":8.000000,"2:.quoted\\\"name":0.000000}'
    metric_values = {column: str(index) for index, column in enumerate(METRIC_COLUMNS)}
    metric_values["Section-Size-Ratios"] = ratios
    metric_values["Section-Entropies"] = entropies
    with entropy_path.open("w", newline="") as file:
        writer = csv.DictWriter(file, fieldnames=("filename", *METRIC_COLUMNS))
        writer.writeheader()
        writer.writerow({"filename": "./bin/program", **metric_values})
    with lzbench_path.open("w", newline="") as file:
        writer = csv.writer(file)
        writer.writerow(("Filename", "Compressor", "Ratio"))
        writer.writerow(("program", "zstd", "2.5"))

    subprocess.run(
        [sys.executable, str(ROOT / "join_results"), str(entropy_path), str(lzbench_path)],
        check=True,
        capture_output=True,
        text=True,
    )
    with (tmp_path / "sample.csv").open(newline="") as file:
        reader = csv.DictReader(file)
        row = next(reader)
        assert tuple(reader.fieldnames or ()) == (
            "Filename",
            *METRIC_COLUMNS,
            "Compressor",
            "Ratio",
        )
    assert row["Section-Size-Ratios"] == ratios
    assert row["Section-Entropies"] == entropies
