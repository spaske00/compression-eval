## Why

The existing v2 compression plot emphasizes build-configuration effects and does not provide a direct, per-compressor comparison across executable families. A focused metric-selectable plot is needed to compare compressor distributions for GraalVM, .NET, and combined GCC/Clang artifacts.

## What Changes

- Add `results/plot_compressor_metrics.py` with a required `--metric` option for compression speed, decompression speed, or compression ratio.
- Plot one boxplot per compressor in a three-row, one-column figure ordered as GraalVM, .NET, and GCC/Clang.
- Reuse the v2 data transformations and paper plotting style, including `memcpy` exclusion and compression-ratio conversion.
- Update `results/plot_v2_all.py` to generate all three compressor-metric figures.

## Capabilities

### New Capabilities

- `compressor-metric-plotting`: Generate metric-selectable compressor distribution plots across the three executable families.

### Modified Capabilities

None.

## Impact

The change adds one plotting CLI, extends the aggregate v2 plotting runner, and produces three additional PDF artifacts under the configured output directory. It reuses the existing pandas/matplotlib data and style modules and introduces no new dependency or breaking interface change.
