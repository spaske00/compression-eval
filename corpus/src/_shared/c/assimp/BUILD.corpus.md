# Assimp corpus build

## Source and upstream instructions

- Repository: `https://github.com/assimp/assimp`
- Revision: `e86df1f8b139f4095653d37dc08622fa5d206663`
- Consulted documentation: checked-out `upstream/Build.md`,
  `upstream/CMakeLists.txt`, and `upstream/tools/assimp_cmd/CMakeLists.txt`.
- Nested dependencies: none; required fallback sources are vendored below
  `upstream/contrib`.

`Build.md` documents CMake with `ASSIMP_BUILD_ASSIMP_TOOLS=ON` for the common
`assimp-cmd` tool. Its CMake target is `assimp_cmd`, with output name `assimp`.
This upstream CLI is the representative executable, expected at
`.build/<target>/bin/assimp`.

## Prerequisites and commands

The bounded target requires CMake, Ninja, C99/C++17 compilers, Threads, and
zlib (or Assimp's vendored fallback). Tests, samples, the viewer, Draco, and
installation/packaging are disabled.

```sh
make clean
make CC=gcc-14 CXX=g++-14 TARGET_NAME=assimp-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=assimp-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
builds `assimp_cmd`, and atomically stages its unstripped ELF at
`bin/<target>/<target>`. `JOBS` controls Ninja parallelism. `make clean` removes
`.build` and `bin`; failed builds remove publication state for the requested
target.

The required baseline was validated with GCC 14.2.0 and Clang 18.1.3 at `-O2`.
Both clean builds produced unstripped x86-64 ELF PIE executables, and their
CMake caches record the requested C/C++ compilers and flags. A deliberately
invalid compiler flag failed during configuration and left no staged target,
confirming failed-build cleanup. Other matrix configurations remain to be
validated.
