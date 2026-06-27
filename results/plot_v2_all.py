#!/usr/bin/env python3

import argparse
from pathlib import Path

import plot_v2_build_compression
import plot_v2_build_stats
import plot_v2_metrics


METRICS = [
    "Entropy",
    "Chi-square",
    "Mean",
    "Monte-Carlo-Pi",
    "Serial-Correlation",
]


def main():
    base_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(description="Run all v2 plotting scripts.")
    parser.add_argument("--nexus", default=base_dir / "nexus.csv", type=Path)
    parser.add_argument("--out-dir", default=base_dir / "plots-v2", type=Path)
    args = parser.parse_args()

    plot_v2_build_stats.generate(args.nexus, args.out_dir)
    plot_v2_build_compression.generate(args.nexus, args.out_dir)
    for metric in METRICS:
        plot_v2_metrics.plot_metric(args.nexus, args.out_dir, metric)


if __name__ == "__main__":
    main()
