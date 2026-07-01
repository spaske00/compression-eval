import re
import sys
import tempfile
import unittest
from pathlib import Path
from unittest import mock

import matplotlib.pyplot as plt
import pandas as pd

import plot_compressor_metrics
import plot_v2_all
from plot_compressor_metrics import (
    METRICS,
    compressor_order,
    prepare_compressor_frame,
    prepare_frame,
)
from plot_v2_data import load_nexus, load_silesia


def compression_row(filename, compressor, *, ratio=50.0):
    return {
        "Filename": filename,
        "Compressor name": compressor,
        "Compression speed": 100.0,
        "Decompression speed": 200.0,
        "Original size": 1000,
        "Compressed size": 500,
        "Ratio": ratio,
        "Entropy": 0.8,
        "Chi-square": 10.0,
        "Mean": 127.0,
        "Monte-Carlo-Pi": 3.14,
        "Serial-Correlation": 0.1,
    }


def nexus_frame():
    rows = []
    for toolchain in ("graalvm", "dotnet", "gcc", "clang"):
        filename = f"hello-{toolchain}-linux-x64-O2/file.bin"
        rows.extend(
            [
                compression_row(filename, "memcpy", ratio=100.0),
                compression_row(filename, "lz4", ratio=50.0),
                compression_row(filename, "zstd", ratio=25.0),
            ]
        )
    return pd.DataFrame(rows)


def silesia_frame():
    rows = []
    for filename in ("dickens", "mozilla"):
        rows.extend(
            [
                compression_row(filename, "memcpy", ratio=100.0),
                compression_row(filename, "lz4", ratio=50.0),
                compression_row(filename, "zstd", ratio=25.0),
            ]
        )
    return pd.DataFrame(rows)


class CompressorMetricDataTests(unittest.TestCase):
    def test_silesia_preparation_matches_nexus_metric_semantics(self):
        prepared = prepare_compressor_frame(silesia_frame(), "Ratio")

        self.assertNotIn("memcpy", prepared["Compressor name"].unique())
        self.assertEqual(
            prepared.loc[prepared["Compressor name"] == "zstd", "Ratio"].tolist(),
            [4.0, 4.0],
        )
        self.assertEqual(
            prepared.loc[prepared["Compressor name"] == "zstd", "Filename"].nunique(),
            2,
        )

    def test_compressor_order_is_the_sorted_union_of_both_inputs(self):
        nexus = prepare_frame(
            pd.DataFrame(
                [
                    compression_row("hello-gcc-linux-x64-O2/file.bin", "zstd"),
                    compression_row("hello-gcc-linux-x64-O2/file.bin", "lz4"),
                ]
            ).assign(toolchain="gcc"),
            "Compression speed",
        )
        silesia = prepare_compressor_frame(
            pd.DataFrame([compression_row("dickens", "brotli")]),
            "Compression speed",
        )

        self.assertEqual(compressor_order(nexus, silesia), ["brotli", "lz4", "zstd"])

    def test_invalid_silesia_schema_fails_before_saving_output(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            nexus_path = root / "nexus.csv"
            silesia_path = root / "invalid-silesia.csv"
            out_dir = root / "plots"
            nexus_frame().to_csv(nexus_path, index=False)
            silesia_frame().drop(columns="Ratio").to_csv(silesia_path, index=False)

            with self.assertRaisesRegex(
                ValueError, r"missing required columns: \['Ratio'\]"
            ):
                plot_compressor_metrics.generate(
                    nexus_path,
                    out_dir,
                    "compression-speed",
                    silesia_path=silesia_path,
                )

            self.assertFalse(out_dir.exists())


class CompressorMetricPlotTests(unittest.TestCase):
    def test_all_metrics_generate_single_page_four_panel_pdfs(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            nexus_path = root / "nexus.csv"
            silesia_path = root / "silesia.csv"
            out_dir = root / "plots"
            nexus_frame().to_csv(nexus_path, index=False)
            silesia_frame().to_csv(silesia_path, index=False)
            captured = []

            def save_and_capture(fig, path):
                path = Path(path)
                path.parent.mkdir(parents=True, exist_ok=True)
                captured.append(
                    {
                        "panel_labels": [ax.texts[0].get_text() for ax in fig.axes],
                        "xlabels": [ax.get_xlabel() for ax in fig.axes],
                        "top_tick_labels": [
                            label.get_text() for label in fig.axes[0].get_xticklabels()
                        ],
                        "bottom_tick_labels": [
                            label.get_text() for label in fig.axes[-1].get_xticklabels()
                        ],
                    }
                )
                fig.savefig(path, bbox_inches="tight", pad_inches=0.025)
                plt.close(fig)

            with mock.patch.object(
                plot_compressor_metrics, "save_pdf", side_effect=save_and_capture
            ):
                for metric_key in METRICS:
                    plot_compressor_metrics.generate(
                        nexus_path,
                        out_dir,
                        metric_key,
                        silesia_path=silesia_path,
                    )

            self.assertEqual(len(captured), len(METRICS))
            for metric_key, figure in zip(METRICS, captured):
                path = out_dir / plot_compressor_metrics.output_name(metric_key)
                self.assertGreater(path.stat().st_size, 0)
                pages = len(re.findall(rb"/Type\s*/Page\b", path.read_bytes()))
                self.assertEqual(pages, 1)
                self.assertEqual(
                    figure["panel_labels"],
                    ["GraalVM", ".NET", "GCC/Clang", "Silesia"],
                )
                self.assertEqual(figure["xlabels"], ["", "", "", "Compressor name"])
                self.assertEqual(figure["top_tick_labels"], [])
                self.assertEqual(figure["bottom_tick_labels"], ["lz4", "zstd"])


class CompressorMetricEntryPointTests(unittest.TestCase):
    def test_generate_api_defaults_silesia_without_breaking_positional_callers(self):
        base_dir = Path(plot_compressor_metrics.__file__).resolve().parent
        summary = {
            "artifact_count": 1,
            "unparsed_count": 0,
            "non_memcpy_compressors": 1,
        }
        with mock.patch.object(
            plot_compressor_metrics, "apply_style"
        ), mock.patch.object(
            plot_compressor_metrics, "load_nexus", return_value="nexus"
        ), mock.patch.object(
            plot_compressor_metrics, "load_silesia", return_value="silesia"
        ) as load_silesia_mock, mock.patch.object(
            plot_compressor_metrics, "nexus_summary", return_value=summary
        ), mock.patch.object(
            plot_compressor_metrics, "prepare_frame", return_value="nexus-frame"
        ), mock.patch.object(
            plot_compressor_metrics,
            "prepare_compressor_frame",
            return_value="silesia-frame",
        ), mock.patch.object(
            plot_compressor_metrics, "plot_metric"
        ) as plot_metric_mock:
            plot_compressor_metrics.generate(
                Path("nexus.csv"), Path("plots"), "compression-speed"
            )

        load_silesia_mock.assert_called_once_with(base_dir / "silesia.csv")
        plot_metric_mock.assert_called_once_with(
            "nexus-frame", "silesia-frame", Path("plots"), "compression-speed"
        )

    def test_standalone_entry_point_uses_default_silesia_path(self):
        base_dir = Path(plot_compressor_metrics.__file__).resolve().parent
        with mock.patch.object(
            sys,
            "argv",
            ["plot_compressor_metrics.py", "--metric", "compression-speed"],
        ), mock.patch.object(plot_compressor_metrics, "generate") as generate:
            plot_compressor_metrics.main()

        generate.assert_called_once_with(
            base_dir / "nexus.csv",
            base_dir / "plots-v2",
            "compression-speed",
            silesia_path=base_dir / "silesia.csv",
        )

    def test_standalone_entry_point_accepts_overridden_silesia_path(self):
        with mock.patch.object(
            sys,
            "argv",
            [
                "plot_compressor_metrics.py",
                "--metric",
                "compression-ratio",
                "--nexus",
                "custom-nexus.csv",
                "--silesia",
                "custom-silesia.csv",
                "--out-dir",
                "custom-plots",
            ],
        ), mock.patch.object(plot_compressor_metrics, "generate") as generate:
            plot_compressor_metrics.main()

        generate.assert_called_once_with(
            Path("custom-nexus.csv"),
            Path("custom-plots"),
            "compression-ratio",
            silesia_path=Path("custom-silesia.csv"),
        )

    def test_aggregate_entry_point_propagates_default_silesia_path(self):
        base_dir = Path(plot_v2_all.__file__).resolve().parent
        self._assert_aggregate_paths(
            ["plot_v2_all.py"],
            base_dir / "nexus.csv",
            base_dir / "silesia.csv",
            base_dir / "plots-v2",
        )

    def test_aggregate_entry_point_propagates_overridden_silesia_path(self):
        self._assert_aggregate_paths(
            [
                "plot_v2_all.py",
                "--nexus",
                "custom-nexus.csv",
                "--silesia",
                "custom-silesia.csv",
                "--out-dir",
                "custom-plots",
            ],
            Path("custom-nexus.csv"),
            Path("custom-silesia.csv"),
            Path("custom-plots"),
        )

    def _assert_aggregate_paths(self, argv, nexus_path, silesia_path, out_dir):
        with mock.patch.object(sys, "argv", argv), mock.patch.object(
            plot_v2_all.plot_v2_build_stats, "generate"
        ), mock.patch.object(
            plot_v2_all.plot_v2_build_compression, "generate"
        ), mock.patch.object(
            plot_v2_all, "load_nexus", return_value=object()
        ), mock.patch.object(
            plot_v2_all, "available_file_metrics", return_value=[]
        ), mock.patch.object(
            plot_v2_all.plot_compressor_metrics, "generate"
        ) as generate:
            plot_v2_all.main()

        self.assertEqual(
            generate.call_args_list,
            [
                mock.call(
                    nexus_path,
                    out_dir,
                    metric_key,
                    silesia_path=silesia_path,
                )
                for metric_key in METRICS
            ],
        )


if __name__ == "__main__":
    unittest.main()
