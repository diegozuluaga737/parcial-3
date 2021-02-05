#include "cannon.h"

int cannon::getPosx() const
{
    return posx;
}

void cannon::setPosx(int value)
{
    posx = value;
}

int cannon::getPosy() const
{
    return posy;
}

void cannon::setPosy(int value)
{
    posy = value;
}

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

   posx= x;
   posy=y;

   setPos(posx,posy);
}
