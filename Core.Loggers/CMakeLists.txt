cmake_minimum_required(VERSION 2.8)

project(Core.Loggers)

add_library(Core.Loggers SHARED ${CMAKE_CURRENT_SOUCE_DIR}/src/*.cpp)
target_include_directories(Core.Loggers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)

target_link_libraries(Core.Loggers Core.DateTime Core.Common)
