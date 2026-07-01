#!/usr/bin/env python3

import argparse
from pathlib import Path

import plot_compressor_metrics
import plot_v2_build_compression
import plot_v2_build_stats
import plot_v2_metrics
from plot_v2_data import available_file_metrics, load_nexus


def main():
    base_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(description="Run all v2 plotting scripts.")
    parser.add_argument("--nexus", default=base_dir / "nexus.csv", type=Path)
    parser.add_argument("--out-dir", default=base_dir / "plots-v2", type=Path)
    args = parser.parse_args()

    plot_v2_build_stats.generate(args.nexus, args.out_dir)
    plot_v2_build_compression.generate(args.nexus, args.out_dir)
    nexus = load_nexus(args.nexus)
    for metric in available_file_metrics(nexus, report=True):
        plot_v2_metrics.plot_metric(args.nexus, args.out_dir, metric)
    for metric in plot_compressor_metrics.METRICS:
        plot_compressor_metrics.generate(args.nexus, args.out_dir, metric)


if __name__ == "__main__":
    main()
