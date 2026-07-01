import contextlib
import io
import re
import tempfile
import unittest
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

import file_metric_config as config
from plot_v2_build_stats import METRICS_PER_PAGE, metric_pages, plot_distributions
from plot_v2_data import (
    available_file_metrics,
    load_nexus,
    require_file_metric,
    transformed_metric_frame,
    transformed_series,
)
from plot_v2_metrics import plot_metric
from plot_v2_style import metric_label, short_metric_label


LEGACY_COLUMNS = {
    "Filename": "hello-gcc-linux-x64-O2/file.bin",
    "Compressor name": "zstd",
    "Compression speed": 10,
    "Decompression speed": 20,
    "Original size": 1048576,
    "Compressed size": 524288,
    "Ratio": 2,
    "Entropy": 0.8,
    "Chi-square": 1000000,
    "Mean": 127,
    "Monte-Carlo-Pi": 3.14,
    "Serial-Correlation": 0.1,
}


def extended_frame():
    rows = []
    for toolchain, config_name in (("gcc", "O2"), ("clang", "O3")):
        for index in range(2):
            row = dict(LEGACY_COLUMNS)
            row["Filename"] = f"hello-{toolchain}-linux-x64-{config_name}/file{index}.bin"
            for offset, metric in enumerate(config.ENABLED_FILE_METRICS[6:], start=1):
                row[metric] = float(offset + index)
            rows.append(row)
    return pd.DataFrame(rows)


class MetricConfigTests(unittest.TestCase):
    def test_enabled_registry_is_ordered_and_excludes_non_metrics(self):
        self.assertEqual(len(config.ENABLED_FILE_METRICS), 22)
        self.assertTrue(set(config.ENABLED_FILE_METRICS) <= set(config.FILE_METRIC_SPECS))
        self.assertTrue({"File-Size-Bytes", "Section-Format", "Section-Size-Ratios", "Section-Entropies"}.isdisjoint(config.FILE_METRIC_SPECS))
        self.assertEqual(config.ENABLED_FILE_METRICS.count("Original size"), 1)
        self.assertEqual(
            tuple(config.ENABLED_FILE_METRICS[-9:]), config.N_BIT_ENTROPY_METRICS
        )

    def test_configured_axis_contracts(self):
        self.assertEqual(config.metric_spec("Byte-Entropy").limits, (0, 8))
        self.assertEqual(config.metric_spec("Conditional-Entropy").limits, (0, 8))
        self.assertEqual(config.metric_spec("Bigram-Entropy").limits, (0, 16))
        self.assertEqual(config.metric_spec("Byte-Monte-Carlo-Pi").limits, (0, 4))
        self.assertEqual(config.metric_spec("Byte-Serial-Correlation").limits, (-1, 1))
        self.assertEqual(config.metric_spec("Byte-Chi-Square").scale, "symlog")
        self.assertIsNone(config.metric_spec("Lempel-Ziv-Complexity").limits)
        for width, metric in zip(
            config.N_BIT_ENTROPY_WIDTHS, config.N_BIT_ENTROPY_METRICS
        ):
            self.assertIsNone(config.metric_spec(metric).limits)
            self.assertEqual(metric_label(metric), f"{width}-bit entropy (bits/block)")
            self.assertEqual(short_metric_label(metric), f"{width}-bit entropy")
        frame = pd.DataFrame({"Original size": [1048576]})
        self.assertEqual(transformed_series(frame, "Original size").iloc[0], 1)

    def test_axis_application_uses_config(self):
        fig, ax = plt.subplots()
        config.apply_metric_axis(ax, "Byte-Serial-Correlation", [-0.2, 0.3])
        self.assertEqual(tuple(ax.get_ylim()), (-1, 1))
        plt.close(fig)

    def test_legacy_input_is_valid_and_appended_metrics_are_optional(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "legacy.csv"
            pd.DataFrame([LEGACY_COLUMNS]).to_csv(path, index=False)
            frame = load_nexus(path)
            output = io.StringIO()
            with contextlib.redirect_stdout(output):
                available = available_file_metrics(frame, report=True)
            self.assertEqual(available, config.ENABLED_FILE_METRICS[:6])
            self.assertIn("Skipping file metric Byte-Entropy: column is missing", output.getvalue())
            self.assertIn("Skipping file metric 1-Bit-Entropy: column is missing", output.getvalue())

    def test_n_bit_metrics_are_numeric_and_available(self):
        frame = extended_frame()
        for metric in config.N_BIT_ENTROPY_METRICS:
            frame[metric] = frame[metric].astype(str)
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "extended.csv"
            frame.to_csv(path, index=False)
            loaded = load_nexus(path)
        available = available_file_metrics(loaded)
        self.assertTrue(set(config.N_BIT_ENTROPY_METRICS) <= set(available))
        for metric in config.N_BIT_ENTROPY_METRICS:
            self.assertTrue(pd.api.types.is_numeric_dtype(loaded[metric]))
            require_file_metric(loaded, metric)

    def test_n_bit_metric_uses_individual_plot_and_analysis_paths(self):
        frame = extended_frame()
        transformed = transformed_metric_frame(frame, config.N_BIT_ENTROPY_METRICS)
        pd.testing.assert_series_equal(
            transformed["32-Bit-Entropy"], frame["32-Bit-Entropy"]
        )
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            path = root / "nexus.csv"
            frame.to_csv(path, index=False)
            plot_metric(path, root / "plots", "32-Bit-Entropy")
            self.assertTrue((root / "plots/32-Bit-Entropy.pdf").is_file())

    def test_all_nan_metric_is_skipped_and_direct_request_fails(self):
        frame = extended_frame()
        frame["256-Bit-Entropy"] = np.nan
        self.assertNotIn("256-Bit-Entropy", available_file_metrics(frame))
        with self.assertRaisesRegex(ValueError, "no finite values"):
            require_file_metric(frame, "256-Bit-Entropy")

    def test_disabling_metric_changes_all_shared_consumers(self):
        disabled = config.ENABLED_FILE_METRICS.pop()
        try:
            frame = extended_frame()
            self.assertNotIn(disabled, available_file_metrics(frame))
            with self.assertRaisesRegex(ValueError, "not enabled"):
                require_file_metric(frame, disabled)
        finally:
            config.ENABLED_FILE_METRICS.append(disabled)

    def test_five_row_pagination_and_pdf_compatibility(self):
        self.assertEqual(
            [len(page) for page in metric_pages(config.ENABLED_FILE_METRICS)],
            [5, 5, 5, 5, 2],
        )
        frame = extended_frame()
        # plot_distributions expects parsed artifact metadata.
        frame["program"] = "hello"
        frame["toolchain"] = ["gcc", "gcc", "clang", "clang"]
        frame["arch"] = "linux-x64"
        frame["config"] = ["O2", "O2", "O3", "O3"]
        with tempfile.TemporaryDirectory() as directory:
            plot_distributions(frame, directory)
            data = (Path(directory) / "nexus_build_stats_distributions.pdf").read_bytes()
            pages = len(re.findall(rb"/Type\s*/Page\b", data))
            self.assertEqual(pages, 5)


if __name__ == "__main__":
    unittest.main()
