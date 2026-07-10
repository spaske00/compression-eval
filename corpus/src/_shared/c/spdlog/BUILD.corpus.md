# spdlog corpus build

## Source and upstream instructions

- Repository: `https://github.com/gabime/spdlog`
- Revision: `8671ca4d492c8ee1cdfd3dd88afb9f88dd268178`
- Consulted documentation: `upstream/README.md`, root
  `upstream/CMakeLists.txt`, and `upstream/example/CMakeLists.txt`.
- Nested submodules: none.

The README documents the compiled CMake build and points to the upstream
example. The selected artifact is that `example` executable linked against the
compiled `spdlog` target, so it contains and exercises upstream logging code.

## Prerequisites, commands, and output

The build requires CMake, Ninja, POSIX threads, and a C++ compiler. Run:

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=spdlog-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=spdlog-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
enables only `SPDLOG_BUILD_EXAMPLE`, and builds the upstream `example` target.
It atomically stages the resulting ELF at `bin/<target>/<target>`. Cleanup is
`make clean`; failed builds remove completed and temporary target publication.

## Known limitations

- spdlog is C++-only, so `CC` is validated as the same family as `CXX` while
  `CXX` performs compilation and linking.
- Only GCC and Clang `O2` are established here. Remaining matrix cells require
  explicit attempts before full-family support is claimed.
