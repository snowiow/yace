#include "editorTest.hpp"
#include "editor.hpp"
#include "window.hpp"

void EditorTest::singleton() {
    yace::Editor* editor = yace::Editor::getInstance();
    auto editor2 = yace::Editor::getInstance();
    QVERIFY(editor == editor2);
}

void EditorTest::oneWindowOnCreation() {
    yace::Editor* editor = yace::Editor::getInstance();
    QVERIFY(editor->getWindow(0) != nullptr);
}

void EditorTest::addNewWindow() {
    yace::Editor* editor = yace::Editor::getInstance();
    editor->newWindow();
    QVERIFY(editor->getWindow(1) != nullptr);
}
