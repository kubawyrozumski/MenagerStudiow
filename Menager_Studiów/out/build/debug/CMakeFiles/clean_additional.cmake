# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MenagerStudiow_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MenagerStudiow_autogen.dir\\ParseCache.txt"
  "MenagerStudiow_autogen"
  )
endif()
