#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "litehtml" for configuration "None"
set_property(TARGET litehtml APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(litehtml PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "CXX"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/liblitehtml.a"
  )

list(APPEND _cmake_import_check_targets litehtml )
list(APPEND _cmake_import_check_files_for_litehtml "${_IMPORT_PREFIX}/lib/liblitehtml.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
