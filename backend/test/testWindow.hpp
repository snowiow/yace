#include <QtTest/QtTest>

class TestWindow : public QObject {
    Q_OBJECT

private slots:
    void oneBufferOnCreation(); 

    void addNewBuffer(); 
};
