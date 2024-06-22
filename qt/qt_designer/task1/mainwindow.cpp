#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialogWindow = new Dialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete  dialogWindow;
}


void MainWindow::on_pushButton_3_clicked(){
        dialogWindow->show();
}

