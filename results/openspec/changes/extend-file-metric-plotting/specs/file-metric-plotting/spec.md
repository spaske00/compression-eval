# file-metric-plotting Specification

## Requirements

### Central metric configuration

The system SHALL expose frozen specifications and one ordered, comment-friendly enabled metric list. Disabled metrics SHALL disappear from v2 CLI/batch/summary surfaces and legacy sort dimensions.

### Numeric scope

The system SHALL support the six legacy executable statistics and Byte Entropy, Byte Chi-Square, Byte Monte Carlo Pi, Byte Serial Correlation, Conditional Entropy, Bigram Entropy, and Lempel-Ziv Complexity. It SHALL NOT register `File-Size-Bytes` or section JSON fields.

### Compatibility and availability

The system SHALL continue requiring legacy input columns. Batch workflows SHALL report and skip an appended metric whose column is absent or has no finite values. A direct request SHALL fail clearly in either case.

### Output behavior

V2 SHALL coerce enabled metrics to numeric and create an individual PDF for each available enabled metric. The build-stat summary SHALL retain its filename, follow enabled order, contain no more than five metric rows per page, and use as many pages as necessary. Legacy performance plots SHALL continue using compression speed, decompression speed, and ratio as outcomes while sorting by every available enabled metric.
