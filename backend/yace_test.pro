QT          +=  testlib
CONFIG      +=  c++14 \
                warn_on \
                testcase 
TEMPLATE    =   app
HEADERS     +=  test/testEditor.hpp \
                test/testWindow.hpp
SOURCES     +=  test/testEditor.cpp \
                test/testWindow.cpp \
                test/main.cpp
INCLUDEPATH +=  src
LIBS        +=  libyace.so
TARGET      =   yace_test
