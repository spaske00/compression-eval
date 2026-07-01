# Design

`file_metric_config.py` is dependency-free and owns immutable labels, transformations, limits, scales, symlog thresholds, ticks, and enabled order. Plotting modules consume that order rather than maintaining local metric lists.

Legacy columns remain required during ingestion. Appended metrics are optional: batch paths report and skip missing or non-finite columns. Direct v2 requests validate availability and fail with a metric-specific error. `Original size` is transformed to MiB and remains the only registered size metric. Section-valued JSON columns are deliberately absent.

The build-stat summary writes one `nexus_build_stats_distributions.pdf` with up to five metric rows per page. Individual plot filenames and legacy performance outcomes remain unchanged.
