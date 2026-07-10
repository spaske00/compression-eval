# Snappy corpus build

Pinned at `3ac3722e1bee4b99860a282fb779e8e72fa18163`, with Google Benchmark pinned at `b20cea674170b2ba45da0dfaf03953cdea473d0d`. Upstream documents an out-of-source CMake build. The selected upstream executable is `snappy_benchmark`; tests are disabled. Use `make CC=gcc-14 CXX=g++-14 TARGET_NAME=snappy-gcc-linux-x64-O2 CFLAGS=-O2`.
