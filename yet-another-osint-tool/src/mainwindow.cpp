#include "header/mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Yet Another OSINT Tool");
}

MainWindow::~MainWindow()
{
    delete ui;
}

