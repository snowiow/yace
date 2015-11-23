#include "testWindow.hpp"
#include "editor.hpp"
#include "window.hpp"

void TestWindow::oneBufferOnCreation() {
    yace::Editor* editor = yace::Editor::getInstance();
    QVERIFY(editor->getWindow(0)->getBuffer(0) != nullptr);
}

void TestWindow::addNewBuffer() {
    yace::Editor* editor = yace::Editor::getInstance();
    editor->getWindow(0)->newBuffer();
    QVERIFY(editor->getWindow(0)->getBuffer(0) != nullptr);
}

