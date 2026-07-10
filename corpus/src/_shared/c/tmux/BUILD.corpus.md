# tmux corpus build

Pinned at `88932f2d09b9b85005fd64f6cf2a4a390b4a5bc6`. Upstream `README` documents `autogen.sh`, `configure`, and `make`, requiring libevent, ncurses, pkg-config, and yacc. The adapter builds a target-local tracked source copy and stages the primary `tmux` executable. Use `make CC=gcc-14 CXX=g++-14 TARGET_NAME=tmux-gcc-linux-x64-O2 CFLAGS=-O2`.
