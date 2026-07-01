#!/usr/bin/env python3

import argparse
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np
from plot_v2_data import compressor_frame, load_nexus, nexus_summary, transformed_series
from plot_v2_style import (
    WIDE_WIDTH,
    apply_style,
    compressor_label,
    metric_label,
    save_pdf,
    toolchain_label,
)

METRICS = {
    "compression-speed": "Compression speed",
    "decompression-speed": "Decompression speed",
    "compression-ratio": "Ratio",
}

EXECUTABLE_FAMILIES = ["graalvm", "dotnet", "gcc_clang"]

Y_LIMITS = {
    "Compression speed": (0, 2000),
    "Decompression speed": (0, 6000),
    "Ratio": (0, 5),
}

Y_TICKS = {
    "Compression speed": [0, 250, 500, 750, 1000, 1250, 1500, 1750, 2000],
    "Decompression speed": [0, 1000, 2000, 3000, 4000, 5000, 6000],
    "Ratio": [0, 1, 2, 3, 4, 5],
}


def output_name(metric_key):
    safe_metric = metric_key.replace("-", "_")
    return f"nexus_compressor_{safe_metric}_distributions.pdf"


def prepare_frame(nexus, metric):
    frame = compressor_frame(nexus)
    frame[metric] = transformed_series(frame, metric)
    frame["exe_type"] = frame["toolchain"].replace(
        {"gcc": "gcc_clang", "clang": "gcc_clang"}
    )
    return frame


def draw_compressor_boxplots(ax, frame, metric, compressors, colors):
    data = [
        frame.loc[frame["Compressor name"] == compressor, metric].dropna().to_numpy()
        for compressor in compressors
    ]
    positions = np.arange(1, len(compressors) + 1)
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
    for patch, color in zip(box["boxes"], colors):
        patch.set_facecolor(color)
        patch.set_alpha(0.78)
    ax.set_xticks(positions)
    ax.grid(True, axis="y", alpha=0.28)


def plot_metric(frame, out_dir, metric_key):
    metric = METRICS[metric_key]
    compressors = sorted(frame["Compressor name"].dropna().unique(), key=str)
    colors = plt.get_cmap("Set2")(np.linspace(0.08, 0.92, max(1, len(compressors))))

    fig, axes = plt.subplots(
        len(EXECUTABLE_FAMILIES),
        1,
        figsize=(WIDE_WIDTH, 7.8),
        sharex=True,
        sharey=True,
    )

    for row, exe_type in enumerate(EXECUTABLE_FAMILIES):
        ax = axes[row]
        subset = frame.loc[frame["exe_type"] == exe_type]
        draw_compressor_boxplots(ax, subset, metric, compressors, colors)
        ax.set_ylim(*Y_LIMITS[metric])
        ax.set_yticks(Y_TICKS[metric])
        ax.set_ylabel(metric_label(metric))
        ax.text(
            0.5,
            1.04,
            toolchain_label(exe_type),
            transform=ax.transAxes,
            ha="center",
            va="bottom",
            fontsize=9.0,
        )
        if row < len(EXECUTABLE_FAMILIES) - 1:
            ax.tick_params(axis="x", labelbottom=False)

    positions = np.arange(1, len(compressors) + 1)
    axes[-1].set_xticks(positions)
    axes[-1].set_xticklabels(
        [compressor_label(compressor) for compressor in compressors],
        rotation=45,
        ha="right",
    )
    axes[-1].set_xlabel("Compressor name")

    fig.subplots_adjust(left=0.075, right=0.995, top=0.965, bottom=0.18, hspace=0.28)
    save_pdf(fig, Path(out_dir) / output_name(metric_key))


def generate(nexus_path, out_dir, metric_key):
    apply_style()
    nexus = load_nexus(nexus_path)
    summary = nexus_summary(nexus)
    print(
        "Nexus validation: "
        f"{summary['artifact_count']} artifacts, "
        f"{summary['unparsed_count']} unparsed build targets, "
        f"{summary['non_memcpy_compressors']} non-memcpy compressors"
    )
    frame = prepare_frame(nexus, METRICS[metric_key])
    plot_metric(frame, out_dir, metric_key)


def main():
    base_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(
        description="Plot compressor metric distributions by executable family."
    )
    parser.add_argument("--metric", required=True, choices=METRICS)
    parser.add_argument("--nexus", default=base_dir / "nexus.csv", type=Path)
    parser.add_argument("--out-dir", default=base_dir / "plots-v2", type=Path)
    args = parser.parse_args()
    generate(args.nexus, args.out_dir, args.metric)


if __name__ == "__main__":
    main()
