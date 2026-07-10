# NEXUS: Native Executable Compression Benchmark Set

NEXUS is a benchmark set for empirical studies on different families of native
executable artifacts. It provides source programs and build scripts that
generate executables through traditional C/C++ compilation, GraalVM Native Image
for JVM-based languages, and .NET native publishing workflows.

## Benchmark Composition

NEXUS contains three primary executable families: common native executables,
GraalVM native images, and .NET native images. The following table lists the
source programs and templates included in each family.

| Family               | Executable or template                        | Source tree                                                                                                                          | Language   | Description                                       |
| -------------------- | --------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ | ---------- | ------------------------------------------------- |
| Common native        | `hello-world`                                 | [`corpus/src/_shared/c/hello-world/`](corpus/src/_shared/c/hello-world/)                                                             | C          | Minimal executable program.                       |
| Common native        | `jq`                                          | [`corpus/src/_shared/c/jq/`](corpus/src/_shared/c/jq/)                                                                               | C          | jq command-line JSON processor.                   |
| Common native        | `sqlite`                                      | [`corpus/src/_shared/c/sqlite/`](corpus/src/_shared/c/sqlite/)                                                                       | C          | SQLite command-line database shell.               |
| Common native        | `llvm-test-suite`                             | [`corpus/src/_shared/c/llvm-test-suite/`](corpus/src/_shared/c/llvm-test-suite/)                                                     | C/C++      | Curated LLVM `MultiSource` subset.                |
| GraalVM native image | `barista-native-image:helidon-hello-world`    | [`corpus/src/graalvm/barista-native-image:helidon-hello-world/`](corpus/src/graalvm/barista-native-image:helidon-hello-world/)       | Java       | Helidon service from Barista.                     |
| GraalVM native image | `barista-native-image:micronaut-hello-world`  | [`corpus/src/graalvm/barista-native-image:micronaut-hello-world/`](corpus/src/graalvm/barista-native-image:micronaut-hello-world/)   | Java       | Micronaut service from Barista.                   |
| GraalVM native image | `barista-native-image:micronaut-shopcart`     | [`corpus/src/graalvm/barista-native-image:micronaut-shopcart/`](corpus/src/graalvm/barista-native-image:micronaut-shopcart/)         | Java       | Micronaut shop-cart service from Barista.         |
| GraalVM native image | `barista-native-image:micronaut-similarity`   | [`corpus/src/graalvm/barista-native-image:micronaut-similarity/`](corpus/src/graalvm/barista-native-image:micronaut-similarity/)     | Java       | Micronaut similarity service from Barista.        |
| GraalVM native image | `barista-native-image:play-scala-hello-world` | [`corpus/src/graalvm/barista-native-image:play-scala-hello-world/`](corpus/src/graalvm/barista-native-image:play-scala-hello-world/) | Scala      | Play service from Barista.                        |
| GraalVM native image | `barista-native-image:quarkus-hello-world`    | [`corpus/src/graalvm/barista-native-image:quarkus-hello-world/`](corpus/src/graalvm/barista-native-image:quarkus-hello-world/)       | Java       | Quarkus service from Barista.                     |
| GraalVM native image | `barista-native-image:quarkus-tika`           | [`corpus/src/graalvm/barista-native-image:quarkus-tika/`](corpus/src/graalvm/barista-native-image:quarkus-tika/)                     | Java       | Quarkus document-processing service from Barista. |
| GraalVM native image | `barista-native-image:spring-hello-world`     | [`corpus/src/graalvm/barista-native-image:spring-hello-world/`](corpus/src/graalvm/barista-native-image:spring-hello-world/)         | Java       | Spring service from Barista.                      |
| GraalVM native image | `barista-native-image:spring-petclinic`       | [`corpus/src/graalvm/barista-native-image:spring-petclinic/`](corpus/src/graalvm/barista-native-image:spring-petclinic/)             | Java       | Spring PetClinic service from Barista.            |
| GraalVM native image | `barista-native-image:vanilla-hello-world`    | [`corpus/src/graalvm/barista-native-image:vanilla-hello-world/`](corpus/src/graalvm/barista-native-image:vanilla-hello-world/)       | Java       | Minimal Java service from Barista.                |
| GraalVM native image | `dacapo-native-image:fop`                     | [`corpus/src/graalvm/dacapo-native-image:fop/`](corpus/src/graalvm/dacapo-native-image:fop/)                                         | Java       | DaCapo `fop` workload.                            |
| GraalVM native image | `dacapo-native-image:luindex`                 | [`corpus/src/graalvm/dacapo-native-image:luindex/`](corpus/src/graalvm/dacapo-native-image:luindex/)                                 | Java       | DaCapo `luindex` workload.                        |
| GraalVM native image | `dacapo-native-image:lusearch`                | [`corpus/src/graalvm/dacapo-native-image:lusearch/`](corpus/src/graalvm/dacapo-native-image:lusearch/)                               | Java       | DaCapo `lusearch` workload.                       |
| GraalVM native image | `dacapo-native-image:pmd`                     | [`corpus/src/graalvm/dacapo-native-image:pmd/`](corpus/src/graalvm/dacapo-native-image:pmd/)                                         | Java       | DaCapo `pmd` workload.                            |
| GraalVM native image | `dacapo-native-image:sunflow`                 | [`corpus/src/graalvm/dacapo-native-image:sunflow/`](corpus/src/graalvm/dacapo-native-image:sunflow/)                                 | Java       | DaCapo `sunflow` workload.                        |
| GraalVM native image | `dacapo-native-image:xalan`                   | [`corpus/src/graalvm/dacapo-native-image:xalan/`](corpus/src/graalvm/dacapo-native-image:xalan/)                                     | Java       | DaCapo `xalan` workload.                          |
| GraalVM native image | `embedded-js`                                 | [`corpus/src/graalvm/embedded-js/`](corpus/src/graalvm/embedded-js/)                                                                 | Java       | Java program with embedded JavaScript execution.  |
| GraalVM native image | `fork-join-pool`                              | [`corpus/src/graalvm/fork-join-pool/`](corpus/src/graalvm/fork-join-pool/)                                                           | Java       | Fork-join parallel computation.                   |
| GraalVM native image | `fork-join-pool-isolate`                      | [`corpus/src/graalvm/fork-join-pool-isolate/`](corpus/src/graalvm/fork-join-pool-isolate/)                                           | Java       | Fork-join workload using a GraalVM isolate.       |
| GraalVM native image | `hello-isolate`                               | [`corpus/src/graalvm/hello-isolate/`](corpus/src/graalvm/hello-isolate/)                                                             | Java       | Minimal GraalVM isolate application.              |
| GraalVM native image | `hello-world`                                 | [`corpus/src/graalvm/hello-world/`](corpus/src/graalvm/hello-world/)                                                                 | Java       | Minimal Java application.                         |
| GraalVM native image | `jmh-native`                                  | [`corpus/src/graalvm/jmh-native/`](corpus/src/graalvm/jmh-native/)                                                                   | Java       | JMH-based native-image workload.                  |
| GraalVM native image | `micronaut-hello`                             | [`corpus/src/graalvm/micronaut-hello/`](corpus/src/graalvm/micronaut-hello/)                                                         | Java       | Minimal Micronaut web API.                        |
| GraalVM native image | `quarkus-hello`                               | [`corpus/src/graalvm/quarkus-hello/`](corpus/src/graalvm/quarkus-hello/)                                                             | Java       | Minimal Quarkus web API.                          |
| GraalVM native image | `renaissance-native-image:akka-uct`           | [`corpus/src/graalvm/renaissance-native-image:akka-uct/`](corpus/src/graalvm/renaissance-native-image:akka-uct/)                     | Java/Scala | Renaissance `akka-uct` workload.                  |
| GraalVM native image | `renaissance-native-image:finagle-http`       | [`corpus/src/graalvm/renaissance-native-image:finagle-http/`](corpus/src/graalvm/renaissance-native-image:finagle-http/)             | Java/Scala | Renaissance `finagle-http` workload.              |
| GraalVM native image | `renaissance-native-image:fj-kmeans`          | [`corpus/src/graalvm/renaissance-native-image:fj-kmeans/`](corpus/src/graalvm/renaissance-native-image:fj-kmeans/)                   | Java/Scala | Renaissance `fj-kmeans` workload.                 |
| GraalVM native image | `renaissance-native-image:future-genetic`     | [`corpus/src/graalvm/renaissance-native-image:future-genetic/`](corpus/src/graalvm/renaissance-native-image:future-genetic/)         | Java/Scala | Renaissance `future-genetic` workload.            |
| GraalVM native image | `renaissance-native-image:mnemonics`          | [`corpus/src/graalvm/renaissance-native-image:mnemonics/`](corpus/src/graalvm/renaissance-native-image:mnemonics/)                   | Java/Scala | Renaissance `mnemonics` workload.                 |
| GraalVM native image | `renaissance-native-image:par-mnemonics`      | [`corpus/src/graalvm/renaissance-native-image:par-mnemonics/`](corpus/src/graalvm/renaissance-native-image:par-mnemonics/)           | Java/Scala | Renaissance `par-mnemonics` workload.             |
| GraalVM native image | `renaissance-native-image:philosophers`       | [`corpus/src/graalvm/renaissance-native-image:philosophers/`](corpus/src/graalvm/renaissance-native-image:philosophers/)             | Java/Scala | Renaissance `philosophers` workload.              |
| GraalVM native image | `renaissance-native-image:reactors`           | [`corpus/src/graalvm/renaissance-native-image:reactors/`](corpus/src/graalvm/renaissance-native-image:reactors/)                     | Java/Scala | Renaissance `reactors` workload.                  |
| GraalVM native image | `renaissance-native-image:rx-scrabble`        | [`corpus/src/graalvm/renaissance-native-image:rx-scrabble/`](corpus/src/graalvm/renaissance-native-image:rx-scrabble/)               | Java/Scala | Renaissance `rx-scrabble` workload.               |
| GraalVM native image | `renaissance-native-image:scala-doku`         | [`corpus/src/graalvm/renaissance-native-image:scala-doku/`](corpus/src/graalvm/renaissance-native-image:scala-doku/)                 | Java/Scala | Renaissance `scala-doku` workload.                |
| GraalVM native image | `renaissance-native-image:scala-kmeans`       | [`corpus/src/graalvm/renaissance-native-image:scala-kmeans/`](corpus/src/graalvm/renaissance-native-image:scala-kmeans/)             | Java/Scala | Renaissance `scala-kmeans` workload.              |
| GraalVM native image | `renaissance-native-image:scala-stm-bench7`   | [`corpus/src/graalvm/renaissance-native-image:scala-stm-bench7/`](corpus/src/graalvm/renaissance-native-image:scala-stm-bench7/)     | Java/Scala | Renaissance `scala-stm-bench7` workload.          |
| GraalVM native image | `renaissance-native-image:scrabble`           | [`corpus/src/graalvm/renaissance-native-image:scrabble/`](corpus/src/graalvm/renaissance-native-image:scrabble/)                     | Java/Scala | Renaissance `scrabble` workload.                  |
| GraalVM native image | `scala-dacapo-native-image:apparat`           | [`corpus/src/graalvm/scala-dacapo-native-image:apparat/`](corpus/src/graalvm/scala-dacapo-native-image:apparat/)                     | Scala      | Scala DaCapo `apparat` workload.                  |
| GraalVM native image | `scala-dacapo-native-image:factorie`          | [`corpus/src/graalvm/scala-dacapo-native-image:factorie/`](corpus/src/graalvm/scala-dacapo-native-image:factorie/)                   | Scala      | Scala DaCapo `factorie` workload.                 |
| GraalVM native image | `scala-dacapo-native-image:kiama`             | [`corpus/src/graalvm/scala-dacapo-native-image:kiama/`](corpus/src/graalvm/scala-dacapo-native-image:kiama/)                         | Scala      | Scala DaCapo `kiama` workload.                    |
| GraalVM native image | `scala-dacapo-native-image:scalac`            | [`corpus/src/graalvm/scala-dacapo-native-image:scalac/`](corpus/src/graalvm/scala-dacapo-native-image:scalac/)                       | Scala      | Scala DaCapo `scalac` workload.                   |
| GraalVM native image | `scala-dacapo-native-image:scaladoc`          | [`corpus/src/graalvm/scala-dacapo-native-image:scaladoc/`](corpus/src/graalvm/scala-dacapo-native-image:scaladoc/)                   | Scala      | Scala DaCapo `scaladoc` workload.                 |
| GraalVM native image | `scala-dacapo-native-image:scalap`            | [`corpus/src/graalvm/scala-dacapo-native-image:scalap/`](corpus/src/graalvm/scala-dacapo-native-image:scalap/)                       | Scala      | Scala DaCapo `scalap` workload.                   |
| GraalVM native image | `scala-dacapo-native-image:scalaxb`           | [`corpus/src/graalvm/scala-dacapo-native-image:scalaxb/`](corpus/src/graalvm/scala-dacapo-native-image:scalaxb/)                     | Scala      | Scala DaCapo `scalaxb` workload.                  |
| GraalVM native image | `scala-dacapo-native-image:tmt`               | [`corpus/src/graalvm/scala-dacapo-native-image:tmt/`](corpus/src/graalvm/scala-dacapo-native-image:tmt/)                             | Scala      | Scala DaCapo `tmt` workload.                      |
| .NET native image    | `crypto-compression`                          | [`corpus/src/dotnet/crypto-compression/`](corpus/src/dotnet/crypto-compression/)                                                     | C#         | Cryptography and stream-compression workload.     |
| .NET native image    | `grpc`                                        | [`corpus/src/dotnet/grpc/`](corpus/src/dotnet/grpc/)                                                                                 | C#         | gRPC server workload.                             |
| .NET native image    | `hello-world`                                 | [`corpus/src/dotnet/hello-world/`](corpus/src/dotnet/hello-world/)                                                                   | C#         | Minimal C# application.                           |
| .NET native image    | `json-sourcegen`                              | [`corpus/src/dotnet/json-sourcegen/`](corpus/src/dotnet/json-sourcegen/)                                                             | C#         | JSON serialization with source generation.        |
| .NET native image    | `parallel-numerics`                           | [`corpus/src/dotnet/parallel-numerics/`](corpus/src/dotnet/parallel-numerics/)                                                       | C#         | Parallel numerical computation.                   |
| .NET native image    | `reflection-metadata`                         | [`corpus/src/dotnet/reflection-metadata/`](corpus/src/dotnet/reflection-metadata/)                                                   | C#         | Reflection and metadata inspection.               |
| .NET native image    | `regex-globalization`                         | [`corpus/src/dotnet/regex-globalization/`](corpus/src/dotnet/regex-globalization/)                                                   | C#         | Regular expression and globalization workload.    |
| .NET native image    | `web-api`                                     | [`corpus/src/dotnet/web-api/`](corpus/src/dotnet/web-api/)                                                                           | C#         | ASP.NET web API.                                  |
| .NET native image    | `web-blazor`                                  | [`corpus/src/dotnet/web-blazor/`](corpus/src/dotnet/web-blazor/)                                                                     | C#         | ASP.NET Blazor web application.                   |
| .NET native image    | `web-worker`                                  | [`corpus/src/dotnet/web-worker/`](corpus/src/dotnet/web-worker/)                                                                     | C#         | ASP.NET worker service.                           |
| .NET native image    | `xml-linq`                                    | [`corpus/src/dotnet/xml-linq/`](corpus/src/dotnet/xml-linq/)                                                                         | C#         | XML processing with LINQ.                         |

The LLVM subset is selected through
[llvm-test-suite/benchmarks.txt](corpus/src/_shared/c/llvm-test-suite/benchmarks.txt).
It currently includes
benchmark groups from MiBench, Olden, FreeBench, BitBench, MallocBench, Ptrdist,
7zip, PAQ8p, and several LLVM `MultiSource/Applications` programs. The checked
LLVM test-suite revision is recorded in
[llvm-test-suite-revision.txt](corpus/src/_shared/c/llvm-test-suite/llvm-test-suite-revision.txt).

### Common Native Build Configurations

GCC and Clang builds use the following configurations:

| Configuration | GCC flags | Clang flags       |
| ------------- | --------- | ----------------- |
| `O0`          | `-O0`     | `-O0`             |
| `O1`          | `-O1`     | `-O1`             |
| `O2`          | `-O2`     | `-O2`             |
| `O3`          | `-O3`     | `-O3`             |
| `Of`          | `-Ofast`  | `-O3 -ffast-math` |
| `Os`          | `-Os`     | `-Os`             |
| `Og`          | `-Og`     | `-Og`             |
| `debug`       | `-g`      | `-g`              |
| `static`      | `-static` | `-static`         |

Shared support for PolyBench/C is present under `corpus/src/_shared/c/polybench`,
but it is not part of the default GCC/Clang traversal unless linked or added to
the active family directories.

### GraalVM Native Image Build Configurations

GraalVM builds use these `native-image` option sets:

| Configuration | Native Image options                                                                                                                                           |
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `O0`          | `-O0`                                                                                                                                                          |
| `O1`          | `-O1`                                                                                                                                                          |
| `O2`          | `-O2`                                                                                                                                                          |
| `O3`          | `-O3`                                                                                                                                                          |
| `Os`          | `-Os`                                                                                                                                                          |
| `debug`       | `-g -O0`                                                                                                                                                       |
| `prof`        | `-g -H:+UnlockExperimentalVMOptions -H:-DeleteLocalSymbols -H:-RemoveUnusedSymbols -H:+SourceLevelDebug -H:+InternalSymbolsAreGlobal -H:+PreserveFramePointer` |

### .NET Build Configurations

The active .NET build configurations are:

| Configuration | `dotnet publish` options                                                                                                      |
| ------------- | ----------------------------------------------------------------------------------------------------------------------------- |
| `debug`       | `-c Debug`                                                                                                                    |
| `release`     | `-c Release`                                                                                                                  |
| `static`      | `-c Release -p:PublishAot=false -p:PublishSingleFile=true -p:IncludeNativeLibrariesForSelfExtract=true --self-contained true` |

## Artifact Naming

Generated artifact names encode the source program, toolchain family, target
architecture, and build configuration. Examples include:

```text
jq-gcc-linux-x64-O2/
jq-clang-linux-x64-O2/
llvm-aha-gcc-linux-x64-O2/
hello-world-graalvm-linux-x64-O2/
grpc-dotnet-linux-x64-release/
```

The evaluation scripts scan executable files recursively. When `corpus/bin/`
exists, `eval` and `compute_entropy` restrict scanning to that directory.

## Requirements

Install the tools required by the families that will be built:

- Bash, GNU Make, CMake, Ninja, and common Unix build tools.
- GCC and G++ for the GCC family.
- Clang and Clang++ for the Clang family.
- Autotools support for projects that run `autoreconf`, such as jq.
- A .NET SDK that supports the target framework used by the projects.
- GraalVM with the `native-image` component.
- Python 3 for `join_results` and `corr`; `corr` also requires pandas.

The metric commands use only the Python standard library. Their ELF32/ELF64
section reader is implemented in `file_metrics.py`; no `ent`, `pyelftools`, or
other runtime package is required.

Set `GRAALVM_HOME` before building GraalVM artifacts:

```bash
export GRAALVM_HOME=/path/to/graalvm
export PATH="$GRAALVM_HOME/bin:$PATH"
```

The build scripts use `JOBS` for parallel builds where supported:

```bash
export JOBS=8
```

## File Metrics

Measure one file from the repository root:

```bash
./compute_file_metrics path/to/file
./compute_file_metrics --no-header path/to/file
```

The first form writes an RFC 4180 header and one data row. `--no-header` writes
only the data row. Diagnostics are written to standard error, and an unreadable
file or malformed ELF file produces no partial row.

Measure every executable in a corpus directory:

```bash
./compute_entropy corpus/
./compute_entropy --jobs 4 corpus/
./compute_entropy --jobs 1 corpus/
```

When `corpus/bin/` exists, `compute_entropy` scans only that subtree. Otherwise,
it scans the supplied directory. By default, it computes independent files in
parallel worker processes, using the smaller of the available CPU count and the
number of files. `--jobs N` (or `-j N`) sets a positive worker limit;
`--jobs 1` uses the main process without starting a worker pool.

The output remains deterministic when workers finish out of order: executable
regular files appear in sorted path order. The command writes
`results_<directory>entropy_<timestamp>.csv` in the current directory. The first
column is `filename`; the remaining columns match the single-file command. A
failed file or worker prevents publication of a partial result and identifies
the affected file in the diagnostic.

Each worker loads one complete file and may create temporary sorted count runs
for wide-block entropy. Parallelism can therefore multiply peak memory and
temporary-storage demand. Set a lower `--jobs` value when evaluating large files
or when those resources are constrained.

The first seven columns preserve the former `ent -t -b` schema and bit-stream
semantics:

```text
0,File-bits,Entropy,Chi-square,Mean,Monte-Carlo-Pi,Serial-Correlation
```

`0` is the compatibility value `1`; `File-bits` is the file size multiplied by
eight. `Entropy`, `Chi-square`, and `Mean` operate on bits. The legacy serial
correlation is circular and consumes each byte most-significant-bit first. The
legacy Monte Carlo calculation uses non-overlapping six-byte coordinate groups.

The following columns are appended in this order:

| Column                    | Definition and unit                                                                                                 |
| ------------------------- | ------------------------------------------------------------------------------------------------------------------- | ----------------------------- |
| `File-Size-Bytes`         | File size in bytes.                                                                                                 |
| `Byte-Entropy`            | Base-2 Shannon entropy over byte frequencies, in bits per byte.                                                     |
| `Byte-Chi-Square`         | Chi-square statistic for the 256 byte values.                                                                       |
| `Byte-Monte-Carlo-Pi`     | Pi estimate from non-overlapping six-byte groups interpreted as two unsigned 24-bit big-endian coordinates.         |
| `Byte-Serial-Correlation` | Non-circular Pearson correlation of adjacent byte values.                                                           |
| `Conditional-Entropy`     | First-order empirical `H(X_i                                                                                        | X\_{i-1})`, in bits per byte. |
| `Bigram-Entropy`          | Base-2 Shannon entropy of all overlapping byte pairs; the fixed n-gram order is two.                                |
| `Lempel-Ziv-Complexity`   | Raw phrase count from incremental LZ78 parsing, including a final non-empty residual phrase.                        |
| `Section-Format`          | `ELF` for parsed ELF32/ELF64 input and `none` for non-ELF input.                                                    |
| `Section-Size-Ratios`     | Strict JSON object mapping `<section-index>:<section-name>` to file-backed section size divided by whole-file size. |
| `Section-Entropies`       | Parallel strict JSON object mapping each section identifier to byte entropy.                                        |
| `1-Bit-Entropy`           | Shannon entropy of non-overlapping, file-aligned 1-bit blocks, in bits per block.                                   |
| `2-Bit-Entropy`           | Shannon entropy of non-overlapping, file-aligned 2-bit blocks, in bits per block.                                   |
| `4-Bit-Entropy`           | Shannon entropy of non-overlapping, file-aligned 4-bit blocks, in bits per block.                                   |
| `8-Bit-Entropy`           | Shannon entropy of non-overlapping, file-aligned 8-bit blocks, in bits per block.                                   |
| `16-Bit-Entropy`          | Shannon entropy of non-overlapping, file-aligned 16-bit blocks, in bits per block.                                  |
| `32-Bit-Entropy`          | Shannon entropy of non-overlapping, file-aligned 32-bit blocks, in bits per block.                                  |
| `64-Bit-Entropy`          | Shannon entropy of non-overlapping, file-aligned 64-bit blocks, in bits per block.                                  |
| `128-Bit-Entropy`         | Shannon entropy of non-overlapping, file-aligned 128-bit blocks, in bits per block.                                 |
| `256-Bit-Entropy`         | Shannon entropy of non-overlapping, file-aligned 256-bit blocks, in bits per block.                                 |

The n-bit metrics treat the file as an MSB-first bit stream beginning at bit
offset zero. Each width uses adjacent non-overlapping blocks and ignores a final
fragment shorter than the requested width. The values are raw empirical block
entropies rather than normalized entropy rates, so an n-bit result is bounded by
both `n` and `log2(complete block count)`. `1-Bit-Entropy` therefore matches the
legacy `Entropy` value for non-empty files, and `8-Bit-Entropy` matches
`Byte-Entropy`. A width with no complete block is written as `NaN`.

Wide-block counting is exact and uses bounded in-memory state. Large,
high-cardinality files can create temporary sorted count runs in the system
temporary directory; these runs are removed after success or failure. Temporary
storage exhaustion fails the metric run instead of publishing a partial CSV.

Within Python, `file_metrics.compute_metrics(data)` is the complete in-memory
record API and `compute_file(path)` is its file wrapper. The executable
`compute_entropy` keeps its historical name and remains the corpus-level driver.

Scalar floating-point values use six decimal places. Metrics without enough
observations or with a zero variance denominator are written as `NaN`. LZ78
complexity and both size fields are zero for an empty file. Section metrics cover
non-empty, file-backed ELF sections only; the null section and `SHT_NOBITS`
sections are excluded. Non-ELF files retain all whole-file metrics and use `none`,
`{}`, and `{}` for the three section fields.

### Verify `compute_entropy` against Linux ENT

`verify_compute_entropy_against_ent` cross-checks a seeded random sample of 10
executable regular files from `corpus/bin/`. The verifier requires the Linux
`ent` command on `PATH`; for example, Debian and Ubuntu provide it in the `ent`
package. ENT is needed only for this live verification, not for normal metric
calculation or the automated test suite.

Run the check from the repository root:

```bash
./verify_compute_entropy_against_ent \
  --output results/compute-entropy-ent-report.json
```

The default sample seed is `0`. Use `--seed` to choose another sample and repeat
the same seed against an unchanged `corpus/bin/` candidate set to replay it:

```bash
./verify_compute_entropy_against_ent \
  --seed 20260701 \
  --jobs 2 \
  --output results/compute-entropy-ent-report.json
```

The comparison covers the seven fields shared with `ent -t -b`: `0`,
`File-bits`, `Entropy`, `Chi-square`, `Mean`, `Monte-Carlo-Pi`, and
`Serial-Correlation`. The two integer fields must match exactly. The five
floating-point fields use absolute difference `<= 0.0001` and zero relative
tolerance; matching `NaN` values also pass. Appended metrics that ENT does not
emit are outside this check.

The JSON report records the seed, full candidate count, ordered sample, staged
file sizes and SHA-256 digests, resolved tool paths, command output, source
values, and all 70 per-file field comparisons. A successful run prints a concise
pass message and exits zero. Missing tools, fewer than 10 eligible files, command
or parsing failures, incomplete rows, and metric differences produce a nonzero
exit and are described in both the diagnostic and report. Use `--ent` or
`--compute-entropy` to select explicit executable paths when investigating a
tool-specific failure.

## Building NEXUS

Build all active families from the repository root:

```bash
./build
```

This command enters `corpus/src/`, invokes each family build script, and moves
generated artifacts into `corpus/bin/`. To build a single family, run its build
script directly:

```bash
cd corpus/src/gcc && ./build
cd corpus/src/clang && ./build
cd corpus/src/graalvm && ./build
cd corpus/src/dotnet && ./build
```

## Related Work and Reference Corpora

NEXUS is related to existing compression corpora and program benchmark suites,
but it differs in its focus on generated native executable artifacts across
toolchains and deployment configurations.

- [Silesia Corpus](https://sun.aei.polsl.pl/~sdeor/index.php?page=silesia): a
  mixed compression corpus that includes software-related and binary files.
- [Calgary Corpus](https://corpus.canterbury.ac.nz/descriptions/#calgary):
  an early lossless-compression corpus that includes source and object files.
- [Canterbury Corpus](https://corpus.canterbury.ac.nz/): a benchmark corpus for
  lossless-compression evaluation.
- [Pizza & Chili Corpus](http://pizzachili.dcc.uchile.cl/): a corpus used in
  compressed indexing and text-compression research.
- [LLVM test-suite](https://llvm.org/docs/TestSuiteGuide.html): a program
  benchmark suite used here as a source of native C/C++ executables.
- [DaCapo Benchmark Suite](https://dacapobench.org/): Java workloads used as
  source material for several GraalVM native-image templates.
- [Renaissance Benchmark Suite](https://renaissance.dev/): JVM workloads used as
  source material for several GraalVM native-image templates.
- [PolyBench/C](https://web.cse.ohio-state.edu/~pouchet.2/software/polybench/):
  C kernels for polyhedral and compiler studies; support code is present in the
  shared native source tree.
- [MiBench](https://vhosts.eecs.umich.edu/mibench/): embedded benchmark programs
  represented through the selected LLVM test-suite subset.
- [Embench](https://github.com/embench/embench-iot): embedded benchmark programs
  relevant to executable-size and compiler-code-generation studies.

  ## Dependency

  sudo apt update && sudo apt install -y \
  autoconf \
  autoconf-archive \
  automake \
  bison \
  clang \
  clang++ \
  clang-21 \
  clangd-21 \
  extra-cmake-modules \
  g++-14 \
  gcc-14 \
  gettext \
  git-lfs \
  libboost-container-dev \
  libboost-context-dev \
  libboost-filesystem-dev \
  libboost-iostreams-dev \
  libboost-locale-dev \
  libboost-program-options-dev \
  libboost-system-dev \
  libcurl4-gnutls-dev \
  libdbus-1-dev \
  libeigen3-dev \
  libevent-dev \
  libexiv2-dev \
  libfftw3-dev \
  libfontconfig-dev \
  libfontconfig1-dev \
  libfreetype-dev \
  libfribidi-dev \
  libgif-dev \
  libgl1-mesa-dev \
  libgsl-dev \
  libgtk-3-dev \
  libharfbuzz-dev \
  libheif-dev \
  libimmer-dev \
  libjpeg-dev \
  libjxl-dev \
  libkf5completion-dev \
  libkf5config-dev \
  libkf5coreaddons-dev \
  libkf5crash-dev \
  libkf5guiaddons-dev \
  libkf5i18n-dev \
  libkf5itemviews-dev \
  libkf5kdcraw-dev \
  libkf5widgetsaddons-dev \
  libkf5windowsystem-dev \
  libkf6config-dev \
  libkf6coreaddons-dev \
  libkf6guiaddons-dev \
  libkf6i18n-dev \
  libkf6jobwidgets-dev \
  libkf6kio-dev \
  libkf6service-dev \
  libkf6widgetsaddons-dev \
  libkf6windowsystem-dev \
  libkseexpr-dev \
  liblager-dev \
  liblcms2-dev \
  liblz4-dev \
  libmagic-dev \
  libmbedtls-dev \
  libmd4c-dev \
  libmd4c-html0-dev \
  libmlt++-dev \
  libmlt-dev \
  libmpdclient-dev \
  libmypaint-dev \
  libopencolorio-dev \
  libopenexr-dev \
  libopenjp2-7-dev \
  libpng-dev \
  libpoppler-qt5-dev \
  libqt5opengl5-dev \
  libqt5svg5-dev \
  libqt5x11extras5-dev \
  libquazip5-dev \
  libreadline-dev \
  libsdl2-dev \
  libssh2-1-dev \
  libtiff-dev \
  libturbojpeg0-dev \
  libunibreak-dev \
  libunwind-dev \
  libwayland-dev \
  libwebp-dev \
  libxcb-util-dev \
  libxcb1-dev \
  libxi-dev \
  libxkbcommon-dev \
  libxsimd-dev \
  libzstd-dev \
  libzug-dev \
  lld \
  meson \
  pkg-config \
  pkg-kde-tools \
  pyqt5-dev \
  python3-dev \
  python3-pyqt5 \
  python3-sipbuild \
  qt5-base-private-dev \
  qt6-base-dev \
  qt6-base-private-dev \
  qt6-declarative-dev \
  qt6-svg-dev \
  qt6-tools-dev \
  qt6-tools-dev-tools \
  qt6-wayland-dev \
  qtbase5-dev \
  qtbase5-private-dev \
  qtdeclarative5-dev \
  qtquickcontrols2-5-dev \
  sip-tools \
  xtl-dev \
  zlib1g-dev
