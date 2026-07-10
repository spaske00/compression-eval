# LibreOffice core corpus build

## Source and upstream instructions

- Repository: `https://github.com/LibreOffice/core`
- Revision: `a9033ae59bcd2bb8596287e17d6d5a8cf27a13a8`
- Consulted documentation: checked-out `upstream/README.md`,
  `upstream/README.cross`, `upstream/download.lst`, `upstream/autogen.sh`, and
  the README-linked TDF “How to build” documentation.
- Nested dependencies: the exact `dictionaries`, `helpcontent2`, and
  `translations` revisions recorded in `REVISION.json`; all are initialized.

LibreOffice documents `autogen.sh` configuration followed by GNU Make. The
primary application entry point is in `desktop`; the representative corpus
artifact is its source-built `soffice.bin` ELF. A normal complete build emits
it below the platform-specific `instdir/program` or work directory. The exact
path is finalized by generated `config_host.mk` after successful configuration.

## Prerequisites and acquisition blocker

The pinned README requires GCC 13 or Clang 18 on Linux, JDK 17+ for the normal
Java-enabled build, Python 3.11+, Autoconf/Automake, GNU Make, and a broad
office/GUI/document-format dependency set. LibreOffice can use system
libraries or build pinned bundled libraries listed in `upstream/download.lst`.

The recursive Git source state is complete, but the separate external-tarball
cache is not present. `download.lst` contains the checksums and names for the
bundled dependency set; upstream's documented `make fetch` acquisition phase
downloads it before compilation. The corpus adapter is prohibited from
fetching during a build, so implementation cannot proceed until those assets
are acquired and pinned outside the compilation phase (or a complete verified
system-library configuration is installed). With 155 GiB free before the
attempt, source and nested repositories fit, but a full dual-toolchain office
suite build also requires a deliberate disk/time budget.

The intended upstream flow after acquisition is conceptually:

```sh
# acquisition, performed separately and with checksums
make fetch

# isolated configuration/build, with explicit compiler environment
CC=<cc> CXX=<cxx> <source>/autogen.sh <bounded-options>
make -j<jobs>
```

No adapter or artifact is published yet. GCC and Clang O2 support remains
unvalidated, and downloaded release binaries are not eligible substitutes.
