cmake_minimum_required(VERSION 2.8)

project(Core.DateTime)

add_library(Core.DateTime SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
target_include_directories(Core.DateTime PUBLIC ${CMAKE_CURRENT_SOUCE_DIR}/headers)
