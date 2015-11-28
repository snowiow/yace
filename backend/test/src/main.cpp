#include <QtTest/QtTest>
#include "editorTest.hpp"
#include "windowTest.hpp"

int main(int argc, char **argv)
{
    EditorTest editorTest;
    QTest::qExec(&editorTest, argc, argv);

    WindowTest windowTest;
    QTest::qExec(&windowTest, argc, argv);

    return 0;
}
