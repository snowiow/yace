#!/usr/bin/python2
import sys
from PySide import QtGui
from ui.ui_app import Ui_MainWindow


def main(argv):
    app = QtGui.QApplication(argv)
    win = QtGui.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(win)
    win.show()

    sys.exit(app.exec_())

if __name__ == "__main__":
    main(sys.argv)
