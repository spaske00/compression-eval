## Context

`results/plot_v2_build_compression.py` plots three compression metrics against build configuration in a metric-by-executable-family grid. The requested view instead compares the 34 non-`memcpy` compressors directly for one selected metric while retaining the existing v2 data validation, transformations, labels, limits, and paper styling. Because every executable family contains the same compressor set, the panels can share a stable compressor axis.

## Goals / Non-Goals

**Goals:**

- Provide a required, human-readable CLI selector for the three compression metrics.
- Compare per-compressor distributions in vertically stacked GraalVM, .NET, and GCC/Clang panels.
- Keep the figures visually and semantically consistent with the existing v2 compression plot.
- Include all three new figures in the aggregate v2 plot runner.

**Non-Goals:**

- Replace or change the existing build-configuration plots.
- Add configuration-level grouping, per-program filtering, interactive output, or new dependencies.
- Include `memcpy` as a compressor or alter the source CSV schema.

## Decisions

### Use an explicit CLI-to-column mapping

`plot_compressor_metrics.py` will require `--metric` with exactly `compression-speed`, `decompression-speed`, or `compression-ratio`. A constant mapping will resolve these values to `Compression speed`, `Decompression speed`, and `Ratio`; unsupported or omitted values will be rejected by `argparse`. This keeps the command stable without exposing CSV capitalization or the abbreviated `Ratio` column name. A default metric was rejected because an omitted research parameter should not silently select an output.

### Aggregate records into one distribution per compressor and family

The script will load and validate `nexus.csv` with `load_nexus`, remove `memcpy` with `compressor_frame`, and transform only the selected metric through the shared transformation logic. GCC and Clang will be relabeled to `gcc_clang`; each compressor box will contain all programs, architectures, and build configurations in that family. Median-only points and configuration-grouped boxes were rejected because they either discard distribution information or make 34 compressor categories unreadably dense.

### Use a shared, stable three-panel layout

The figure will use three rows and one column in the exact order `graalvm`, `dotnet`, and `gcc_clang`. All panels will use the same alphabetically ordered raw compressor keys, cleaned for display with `compressor_label`, and share x and y axes so positions and magnitudes remain directly comparable. Compressor tick labels and the `Compressor name` axis label will appear only on the bottom panel. Each panel will carry its family label and metric y-axis label.

Boxplot styling will mirror `draw_grouped_boxplot`: hidden fliers, black medians, thin whiskers/caps/boxes, Set2-colored patches, and horizontal grid lines. The wide v2 figure width will accommodate the compressor labels. Metric limits and ticks will match the reference compression plot: 0–1000 MB/s for compression speed, 0–4000 MB/s for decompression speed, and 0–5 x:1 for compression ratio. Ratio values will use the existing `100 / Ratio` transformation.

### Use deterministic metric-specific outputs

Each invocation will write `nexus_compressor_<metric>_distributions.pdf` under `--out-dir`, replacing hyphens with underscores in `<metric>`. For example, `--metric compression-speed` produces `nexus_compressor_compression_speed_distributions.pdf`. The aggregate runner will import the new module and invoke it once for each supported CLI key after the existing v2 plots.

## Risks / Trade-offs

- Fixed limits can clip unusually large whiskers in the speed plots. → Retain the reference plot's limits for cross-figure consistency and keep fliers hidden.
- Thirty-four compressor labels make the bottom axis dense. → Use the existing shortened compressor labels, a wide figure, rotated labels, and a shared x-axis with labels on only one panel.
- Combining GCC and Clang increases that panel's sample count relative to GraalVM and .NET. → Treat each box as a distribution rather than comparing box sample counts, and label the combined family explicitly.
- Aggregate-runner execution time increases by three figures. → Reuse the same lightweight plotting path and avoid introducing additional analyses or data passes beyond each invocation.
