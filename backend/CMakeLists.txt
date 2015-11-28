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

find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

find_package(Boost COMPONENTS python REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

set(SOURCE_FILES src/editor.cpp src/window.cpp)

add_library(yace SHARED ${SOURCE_FILES})
add_library(yace_py SHARED src/editor_py.cpp)
target_link_libraries(yace_py ${Boost_LIBRARIES} yace)
set_target_properties(yace_py PROPERTIES PREFIX "")

add_subdirectory(test)

enable_testing()
add_test(editor_tests test/editor_tests) 
add_test(window_tests test/window_tests)
