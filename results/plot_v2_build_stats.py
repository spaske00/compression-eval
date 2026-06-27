#!/usr/bin/env python3

import argparse
from pathlib import Path

import matplotlib.pyplot as plt

from plot_v2_data import (
    KEY_EXECUTABLE_STATS,
    artifact_frame,
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


def plot_distributions(artifacts, out_dir):
    transformed = transformed_metric_frame(artifacts, KEY_EXECUTABLE_STATS)
    transformed["exe_type"] = transformed["toolchain"].replace({"gcc": "gcc_clang", "clang": "gcc_clang"})
    exe_types = ordered_toolchains(transformed["exe_type"].unique())
    y_limits = {
        metric: padded_limits(transformed[metric])
        for metric in KEY_EXECUTABLE_STATS
    }
    y_limits["Entropy"] = (0.25, 1)
    y_limits["Chi-square"] = (0, 400_000_000)
    y_limits["Original size"] = (0, 150)
    y_ticks = {
        "Entropy": [0.25, 0.5, 0.75, 1],
        "Chi-square": [0, 100_000, 1_000_000, 10_000_000, 100_000_000],
        "Original size": [0, 1, 10, 100],
    }
    y_tick_labels = {
        "Chi-square": ["0", "1e5", "1e6", "1e7", "1e8"],
        "Original size": ["0", "1", "10", "100"],
    }
    fig, axes = plt.subplots(
        len(KEY_EXECUTABLE_STATS),
        len(exe_types),
        figsize=(PAPER_WIDTH, 10.0),
        sharex=False,
    )
    if len(KEY_EXECUTABLE_STATS) == 1:
        axes = axes.reshape(1, -1)

    for row, metric in enumerate(KEY_EXECUTABLE_STATS):
        for col, exe_type in enumerate(exe_types):
            subset = transformed.loc[transformed["exe_type"] == exe_type]
            ax = axes[row, col]
            draw_grouped_boxplot(
                ax,
                subset,
                metric,
                exe_type,
                ylabel=metric_label(metric) if col == 0 else None,
                show_xlabel=row == len(KEY_EXECUTABLE_STATS) - 1,
            )
            if y_limits[metric] is not None:
                ax.set_ylim(*y_limits[metric])
            if metric == "Chi-square":
                ax.set_yscale("symlog", linthresh=100_000)
            if metric == "Original size":
                ax.set_yscale("symlog", linthresh=1)
            if metric in y_ticks:
                ax.set_yticks(y_ticks[metric])
                labels = y_tick_labels.get(metric, [str(value) for value in y_ticks[metric]])
                ax.set_yticklabels(labels)
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

    fig.subplots_adjust(left=0.16, right=0.995, top=0.965, bottom=0.065, wspace=0.24, hspace=0.38)
    save_pdf(fig, Path(out_dir) / "nexus_build_stats_distributions.pdf")


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
    artifacts = artifact_frame(nexus)
    plot_distributions(artifacts, out_dir)


def main():
    parser = argparse.ArgumentParser(description="Plot v2 build-configuration effects on executable statistics.")
    parser.add_argument("--nexus", default=Path(__file__).with_name("nexus.csv"), type=Path)
    parser.add_argument("--out-dir", default=Path(__file__).with_name("plots-v2"), type=Path)
    args = parser.parse_args()
    generate(args.nexus, args.out_dir)


if __name__ == "__main__":
    main()
