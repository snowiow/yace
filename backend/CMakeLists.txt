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

set(SOURCE_FILES src/editor.cpp src/window.cpp)

add_library(yace SHARED ${SOURCE_FILES})

add_subdirectory(test)

enable_testing()
add_test(editor_tests test/editor_tests) 
add_test(window_tests test/window_tests)
