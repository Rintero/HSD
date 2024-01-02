#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StartSim.h"
#include "string"
#include <iostream>


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


void MainWindow::on_pushButton_clicked()
{

    Simulation sim;

    ui->label->setText(QString::number(sim.Start_Sim()));
}

