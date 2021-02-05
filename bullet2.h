#ifndef BULLET2_H
#define BULLET2_H
#define G 9.81
#include <math.h>
#include <QTimer>
#include <QObject>
#include "cannon.h"

class bullet2:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT



public:
    bullet2(int Xo, int Yo, int Xd, int Yd);

    void disparoOfen();




    int getV0o() const;
    void setV0o(int value);

    int getAngle() const;
    void setAngle(int value);



    int getT() const;
    void setT(int value);

    double getPosx() const;
    void setPosx(double value);

    double getPosy() const;
    void setPosy(double value);

    double getVxo() const;
    void setVxo(double value);

    double getVy0() const;
    void setVy0(double value);

private:

    QTimer *timer;

    int angle;
    int V0o;
    double Vxo,Vy0;
    int T;
    double posx,posy;
    int X,Y,X2,Y2;

private slots:

    void Def();


};

#endif // BULLET2_H
