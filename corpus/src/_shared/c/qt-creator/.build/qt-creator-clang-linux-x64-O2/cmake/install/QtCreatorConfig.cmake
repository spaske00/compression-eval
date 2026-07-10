
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was QtCreatorConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

####################################################################################

# Qt version used for building
# A compatible Qt version should be used by externally built plugins
set(QTC_QT_VERSION "6.8.3")

# force plugins to same path naming conventions as Qt Creator
# otherwise plugins will not be found
if(UNIX AND NOT APPLE)
  include(GNUInstallDirs)
  set(CMAKE_INSTALL_BINDIR "bin")
  set(CMAKE_INSTALL_LIBDIR "lib")
  set(CMAKE_INSTALL_LIBEXECDIR "libexec")
  set(CMAKE_INSTALL_DATAROOTDIR "share")
endif()

set(QTCREATOR_RELOCATABLE_INSTALL_PREFIX "${PACKAGE_PREFIX_DIR}")

include(CMakeFindDependencyMacro)
find_dependency(Qt6 "6.8.3"
  REQUIRED COMPONENTS
  Concurrent Core Gui Widgets Network PrintSupport Qml Sql
)
find_dependency(Qt6 COMPONENTS Quick QuickWidgets QUIET)
find_dependency(Qt6 OPTIONAL_COMPONENTS TaskTree QUIET)

if (NOT IDE_VERSION)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorIDEBranding.cmake")
endif()

if (NOT DEFINED add_qtc_plugin)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorAPI.cmake")
endif()

if (NOT DEFINED add_translation_targets)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorTranslations.cmake")
endif()

if (NOT DEFINED add_qtc_documentation)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorDocumentation.cmake")
endif()

if (NOT COMMAND qtc_sbom_begin_project)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorSbom.cmake")
endif()

if (NOT TARGET QtCreator::Core)
  include("${CMAKE_CURRENT_LIST_DIR}/QtCreatorTargets.cmake")
endif()

qtc_check_if_project_is_sbom_ready()

qtc_add_exported_sbom_paths(
    PREFIXES "${QTCREATOR_RELOCATABLE_INSTALL_PREFIX}"
)
