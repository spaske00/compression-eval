#!/usr/bin/env python3

from pathlib import Path
from textwrap import wrap

import matplotlib

matplotlib.use("Agg")

import matplotlib.pyplot as plt
import numpy as np


PAPER_WIDTH = 7.2
WIDE_WIDTH = 12.8

TOOLCHAIN_ORDER = ["gcc_clang", "gcc", "clang", "graalvm", "dotnet"]
TOOLCHAIN_LABELS = {
    "gcc_clang": "GCC/Clang",
    "gcc": "GCC",
    "clang": "Clang",
    "graalvm": "GraalVM",
    "dotnet": ".NET",
}

CONFIG_ORDER = {
    "gcc_clang": ["debug", "O0", "Og", "O1", "O2", "O3", "Of", "Os", "static"],
    "gcc": ["debug", "O0", "Og", "O1", "O2", "O3", "Of", "Os", "static"],
    "clang": ["debug", "O0", "Og", "O1", "O2", "O3", "Of", "Os", "static"],
    "graalvm": ["debug", "O0", "O1", "O2", "O3", "Os", "prof"],
    "dotnet": ["debug", "release", "sf", "static", "static-sf"],
}

METRIC_LABELS = {
    "Entropy": "Entropy",
    "Chi-square": "Chi-square",
    "Mean": "Mean",
    "Monte-Carlo-Pi": "Monte Carlo pi",
    "Serial-Correlation": "Serial correlation",
    "Original size": "Original size (MiB)",
    "Compression speed": "Compression speed (MB/s)",
    "Decompression speed": "Decompression speed (MB/s)",
    "Ratio": "Compression ratio (x:1)",
}

SHORT_METRIC_LABELS = {
    "Entropy": "Entropy",
    "Chi-square": "Chi-square",
    "Mean": "Mean",
    "Monte-Carlo-Pi": "MC pi",
    "Serial-Correlation": "Serial corr.",
    "Original size": "Size (MiB)",
    "Compression speed": "Comp. speed (MB/s)",
    "Decompression speed": "Decomp. speed (MB/s)",
    "Ratio": "Compression ratio (x:1)",
}


def apply_style():
    plt.rcParams.update(
        {
            "font.family": "DejaVu Sans",
            "font.size": 8.5,
            "axes.labelsize": 8.5,
            "axes.titlesize": 9.0,
            "xtick.labelsize": 7.0,
            "ytick.labelsize": 7.0,
            "legend.fontsize": 7.0,
            "legend.title_fontsize": 7.5,
            "axes.linewidth": 0.75,
            "grid.linewidth": 0.35,
            "lines.linewidth": 0.9,
            "lines.markersize": 2.8,
            "pdf.fonttype": 42,
            "ps.fonttype": 42,
            "savefig.dpi": 300,
            "figure.dpi": 120,
        }
    )


def save_pdf(fig, path):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(path, bbox_inches="tight", pad_inches=0.025)
    plt.close(fig)
    print(f"Saved: {path}")


def ordered_toolchains(values):
    present = set(values)
    ordered = [value for value in TOOLCHAIN_ORDER if value in present]
    ordered.extend(sorted(present - set(ordered)))
    return ordered


def ordered_configs(toolchain, values):
    present = set(values)
    preferred = CONFIG_ORDER.get(toolchain, [])
    ordered = [value for value in preferred if value in present]
    ordered.extend(sorted(present - set(ordered), key=str))
    return ordered


def toolchain_label(value):
    return TOOLCHAIN_LABELS.get(value, str(value))


def metric_label(value):
    return METRIC_LABELS.get(value, str(value))


def short_metric_label(value):
    return SHORT_METRIC_LABELS.get(value, str(value))


def wrap_label(value, width=18):
    return "\n".join(wrap(str(value), width=width, break_long_words=False, break_on_hyphens=False))


def compressor_label(value):
    text = str(value)
    replacements = {
        " 2019-04-18": "",
        " 2017-03-08": "",
        " 1.10.0": "",
        " 1.5.7": "",
        " 2.10": "",
        " 0.5.0": "",
        " 2.3": "",
        " 2.1": "",
        " 4.22": "",
        " 3.6": "",
        " 1.5.0": "",
        " 1.2.1": "",
    }
    for old, new in replacements.items():
        text = text.replace(old, new)
    text = text.replace(" --fast", " fast")
    return text


def draw_heatmap(
    ax,
    values,
    row_labels,
    col_labels,
    *,
    vmin=None,
    vmax=None,
    cmap="viridis",
    cbar_label="",
    annotate=False,
    annotation_format="{:.2f}",
    x_rotation=45,
    x_fontsize=7.0,
):
    masked = np.ma.masked_invalid(np.asarray(values, dtype=float))
    image = ax.imshow(masked, aspect="auto", interpolation="nearest", cmap=cmap, vmin=vmin, vmax=vmax)
    ax.set_yticks(np.arange(len(row_labels)))
    ax.set_yticklabels(row_labels)
    ax.set_xticks(np.arange(len(col_labels)))
    ax.set_xticklabels(col_labels, rotation=x_rotation, ha="right", rotation_mode="anchor", fontsize=x_fontsize)
    ax.tick_params(axis="both", length=0)

    ax.set_xticks(np.arange(-0.5, len(col_labels), 1), minor=True)
    ax.set_yticks(np.arange(-0.5, len(row_labels), 1), minor=True)
    ax.grid(which="minor", color="white", linewidth=0.45)
    ax.tick_params(which="minor", bottom=False, left=False)

    if annotate:
        for row in range(masked.shape[0]):
            for col in range(masked.shape[1]):
                value = masked[row, col]
                if np.ma.is_masked(value):
                    continue
                color = "white" if (vmax is not None and float(value) > 0.62 * vmax) else "black"
                ax.text(
                    col,
                    row,
                    annotation_format.format(float(value)),
                    ha="center",
                    va="center",
                    fontsize=6.2,
                    color=color,
                )

    cbar = ax.figure.colorbar(image, ax=ax, fraction=0.025, pad=0.012)
    cbar.ax.tick_params(labelsize=7.0, length=2.0, width=0.6)
    if cbar_label:
        cbar.set_label(cbar_label)
    return image


def draw_grouped_boxplot(ax, frame, metric, toolchain, *, ylabel=None, show_xlabel=False):
    configs = ordered_configs(toolchain, frame["config"].dropna().unique())
    data = [frame.loc[frame["config"] == config, metric].dropna().to_numpy() for config in configs]
    positions = np.arange(1, len(configs) + 1)
    box = ax.boxplot(
        data,
        positions=positions,
        widths=0.62,
        patch_artist=True,
        showfliers=False,
        medianprops={"color": "black", "linewidth": 0.8},
        whiskerprops={"linewidth": 0.65},
        capprops={"linewidth": 0.65},
        boxprops={"linewidth": 0.65},
    )
    colors = plt.get_cmap("Set2")(np.linspace(0.08, 0.92, max(1, len(configs))))
    for patch, color in zip(box["boxes"], colors):
        patch.set_facecolor(color)
        patch.set_alpha(0.78)
    ax.set_xticks(positions)
    ax.set_xticklabels(configs, rotation=45, ha="right")
    ax.grid(True, axis="y", alpha=0.28)
    if ylabel:
        ax.set_ylabel(ylabel)
    if show_xlabel:
        ax.set_xlabel("Build configuration")


def padded_limits(values, pad_fraction=0.04):
    values = np.asarray(values, dtype=float)
    values = values[np.isfinite(values)]
    if values.size == 0:
        return None
    low = float(values.min())
    high = float(values.max())
    if low == high:
        pad = abs(low) * pad_fraction if low != 0 else 1.0
    else:
        pad = (high - low) * pad_fraction
    return low - pad, high + pad
