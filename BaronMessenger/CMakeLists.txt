cmake_minimum_required(VERSION 2.8.12)

project(BaronMessenger)

add_executable(BaronMessenger src/BaronMessenger.cpp)

target_link_libraries(BaronMessenger Core.Common Core.TypeWrappers Core.DateTime Core.Loggers)
