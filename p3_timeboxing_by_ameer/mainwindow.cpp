#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"The number generated is : "<<randomNumber;
    ui->stoic_thoughts->setText(stoicThoughts[randomNumber].first);
    ui->stoic_thoughts_2->setText(stoicThoughts[randomNumber].second);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_new_box_clicked()
{

}

