cmake_minimum_required(VERSION 2.8)

project(Core.Loggers)

FILE(GLOB SRCFILES src/*.cpp)

add_library(Core.Loggers SHARED ${SRCFILES})
target_include_directories(Core.Loggers PUBLIC headers)

target_compile_options(Core.Loggers PUBLIC "-std=c++11")

target_link_libraries(Core.Loggers Core.DateTime Core.Common)
