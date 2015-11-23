#include "testEditor.hpp"
#include "editor.hpp"
#include "window.hpp"

void TestEditor::singleton() {
    yace::Editor* editor = yace::Editor::getInstance();
    auto editor2 = yace::Editor::getInstance();
    QVERIFY(editor == editor2);
}
void TestEditor::oneWindowOnCreation() {
    yace::Editor* editor = yace::Editor::getInstance();
    QVERIFY(editor->getWindow(0) != nullptr);
}

void TestEditor::addNewWindow() {
    yace::Editor* editor = yace::Editor::getInstance();
    editor->newWindow();
    QVERIFY(editor->getWindow(1) != nullptr);
}
