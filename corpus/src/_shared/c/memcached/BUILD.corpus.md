# memcached corpus build

## Source and upstream instructions

- Repository: `https://github.com/memcached/memcached`
- Revision: `f1674f0231e5d291db474c4ad297f5f069d32521`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/autogen.sh`, `upstream/configure.ac`, and `upstream/Makefile.am`.
- Nested dependencies: none. The optional proxy vendor sources are not needed
  for the selected default server build and are deliberately not fetched.

The README documents the Git-checkout flow as `./autogen.sh`, `./configure`,
and `make`, and identifies `./memcached` as the resulting server executable.
The primary `memcached` executable is therefore the representative native
target. The adapter builds it from a target-local source copy and expects it at
`.build/<target>/source/memcached`.

## Prerequisites and commands

The default build requires Perl, Autoconf, Automake, a C compiler, Make, and
libevent development headers and libraries. Optional TLS, SASL, seccomp,
systemd, and proxy features are not enabled. On Debian-derived systems the
upstream README names `autotools-dev`, `automake`, and `libevent-dev`.

```sh
make clean
make CC=gcc-14 CXX=g++-14 TARGET_NAME=memcached-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=memcached-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter copies the pinned tracked source into `.build/<target>/source`,
runs the documented Autotools flow there without modifying `upstream`, passes
the supplied compiler and flags to configure and make, and atomically stages
the unstripped ELF at `bin/<target>/<target>`. `JOBS` controls Make parallelism.
`make clean` removes `.build` and `bin`; failed builds remove publication state
for the requested target.

## Validation and limitations

The required baseline was validated with GCC 14.2.0 and Clang 18.1.3 at `-O2`
against libevent 2.1.12. Both clean builds produced unstripped x86-64 ELF PIE
executables, and configure evidence records the requested compiler and flags.
An earlier configure attempt without libevent development headers failed before
publication and left no staged artifact, confirming failed-build cleanup. No
adapter step downloads dependencies or substitutes a system/prebuilt
executable. Other matrix configurations remain to be validated.
