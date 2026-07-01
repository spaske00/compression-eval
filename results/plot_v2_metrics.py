#!/usr/bin/env python3

import argparse
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np
from matplotlib.patches import Patch

from file_metric_config import ENABLED_FILE_METRICS, apply_metric_axis
from plot_v2_data import artifact_frame, load_nexus, require_file_metric, transformed_series
from plot_v2_style import (
    PAPER_WIDTH,
    apply_style,
    metric_label,
    ordered_toolchains,
    save_pdf,
    toolchain_label,
)


GLOBAL_CONFIG_ORDER = [
    "debug",
    "O0",
    "Og",
    "O1",
    "O2",
    "O3",
    "Of",
    "Os",
    "prof",
    "release",
    "sf",
    "static",
    "static-sf",
]


def ordered_global_configs(values):
    present = set(values)
    ordered = [value for value in GLOBAL_CONFIG_ORDER if value in present]
    ordered.extend(sorted(present - set(ordered), key=str))
    return ordered


def output_name(metric):
    return f"{metric.replace('/', '_')}.pdf"


def plot_metric(nexus_path, out_dir, metric, ymin=None, ymax=None):
    apply_style()
    nexus = load_nexus(nexus_path)
    require_file_metric(nexus, metric)
    artifacts = artifact_frame(nexus)
    artifacts = artifacts.copy()
    artifacts[metric] = transformed_series(artifacts, metric)

    configs = ordered_global_configs(artifacts["config"].dropna().unique())
    toolchains = ordered_toolchains(artifacts["toolchain"].dropna().unique())
    x_positions = np.arange(len(configs), dtype=float)
    colors = plt.get_cmap("tab10")(np.linspace(0.0, 0.8, max(1, len(toolchains))))
    offsets = np.linspace(-0.33, 0.33, max(1, len(toolchains)))
    width = min(0.16, 0.58 / max(1, len(toolchains)))

    fig, ax = plt.subplots(figsize=(PAPER_WIDTH, 3.6))
    for toolchain, color, offset in zip(toolchains, colors, offsets):
        data = []
        positions = []
        subset = artifacts.loc[artifacts["toolchain"] == toolchain]
        for index, config in enumerate(configs):
            values = subset.loc[subset["config"] == config, metric].dropna().to_numpy()
            if values.size == 0:
                continue
            data.append(values)
            positions.append(x_positions[index] + offset)
        if not data:
            continue

        box = ax.boxplot(
            data,
            positions=positions,
            widths=width,
            patch_artist=True,
            showfliers=False,
            medianprops={"color": "black", "linewidth": 0.8},
            whiskerprops={"linewidth": 0.6},
            capprops={"linewidth": 0.6},
            boxprops={"linewidth": 0.6},
        )
        for patch in box["boxes"]:
            patch.set_facecolor(color)
            patch.set_alpha(0.72)

    for index in range(len(configs) - 1):
        ax.axvline(index + 0.5, color="0.88", linewidth=0.55, zorder=0)

    ax.set_axisbelow(True)
    ax.grid(True, axis="y", alpha=0.28)
    ax.set_xlim(-0.55, len(configs) - 0.45)
    ax.set_xticks(x_positions)
    ax.set_xticklabels(configs, rotation=45, ha="right")
    ax.set_xlabel("Build configuration")
    ax.set_ylabel(metric_label(metric))

    if ymin is not None or ymax is not None:
        current_ymin, current_ymax = ax.get_ylim()
        ax.set_ylim(
            ymin if ymin is not None else current_ymin,
            ymax if ymax is not None else current_ymax,
        )
        # Explicit bounds override only the configured limits, not scale or ticks.
        from file_metric_config import metric_spec
        spec = metric_spec(metric)
        if spec.scale == "symlog":
            ax.set_yscale("symlog", linthresh=spec.symlog_threshold)
        if spec.ticks is not None:
            ax.set_yticks(spec.ticks)
            if spec.tick_labels is not None:
                ax.set_yticklabels(spec.tick_labels)
    else:
        apply_metric_axis(ax, metric, artifacts[metric])

    handles = [
        Patch(facecolor=color, edgecolor="black", linewidth=0.5, alpha=0.72, label=toolchain_label(toolchain))
        for toolchain, color in zip(toolchains, colors)
    ]
    ax.legend(handles=handles, frameon=False, ncol=4, loc="upper center", bbox_to_anchor=(0.5, 1.12))

    fig.subplots_adjust(left=0.085, right=0.995, top=0.85, bottom=0.27)
    save_pdf(fig, Path(out_dir) / output_name(metric))


def main():
    base_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(description="Plot one executable statistic by build configuration and platform.")
    parser.add_argument("metric", nargs="?", default="Entropy", choices=ENABLED_FILE_METRICS)
    parser.add_argument("ymin", nargs="?", type=float)
    parser.add_argument("ymax", nargs="?", type=float)
    parser.add_argument("--nexus", default=base_dir / "nexus.csv", type=Path)
    parser.add_argument("--out-dir", default=base_dir / "plots-v2", type=Path)
    args = parser.parse_args()
    plot_metric(args.nexus, args.out_dir, args.metric, args.ymin, args.ymax)


if __name__ == "__main__":
    main()
