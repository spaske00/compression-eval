# Blender corpus build

## Source and upstream instructions

- Repository: `https://github.com/blender/blender`
- Revision: `f8b3d5872b9a6726a0384641c160c041e5773d2e`
- Consulted documentation: checked-out `upstream/README.md`, top-level
  `upstream/Makefile`, `upstream/CMakeLists.txt`, and the README-linked Blender
  building handbook.
- Nested dependencies: pinned Linux-only `lib/linux_x64` revision recorded in
  `REVISION.json`. macOS and Windows library submodules are intentionally not
  initialized for this Linux target.

Blender documents `make update` to acquire Git LFS source assets and the
platform library repository, followed by its CMake-based build. The selected
artifact is the primary `blender` executable at `.build/<target>/bin/blender`.

## Acquisition, prerequisites, and commands

Git LFS is required. The GitHub mirror does not host the main repository's LFS
objects, so the pinned assets were acquired from Blender's authoritative
`projects.blender.org/blender/blender.git` LFS endpoint. The 2.3 GiB pinned
Linux library checkout supplies the documented precompiled development stack;
compilation performs no network access.

```sh
make clean
make CC=gcc-14 CXX=g++-14 TARGET_NAME=blender-gcc-linux-x64-O2 CFLAGS=-O2
make clean
make CC=clang CXX=clang++ TARGET_NAME=blender-clang-linux-x64-O2 CFLAGS=-O2
```

The adapter configures `.build/<target>` with the supplied compilers and flags,
uses the pinned Linux libraries, builds `blender`, and atomically stages an
unstripped ELF at `bin/<target>/<target>`. `JOBS` controls Ninja parallelism;
failed builds publish nothing. To keep the representative build bounded, it
disables optional Cycles, Alembic, USD, OpenVDB, denoising/path-guiding,
OpenSubdiv, fluid simulation, Freestyle, Hydra, OpenXR, Bullet, Manifold,
MaterialX, Haru, and Potrace components; the primary Blender executable and
core UI remain the selected artifact.

This pinned Blender revision requires GCC 14 or newer. The corpus GCC family is
configured to invoke `gcc-14`/`g++-14` while retaining `gcc` in target names;
older compiler paths fail at the explicit version check in top-level
`CMakeLists.txt`. Clang 18 configuration also succeeds.
