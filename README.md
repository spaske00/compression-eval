# NEXUS: Native Executable Compression Benchmark Set

NEXUS is a benchmark set for empirical studies on different families of native
executable artifacts. It provides source programs and build scripts that
generate executables through traditional C/C++ compilation, GraalVM Native Image
for JVM-based languages, and .NET native publishing workflows.

## Benchmark Composition

NEXUS contains three primary executable families: common native executables,
GraalVM native images, and .NET native images. The following table lists the
source programs and templates included in each family.

| Family | Executable or template | Source tree | Language | Description |
| --- | --- | --- | --- | --- |
| Common native | `hello-world` | [`corpus/src/_shared/c/hello-world/`](corpus/src/_shared/c/hello-world/) | C | Minimal executable program. |
| Common native | `jq` | [`corpus/src/_shared/c/jq/`](corpus/src/_shared/c/jq/) | C | jq command-line JSON processor. |
| Common native | `sqlite` | [`corpus/src/_shared/c/sqlite/`](corpus/src/_shared/c/sqlite/) | C | SQLite command-line database shell. |
| Common native | `llvm-test-suite` | [`corpus/src/_shared/c/llvm-test-suite/`](corpus/src/_shared/c/llvm-test-suite/) | C/C++ | Curated LLVM `MultiSource` subset. |
| GraalVM native image | `barista-native-image:helidon-hello-world` | [`corpus/src/graalvm/barista-native-image:helidon-hello-world/`](corpus/src/graalvm/barista-native-image:helidon-hello-world/) | Java | Helidon service from Barista. |
| GraalVM native image | `barista-native-image:micronaut-hello-world` | [`corpus/src/graalvm/barista-native-image:micronaut-hello-world/`](corpus/src/graalvm/barista-native-image:micronaut-hello-world/) | Java | Micronaut service from Barista. |
| GraalVM native image | `barista-native-image:micronaut-shopcart` | [`corpus/src/graalvm/barista-native-image:micronaut-shopcart/`](corpus/src/graalvm/barista-native-image:micronaut-shopcart/) | Java | Micronaut shop-cart service from Barista. |
| GraalVM native image | `barista-native-image:micronaut-similarity` | [`corpus/src/graalvm/barista-native-image:micronaut-similarity/`](corpus/src/graalvm/barista-native-image:micronaut-similarity/) | Java | Micronaut similarity service from Barista. |
| GraalVM native image | `barista-native-image:play-scala-hello-world` | [`corpus/src/graalvm/barista-native-image:play-scala-hello-world/`](corpus/src/graalvm/barista-native-image:play-scala-hello-world/) | Scala | Play service from Barista. |
| GraalVM native image | `barista-native-image:quarkus-hello-world` | [`corpus/src/graalvm/barista-native-image:quarkus-hello-world/`](corpus/src/graalvm/barista-native-image:quarkus-hello-world/) | Java | Quarkus service from Barista. |
| GraalVM native image | `barista-native-image:quarkus-tika` | [`corpus/src/graalvm/barista-native-image:quarkus-tika/`](corpus/src/graalvm/barista-native-image:quarkus-tika/) | Java | Quarkus document-processing service from Barista. |
| GraalVM native image | `barista-native-image:spring-hello-world` | [`corpus/src/graalvm/barista-native-image:spring-hello-world/`](corpus/src/graalvm/barista-native-image:spring-hello-world/) | Java | Spring service from Barista. |
| GraalVM native image | `barista-native-image:spring-petclinic` | [`corpus/src/graalvm/barista-native-image:spring-petclinic/`](corpus/src/graalvm/barista-native-image:spring-petclinic/) | Java | Spring PetClinic service from Barista. |
| GraalVM native image | `barista-native-image:vanilla-hello-world` | [`corpus/src/graalvm/barista-native-image:vanilla-hello-world/`](corpus/src/graalvm/barista-native-image:vanilla-hello-world/) | Java | Minimal Java service from Barista. |
| GraalVM native image | `dacapo-native-image:fop` | [`corpus/src/graalvm/dacapo-native-image:fop/`](corpus/src/graalvm/dacapo-native-image:fop/) | Java | DaCapo `fop` workload. |
| GraalVM native image | `dacapo-native-image:luindex` | [`corpus/src/graalvm/dacapo-native-image:luindex/`](corpus/src/graalvm/dacapo-native-image:luindex/) | Java | DaCapo `luindex` workload. |
| GraalVM native image | `dacapo-native-image:lusearch` | [`corpus/src/graalvm/dacapo-native-image:lusearch/`](corpus/src/graalvm/dacapo-native-image:lusearch/) | Java | DaCapo `lusearch` workload. |
| GraalVM native image | `dacapo-native-image:pmd` | [`corpus/src/graalvm/dacapo-native-image:pmd/`](corpus/src/graalvm/dacapo-native-image:pmd/) | Java | DaCapo `pmd` workload. |
| GraalVM native image | `dacapo-native-image:sunflow` | [`corpus/src/graalvm/dacapo-native-image:sunflow/`](corpus/src/graalvm/dacapo-native-image:sunflow/) | Java | DaCapo `sunflow` workload. |
| GraalVM native image | `dacapo-native-image:xalan` | [`corpus/src/graalvm/dacapo-native-image:xalan/`](corpus/src/graalvm/dacapo-native-image:xalan/) | Java | DaCapo `xalan` workload. |
| GraalVM native image | `embedded-js` | [`corpus/src/graalvm/embedded-js/`](corpus/src/graalvm/embedded-js/) | Java | Java program with embedded JavaScript execution. |
| GraalVM native image | `fork-join-pool` | [`corpus/src/graalvm/fork-join-pool/`](corpus/src/graalvm/fork-join-pool/) | Java | Fork-join parallel computation. |
| GraalVM native image | `fork-join-pool-isolate` | [`corpus/src/graalvm/fork-join-pool-isolate/`](corpus/src/graalvm/fork-join-pool-isolate/) | Java | Fork-join workload using a GraalVM isolate. |
| GraalVM native image | `hello-isolate` | [`corpus/src/graalvm/hello-isolate/`](corpus/src/graalvm/hello-isolate/) | Java | Minimal GraalVM isolate application. |
| GraalVM native image | `hello-world` | [`corpus/src/graalvm/hello-world/`](corpus/src/graalvm/hello-world/) | Java | Minimal Java application. |
| GraalVM native image | `jmh-native` | [`corpus/src/graalvm/jmh-native/`](corpus/src/graalvm/jmh-native/) | Java | JMH-based native-image workload. |
| GraalVM native image | `micronaut-hello` | [`corpus/src/graalvm/micronaut-hello/`](corpus/src/graalvm/micronaut-hello/) | Java | Minimal Micronaut web API. |
| GraalVM native image | `quarkus-hello` | [`corpus/src/graalvm/quarkus-hello/`](corpus/src/graalvm/quarkus-hello/) | Java | Minimal Quarkus web API. |
| GraalVM native image | `renaissance-native-image:akka-uct` | [`corpus/src/graalvm/renaissance-native-image:akka-uct/`](corpus/src/graalvm/renaissance-native-image:akka-uct/) | Java/Scala | Renaissance `akka-uct` workload. |
| GraalVM native image | `renaissance-native-image:finagle-http` | [`corpus/src/graalvm/renaissance-native-image:finagle-http/`](corpus/src/graalvm/renaissance-native-image:finagle-http/) | Java/Scala | Renaissance `finagle-http` workload. |
| GraalVM native image | `renaissance-native-image:fj-kmeans` | [`corpus/src/graalvm/renaissance-native-image:fj-kmeans/`](corpus/src/graalvm/renaissance-native-image:fj-kmeans/) | Java/Scala | Renaissance `fj-kmeans` workload. |
| GraalVM native image | `renaissance-native-image:future-genetic` | [`corpus/src/graalvm/renaissance-native-image:future-genetic/`](corpus/src/graalvm/renaissance-native-image:future-genetic/) | Java/Scala | Renaissance `future-genetic` workload. |
| GraalVM native image | `renaissance-native-image:mnemonics` | [`corpus/src/graalvm/renaissance-native-image:mnemonics/`](corpus/src/graalvm/renaissance-native-image:mnemonics/) | Java/Scala | Renaissance `mnemonics` workload. |
| GraalVM native image | `renaissance-native-image:par-mnemonics` | [`corpus/src/graalvm/renaissance-native-image:par-mnemonics/`](corpus/src/graalvm/renaissance-native-image:par-mnemonics/) | Java/Scala | Renaissance `par-mnemonics` workload. |
| GraalVM native image | `renaissance-native-image:philosophers` | [`corpus/src/graalvm/renaissance-native-image:philosophers/`](corpus/src/graalvm/renaissance-native-image:philosophers/) | Java/Scala | Renaissance `philosophers` workload. |
| GraalVM native image | `renaissance-native-image:reactors` | [`corpus/src/graalvm/renaissance-native-image:reactors/`](corpus/src/graalvm/renaissance-native-image:reactors/) | Java/Scala | Renaissance `reactors` workload. |
| GraalVM native image | `renaissance-native-image:rx-scrabble` | [`corpus/src/graalvm/renaissance-native-image:rx-scrabble/`](corpus/src/graalvm/renaissance-native-image:rx-scrabble/) | Java/Scala | Renaissance `rx-scrabble` workload. |
| GraalVM native image | `renaissance-native-image:scala-doku` | [`corpus/src/graalvm/renaissance-native-image:scala-doku/`](corpus/src/graalvm/renaissance-native-image:scala-doku/) | Java/Scala | Renaissance `scala-doku` workload. |
| GraalVM native image | `renaissance-native-image:scala-kmeans` | [`corpus/src/graalvm/renaissance-native-image:scala-kmeans/`](corpus/src/graalvm/renaissance-native-image:scala-kmeans/) | Java/Scala | Renaissance `scala-kmeans` workload. |
| GraalVM native image | `renaissance-native-image:scala-stm-bench7` | [`corpus/src/graalvm/renaissance-native-image:scala-stm-bench7/`](corpus/src/graalvm/renaissance-native-image:scala-stm-bench7/) | Java/Scala | Renaissance `scala-stm-bench7` workload. |
| GraalVM native image | `renaissance-native-image:scrabble` | [`corpus/src/graalvm/renaissance-native-image:scrabble/`](corpus/src/graalvm/renaissance-native-image:scrabble/) | Java/Scala | Renaissance `scrabble` workload. |
| GraalVM native image | `scala-dacapo-native-image:apparat` | [`corpus/src/graalvm/scala-dacapo-native-image:apparat/`](corpus/src/graalvm/scala-dacapo-native-image:apparat/) | Scala | Scala DaCapo `apparat` workload. |
| GraalVM native image | `scala-dacapo-native-image:factorie` | [`corpus/src/graalvm/scala-dacapo-native-image:factorie/`](corpus/src/graalvm/scala-dacapo-native-image:factorie/) | Scala | Scala DaCapo `factorie` workload. |
| GraalVM native image | `scala-dacapo-native-image:kiama` | [`corpus/src/graalvm/scala-dacapo-native-image:kiama/`](corpus/src/graalvm/scala-dacapo-native-image:kiama/) | Scala | Scala DaCapo `kiama` workload. |
| GraalVM native image | `scala-dacapo-native-image:scalac` | [`corpus/src/graalvm/scala-dacapo-native-image:scalac/`](corpus/src/graalvm/scala-dacapo-native-image:scalac/) | Scala | Scala DaCapo `scalac` workload. |
| GraalVM native image | `scala-dacapo-native-image:scaladoc` | [`corpus/src/graalvm/scala-dacapo-native-image:scaladoc/`](corpus/src/graalvm/scala-dacapo-native-image:scaladoc/) | Scala | Scala DaCapo `scaladoc` workload. |
| GraalVM native image | `scala-dacapo-native-image:scalap` | [`corpus/src/graalvm/scala-dacapo-native-image:scalap/`](corpus/src/graalvm/scala-dacapo-native-image:scalap/) | Scala | Scala DaCapo `scalap` workload. |
| GraalVM native image | `scala-dacapo-native-image:scalaxb` | [`corpus/src/graalvm/scala-dacapo-native-image:scalaxb/`](corpus/src/graalvm/scala-dacapo-native-image:scalaxb/) | Scala | Scala DaCapo `scalaxb` workload. |
| GraalVM native image | `scala-dacapo-native-image:tmt` | [`corpus/src/graalvm/scala-dacapo-native-image:tmt/`](corpus/src/graalvm/scala-dacapo-native-image:tmt/) | Scala | Scala DaCapo `tmt` workload. |
| .NET native image | `crypto-compression` | [`corpus/src/dotnet/crypto-compression/`](corpus/src/dotnet/crypto-compression/) | C# | Cryptography and stream-compression workload. |
| .NET native image | `grpc` | [`corpus/src/dotnet/grpc/`](corpus/src/dotnet/grpc/) | C# | gRPC server workload. |
| .NET native image | `hello-world` | [`corpus/src/dotnet/hello-world/`](corpus/src/dotnet/hello-world/) | C# | Minimal C# application. |
| .NET native image | `json-sourcegen` | [`corpus/src/dotnet/json-sourcegen/`](corpus/src/dotnet/json-sourcegen/) | C# | JSON serialization with source generation. |
| .NET native image | `parallel-numerics` | [`corpus/src/dotnet/parallel-numerics/`](corpus/src/dotnet/parallel-numerics/) | C# | Parallel numerical computation. |
| .NET native image | `reflection-metadata` | [`corpus/src/dotnet/reflection-metadata/`](corpus/src/dotnet/reflection-metadata/) | C# | Reflection and metadata inspection. |
| .NET native image | `regex-globalization` | [`corpus/src/dotnet/regex-globalization/`](corpus/src/dotnet/regex-globalization/) | C# | Regular expression and globalization workload. |
| .NET native image | `web-api` | [`corpus/src/dotnet/web-api/`](corpus/src/dotnet/web-api/) | C# | ASP.NET web API. |
| .NET native image | `web-blazor` | [`corpus/src/dotnet/web-blazor/`](corpus/src/dotnet/web-blazor/) | C# | ASP.NET Blazor web application. |
| .NET native image | `web-worker` | [`corpus/src/dotnet/web-worker/`](corpus/src/dotnet/web-worker/) | C# | ASP.NET worker service. |
| .NET native image | `xml-linq` | [`corpus/src/dotnet/xml-linq/`](corpus/src/dotnet/xml-linq/) | C# | XML processing with LINQ. |

The LLVM subset is selected through
[llvm-test-suite/benchmarks.txt](corpus/src/_shared/c/llvm-test-suite/benchmarks.txt). 
It currently includes
benchmark groups from MiBench, Olden, FreeBench, BitBench, MallocBench, Ptrdist,
7zip, PAQ8p, and several LLVM `MultiSource/Applications` programs. The checked
LLVM test-suite revision is recorded in
[llvm-test-suite-revision.txt](corpus/src/_shared/c/llvm-test-suite/llvm-test-suite-revision.txt).

### Common Native Build Configurations

GCC and Clang builds use the following configurations:

| Configuration | GCC flags | Clang flags |
| --- | --- | --- |
| `O0` | `-O0` | `-O0` |
| `O1` | `-O1` | `-O1` |
| `O2` | `-O2` | `-O2` |
| `O3` | `-O3` | `-O3` |
| `Of` | `-Ofast` | `-O3 -ffast-math` |
| `Os` | `-Os` | `-Os` |
| `Og` | `-Og` | `-Og` |
| `debug` | `-g` | `-g` |
| `static` | `-static` | `-static` |

Shared support for PolyBench/C is present under `corpus/src/_shared/c/polybench`,
but it is not part of the default GCC/Clang traversal unless linked or added to
the active family directories.

### GraalVM Native Image Build Configurations

GraalVM builds use these `native-image` option sets:

| Configuration | Native Image options |
| --- | --- |
| `O0` | `-O0` |
| `O1` | `-O1` |
| `O2` | `-O2` |
| `O3` | `-O3` |
| `Os` | `-Os` |
| `debug` | `-g -O0` |
| `prof` | `-g -H:+UnlockExperimentalVMOptions -H:-DeleteLocalSymbols -H:-RemoveUnusedSymbols -H:+SourceLevelDebug -H:+InternalSymbolsAreGlobal -H:+PreserveFramePointer` |

### .NET Build Configurations

The active .NET build configurations are:

| Configuration | `dotnet publish` options |
| --- | --- |
| `debug` | `-c Debug` |
| `release` | `-c Release` |
| `static` | `-c Release -p:PublishAot=false -p:PublishSingleFile=true -p:IncludeNativeLibrariesForSelfExtract=true --self-contained true` |

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
- Python 3 for `join_results` and `corr`; `corr` also requires pandas,

Set `GRAALVM_HOME` before building GraalVM artifacts:

```bash
export GRAALVM_HOME=/path/to/graalvm
export PATH="$GRAALVM_HOME/bin:$PATH"
```

The build scripts use `JOBS` for parallel builds where supported:

```bash
export JOBS=8
```

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

