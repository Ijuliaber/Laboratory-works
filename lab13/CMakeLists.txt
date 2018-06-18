cmake_minimum_required(VERSION 3.8)
project(lab13)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp my_string.hpp my_string.cpp)
add_executable(lab13 ${SOURCE_FILES})