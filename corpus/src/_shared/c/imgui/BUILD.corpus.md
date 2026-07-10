# Dear ImGui corpus build

## Source and upstream instructions

- Repository: `https://github.com/ocornut/imgui`
- Revision: `279d04f7a3e17c4349715a0e7fde455e65facf4a`
- Consulted documentation: checked-out `upstream/examples/README.txt`,
  `upstream/examples/example_null/Makefile`, and
  `upstream/examples/example_null/main.cpp`.
- Nested dependencies: none.

The checked-in `example_null` is an upstream CI/testing application with no
windowing or renderer dependency. It compiles the Dear ImGui implementation,
creates a context, executes 20 deterministic headless frames, and shuts down.
It is selected over graphical examples to avoid unrelated SDL/GLFW/GL runtime
requirements. The expected artifact is
`.build/<target>/source/examples/example_null/example_null`.

## Prerequisites and commands

The selected example requires Git, tar, Make, and a C++11 compiler; it has no
external library dependency.

```sh
make clean
make CC=gcc-14 CXX=g++-14 TARGET_NAME=imgui-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=imgui-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter archives the pinned tracked source into `.build/<target>/source`,
runs the upstream example Makefile with the supplied compiler and flags, and
atomically stages the unstripped ELF at `bin/<target>/<target>`. `JOBS` controls
Make parallelism. `make clean` removes `.build` and `bin`; failed builds remove
publication state for the requested target.

The required baseline was validated with GCC 14.2.0 and Clang 18.1.3 at `-O2`.
Both clean builds produced unstripped x86-64 ELF PIE executables and completed
the deterministic 20-frame headless run through `DestroyContext()`. Build logs
show the requested compiler and flags on every compilation and link command. A
deliberately invalid compiler flag left no staged target, confirming
failed-build cleanup. Other matrix configurations remain to be validated.
