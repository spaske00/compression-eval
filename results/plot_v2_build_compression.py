#!/usr/bin/env python3

import argparse
from pathlib import Path

import matplotlib.pyplot as plt

from plot_v2_data import (
    PERFORMANCE_METRICS,
    compressor_frame,
    load_nexus,
    nexus_summary,
    transformed_metric_frame,
)
from plot_v2_style import (
    PAPER_WIDTH,
    apply_style,
    draw_grouped_boxplot,
    metric_label,
    ordered_toolchains,
    padded_limits,
    save_pdf,
    toolchain_label,
)


def plot_distributions(frame, out_dir):
    transformed = transformed_metric_frame(frame, PERFORMANCE_METRICS)
    transformed["exe_type"] = transformed["toolchain"].replace({"gcc": "gcc_clang", "clang": "gcc_clang"})
    exe_types = ordered_toolchains(transformed["exe_type"].unique())
    y_limits = {
        metric: padded_limits(transformed[metric])
        for metric in PERFORMANCE_METRICS
    }
    y_limits["Compression speed"] = (0, 1000)
    y_limits["Decompression speed"] = (0, 4000)
    y_limits["Ratio"] = (0, 5)
    y_ticks = {
        "Compression speed": [0, 250, 500, 750, 1000],
        "Decompression speed": [0, 1000, 2000, 3000, 4000],
        "Ratio": [0, 1, 2, 3, 4, 5],
    }
    fig, axes = plt.subplots(
        len(PERFORMANCE_METRICS),
        len(exe_types),
        figsize=(PAPER_WIDTH, 6.6),
        sharex=False,
    )
    if len(PERFORMANCE_METRICS) == 1:
        axes = axes.reshape(1, -1)

    for row, metric in enumerate(PERFORMANCE_METRICS):
        for col, exe_type in enumerate(exe_types):
            subset = transformed.loc[transformed["exe_type"] == exe_type]
            ax = axes[row, col]
            draw_grouped_boxplot(
                ax,
                subset,
                metric,
                exe_type,
                ylabel=metric_label(metric) if col == 0 else None,
                show_xlabel=row == len(PERFORMANCE_METRICS) - 1,
            )
            if y_limits[metric] is not None:
                ax.set_ylim(*y_limits[metric])
            if metric in y_ticks:
                ax.set_yticks(y_ticks[metric])
            if row == 0:
                ax.text(
                    0.5,
                    1.06,
                    toolchain_label(exe_type),
                    transform=ax.transAxes,
                    ha="center",
                    va="bottom",
                    fontsize=9.0,
                )
            if col != 0:
                ax.set_ylabel("")

    for ax in axes[:, 0]:
        ax.yaxis.set_label_coords(-0.30, 0.5)
    for ax in axes[-1, :]:
        ax.xaxis.set_label_coords(0.5, -0.42)

    fig.subplots_adjust(left=0.16, right=0.995, top=0.955, bottom=0.095, wspace=0.24, hspace=0.38)
    save_pdf(fig, Path(out_dir) / "nexus_build_compression_distributions.pdf")


def generate(nexus_path, out_dir):
    apply_style()
    nexus = load_nexus(nexus_path)
    summary = nexus_summary(nexus)
    print(
        "Nexus validation: "
        f"{summary['artifact_count']} artifacts, "
        f"{summary['unparsed_count']} unparsed build targets, "
        f"{summary['non_memcpy_compressors']} non-memcpy compressors"
    )
    frame = compressor_frame(nexus)
    plot_distributions(frame, out_dir)


def main():
    parser = argparse.ArgumentParser(description="Plot v2 build-configuration effects on compression outcomes.")
    parser.add_argument("--nexus", default=Path(__file__).with_name("nexus.csv"), type=Path)
    parser.add_argument("--out-dir", default=Path(__file__).with_name("plots-v2"), type=Path)
    args = parser.parse_args()
    generate(args.nexus, args.out_dir)


if __name__ == "__main__":
    main()
