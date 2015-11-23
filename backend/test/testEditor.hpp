#include <QtTest/QtTest>

class TestEditor : public QObject {
    Q_OBJECT

private slots:
    void singleton(); 
    
    void oneWindowOnCreation();
    void addNewWindow();
};
