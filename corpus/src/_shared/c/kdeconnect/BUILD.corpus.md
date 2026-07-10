# KDE Connect corpus build

## Source and upstream instructions

- Repository: `https://github.com/KDE/kdeconnect-kde`
- Revision: `58e52572fb7928985d00f34420ed461cb0c82717`
- Consulted documentation: checked-out `upstream/README.md` and
  `upstream/CMakeLists.txt`, plus the README-linked KDE Community pages “Build
  KDE Connect from source” and “Build KDE Connect using CMake”.
- Nested dependencies: none; the checkout declares no Git submodules.

The KDE documentation recommends `kde-builder` because KDE Connect needs many
KDE dependencies. Its direct flow uses an out-of-source CMake build, a private
install prefix, and a parallel build/install. The representative corpus target
is the non-GUI `kdeconnect-cli` executable declared in
`upstream/cli/CMakeLists.txt`; when configuration succeeds, its build-tree path
is expected to be `bin/kdeconnect-cli`.

## Prerequisites and verified blocker

This pinned revision requires ECM and KDE Frameworks 6 version 6.0 or newer,
Qt 6.7 or newer, Kirigami Addons, PulseAudioQt, StatusNotifierItem, Wayland,
DBus, and the remaining KF6 components listed by `upstream/CMakeLists.txt`.
The workspace-local Qt 6.8.3 kit satisfies the Qt baseline, but Ubuntu Noble on
this host provides only ECM/KF5 5.115 and has no matching KF6 development
package candidates.

The documented configuration was attempted with GCC 13, `-O2`, Ninja, tests
disabled, and the Qt 6.8.3 prefix. It fails at `CMakeLists.txt:39` because ECM
6.0 cannot be found; installed ECM 5.115 is explicitly rejected. Consequently
no adapter or artifact is published yet. A reproducible KF6 dependency prefix
(normally produced with `kde-builder`) is required before implementing and
validating the common corpus build contract.

Once that prerequisite exists, the intended direct upstream flow is:

```sh
cmake -S upstream -B .build/<target> -G Ninja \
  -DCMAKE_PREFIX_PATH=<qt-and-kf6-prefix> \
  -DCMAKE_C_COMPILER=<cc> -DCMAKE_CXX_COMPILER=<cxx>
cmake --build .build/<target> --target kdeconnect-cli --parallel <jobs>
```

GCC and Clang O2 support remains unvalidated.
