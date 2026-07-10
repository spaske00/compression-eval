# mold corpus build

## Source and upstream instructions

- Repository: `https://github.com/rui314/mold`
- Revision: `f5fd48874a7ce62438ea922e77a9c8be3506c4a8`
- Consulted documentation: checked-out `upstream/README.md` (the “How to
  Build” section) and `upstream/CMakeLists.txt`.
- Nested dependencies: none. zlib, zstd, BLAKE3, mimalloc, oneTBB, xxHash,
  and rust-demangle fallback sources are vendored directly under
  `upstream/third-party`.

The README documents an out-of-source CMake build and identifies `mold` as the
resulting primary linker executable. The representative target is therefore
the upstream `mold` target, expected at `.build/<target>/mold`.

## Prerequisites and commands

mold requires CMake, a build tool, Linux development headers, and a C++20
compiler with a recent standard library. The pinned build can use system zlib
and zstd and its vendored implementations of other dependencies. The adapter
does not run upstream's privileged `install-build-deps.sh` or install target.

```sh
make clean
make CC=gcc-14 CXX=g++-14 TARGET_NAME=mold-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=mold-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with Ninja, the supplied compilers and
flags, builds only `mold`, and atomically stages the unstripped ELF at
`bin/<target>/<target>`. `JOBS` controls Ninja parallelism. `make clean` removes
`.build` and `bin`; failed builds remove publication state for the requested
target.

The required baseline was validated with GCC 14.2.0 and Clang 18.1.3 at `-O2`.
Both clean builds produced unstripped x86-64 ELF PIE executables, and their
CMake caches record the requested C/C++ compilers and flags. A deliberately
invalid compiler flag failed during configuration and left no staged target,
confirming failed-build cleanup. Other matrix configurations remain to be
validated.
