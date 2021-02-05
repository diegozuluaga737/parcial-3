#ifndef CANNON_H
#define CANNON_H

#include <QGraphicsItem>
#include<QPainter>

class cannon: public QGraphicsItem
{

    int w;
    int h;


public:
    cannon(int x, int y);

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

private:


    QTimer *timer;

};

#endif // CANNON_H
