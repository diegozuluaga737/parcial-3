#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "cannon.h"
#include "bullet.h"

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

private:
    Ui::MainWindow *ui;
    cannon *canion1;
    cannon *canion2;
    QGraphicsScene *scene;
    bullet *balaO;
};
#endif // MAINWINDOW_H
