# fmt corpus build

## Source and upstream instructions

- Repository: `https://github.com/fmtlib/fmt`
- Revision: `77b6ff700be3417e0a3ad9674ca306e40c451b6b`
- Consulted documentation: `upstream/README.md` and the build options in
  `upstream/CMakeLists.txt`.
- Nested submodules: none.

The README describes fmt as a self-contained C++ formatting library and shows
the compiled `fmt::format`/`fmt::print` APIs. The checked-out CMake project is
the upstream build entry point and provides the `fmt` library target.

## Prerequisites and selected artifact

The build requires CMake, Ninja, and a C++ compiler. fmt has no primary
application executable, so the selected artifact is a deterministic
corpus-owned driver (`driver.cpp`) linked to the upstream compiled `fmt`
library. The driver calls `fmt::format`, ensuring that the staged ELF contains
and exercises fmt implementation code rather than an unrelated executable.

## Corpus commands

From this directory:

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=fmt-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=fmt-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures an out-of-source Ninja build at `.build/<target>`,
disables fmt tests, documentation, installation rules, and compiler warnings
as errors, and builds the upstream `fmt` target. It then compiles the driver
with the same supplied compiler and flags and links the produced `libfmt.a`.
The result is atomically staged at `bin/<target>/<target>`.

Cleanup is `make clean`, which removes `.build` and `bin`. Failed builds remove
both completed and temporary publication state for their target.

## Known limitations

- fmt is C++-only. The adapter validates that `CC` and `CXX` name the same GCC
  or Clang family, while `CXX` performs compilation and linking.
- Only GCC and Clang `O2` are established here. Other corpus matrix cells must
  be attempted and any demonstrated limitations recorded before full-family
  support is claimed.
