# TinyCC corpus build

Pinned at `a338258d309c888bde96b2d1f206299231a54ddf`. Upstream `README` documents `./configure && make`; the configure script supports a separate build directory and explicit `--cc`, `--extra-cflags`, and `--extra-ldflags`. The selected artifact is `tcc`. Use `make CC=gcc-14 CXX=g++-14 TARGET_NAME=tinycc-gcc-linux-x64-O2 CFLAGS=-O2`.
