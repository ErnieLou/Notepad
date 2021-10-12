#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//sets up user interface
    this->setCentralWidget(ui->textEdit); // widget takes up all the screen
}

MainWindow::~MainWindow()
{
    delete ui;
}

