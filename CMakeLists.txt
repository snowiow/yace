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

set(SOURCE_FILES
    src/term.cpp
    src/yace.cpp
    src/main.cpp)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(main ${SOURCE_FILES})
target_link_libraries(main ${CURSES_LIBRARIES})
