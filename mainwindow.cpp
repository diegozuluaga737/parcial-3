#include "mainwindow.h"
#include "ui_mainwindow.h"

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
 ui->Disparo_O->setVisible(false);
 ui->Disparo_D->setVisible(false);

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
         ui->Disparo_O->setVisible(true);
         ui->Disparo_D->setVisible(true);

         canion1 = new cannon(ui->posx1->value(),600-ui->posy1->value());
         canion2 = new cannon(ui->posx2->value(),600-ui->posy2->value());
        scene->addItem(canion1);
        scene->addItem(canion2);

}



void MainWindow::on_Disparo_O_clicked()
{
    balaO = new bullet(ui->posx1->value(),ui->posy1->value(),ui->posx2->value(),ui->posy2->value());
    scene->addItem(balaO);
    ui->Disparo_O->setVisible(false);
}



void MainWindow::on_Disparo_D_clicked()
{
    balaD = new bullet2(ui->posx1->value(),ui->posy1->value(),ui->posx2->value(),ui->posy2->value());
    scene->addItem(balaD);
    ui->Disparo_D->setVisible(false);
}
