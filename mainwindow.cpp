#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setMinimumSize(width(),height());
    this->setMaximumSize(width(),height());
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setFixedSize(width(),height());
    ui->graphicsView->setSceneRect(0,0,width(),height());
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage("://fondo.jpg").scaled(700,700)));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

         ui->label->setVisible(false);
         ui->label_2->setVisible(false);
         ui->label_3->setVisible(false);
         ui->label_4->setVisible(false);
         ui->posx1->setVisible(false);
         ui->posx2->setVisible(false);
         ui->posy1->setVisible(false);
         ui->posy2->setVisible(false);
         ui->pushButton->setVisible(false);
         canion1 = new cannon(ui->posx1->value(),ui->posy1->value());
         canion2 = new cannon(ui->posx2->value(),ui->posy2->value());
        scene->addItem(canion1);
        scene->addItem(canion2);



}
