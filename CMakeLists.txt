cmake_minimum_required(VERSION 3.5) # CMake install : https://cmake.org/download/
project(nju_campus LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "C:/Qt/6.9.0/mingw_64") # Qt Kit Dir
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 COMPONENTS Widgets REQUIRED) # Qt COMPONENTS
aux_source_directory(./src srcs)

# Specify MSVC UTF-8 encoding   
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(${PROJECT_NAME}
    WIN32 # If you need a terminal for debug, please comment this statement 
    ${srcs}
    src/mainmap.h src/mainmap.cpp
    src/mainmap.h
    src/playground.h src/playground.cpp
    src/nanyong_building.h src/nanyong_building.cpp
    src/dormitory.h src/dormitory.cpp
    src/sujiao_building.h src/sujiao_building.cpp
    src/canteen.h src/canteen.cpp
    src/plot.h src/plot.cpp
    src/plot.h src/plot.cpp
    src/npc.h src/npc.cpp
    src/player.h src/player.cpp
    src/gameplay.h src/gameplay.cpp
) 
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets) # Qt5 Shared Library
add_subdirectory(mainwindows)
