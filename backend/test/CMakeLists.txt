find_package(Qt5Test REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(../src)

set(SOURCE_FILES
    src/main.cpp
    src/editorTest.cpp
    src/windowTest.cpp)

add_executable(yace_test ${SOURCE_FILES})
target_link_libraries(yace_test yace Qt5::Test)
set_target_properties(yace_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
enable_testing()
add_test(yace_test ${CMAKE_SOURCE_DIR}/bin/yace_test) 
