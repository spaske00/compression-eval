# ImHex corpus build

## Source and upstream instructions

- Input URL: `https://github.com/WerWolv/ImHex/releases`
- Canonical repository: `https://github.com/WerWolv/ImHex`
- Revision: `bf42e47898811de563fd4ee61b12957a0cf6a024`
- Consulted documentation: `upstream/README.md`,
  `upstream/dist/compiling/linux.md`, and
  `upstream/dist/get_deps_debian.sh`.
- Recursive dependencies: 21 exact submodule revisions recorded in
  `REVISION.json`.

The Linux guide requires a recursive checkout, its Debian dependency list,
CMake/Ninja, and GCC 14 (optionally LLVM Clang). It configures a Release build
and installs ImHex. The selected artifact is the primary `imhex` application
executable built from source.

## Current prerequisite blocker

The recursive source checkout is complete. The host still lacks these packages
from the checked-out Debian dependency script:

- `gcc-14`, `g++-14`, and `lld`
- `libmagic-dev`, `libmbedtls-dev`, and `libdbus-1-dev`
- `libcurl4-gnutls-dev`, `libgtk-3-dev`, and `libzstd-dev`
- `liblz4-dev`, `libssh2-1-dev`, `libmd4c-dev`, and `libmd4c-html0-dev`

These prerequisites are installed. GCC validation uses the documented GCC 14
toolchain; Clang validation uses the available LLVM Clang 18 toolchain.

## Intended build and cleanup

The adapter translates the documented flow to an isolated `.build/<target>`
directory, configures with Ninja and the requested `CC`, `CXX`, and flags, and
builds the primary `main` target without installing it system-wide. Offline
mode disables pattern acquisition; .NET bundling, SDK generation, and tests are
disabled because they are not part of the selected artifact. The executable is
disabled because they are not part of the selected artifact. Optional strict
warnings are disabled because this revision passes a Clang-newer warning name
that Clang 18 rejects under `-Werror`; the adapter narrowly demotes only
unknown-warning-option diagnostics for Clang. This does not alter generated code. The
executable is atomically staged at `bin/<target>/<target>`. `make clean`
removes `.build` and `bin`.

GCC and Clang `O2` support is not yet established. Any compiler or matrix
limitation found after prerequisites are installed must be recorded here.
