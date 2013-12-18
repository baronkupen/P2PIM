cmake_minimum_required(VERSION 2.8.12)

project(Core.TypeWrappers)

FILE(GLOB SRCFILES src/*.cpp)

add_library(Core.TypeWrappers SHARED ${SRCFILES})
target_include_directories(Core.TypeWrappers PUBLIC headers)

target_compile_options(Core.TypeWrappers PUBLIC "-std=c++11")

target_link_libraries(Core.TypeWrappers Core.Common)
