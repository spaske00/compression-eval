# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtadvanceddocking-qt6" TYPE FILE FILES
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/linux/FloatingWidgetTitleBar.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/ads_globals.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockAreaTabBar.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockAreaTitleBar.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockAreaTitleBar_p.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockAreaWidget.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockContainerWidget.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockManager.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockOverlay.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockSplitter.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockWidget.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockWidgetTab.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockingStateReader.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockFocusController.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/ElidingLabel.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/FloatingDockContainer.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/FloatingDragPreview.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/IconProvider.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/DockComponentsFactory.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/AutoHideSideBar.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/AutoHideTab.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/AutoHideDockContainer.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/PushButton.h"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/ResizeHandle.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "license" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ads/license" TYPE FILE FILES
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/../LICENSE"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/../gnu-lgpl-v2.1.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/x64/lib/libqtadvanceddocking-qt6_static.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake"
         "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets-none.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE RENAME "qtadvanceddocking-qt6Config.cmake" FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/sources/qtads/src/qtadvanceddockingConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/src/qtadvanceddocking-qt6ConfigVersion.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/.build/fincept-terminal-clang-linux-x64-O2/_deps/qtads-build/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
