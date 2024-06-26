#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Item 1");
    ui->comboBox->addItem("Item 2");
    ui->comboBox->addItem("Item 3");
    ui->comboBox->addItem("Item 4");
    ui->comboBox->addItem("Item 5");
    ui->comboBox->addItem("Item 6");
    ui->comboBox->addItem("Item 7");
    ui->comboBox->addItem("Item 8");
    ui->comboBox->addItem("Item 9");
    ui->comboBox->addItem("Item 10");
    ui->groupBox->setTitle("Your answer is:");
    ui->radioButton_2->setText("Item 1");
    ui->radioButton->setText("Item 2");
    ui->pushButton->toggle();
    ui->pushButton->setText("Click Me!");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::pushButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButtonClicked(bool checked) {
  if(ui->progressBar->value() >= 10) {
      ui->progressBar->setValue(0);
      count = 1;
  } else {
      ui->progressBar->setValue(count);
      count += 1;
  }
}



