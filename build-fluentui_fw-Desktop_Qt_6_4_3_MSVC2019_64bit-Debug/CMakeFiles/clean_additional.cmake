# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appfluentui_fw_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appfluentui_fw_autogen.dir\\ParseCache.txt"
  "appfluentui_fw_autogen"
  )
endif()
