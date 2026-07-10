# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream

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
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/bin/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/src/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/share/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/dist/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/doc/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Dependencies")
  
        if (CMAKE_VERSION GREATER_EQUAL 3.19)
          set(QTC_COMMAND_ERROR_IS_FATAL COMMAND_ERROR_IS_FATAL ANY)
        endif()
        # DESTDIR is set for e.g. the cpack DEB generator, but is empty in other situations
        if(DEFINED ENV{DESTDIR})
          set(DESTDIR_WITH_SEP "$ENV{DESTDIR}/")
        else()
          set(DESTDIR_WITH_SEP "")
        endif()
        set(_default_app_target "${DESTDIR_WITH_SEP}${CMAKE_INSTALL_PREFIX}/bin/qtcreator")
        set(_ide_app_target "${_default_app_target}")
        if (NOT EXISTS "${_ide_app_target}")
          # The component CPack generators (WIX, NSIS64, IFW) install every component with their own CMAKE_INSTALL_PREFIX
          # directory and since deploy.py needs the path to IDE_APP_TARGET the line below is needeed
          string(REPLACE "Dependencies" "Unspecified" _ide_app_target "${_ide_app_target}")
        endif()
        if (NOT EXISTS "${_ide_app_target}")
          # something went wrong, reset to default and hope for the best
          set(_ide_app_target "${_default_app_target}")
        endif()
        execute_process(COMMAND
          "/home/ms/.py-venv/bin/python3.12"
          "-u"
          "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/scripts/deploy.py"
          
          
          "${_ide_app_target}"
          "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/bin/qmake"
          COMMAND_ECHO STDOUT
          COMMAND_ERROR_IS_FATAL;ANY
          )
      
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/packaging/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/install_local_manifest.txt"
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
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
