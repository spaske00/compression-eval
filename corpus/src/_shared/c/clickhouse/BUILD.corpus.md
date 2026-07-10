# ClickHouse corpus build

## Source and upstream instructions

- Repository: `https://github.com/ClickHouse/ClickHouse`
- Revision: `02dd674fc494dd9fcae4277f39e1d1e2c7a32c44`
- Consulted documentation: `upstream/docs/en/development/build.md`, root
  `upstream/CMakeLists.txt`, and `upstream/programs/CMakeLists.txt`.

The checked-out Linux guide requires Ubuntu 24.04 or newer, CMake, Ninja,
Python, NASM, Yasm, Gawk, and a recursive checkout containing all submodules.
It documents configuring an isolated CMake build and building the `clickhouse`
Ninja target. The selected bounded target is that primary multi-purpose
`programs/clickhouse` executable; the server, client, local, and benchmark
modes are symlinks to it.

## Current acquisition and capacity blocker

This revision declares 134 nested submodules. None are currently initialized,
so the source checkout cannot satisfy CMake without acquisition. The parent
checkout occupies about 438 MiB, but only 159 GiB is free on the workspace
filesystem. That is below this change's documented conservative 250 GiB
threshold for a large project build, especially because both clean GCC and
Clang target-specific trees are required.

No adapter or build is attempted while this source and capacity preflight is
incomplete. Downloading a prebuilt ClickHouse binary is not an eligible
substitute.

## Intended build and limitations

The documented build is conceptually:

```sh
cmake -S upstream -B .build/<target> -G Ninja
cmake --build .build/<target> --target clickhouse
```

The eventual adapter must pass the requested compilers and flags, disable Rust
to avoid network access, use only pinned initialized submodules, and atomically
stage `.build/<target>/programs/clickhouse` at `bin/<target>/<target>`.

The checked-out guide states that Clang 21 or newer is supported and that GCC
is unsupported. This directly conflicts with the corpus requirement to prove a
GCC `O2` build; any GCC failure must be retained as a demonstrated upstream
limitation rather than reported as support.
