#minimum cmake version needed to make this project
cmake_minimum_required(VERSION 2.8)

#name of the project
project(BaronMessengerRepo)

#uses the c++11 standard
SET($CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(BaronMessenger)
add_subdirectory(Core.Common)
add_subdirectory(Core.DateTime)
add_subdirectory(Core.Loggers) 

