CONFIG      +=  c++14 \
                warn_on \
                shared
TEMPLATE    =   lib
HEADERS     +=  src/buffer.hpp \
                src/editor.hpp \
                src/types.hpp \
                src/window.hpp 
SOURCES     +=  src/editor.cpp \
                src/window.cpp 
TARGET      =   yace
