#include "cannon.h"


QRectF cannon::boundingRect() const
{
    return QRectF(0,0,w,h);
}

void cannon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=nullptr)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

cannon::cannon(int x,int y)
{

   w = 40;
   h = 40;

   setPos(x,y);
}
