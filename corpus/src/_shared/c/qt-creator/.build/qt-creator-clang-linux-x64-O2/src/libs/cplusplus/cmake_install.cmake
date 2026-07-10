# Install script for directory: /home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/ASTParent.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/ASTPath.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/AlreadyConsideredClassContainer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/BackwardsScanner.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/CppDocument.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/CppRewriter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/DependencyTable.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/DeprecatedGenTemplateInstance.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/ExpressionUnderCursor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/FastPreprocessor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/FindUsages.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/Icons.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/LookupContext.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/LookupItem.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/Macro.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/MatchingText.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/NamePrettyPrinter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/Overview.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/PPToken.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/PreprocessorClient.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/PreprocessorEnvironment.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/ResolveExpression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/SimpleLexer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/SnapshotSymbolVisitor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/SymbolNameVisitor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/TypeOfExpression.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/TypePrettyPrinter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/cppmodelmanagerbase.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/declarationcomments.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/findcdbbreakpoint.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/pp-cctype.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/pp-engine.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtcreator/src/libs/cplusplus" TYPE FILE FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/upstream/src/libs/cplusplus/pp.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libCPlusPlus.so.20.0.82"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libCPlusPlus.so.20"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "\$ORIGIN:\$ORIGIN/../Qt/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qtcreator" TYPE SHARED_LIBRARY OPTIONAL FILES
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libCPlusPlus.so.20.0.82"
    "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libCPlusPlus.so.20"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libCPlusPlus.so.20.0.82"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qtcreator/libCPlusPlus.so.20"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qtcreator" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/lib/qtcreator/libCPlusPlus.so")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ms/ms-base/work/phd/compression-algs-eval/compression-eval/corpus/src/_shared/c/qt-creator/.build/qt-creator-clang-linux-x64-O2/src/libs/cplusplus/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
