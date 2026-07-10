# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator" TYPE DIRECTORY FILES
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/android"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/cplusplus"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/glsl"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/indexer_preincludes"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/jsonschemas"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/lua-plugins"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/lua-lupdate"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/modeleditor"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/qmldesigner"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/qmlicons"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/qml-type-descriptions"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/schemes"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/snippets"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/styles"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/templates"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/themes"
    USE_SOURCE_PERMISSIONS)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/.pylintrc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/boosttypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/cdbbridge.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/cdbext.pyi")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/creatortypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/dumper.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/gdbbridge.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/gdbtracepoint.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/LICENSE.GPL3-EXCEPT")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/lldbbridge.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/misctypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/opencvtypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/pdbbridge.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/personaltypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/qttypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/README.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/setup.cfg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/android_stdtypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/libcpp_stdtypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/stdtypes.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/utils.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/loadorder_gdbbridge.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/loadorder_lldbbridge.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qtcreator/debugger" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/share/qtcreator/debugger/visualize.py")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/share/qtcreator/translations/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/share/qtcreator/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
