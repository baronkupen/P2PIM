cmake_minimum_required(VERSION 2.8)

project(BaronMessenger)

add_executable(BaronMessenger BaronMessenger.cpp)

target_link_libraries(BaronMessenger Core.Common Core.DateTime Core.Loggers))
