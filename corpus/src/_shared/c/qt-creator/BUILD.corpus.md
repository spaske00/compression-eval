# Qt Creator corpus build

## Source and upstream instructions

- Repository: `https://github.com/qt-creator/qt-creator`
- Revision: `f43209dcc802fd9ebceceed91e8085e390a8b5ea`
- Consulted documentation: checked-out `upstream/README.md` and
  `upstream/CMakePresets.json`.
- Recursive dependencies: five exact submodule revisions in `REVISION.json`.

The README requires a recursive checkout, Qt 6.8.3 or later, CMake, Ninja, GCC
11 or later on Linux, and optionally LLVM and Go. It documents an out-of-source
CMake/Ninja build and states installation is not required. The selected bounded
artifact is the primary `bin/qtcreator` executable with the required Core
plugin; optional integrations are outside this representative target.

## Prerequisites and commands

The adapter reuses the workspace-local Qt 6.8.3 `linux_gcc_64` kit acquired for
the listed FinceptTerminal project. This is a shared build prerequisite, not a
staged corpus artifact. LLVM-dependent plugins, WebEngine help, Qbs, tests, and
the optional Go CmdBridge are disabled for the bounded target.

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=qt-creator-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=qt-creator-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
builds the upstream `qtcreator` target, and atomically stages its unstripped ELF
at `bin/<target>/<target>`. `make clean` removes `.build` and `bin`; failed
builds remove target publication state.

Only GCC and Clang `O2` are established in this task. Other matrix cells and
the omitted optional integrations require separate validation.
