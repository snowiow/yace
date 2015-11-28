find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(../src/yace/editor)

add_executable(editor_tests src/yace/editor_test.cpp)
target_link_libraries(editor_tests yace ${Boost_UNIT_TEST_FRAMEWORK})

add_executable(window_tests src/yace/window_test.cpp)
target_link_libraries(window_tests yace ${Boost_UNIT_TEST_FRAMEWORK})
