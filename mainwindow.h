#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> //provide the main app window for user interface

#include <QFile> // functionality for working with files
#include <QFileDialog> // functionality for a dialog to display for selecting a file
#include <QTextStream> //functionality for reading a text from a file
#include <QMessageBox> //displays if there is a error
#include <QPrinter> // functionality to print
#include <QPrintDialog> // functionality to display option to select printer we want to print with

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); //no parent
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString currentFile = ""; //will hold the name of current file i'm working with
};
#endif // MAINWINDOW_H
