if(NOT EXISTS "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/imhex/.build/imhex-clang-linux-x64-O2/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/imhex/.build/imhex-clang-linux-x64-O2/install_manifest.txt")
endif()

file(READ "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/imhex/.build/imhex-clang-linux-x64-O2/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
  if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    exec_program(
      "/opt/cmake-3.31.10-linux-x86_64/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    if(NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
    endif()
  else(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
  endif()
endforeach()
