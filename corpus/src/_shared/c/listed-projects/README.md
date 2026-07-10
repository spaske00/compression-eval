# Listed native corpus control files

This directory owns the ordered, fixed repository registry and shared checks for
`add-listed-native-corpus-repositories`. Each actual wrapper lives beside it at
`../<key>/`; its source is a root submodule at `../<key>/upstream`.

The concurrent `extend-gcc-clang-corpus` work exclusively owns
`../popular-projects/`, its archive cache, selection manifest, recipes, and size
qualification. This fixed list does not import or apply that workflow's
popularity or artifact-size filters. The two workflows share only observable
adapter invariants: explicit compilers and flags, isolated build trees, ELF
validation, and atomic publication.

Run fast checks with:

```sh
python3 scripts/listed_projects.py registry
python3 scripts/listed_projects.py preflight
python3 scripts/listed_projects.py roots
python3 scripts/listed_projects.py validate
```

After preflight and from a clean destination, acquire all repositories in list
order with `python3 scripts/acquire.py`. Use `--project <key>` to resume one
failed entry. Acquisition is shallow to control checkout size, records the
checked-out commit immediately in `<key>/REVISION.json`, and sets the root
submodule's `shallow` hint so a recursive clone restores the same gitlink with
minimal history. It stops at the first failure and never prints the complete-set
message when an entry fails.

If Git's submodule clone transport fails after creating partial module metadata,
remove only that failed checkout/module pair, perform a verified shallow clone
at the intended `upstream` path, then rerun acquisition for that key with
`--adopt-existing`. Adoption rejects a checkout whose `origin` differs from the
registry before Git absorbs and registers it.

## Capacity and prerequisites

The preflight on 2026-07-01 found 178,064,351,232 bytes (about 166 GiB) free on
the workspace filesystem. The complete checkout is expected to require roughly
40–80 GiB, depending on nested submodules. Keeping one target-specific build at
a time is expected to require another 100–250 GiB; all projects and all matrix
cells must not be built concurrently. Treat 80 GiB free as the clone threshold
and 250 GiB as the conservative build threshold, measure again before each
large project, and delete its `.build/` tree after retaining validation results.

Required commands are Git, CMake, Ninja, Make, Autoconf/Automake/Libtool
(`autoreconf`), Meson, Python 3, GCC/G++, and Clang/Clang++. The preflight is
read-only and reports every missing command; it never installs packages.

Generated wrapper state uses `.build/<target>` and `bin/<target>/<target>`.
Both locations are project-local and ignored by the shared C/C++ ignore rules.
