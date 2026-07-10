# Kdenlive corpus build

## Source and upstream instructions

- Repository: `https://github.com/KDE/kdenlive`
- Revision: `6821e5f3e2cf0b26d5fe0c65114d4a7bf1399a72`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/dev-docs/build.md`, `upstream/CMakeLists.txt`, and
  `upstream/renderer/CMakeLists.txt`.
- Nested dependencies: none; the checkout declares no Git submodules.

The build guide documents an out-of-source CMake/Ninja build and states that
this development revision supports Ubuntu 26.04 or later. The selected bounded
native target is the documented non-GUI `kdenlive_render` executable used by
the main application for rendering. It is declared in
`upstream/renderer/CMakeLists.txt` and would normally be emitted in the build
tree's binary directory.

## Prerequisites and verified blocker

This revision requires Qt 6.10 or newer, KDE Frameworks and ECM 6.21 or newer,
MLT 7.38 or newer, KDDockWidgets 2.4+, OpenTimelineIO, FFmpeg, and the other
packages enumerated in `upstream/dev-docs/build.md`. The guide notes that MLT
and KDDockWidgets may need source builds even on newer distributions.

The documented configuration was attempted with GCC 13, `-O2`, Ninja, tests
and DBus disabled, and the workspace-local Qt 6.8.3 prefix. It stops at
`CMakeLists.txt:49`: ECM 6.21 cannot be found and installed ECM 5.115 is
rejected. The available Qt kit is also below the later Qt 6.10 check. No
adapter or artifact is published. A newer Qt/KF6/MLT dependency prefix is
required before implementing the common corpus build contract.

The intended upstream flow after acquisition of that stack is:

```sh
cmake -S upstream -B .build/<target> -G Ninja \
  -DCMAKE_PREFIX_PATH=<qt-kf6-mlt-prefix> \
  -DCMAKE_C_COMPILER=<cc> -DCMAKE_CXX_COMPILER=<cxx> \
  -DBUILD_TESTING=OFF -DUSE_DBUS=OFF
cmake --build .build/<target> --target kdenlive_render --parallel <jobs>
```

GCC and Clang O2 support remains unvalidated.
