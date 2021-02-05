#ifndef BULLET_H
#define BULLET_H
#define G 9.81
#define pi 3.1416
#include "mainwindow.h"
#include <math.h>
#include <QTimer>
#include <QObject>
#include "cannon.h"

class bullet:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:

    QTimer *timer;

    int angle;
    int V0o;
    int posx,posy;


public:
    bullet();

    void disparoOfen(int X1, int Y1, int X2, int Y2 );




    int getV0o() const;
    void setV0o(int value);

    int getAngle() const;
    void setAngle(int value);

    int getPosx() const;
    void setPosx(int value);

    int getPosy() const;
    void setPosy(int value);

private slots:

    void Ofen();


};

#endif // BULLET_H
