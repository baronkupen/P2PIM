cmake_minimum_required(VERSION 2.8)

project(Core.Common)

#FILE(GLOB HEADERFILES headers/*.h)

add_library(Core.Common SHARED workaround.cpp)
target_include_directories(Core.Common INTERFACE headers)
