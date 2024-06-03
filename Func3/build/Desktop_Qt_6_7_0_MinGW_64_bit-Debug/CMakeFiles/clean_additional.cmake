# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Func3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Func3_autogen.dir\\ParseCache.txt"
  "Func3_autogen"
  )
endif()
