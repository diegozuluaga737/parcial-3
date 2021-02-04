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


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->posx1->text()=="0.00" or ui->posx2->text()=="0.00" or ui->posy1->text()=="0.00" or ui->posy2->text()=="0.00" ) {
        QMessageBox::critical(this,"Error","Ingrese todos los parametros");

        return;
    }

    else {
         ui->label->setVisible(false);
         ui->label_2->setVisible(false);
         ui->label_3->setVisible(false);
         ui->label_4->setVisible(false);
         ui->posx1->setVisible(false);
         ui->posx2->setVisible(false);
         ui->posy1->setVisible(false);
         ui->posy2->setVisible(false);
         ui->pushButton->setVisible(false);

    }
}
