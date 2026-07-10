# FinceptTerminal corpus build

## Source and upstream instructions

- Repository: `https://github.com/Fincept-Corporation/FinceptTerminal`
- Revision: `6d82e1f8d6e81c506efeec312414b5d472b437cb`
- Consulted documentation: root `upstream/README.md` **Option 4 — Build from
  Source (Manual)**, `upstream/fincept-qt/CMakePresets.json`, and
  `upstream/fincept-qt/CMakeLists.txt`.
- Nested Git submodules: none.

The checked-out documentation defines FinceptTerminal v4 as a native C++20 Qt
application and documents the `linux-release` CMake/Ninja build. The selected
artifact is its primary `FinceptTerminal` executable.

## Prerequisites and selected artifact

Upstream pins CMake 3.27.7, Ninja 1.11.1, GCC 12.3 (or Apple Clang 15), Qt
6.8.3, and Python 3.11.9. On Linux it additionally lists Qt Base, Charts,
Tools, private Base headers, WebSockets, and OpenGL development packages. The
CMake project also requires OpenSSL and declares QXlsx, md4c, QGeoView, QtADS,
and ed25519 through `FetchContent`.

The workspace-local acquisition installs Qt 6.8.3 `linux_gcc_64` with Charts,
Multimedia, and WebSockets under `deps/qt`, and checks out all five declared
FetchContent repositories under `deps/sources`. `DEPENDENCIES.json` records the
Qt kit and each exact URL, commit, and local directory. It also records
upstream's pinned `yt-dlp_linux` 2026.03.17 asset and SHA-256; the adapter uses
that pre-acquired file and disables its configure-time download. These generated
source, SDK, and asset directories are ignored; another checkout must recreate
them from that record before building.

## Corpus commands

After the dependencies recorded in `DEPENDENCIES.json` are acquired outside
the build phase, run from this directory:

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=fincept-terminal-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=fincept-terminal-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures the checked-out `fincept-qt` source into
`.build/<target>` with Ninja, the supplied C/C++ compilers and flags, and
`FETCHCONTENT_FULLY_DISCONNECTED=ON`. It will not download missing dependencies
during configuration. A successful build stages only the upstream
`FinceptTerminal` ELF at `bin/<target>/<target>`.

Cleanup is `make clean`, which removes `.build` and `bin`. Failed builds remove
the target publication and temporary staging directory.

## Known limitations

- Upstream documents GCC for Linux and Apple Clang for macOS; Linux Clang is
  accepted by its version check but still requires validation after dependency
  acquisition.
- The adapter deliberately forbids CMake dependency downloads. Required sources
  must be acquired and pinned before task 5.3 can pass.
