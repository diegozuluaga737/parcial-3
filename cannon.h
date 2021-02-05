#ifndef CANNON_H
#define CANNON_H

#include <QGraphicsItem>
#include<QPainter>

class cannon: public QGraphicsItem
{

    int w;
    int h;
    int posx,posy;

public:
    cannon(int x, int y);

    int getPosx() const;
    void setPosx(int value);
    int getPosy() const;
    void setPosy(int value);

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

private:


    QTimer *timer;

};

#endif // CANNON_H
