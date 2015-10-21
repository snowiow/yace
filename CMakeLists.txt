cmake_minimum_required(VERSION 3.2)
project(yace)

add_subdirectory(backend)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -O3")

enable_testing()
add_test(run_tests backend/test/test_suite)