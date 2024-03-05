# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appfluentui_fw_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appfluentui_fw_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_qmlcache_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_qmlcache_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_resources_1_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_resources_1_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_resources_2_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentui_resources_2_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentuiplugin_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentuiplugin_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\CMakeFiles\\fluentuiplugin_init_autogen.dir\\AutogenUsed.txt"
  "FluentUI\\src\\CMakeFiles\\fluentuiplugin_init_autogen.dir\\ParseCache.txt"
  "FluentUI\\src\\fluentui_autogen"
  "FluentUI\\src\\fluentui_qmlcache_autogen"
  "FluentUI\\src\\fluentui_resources_1_autogen"
  "FluentUI\\src\\fluentui_resources_2_autogen"
  "FluentUI\\src\\fluentuiplugin_autogen"
  "FluentUI\\src\\fluentuiplugin_init_autogen"
  "appfluentui_fw_autogen"
  )
endif()
