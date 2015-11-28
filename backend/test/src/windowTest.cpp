#include "windowTest.hpp"
#include "editor.hpp"
#include "window.hpp"

void WindowTest::oneBufferOnCreation() {
    yace::Editor* editor = yace::Editor::getInstance();
    QVERIFY(editor->getWindow(0)->getBuffer(0) != nullptr);
}

void WindowTest::addNewBuffer() {
    yace::Editor* editor = yace::Editor::getInstance();
    editor->getWindow(0)->newBuffer();
    QVERIFY(editor->getWindow(0)->getBuffer(1) != nullptr);
}
