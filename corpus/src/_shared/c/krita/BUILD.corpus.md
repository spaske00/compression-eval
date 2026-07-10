# Krita corpus build

## Source and upstream instructions

- Repository: `https://github.com/KDE/krita`
- Revision: `a6a46f0d72ecc86293891aad93f8785c78dc2e84`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/CMakeLists.txt`, and the README-linked Krita Manual pages “Building
  Krita from Source” and “Building krita on host Linux system (unsupported)”.
- Nested dependencies: none; the checkout declares no Git submodules.

The upstream instructions use an out-of-source CMake build followed by a
parallel build and install. They recommend distro packages for dependencies.
The corpus selects the primary documented application target, `krita`, without
installing or packaging the application. Its build-tree artifact is
`.build/<target>/bin/krita`.

## Prerequisites and commands

The validated Linux path uses Ubuntu Noble's Qt 5 and KDE Frameworks 5
development packages because this revision defaults to its stable Qt 5 build.
The prerequisite set is Ubuntu's Krita source-package build dependencies plus
`qtquickcontrols2-5-dev`; key requirements include ECM, Qt 5, KF5, Boost,
Eigen, Exiv2, LittleCMS, xsimd, QuaZip, FreeType, HarfBuzz, Fontconfig,
libunibreak, image codecs, and SDL2. CMake, Ninja, Make, GCC, and Clang are also
required. Optional SIP/PyQt integration is not needed for the selected target.

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=krita-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=krita-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
builds the upstream `krita` target, and atomically stages its unstripped ELF at
`bin/<target>/<target>`. `JOBS` controls Ninja parallelism. `make clean` removes
`.build` and `bin`; a failed build removes temporary and completed publication
state for the requested target.

On this host Clang 18 otherwise auto-selects the separately installed
libstdc++ 14 headers, so the adapter explicitly selects the validated GCC 13
runtime. Even with those same headers, Clang rejects the private nested
`ColorDialogState` aggregate when libstdc++ evaluates `std::is_constructible`
for `optional::emplace` at `KoDualColorButton.cpp:295` and `:308`; GCC 13
accepts it. `-fno-access-control` was tested and did not alter the result. The
failed Clang build publishes no artifact. Resolving it requires an upstream
source compatibility change or a different supported compiler combination;
the adapter does not patch pinned upstream source during compilation.

The Krita manual labels direct host-Linux builds unsupported in favor of its
container workflow. This corpus recipe nevertheless follows the documented
host CMake flow so the supplied compiler and flags remain auditable. Only GCC
and Clang `O2` are established here; other matrix configurations require
separate validation.
