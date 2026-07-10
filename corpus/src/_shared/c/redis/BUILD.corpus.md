# Redis corpus build

Pinned at `5b22a09918743ba72952e35e431db23eb3d19605`. Upstream `README.md` documents plain `make` for the core server. The adapter archives tracked source into `.build/<target>/source`, builds `redis-server` with bundled dependencies and libc allocation, and stages `.build/<target>/source/src/redis-server`. Modules, TLS, installation, and tests are excluded. Use `make CC=gcc-14 CXX=g++-14 TARGET_NAME=redis-gcc-linux-x64-O2 CFLAGS=-O2`; `make clean` removes generated trees.
