find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(../include)
add_executable(test_suite src/editor_test.cpp)
target_link_libraries(test_suite yace ${Boost_UNIT_TEST_FRAMEWORK})
