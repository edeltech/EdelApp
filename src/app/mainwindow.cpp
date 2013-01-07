#include "mainwindow.h"
#include "dummy.h"

MainWindow::MainWindow(QMainWindow* parent)
    : QMainWindow(parent)
{
   setCentralWidget(new Dummy);
}
