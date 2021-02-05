#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cannon.h"
#include "bullet.h"
#include "bullet2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Disparo_O_clicked();

    void on_Disparo_O_2_clicked();

    void on_Disparo_D_clicked();

private:
    Ui::MainWindow *ui;
    bullet *balaO;
    bullet2 *balaD;
    cannon *canion1;
    cannon *canion2;
    QGraphicsScene *scene;

};
#endif // MAINWINDOW_H
