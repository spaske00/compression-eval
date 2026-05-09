#!/bin/bash
#shellcheck disable=SC2164

export __BASE_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# Loop dirs and execute command
function loop_dirs ()
{
    local base_dir="$PWD"
    local status=0
    for dir in */ ; do
        if [[ "$dir" == "_"* ]] ; then
            continue
        fi
        cd "$dir" || continue
        echo "Entering: $dir"

        local command_status
        if "$@"; then
            command_status=0
        else
            command_status=$?
        fi

        cd "$base_dir"
        if (( command_status != 0 )); then
            status="$command_status"
        fi
    done

    return "$status"
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
            make clean || return $?
            make -B CC="$cc" CXX="$cxx" CFLAGS="$opt" TARGET_NAME="$target".out "$@" || return $?
            if [[ -f "bin/$target.out" ]]; then
                mkdir -p "bin/$target"
                mv "bin/$target.out" "bin/$target/$target"
            elif [[ -d "bin/$target" ]]; then
                if [[ -z "$(find "bin/$target" -type f -perm -111 -print -quit)" ]]; then
                    echo "Expected bin/$target to contain executable files" >&2
                    return 1
                fi
            elif [[ -f "bin/.$target.complete" ]]; then
                rm -f "bin/.$target.complete"
            else
                echo "Expected bin/$target.out or bin/$target" >&2
                return 1
            fi
        done
    done
}
