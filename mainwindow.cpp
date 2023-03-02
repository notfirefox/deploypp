#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browser_checkbox_stateChanged(int arg1)
{
    ui->darkmode_checkbox->setDisabled(!arg1);
    ui->browser_combobox->setDisabled(!arg1);
}

