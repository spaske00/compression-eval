"""Deterministic whole-file and ELF section metrics used by NEXUS."""

from __future__ import annotations

import argparse
import csv
import json
import math
import struct
import sys
from collections import Counter
from pathlib import Path
from typing import Iterable, Mapping


LEGACY_COLUMNS = (
    "0",
    "File-bits",
    "Entropy",
    "Chi-square",
    "Mean",
    "Monte-Carlo-Pi",
    "Serial-Correlation",
)
APPENDED_COLUMNS = (
    "File-Size-Bytes",
    "Byte-Entropy",
    "Byte-Chi-Square",
    "Byte-Monte-Carlo-Pi",
    "Byte-Serial-Correlation",
    "Conditional-Entropy",
    "Bigram-Entropy",
    "Lempel-Ziv-Complexity",
    "Section-Format",
    "Section-Size-Ratios",
    "Section-Entropies",
)
METRIC_COLUMNS = LEGACY_COLUMNS + APPENDED_COLUMNS

SHT_NULL = 0
SHT_NOBITS = 8
SHN_XINDEX = 0xFFFF


class MetricError(ValueError):
    """Raised when a file cannot produce a complete metric record."""


def _entropy(counts: Iterable[int], total: int) -> float:
    if total == 0:
        return math.nan
    value = -sum(
        (count / total) * math.log2(count / total) for count in counts if count
    )
    return 0.0 if value == 0.0 else value


def _chi_square(counts: Iterable[int], total: int, bins: int) -> float:
    if total == 0:
        return math.nan
    expected = total / bins
    return sum((count - expected) ** 2 / expected for count in counts)


def _monte_carlo_pi(data: bytes) -> float:
    groups = len(data) // 6
    if groups == 0:
        return math.nan
    radius_squared = float((2**24 - 1) ** 2)
    inside = 0
    for offset in range(0, groups * 6, 6):
        x = int.from_bytes(data[offset : offset + 3], "big")
        y = int.from_bytes(data[offset + 3 : offset + 6], "big")
        inside += x * x + y * y <= radius_squared
    return 4.0 * inside / groups


def _pearson_adjacent(data: bytes) -> float:
    if len(data) < 2:
        return math.nan
    left = data[:-1]
    right = data[1:]
    observations = len(left)
    left_mean = sum(left) / observations
    right_mean = sum(right) / observations
    numerator = sum(
        (x - left_mean) * (y - right_mean) for x, y in zip(left, right)
    )
    left_variance = sum((x - left_mean) ** 2 for x in left)
    right_variance = sum((y - right_mean) ** 2 for y in right)
    denominator = math.sqrt(left_variance * right_variance)
    return numerator / denominator if denominator else math.nan


def _legacy_bit_metrics(data: bytes) -> tuple[float, float, float, float, float]:
    bit_count = len(data) * 8
    ones = sum(byte.bit_count() for byte in data)
    zeros = bit_count - ones
    entropy = _entropy((zeros, ones), bit_count)
    if bit_count == 0:
        entropy = 0.0  # ENT's accumulator remains zero for an empty stream.
    chi_square = _chi_square((zeros, ones), bit_count, 2)
    mean = ones / bit_count if bit_count else math.nan

    # ENT's bit-stream serial test consumes each byte MSB first and closes the
    # sequence into a ring by correlating the final bit with the first bit.
    if bit_count == 0:
        serial = -100000.0
    else:
        bits = [byte >> shift & 1 for byte in data for shift in range(7, -1, -1)]
        cross_sum = sum(a * b for a, b in zip(bits, bits[1:] + bits[:1]))
        denominator = bit_count * ones - ones * ones
        serial = (
            (bit_count * cross_sum - ones * ones) / denominator
            if denominator
            else -100000.0
        )
    return entropy, chi_square, mean, _monte_carlo_pi(data), serial


def _conditional_and_bigram_entropy(data: bytes) -> tuple[float, float]:
    if len(data) < 2:
        return math.nan, math.nan
    previous_counts = Counter(data[:-1])
    pair_counts = Counter(zip(data[:-1], data[1:]))
    pair_total = len(data) - 1
    conditional = sum(
        -(pair_count / pair_total)
        * math.log2(pair_count / previous_counts[previous])
        for (previous, _), pair_count in pair_counts.items()
    )
    bigram = _entropy(pair_counts.values(), pair_total)
    return conditional, bigram


def lz78_phrase_count(data: bytes) -> int:
    """Return the raw phrase count for the fixed incremental LZ78 variant."""

    transitions: dict[tuple[int, int], int] = {}
    prefix = 0
    next_phrase = 1
    phrases = 0
    for value in data:
        transition = (prefix, value)
        phrase = transitions.get(transition)
        if phrase is not None:
            prefix = phrase
            continue
        transitions[transition] = next_phrase
        next_phrase += 1
        phrases += 1
        prefix = 0
    if prefix:
        phrases += 1
    return phrases


def _unpack_from(fmt: str, data: bytes, offset: int, description: str) -> tuple:
    size = struct.calcsize(fmt)
    if offset < 0 or offset + size > len(data):
        raise MetricError(f"malformed ELF: {description} is out of bounds")
    return struct.unpack_from(fmt, data, offset)


def _elf_sections(data: bytes) -> list[tuple[str, bytes]] | None:
    if not data.startswith(b"\x7fELF"):
        return None
    if len(data) < 16:
        raise MetricError("malformed ELF: incomplete identification header")

    elf_class, encoding = data[4], data[5]
    if elf_class not in (1, 2):
        raise MetricError(f"malformed ELF: unsupported class {elf_class}")
    if encoding not in (1, 2):
        raise MetricError(f"malformed ELF: unsupported byte order {encoding}")
    endian = "<" if encoding == 1 else ">"
    if elf_class == 1:
        header_fmt = endian + "HHIIIIIHHHHHH"
        section_fmt = endian + "IIIIIIIIII"
    else:
        header_fmt = endian + "HHIQQQIHHHHHH"
        section_fmt = endian + "IIQQQQIIQQ"

    header = _unpack_from(header_fmt, data, 16, "file header")
    section_offset = header[5]
    header_size = header[7]
    section_entry_size = header[10]
    section_count = header[11]
    string_table_index = header[12]
    minimum_header_size = 16 + struct.calcsize(header_fmt)
    minimum_section_size = struct.calcsize(section_fmt)
    if header_size < minimum_header_size or header_size > len(data):
        raise MetricError("malformed ELF: invalid file header size")

    if section_offset == 0 and section_count == 0:
        if string_table_index not in (0, SHN_XINDEX):
            raise MetricError("malformed ELF: section-name table without sections")
        return []
    if section_offset == 0 or section_entry_size < minimum_section_size:
        raise MetricError("malformed ELF: invalid section table metadata")

    section_zero = _unpack_from(section_fmt, data, section_offset, "section 0")
    if section_count == 0:
        section_count = section_zero[5]
    if string_table_index == SHN_XINDEX:
        string_table_index = section_zero[6]
    if section_count == 0:
        return []
    if string_table_index >= section_count:
        raise MetricError("malformed ELF: section-name table index is out of bounds")
    table_end = section_offset + section_count * section_entry_size
    if table_end > len(data):
        raise MetricError("malformed ELF: section table is out of bounds")

    headers = [
        _unpack_from(
            section_fmt,
            data,
            section_offset + index * section_entry_size,
            f"section {index}",
        )
        for index in range(section_count)
    ]
    if string_table_index == 0:
        names = b"\0"
    else:
        names_header = headers[string_table_index]
        names_offset, names_size = names_header[4], names_header[5]
        if names_header[1] == SHT_NOBITS or names_offset + names_size > len(data):
            raise MetricError("malformed ELF: section-name string table is out of bounds")
        names = data[names_offset : names_offset + names_size]

    sections: list[tuple[str, bytes]] = []
    for index, section in enumerate(headers):
        name_offset, section_type = section[0], section[1]
        file_offset, size = section[4], section[5]
        if name_offset >= len(names):
            raise MetricError(f"malformed ELF: section {index} name is out of bounds")
        terminator = names.find(b"\0", name_offset)
        if terminator < 0:
            raise MetricError(f"malformed ELF: section {index} name is unterminated")
        name = names[name_offset:terminator].decode("utf-8", errors="replace")
        if section_type not in (SHT_NULL, SHT_NOBITS) and file_offset + size > len(data):
            raise MetricError(f"malformed ELF: section {index} data is out of bounds")
        if section_type in (SHT_NULL, SHT_NOBITS) or size == 0:
            continue
        sections.append((f"{index}:{name}", data[file_offset : file_offset + size]))
    return sections


def compute_metrics(data: bytes) -> dict[str, object]:
    """Compute one complete metric record from an in-memory file."""

    size = len(data)
    byte_counts = [0] * 256
    for value in data:
        byte_counts[value] += 1
    bit_entropy, bit_chi, bit_mean, bit_pi, bit_serial = _legacy_bit_metrics(data)
    conditional, bigram = _conditional_and_bigram_entropy(data)
    sections = _elf_sections(data)

    ratios: dict[str, float] = {}
    entropies: dict[str, float] = {}
    for identifier, contents in sections or []:
        ratios[identifier] = len(contents) / size
        counts = Counter(contents)
        entropies[identifier] = _entropy(counts.values(), len(contents))

    return {
        "0": 1,
        "File-bits": size * 8,
        "Entropy": bit_entropy,
        "Chi-square": bit_chi,
        "Mean": bit_mean,
        "Monte-Carlo-Pi": bit_pi,
        "Serial-Correlation": bit_serial,
        "File-Size-Bytes": size,
        "Byte-Entropy": _entropy(byte_counts, size),
        "Byte-Chi-Square": _chi_square(byte_counts, size, 256),
        "Byte-Monte-Carlo-Pi": _monte_carlo_pi(data),
        "Byte-Serial-Correlation": _pearson_adjacent(data),
        "Conditional-Entropy": conditional,
        "Bigram-Entropy": bigram,
        "Lempel-Ziv-Complexity": lz78_phrase_count(data),
        "Section-Format": "ELF" if sections is not None else "none",
        "Section-Size-Ratios": ratios,
        "Section-Entropies": entropies,
    }


def compute_file(path: Path | str) -> dict[str, object]:
    input_path = Path(path)
    if not input_path.is_file():
        raise MetricError(f"not a regular file: {input_path}")
    try:
        with input_path.open("rb") as file:
            return compute_metrics(file.read())
    except OSError as error:
        raise MetricError(f"cannot read {input_path}: {error}") from error


def _format_float(value: float) -> str:
    return "NaN" if math.isnan(value) else f"{value:.6f}"


def _format_json_map(values: Mapping[str, float]) -> str:
    if not values:
        return "{}"
    members = (
        f"{json.dumps(key, ensure_ascii=False)}:{_format_float(value)}"
        for key, value in values.items()
    )
    return "{" + ",".join(members) + "}"


def serialize_record(record: Mapping[str, object]) -> list[str]:
    row: list[str] = []
    for column in METRIC_COLUMNS:
        value = record[column]
        if isinstance(value, float):
            row.append(_format_float(value))
        elif isinstance(value, Mapping):
            row.append(_format_json_map(value))
        else:
            row.append(str(value))
    return row


def write_csv_record(
    output, record: Mapping[str, object], *, include_header: bool = True
) -> None:
    writer = csv.writer(output, lineterminator="\n")
    if include_header:
        writer.writerow(METRIC_COLUMNS)
    writer.writerow(serialize_record(record))


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description="Compute deterministic metrics for one file.")
    parser.add_argument("--no-header", action="store_true", help="omit the CSV header")
    parser.add_argument("input_file", type=Path)
    args = parser.parse_args(argv)
    try:
        record = compute_file(args.input_file)
    except (MetricError, MemoryError) as error:
        print(f"file_metrics: {error}", file=sys.stderr)
        return 1
    write_csv_record(sys.stdout, record, include_header=not args.no_header)
    return 0


if __name__ == "__main__":
    sys.exit(main())
