# Stockfish corpus build

## Source and upstream instructions

- Repository: `https://github.com/official-stockfish/Stockfish`
- Revision: `6088838797d6333711c17fe2c0962fa0858517ec`
- Consulted documentation: `upstream/README.md`, especially **Compiling
  Stockfish**, and `make help` from `upstream/src`.
- Nested submodules: none.

The checked-out README directs Unix builds to the Makefile in `src` and
documents `make help` plus the `build` and `profile-build` targets. The corpus
uses `build`: PGO would run the newly built engine during compilation and is
not needed to produce the representative source-built artifact.

## Prerequisites and selected artifact

The build requires GNU Make, a C++17 compiler, standard Unix build tools, and
POSIX threading support. The selected target is Stockfish's primary documented
UCI engine executable, produced as `src/stockfish` in the isolated source copy.
The adapter stages it as `bin/<target>/<target>`.

## Corpus commands

From this directory:

```sh
make clean
make CC=gcc CXX=g++ TARGET_NAME=stockfish-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=stockfish-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter copies the pinned checkout to `.build/<target>/source`, then runs
the documented Makefile there with `ARCH=x86-64`, the supplied C++ compiler,
and the supplied flags. `optimize=no` prevents upstream's default `-O3` from
overriding the requested corpus optimization. The same effective flags are
passed to compilation and linking. The upstream `build` target invokes `net`,
which downloads the default NNUE network when it is absent. The pinned Git
checkout does not contain `src/nn-af1339a6dea3.nnue`. To enforce the corpus
no-network build contract, the adapter checks for that acquisition-time input
before invoking Make and fails with an acquisition diagnostic when it is
missing.

Cleanup is `make clean`, which removes `.build` and `bin`. A failed build also
removes the target's publication directory and temporary staging directory.

## Known limitations

- `ARCH=x86-64` intentionally selects the upstream generic 64-bit x86 target;
  it does not tune the result to the build host.
- Stockfish is C++-only, so the supplied `CC` is validated as belonging to the
  same GCC or Clang family while `CXX` performs compilation and linking.
- GCC and Clang `O2` validation is blocked until the pinned default network is
  acquired and its provenance/checksum are recorded outside the build phase.
- Other corpus configurations have not yet been validated. Any unsupported
  cell must be recorded here after an attempted build; it must not be silently
  treated as successful.
