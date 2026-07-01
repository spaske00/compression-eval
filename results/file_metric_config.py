"""Single source of truth for file-level metrics used by every plotter."""

from dataclasses import dataclass
from typing import Optional, Tuple


@dataclass(frozen=True)
class MetricSpec:
    label: str
    short_label: str
    limits: Optional[Tuple[float, float]] = None
    scale: str = "linear"
    symlog_threshold: Optional[float] = None
    ticks: Optional[Tuple[float, ...]] = None
    tick_labels: Optional[Tuple[str, ...]] = None
    divisor: Optional[float] = None


MIB = 1024 * 1024
N_BIT_ENTROPY_WIDTHS = (1, 2, 4, 8, 16, 32, 64, 128, 256)
N_BIT_ENTROPY_METRICS = tuple(
    f"{width}-Bit-Entropy" for width in N_BIT_ENTROPY_WIDTHS
)

FILE_METRIC_SPECS = {
    "Entropy": MetricSpec("Entropy", "Entropy", (0.25, 1), ticks=(0.25, 0.5, 0.75, 1)),
    "Chi-square": MetricSpec(
        "Chi-square", "Chi-square", (0, 400_000_000), "symlog", 100_000,
        (0, 100_000, 1_000_000, 10_000_000, 100_000_000),
        ("0", "1e5", "1e6", "1e7", "1e8"),
    ),
    "Mean": MetricSpec("Mean", "Mean"),
    "Monte-Carlo-Pi": MetricSpec("Monte Carlo pi", "MC pi"),
    "Serial-Correlation": MetricSpec("Serial correlation", "Serial corr."),
    "Original size": MetricSpec(
        "Original size (MiB)", "Size (MiB)", (0, 150), "symlog", 1,
        (0, 1, 10, 100), ("0", "1", "10", "100"), MIB,
    ),
    "Byte-Entropy": MetricSpec("Byte entropy", "Byte entropy", (0, 8)),
    "Byte-Chi-Square": MetricSpec(
        "Byte chi-square", "Byte chi-square", scale="symlog", symlog_threshold=100_000,
        ticks=(0, 100_000, 1_000_000, 10_000_000, 100_000_000),
        tick_labels=("0", "1e5", "1e6", "1e7", "1e8"),
    ),
    "Byte-Monte-Carlo-Pi": MetricSpec("Byte Monte Carlo pi", "Byte MC pi", (0, 4)),
    "Byte-Serial-Correlation": MetricSpec("Byte serial correlation", "Byte serial corr.", (-1, 1)),
    "Conditional-Entropy": MetricSpec("Conditional entropy", "Conditional entropy", (0, 8)),
    "Bigram-Entropy": MetricSpec("Bigram entropy", "Bigram entropy", (0, 16)),
    "Lempel-Ziv-Complexity": MetricSpec("LZ78 complexity", "LZ78 complexity"),
    **{
        name: MetricSpec(
            f"{width}-bit entropy (bits/block)", f"{width}-bit entropy"
        )
        for width, name in zip(N_BIT_ENTROPY_WIDTHS, N_BIT_ENTROPY_METRICS)
    },
}

# Comment out an entry here to remove it from all v2 and legacy plot surfaces.
ENABLED_FILE_METRICS = [
    "Entropy",
    "Chi-square",
    "Mean",
    "Monte-Carlo-Pi",
    "Serial-Correlation",
    "Original size",
    "Byte-Entropy",
    "Byte-Chi-Square",
    "Byte-Monte-Carlo-Pi",
    "Byte-Serial-Correlation",
    "Conditional-Entropy",
    "Bigram-Entropy",
    "Lempel-Ziv-Complexity",
    *N_BIT_ENTROPY_METRICS,
]


def metric_spec(metric):
    try:
        return FILE_METRIC_SPECS[metric]
    except KeyError as error:
        raise ValueError(f"Unknown file metric: {metric}") from error


def apply_metric_axis(ax, metric, values=None):
    """Apply registry-defined axis behavior, using data padding when requested."""
    spec = metric_spec(metric)
    if spec.scale == "symlog":
        ax.set_yscale("symlog", linthresh=spec.symlog_threshold)
    limits = spec.limits
    if limits is None and values is not None:
        import numpy as np

        finite = np.asarray(values, dtype=float)
        finite = finite[np.isfinite(finite)]
        if finite.size:
            low, high = float(finite.min()), float(finite.max())
            padding = (high - low) * 0.05 if high != low else max(abs(low) * 0.05, 0.5)
            limits = (low - padding, high + padding)
    if limits is not None:
        ax.set_ylim(*limits)
    if spec.ticks is not None:
        ax.set_yticks(spec.ticks)
        if spec.tick_labels is not None:
            ax.set_yticklabels(spec.tick_labels)
