cmake_minimum_required(VERSION 3.8)
project(lab7)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES test.cpp complex.h complex.cpp)
add_executable(lab7 ${SOURCE_FILES})