# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/LibCat_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/LibCat_autogen.dir/ParseCache.txt"
  "LibCat_autogen"
  )
endif()
