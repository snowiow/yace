#ifndef EDITOR_TEST
#define EDITOR_TEST

#include <QtTest/QtTest>

class EditorTest : public QObject {
    Q_OBJECT

private slots:
    void singleton(); 
    
    void oneWindowOnCreation();
    void addNewWindow();
};

#endif //EDITOR_TEST
