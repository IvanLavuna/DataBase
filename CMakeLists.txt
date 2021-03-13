cmake_minimum_required(VERSION 3.17)
project(DataBase)

set(CMAKE_CXX_STANDARD 14)

include_directories(include source)
add_executable(DataBase main.cpp source/Write.cpp source/Base.cpp include/structs.h)