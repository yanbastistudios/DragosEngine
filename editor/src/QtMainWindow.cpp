#include "QtMainWindow.h"
#include <QMenuBar>
#include <QStatusBar>

QtMainWindow::QtMainWindow(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("Dragos Editor");
    resize(1280, 720);

    auto fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction("Open");
    fileMenu->addAction("Save");

    statusBar()->showMessage("Ready");
}