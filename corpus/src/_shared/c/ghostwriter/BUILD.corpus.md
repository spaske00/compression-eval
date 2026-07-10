# ghostwriter corpus build

## Source and upstream instructions

- Repository: `https://github.com/KDE/ghostwriter`
- Revision: `3b43604653fab5206af8b3c1a8802772aba4f790`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/CMakeLists.txt`, and `upstream/src/CMakeLists.txt`.
- Nested dependencies: none; the checkout declares no Git submodules. The
  cmark-gfm implementation is vendored directly under `upstream/3rdparty`.

The README documents an out-of-source `cmake ..` and `make` build after
installing Qt and KDE Frameworks development packages. The representative
artifact is the primary `ghostwriter` application executable declared by
`upstream/src/CMakeLists.txt`, expected at `.build/<target>/bin/ghostwriter`.

## Prerequisites and verified blocker

The README's Debian/Ubuntu package example still names Qt 5 and KF5 packages,
but the pinned top-level CMake explicitly states “KF6 only” and requires ECM,
KDE Frameworks 6, and KF6 DocTools version 6.0 or newer, plus Qt 6.5 or newer.
The workspace-local Qt 6.8.3 kit satisfies Qt, while Ubuntu Noble on this host
provides only ECM/KF5 5.115 and no matching KF6 development stack.

The documented out-of-source configuration was attempted with GCC 13, `-O2`,
Ninja, tests disabled, and the Qt 6.8.3 prefix. It fails at
`CMakeLists.txt:41`: ECM 6.0 cannot be found and installed ECM 5.115 is
explicitly rejected. No artifact or adapter is published. A reproducible KF6
prefix is required before implementing the corpus build contract.

Once that prefix exists, the intended upstream flow is:

```sh
cmake -S upstream -B .build/<target> -G Ninja \
  -DCMAKE_PREFIX_PATH=<qt-and-kf6-prefix> \
  -DCMAKE_CXX_COMPILER=<cxx> -DCMAKE_CXX_FLAGS=<flags> \
  -DBUILD_TESTING=OFF
cmake --build .build/<target> --target ghostwriter --parallel <jobs>
```

GCC and Clang O2 support remains unvalidated.
