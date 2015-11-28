#ifndef WINDOW_TEST
#define WINDOW_TEST

#include <QtTest/QtTest>

class WindowTest : public QObject {
    Q_OBJECT

private slots:
    void oneBufferOnCreation(); 

    void addNewBuffer(); 
};

#endif //WINDOW_TEST
