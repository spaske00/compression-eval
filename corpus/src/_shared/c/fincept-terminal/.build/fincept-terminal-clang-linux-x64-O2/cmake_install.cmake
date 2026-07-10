# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qxlsx-build/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/md4c-build/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qgeoview-build/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/FinceptTerminal")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal"
         OLD_RPATH "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/lib:/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qgeoview-build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/plugins/platforms" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/plugins/platforms/libqwayland-generic.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/plugins" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/plugins/wayland-decoration-client")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/plugins" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/plugins/wayland-shell-integration")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/plugins" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/plugins/wayland-graphics-integration-client")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "scripts" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/scripts" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/scripts/" USE_SOURCE_PERMISSIONS REGEX "(\\.deleted\\.|\\.pytest_cache|\\.benchmarks|__pycache__|\\.pyc$|\\.db$|\\.sqlite$|\\.sqlite3$|\\.bak$|\\.orig$)" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/resources/notebooks" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/resources/notebooks/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/packaging/linux/fincept-terminal.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/packaging/linux/fincept-terminal.appdata.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "yt-dlp" FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/assets/yt-dlp_linux")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/FinceptTerminal")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal"
         OLD_RPATH "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/lib:/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qgeoview-build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/FinceptTerminal")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal/scripts" TYPE DIRECTORY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/scripts/" REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\.git$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/fincept-terminal" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/resources/requirements-numpy2.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/packaging/flatpak/in.fincept.FinceptTerminal.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/packaging/flatpak/in.fincept.FinceptTerminal.metainfo.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/256x256/apps" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/upstream/fincept-qt/resources/in.fincept.FinceptTerminal.png")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
