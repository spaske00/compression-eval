#!/usr/bin/env python3

import argparse
from pathlib import Path

import matplotlib.pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages

from file_metric_config import apply_metric_axis
from plot_v2_data import (
    available_file_metrics,
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
    toolchain_label,
)


METRICS_PER_PAGE = 5


def metric_pages(metrics, page_size=METRICS_PER_PAGE):
    return [metrics[start:start + page_size] for start in range(0, len(metrics), page_size)]


def plot_distributions(artifacts, out_dir, metrics=None):
    metrics = available_file_metrics(artifacts, report=True) if metrics is None else list(metrics)
    if not metrics:
        raise ValueError("No enabled file metrics contain finite values")
    transformed = transformed_metric_frame(artifacts, metrics)
    transformed["exe_type"] = transformed["toolchain"].replace({"gcc": "gcc_clang", "clang": "gcc_clang"})
    exe_types = ordered_toolchains(transformed["exe_type"].unique())
    output = Path(out_dir) / "nexus_build_stats_distributions.pdf"
    output.parent.mkdir(parents=True, exist_ok=True)
    with PdfPages(output) as pdf:
        for page_metrics in metric_pages(metrics):
            fig, axes = plt.subplots(
                len(page_metrics), len(exe_types),
                figsize=(PAPER_WIDTH, 2.0 * len(page_metrics)), sharex=False, squeeze=False,
            )
            for row, metric in enumerate(page_metrics):
                for col, exe_type in enumerate(exe_types):
                    subset = transformed.loc[transformed["exe_type"] == exe_type]
                    ax = axes[row, col]
                    draw_grouped_boxplot(
                        ax, subset, metric, exe_type,
                        ylabel=metric_label(metric) if col == 0 else None,
                        show_xlabel=row == len(page_metrics) - 1,
                    )
                    apply_metric_axis(ax, metric, transformed[metric])
                    if row == 0:
                        ax.text(
                            0.5, 1.06, toolchain_label(exe_type), transform=ax.transAxes,
                            ha="center", va="bottom", fontsize=9.0,
                        )
                    if col != 0:
                        ax.set_ylabel("")
            for ax in axes[:, 0]:
                ax.yaxis.set_label_coords(-0.30, 0.5)
            for ax in axes[-1, :]:
                ax.xaxis.set_label_coords(0.5, -0.42)
            fig.subplots_adjust(
                left=0.16, right=0.995, top=0.965, bottom=0.065,
                wspace=0.24, hspace=0.48,
            )
            pdf.savefig(fig, bbox_inches="tight", pad_inches=0.025)
            plt.close(fig)
    print(f"Saved: {output}")


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
