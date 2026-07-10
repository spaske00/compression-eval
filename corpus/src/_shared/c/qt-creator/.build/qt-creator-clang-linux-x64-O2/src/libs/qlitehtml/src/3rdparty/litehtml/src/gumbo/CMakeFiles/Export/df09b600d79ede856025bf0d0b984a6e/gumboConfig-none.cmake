#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gumbo" for configuration "None"
set_property(TARGET gumbo APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(gumbo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "C;CXX"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libgumbo.a"
  )

list(APPEND _cmake_import_check_targets gumbo )
list(APPEND _cmake_import_check_files_for_gumbo "${_IMPORT_PREFIX}/lib/libgumbo.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
