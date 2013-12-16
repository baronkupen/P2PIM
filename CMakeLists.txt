#minimum cmake version needed to make this project
cmake_minimum_required(VERSION 2.8.12)

#name of the project
project(BaronMessengerRepo)

add_subdirectory(BaronMessenger)
add_subdirectory(Core.Common)
add_subdirectory(Core.DateTime)
add_subdirectory(Core.Loggers) 

