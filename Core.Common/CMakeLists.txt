cmake_minimum_required(VERSION 2.8)

project(Core.Common)

add_library(Core.Common INTERFACE)
target_include_directories(Core.Common INTERFACE ${CMAKE_CURRENT_SOUCE_DIR}/headers)
