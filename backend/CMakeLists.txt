set(SOURCE_FILES 
    src/editor.cpp 
    src/window.cpp)

add_library(yace SHARED ${SOURCE_FILES})
set_target_properties(yace PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
