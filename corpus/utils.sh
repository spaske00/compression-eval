#!/bin/bash
#shellcheck disable=SC2164

export __BASE_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# Loop dirs and execute command
function loop_dirs ()
{
    local base_dir="$PWD"
    for dir in */ ; do
        if [[ "$dir" == "_"* ]] ; then
            continue
        fi
        cd "$dir" || continue
        echo "Entering: $dir"

        $@

        cd "$base_dir"
    done
}

# make_all CC CXX [make args]
#
# Runs `make` for all targets.
# Expects that definitions exist for:
#   - `arch` array with a list of architectures
#   - `opts` associative array with mappings of suffix->options
#     example of such mapping: ["debug"]="-g"
function make_all ()
{
    local cc="$1"
    local cxx="$2"
    shift 2

    for a in "${arch[@]}"; do
        for o in "${!opts[@]}"; do
            local prog
            prog="$(basename "$PWD")-${cc}"
            local opt="${opts[$o]}"
            local target="$prog-$a-$o"

            echo "Building $target ..."
            make -B CC="$cc" CXX="$cxx" CFLAGS="$opt" TARGET_NAME="$target".out "$*"
            mkdir -p "bin/$target"
            mv "bin/$target.out" "bin/$target/$target"
        done
    done
}

