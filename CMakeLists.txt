cmake_minimum_required(VERSION 3.2)
project(yace)

add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -O3")
include_directories(include)
add_library(yace src/editor.cpp)

enable_testing()
add_test(run_tests test/test_suite)
