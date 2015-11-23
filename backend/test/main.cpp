#include <QtTest/QtTest>
#include "testEditor.hpp"
#include "testWindow.hpp"

int main(int argc, char **argv)
{
    TestEditor testEditor;
    QTest::qExec(&testEditor, argc, argv);

    TestWindow testWindow;
    QTest::qExec(&testWindow, argc, argv);

    return 0;
}
