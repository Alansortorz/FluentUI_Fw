cmake_minimum_required(VERSION 3.16)

project(fluentui_fw VERSION 0.1 LANGUAGES CXX)

# 配置通用编译
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(FLUENTUI_BUILD_EXAMPLES OFF)
set(FLUENTUI_BUILD_STATIC_LIB ON)

# 导入QML的位置
# QML_IMPORT_PATH - 变量名称
# ${CMAKE_BINARY_DIR}/ - 变量值，表示路径，这里表示CMake二进制文件所在的路径
# CACHE STRING - 指定变量的属性，CACHE表示变量会被缓存，运行在构建的过程中进行修改，STRING表示变量的数据类型为字符串
# "Qt Creator extra QML import paths" - 注释
# FORCE - 无论如何，要强制设置这个变量的值
set(QML_IMPORT_PATH ${CMAKE_BINARY_DIR}/ CACHE STRING "Qt Creator extra QML import paths" FORCE)

#判断FluentUI库类型
if(FLUENTUI_BUILD_STATIC_LIB)
    add_definitions(-DFLUENTUI_BUILD_STATIC_LIB)
endif()


find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appfluentui_fw
    main.cpp



)

#添加QML文件
qt_add_qml_module(appfluentui_fw
    URI fluentui_fw
    VERSION 1.0
    QML_FILES src/main.qml
              src/ui/window/MachineData.qml src/ui/window/MainWindow.qml src/ui/setting/setting.qml src/ui/window/PageWindow.qml
              src/ui/window/CrashWindow.qml src/ui/window/AboutWindow.qml src/ui/window/LoginWindow.qml src/ui/window/WelcomePage.qml
)

set_target_properties(appfluentui_fw PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appfluentui_fw
    PRIVATE Qt6::Quick
    fluentuiplugin
)

if(QT_VERSION VERSION_GREATER_EQUAL "6.2")
    #如果是Qt6.2以上，则使用qt_add_qml_module添加资源文件
    qt_add_qml_module(appfluentui_fw
        URI "appfluentui_fw"
        VERSION 1.0
        QML_FILES ${qml_files}
        RESOURCES ${resource_files}
        RESOURCE_PREFIX "/"
    )
else()
    #如果是Qt6.2以下，则使用qrc添加资源文件
    target_include_directories(appfluentui_fw PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    )
#target_sources(appfluentui_fw PRIVATE example.qrc)
endif()

install(TARGETS appfluentui_fw
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

add_subdirectory(FluentUI)
