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

include_directories(src/util)
include_directories(src/yace/server)

set(YACE_SOURCE_FILES src/yace/editor/editor.cpp src/yace/editor/window.cpp)
add_library(yace SHARED ${YACE_SOURCE_FILES})

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
set(SERVER_SOURCE_FILES src/main.cpp src/yace/server/server.cpp)

add_executable(yace_server ${SERVER_SOURCE_FILES})
target_link_libraries(yace_server yace ${Boost_SYSTEM_FRAMEWORK} ${Boost_LIBRARIES})

add_subdirectory(test)

enable_testing()
add_test(editor_tests test/editor_tests) 
add_test(window_tests test/window_tests)
