add_subdirectory(test)
find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

find_package(Boost COMPONENTS python REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_library(yace SHARED src/editor.cpp)
add_library(yace_py SHARED src/editor_py.cpp)
target_link_libraries(yace_py ${Boost_LIBRARIES} yace)
set_target_properties(yace_py PROPERTIES PREFIX "")
