cmake_minimum_required(VERSION 2.8.12)

project(Core.DateTime)

FILE(GLOB SRCFILES src/*.cpp)

add_library(Core.DateTime SHARED ${SRCFILES})
target_include_directories(Core.DateTime PUBLIC headers)

target_compile_options(Core.DateTime PUBLIC "-std=c++11")

target_link_libraries(Core.DateTime Core.TypeWrappers Core.Common)
