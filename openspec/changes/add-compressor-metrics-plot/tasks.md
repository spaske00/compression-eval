## 1. Metric CLI and Data Preparation

- [x] 1.1 Create `results/plot_compressor_metrics.py` with required metric choices, existing NEXUS/output path defaults, explicit metric-column mapping, and deterministic output naming.
- [x] 1.2 Load and validate NEXUS data, exclude `memcpy`, transform the selected metric, merge GCC and Clang into `gcc_clang`, and establish one alphabetical compressor order shared by all panels.

## 2. Compressor Distribution Figure

- [x] 2.1 Implement one paper-styled boxplot per compressor and executable family using hidden fliers, consistent colors, cleaned compressor labels, and horizontal grid lines.
- [x] 2.2 Build the shared-axis 3x1 figure in GraalVM, .NET, GCC/Clang order with the selected metric's label, reference limits and ticks, bottom-only compressor labels, and metric-specific PDF output.

## 3. Aggregate Runner and Verification

- [x] 3.1 Update `results/plot_v2_all.py` to generate all three compressor-metric figures without changing its existing outputs.
- [x] 3.2 Verify all supported standalone metric invocations generate non-empty, single-page PDFs with three panels and 34 non-`memcpy` compressor positions.
- [x] 3.3 Verify missing and unsupported metric arguments fail, then run the aggregate v2 plot command and visually inspect panel order, labels, units, scales, ratio transformation, and GCC/Clang merging.
