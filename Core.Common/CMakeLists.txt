cmake_minimum_required(VERSION 2.8.12)

project(Core.Common)

#FILE(GLOB HEADERFILES headers/*.h)
FILE(GLOB SRCFILES src/*.cpp)

add_library(Core.Common SHARED ${SRCFILES})
target_include_directories(Core.Common PUBLIC headers)

target_compile_options(Core.Common PUBLIC "-std=c++11")
