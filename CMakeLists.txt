cmake_minimum_required(VERSION 3.2)
project(yace)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} \
    -Wall \
    -Wextra \
    -Werror \
    -Wnon-virtual-dtor \
    -Wshadow \
    -Winit-self \
    -Wredundant-decls \
    -Wcast-align \
    -Wundef \
    -Wfloat-equal \
    -Winline \
    -Wunreachable-code \
    -Wmissing-declarations \
    -Wmissing-include-dirs \
    -Wmain \
    -pedantic \
    -Wfatal-errors \
    -Wno-switch \
    -std=c++1y \
    -O3")

add_subdirectory(backend)
add_subdirectory(backend/test)
enable_testing()
add_test(yace_test ${CMAKE_SOURCE_DIR}/bin/yace_test) 
