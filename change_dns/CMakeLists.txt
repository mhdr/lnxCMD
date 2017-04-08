cmake_minimum_required(VERSION 3.7)
project(change_dns)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

set(SOURCE_FILES main.cpp file_utils.hpp)
add_executable(change_dns ${SOURCE_FILES})