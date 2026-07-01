#!/usr/bin/env python3

import re
from pathlib import Path

import numpy as np
import pandas as pd

from file_metric_config import ENABLED_FILE_METRICS, FILE_METRIC_SPECS


EXECUTABLE_STATS = ENABLED_FILE_METRICS

PERFORMANCE_METRICS = [
    "Compression speed",
    "Decompression speed",
    "Ratio",
]

LOG10_METRICS = set()

REQUIRED_NEXUS_COLUMNS = {
    "Filename",
    "Compressor name",
    "Compression speed",
    "Decompression speed",
    "Original size",
    "Compressed size",
    "Ratio",
    "Entropy",
    "Chi-square",
    "Mean",
    "Monte-Carlo-Pi",
    "Serial-Correlation",
}

REQUIRED_SILESIA_COLUMNS = REQUIRED_NEXUS_COLUMNS.copy()

BUILD_RE = re.compile(
    r"^(?P<program>.+)-(?P<toolchain>graalvm|dotnet|gcc|clang)-(?P<arch>[^-]+-[^-]+)-(?P<config>.+)$"
)


def load_nexus(path):
    frame = _load_csv(path, REQUIRED_NEXUS_COLUMNS)
    frame = _coerce_numeric(frame)
    parsed = frame["Filename"].map(parse_build_metadata)
    missing = parsed.isna()
    if missing.any():
        examples = frame.loc[missing, "Filename"].drop_duplicates().head(8).to_list()
        raise ValueError(f"Could not parse build metadata for {missing.sum()} rows; examples: {examples}")
    metadata = pd.DataFrame(parsed.to_list(), index=frame.index)
    frame = pd.concat([frame, metadata], axis=1)
    return frame


def load_silesia(path):
    frame = _load_csv(path, REQUIRED_SILESIA_COLUMNS)
    return _coerce_numeric(frame)


def parse_build_metadata(filename):
    text = str(filename).strip().replace("\\", "/")
    parts = [part for part in text.split("/") if part and part != "."]
    candidates = []
    if len(parts) >= 2:
        candidates.append(parts[-2])
    if parts:
        candidates.append(parts[-1])

    for candidate in candidates:
        match = BUILD_RE.match(candidate)
        if match:
            return match.groupdict()
    return None


def artifact_frame(nexus):
    cols = ["Filename", "program", "toolchain", "arch", "config", *available_file_metrics(nexus)]
    artifacts = nexus[cols].drop_duplicates().copy()
    duplicate_filenames = artifacts["Filename"].duplicated(keep=False)
    if duplicate_filenames.any():
        examples = artifacts.loc[duplicate_filenames, "Filename"].head(8).to_list()
        raise ValueError(f"Artifact-level metadata is not unique by filename; examples: {examples}")
    return artifacts.reset_index(drop=True)


def compressor_frame(frame):
    return frame.loc[frame["Compressor name"] != "memcpy"].copy()


def transformed_series(frame, metric):
    values = pd.to_numeric(frame[metric], errors="coerce")
    if metric in LOG10_METRICS:
        values = values.where(values > 0)
        return np.log10(values)
    spec = FILE_METRIC_SPECS.get(metric)
    if spec is not None and spec.divisor:
        return values / spec.divisor
    if metric == "Ratio":
        values = values.where(values > 0)
        return 100 / values
    return values


def eta_squared(values, groups):
    data = pd.DataFrame({"value": values, "group": groups}).replace([np.inf, -np.inf], np.nan).dropna()
    if data["group"].nunique() < 2 or len(data) < 3:
        return np.nan
    grand_mean = data["value"].mean()
    ss_total = ((data["value"] - grand_mean) ** 2).sum()
    if ss_total <= 0:
        return np.nan
    grouped = data.groupby("group")["value"]
    ss_between = sum(len(group) * (group.mean() - grand_mean) ** 2 for _, group in grouped)
    return float(ss_between / ss_total)


def spearman_rho(x, y):
    data = pd.DataFrame({"x": x, "y": y}).replace([np.inf, -np.inf], np.nan).dropna()
    if len(data) < 3:
        return np.nan
    xr = data["x"].rank(method="average")
    yr = data["y"].rank(method="average")
    if xr.nunique() < 2 or yr.nunique() < 2:
        return np.nan
    return float(xr.corr(yr))


def transformed_metric_frame(frame, metrics):
    output = frame.copy()
    for metric in metrics:
        output[metric] = transformed_series(output, metric)
    return output


def nexus_summary(nexus):
    artifacts = artifact_frame(nexus)
    non_memcpy = compressor_frame(nexus)
    return {
        "artifact_count": len(artifacts),
        "unparsed_count": int(nexus[["program", "toolchain", "arch", "config"]].isna().any(axis=1).sum()),
        "non_memcpy_compressors": int(non_memcpy["Compressor name"].nunique()),
        "toolchains": sorted(artifacts["toolchain"].unique()),
    }


def _load_csv(path, required_columns):
    path = Path(path)
    frame = pd.read_csv(path)
    missing = sorted(required_columns - set(frame.columns))
    if missing:
        raise ValueError(f"{path}: missing required columns: {missing}")
    return frame


def _coerce_numeric(frame):
    frame = frame.copy()
    numeric_columns = [
        "Compression speed",
        "Decompression speed",
        "Original size",
        "Compressed size",
        "Ratio",
        "Entropy",
        "Chi-square",
        "Mean",
        "Monte-Carlo-Pi",
        "Serial-Correlation",
        *ENABLED_FILE_METRICS,
    ]
    for column in numeric_columns:
        if column in frame.columns:
            frame[column] = pd.to_numeric(frame[column], errors="coerce")
    return frame


def metric_unavailable_reason(frame, metric):
    if metric not in frame.columns:
        return "column is missing"
    values = pd.to_numeric(frame[metric], errors="coerce").replace([np.inf, -np.inf], np.nan)
    if not values.notna().any():
        return "column contains no finite values"
    return None


def available_file_metrics(frame, report=False):
    available = []
    for metric in ENABLED_FILE_METRICS:
        reason = metric_unavailable_reason(frame, metric)
        if reason:
            if report:
                print(f"Skipping file metric {metric}: {reason}")
        else:
            available.append(metric)
    return available


def require_file_metric(frame, metric):
    if metric not in ENABLED_FILE_METRICS:
        raise ValueError(f"File metric {metric!r} is not enabled")
    reason = metric_unavailable_reason(frame, metric)
    if reason:
        raise ValueError(f"Cannot plot file metric {metric!r}: {reason}")
