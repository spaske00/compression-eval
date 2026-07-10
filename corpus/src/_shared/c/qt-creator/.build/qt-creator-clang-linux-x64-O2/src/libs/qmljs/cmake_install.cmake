# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/jsoncheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmldirparser_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsast_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsastfwd_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsastvisitor_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsdiagnosticmessage_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsengine_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsglobal_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsgrammar_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljskeywords_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljslexer_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsmemorypool_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljsparser_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs/parser" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/parser/qmljssourcelocation_p.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/persistenttrie.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljs_global.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljstr.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsbind.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsbundle.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljscheck.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljscodeformatter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljscompletioncontextfinder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsconstants.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljscontext.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsdialect.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsdocument.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsevaluate.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsfindexportedcpptypes.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsicons.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsimportdependencies.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsinterpreter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljslineinfo.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljslink.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsmodelmanagerinterface.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsplugindumper.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljspropertyreader.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsreformatter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsrewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsscanner.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsscopeastpath.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsscopebuilder.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsscopechain.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljssimplereader.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsstaticanalysismessage.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljstypedescriptionreader.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsutils.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsvalueowner.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/qmljs" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/qmljs/qmljsviewercontext.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libQmlJS.so.20.0.82"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libQmlJS.so.20"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "\$ORIGIN:\$ORIGIN/../Qt/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qtcreator" TYPE SHARED_LIBRARY OPTIONAL FILES
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libQmlJS.so.20.0.82"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libQmlJS.so.20"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libQmlJS.so.20.0.82"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libQmlJS.so.20"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "\$ORIGIN:\$ORIGIN/../Qt/lib:/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator:/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/fincept-terminal/deps/qt/6.8.3/gcc_64/lib:"
           NEW_RPATH "\$ORIGIN:\$ORIGIN/../Qt/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qtcreator" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libQmlJS.so")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/src/libs/qmljs/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
