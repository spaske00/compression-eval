# Dragonfly corpus build

## Source and upstream instructions

- Repository: `https://github.com/dragonflydb/dragonfly`
- Revision: `09ec52e572f18209be024158055a272c6685de96`
- Consulted documentation: root `upstream/README.md` and
  `upstream/docs/build-from-source.md`.
- Required nested submodule: `helio` at
  `e16b6cfe34cf0f532d1cda02e70aea45f805be40`.

The checked-out documentation requires a recursive clone, configures through
`./helio/blaze.sh -release`, and builds the `dragonfly` Ninja target from
`build-opt`. The selected artifact is the primary documented `dragonfly`
server executable.

## Prerequisites and current blocker

For Debian/Ubuntu, upstream lists Ninja, libunwind development headers, Boost
Context development headers, OpenSSL development headers, Autoconf Archive,
Libtool, CMake, G++, Bison, and zlib development headers. The 2026-07-01 host
preflight found G++, Ninja, OpenSSL, Libtool, and zlib available. It found these
required packages missing:

- `libunwind-dev`
- `libboost-context-dev`
- `autoconf-archive`
- `bison`

CMake is available as a workspace tool rather than an installed dpkg package.
The adapter and GCC/Clang builds remain pending until the missing system
prerequisites are installed and the Helio configuration path is checked for
any additional source acquisition it would otherwise perform during build.

## Intended commands and cleanup

Upstream's documented flow is:

```sh
cd upstream
./helio/blaze.sh -release
cd build-opt
ninja dragonfly
```

The corpus adapter must translate this to a target-specific `.build/<target>`,
pass the requested `CC`, `CXX`, and flags, prevent downloads during configure
or compilation, and stage `bin/<target>/<target>` atomically. Cleanup will be
`make clean`, removing `.build` and `bin`.

## Known limitations

- GCC and Clang `O2` are not yet validated because required host packages are
  absent.
- Full and minimal feature configurations may have different dependency sets;
  the primary server target remains the selected artifact.
