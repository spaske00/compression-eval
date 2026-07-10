# heaptrack corpus build

## Source and upstream instructions

- Repository: `https://github.com/KDE/heaptrack`
- Revision: `37cce88d84f28fd1311b0328239849895914d06d`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/CMakeLists.txt`, `upstream/src/analyze/CMakeLists.txt`, and
  `upstream/src/analyze/print/CMakeLists.txt`.
- Nested dependencies: none; robin-map and boost-zstd are vendored directly
  below `upstream/3rdparty`.

The README documents an out-of-source CMake build and identifies
`heaptrack_print` as the simplistic command-line analyzer with minimal
dependencies. It is a regular upstream C++ executable and is selected instead
of the `heaptrack` launcher shell script or the optional KF6 GUI. Its build-tree
artifact is `.build/<target>/bin/heaptrack_print`.

## Prerequisites and commands

Required packages for this bounded target are CMake, Ninja, a C++17 compiler,
zlib, zstd, Threads, and Boost filesystem, iostreams, program_options, and
container development libraries. The collector, raw-trace interpreter, GUI,
and tests are disabled, so libunwind, elfutils, Qt, and KDE Frameworks are not
required for this representative artifact.

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=heaptrack-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=heaptrack-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
builds `heaptrack_print`, and atomically stages its unstripped ELF at
`bin/<target>/<target>`. `JOBS` controls Ninja parallelism. `make clean` removes
`.build` and `bin`; failed builds remove publication state for the requested
target. Other matrix configurations remain to be validated.
