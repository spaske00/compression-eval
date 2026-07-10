# ncmpcpp corpus build

Pinned at `04f2f439cae8e1432d31a58942c9528c7e71050d`. Upstream documents `autoreconf -fiv`, `configure`, and `make`. Required dependencies are Boost, ncursesw, readline, libcurl, and libmpdclient >= 2.8. The bounded corpus build disables optional FFTW visualization, tag editing, LTO, outputs, and clock screens. The adapter builds a target-local tracked source copy and stages `src/ncmpcpp`. Use `make CC=gcc-14 CXX=g++-14 TARGET_NAME=ncmpcpp-gcc-linux-x64-O2 CFLAGS=-O2`; `make clean` removes generated trees.

Clean GCC 14.2.0 and Clang 18.1.3 builds passed at `-O2`. Both produced unstripped x86-64 ELF PIE executables reporting ncmpcpp 0.10.2_dev. Earlier missing-dependency and invalid-target attempts left no staged artifact.
