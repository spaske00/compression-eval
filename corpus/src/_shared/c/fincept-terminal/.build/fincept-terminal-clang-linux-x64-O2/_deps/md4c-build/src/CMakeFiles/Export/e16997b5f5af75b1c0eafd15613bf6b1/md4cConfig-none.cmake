#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "md4c::md4c" for configuration "None"
set_property(TARGET md4c::md4c APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(md4c::md4c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "C;CXX"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libmd4c.a"
  )

list(APPEND _cmake_import_check_targets md4c::md4c )
list(APPEND _cmake_import_check_files_for_md4c::md4c "${_IMPORT_PREFIX}/lib/libmd4c.a" )

# Import target "md4c::md4c-html" for configuration "None"
set_property(TARGET md4c::md4c-html APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(md4c::md4c-html PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NONE "C;CXX"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libmd4c-html.a"
  )

list(APPEND _cmake_import_check_targets md4c::md4c-html )
list(APPEND _cmake_import_check_files_for_md4c::md4c-html "${_IMPORT_PREFIX}/lib/libmd4c-html.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
