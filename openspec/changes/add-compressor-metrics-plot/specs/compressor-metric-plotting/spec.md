## ADDED Requirements

### Requirement: Select a supported compressor metric
The plotting CLI SHALL require `--metric` and SHALL accept exactly `compression-speed`, `decompression-speed`, or `compression-ratio`, mapping them to the corresponding NEXUS metric columns.

#### Scenario: Select compression speed
- **WHEN** the user runs `plot_compressor_metrics.py --metric compression-speed`
- **THEN** the generated figure plots the `Compression speed` values in MB/s

#### Scenario: Reject a missing metric
- **WHEN** the user runs `plot_compressor_metrics.py` without `--metric`
- **THEN** argument parsing fails with usage information and no figure is generated

#### Scenario: Reject an unsupported metric
- **WHEN** the user supplies a `--metric` value outside the three supported choices
- **THEN** argument parsing rejects the value and no figure is generated

### Requirement: Build compressor distributions from NEXUS data
The plotting system SHALL validate the configured NEXUS CSV, exclude `memcpy`, transform the selected metric with the existing v2 metric semantics, and aggregate all matching programs, architectures, and build configurations into one boxplot per compressor and executable family.

#### Scenario: Plot compression ratio
- **WHEN** the selected metric is `compression-ratio`
- **THEN** each plotted value uses the existing `100 / Ratio` transformation and the y-axis reports compression ratio in x:1 units

#### Scenario: Exclude the copy baseline
- **WHEN** the input contains records whose compressor name is `memcpy`
- **THEN** those records do not create a boxplot or x-axis category

#### Scenario: Combine traditional compiler families
- **WHEN** the input contains GCC and Clang records for a compressor
- **THEN** those records contribute to a single GCC/Clang distribution for that compressor

### Requirement: Render the requested three-panel figure
The plotting system SHALL render a three-row, one-column boxplot figure ordered as GraalVM, .NET, and GCC/Clang, with compressor name on the shared x-axis and the selected metric on a shared y scale.

#### Scenario: Render comparable family panels
- **WHEN** a supported metric is plotted from valid NEXUS data
- **THEN** the figure contains exactly three family panels in the required order with identical alphabetical compressor positions

#### Scenario: Render paper-style labels and scales
- **WHEN** the figure is rendered
- **THEN** it uses cleaned compressor labels, v2 paper boxplot styling, the selected metric's unit label, and the reference metric limits and ticks

### Requirement: Save deterministic metric output
The plotting system SHALL save a PDF named `nexus_compressor_<metric>_distributions.pdf` in the configured output directory, with hyphens in the metric key replaced by underscores.

#### Scenario: Save decompression-speed output
- **WHEN** the user selects `decompression-speed` and supplies an output directory
- **THEN** the system saves `nexus_compressor_decompression_speed_distributions.pdf` in that directory

### Requirement: Generate compressor plots from the aggregate runner
The aggregate v2 plotting runner SHALL generate one compressor distribution figure for each supported metric while preserving all existing outputs.

#### Scenario: Run all v2 plots
- **WHEN** the user runs `plot_v2_all.py` with valid input and output paths
- **THEN** the runner produces the compression-speed, decompression-speed, and compression-ratio compressor PDFs in addition to its existing figures
