#include "bullet.h"

bullet::bullet(int Xo, int Yo, int Xd, int Yd)
{
  X=Xo;
  Y=Yo;
  X2=Xd;
  Y2=Yd;

    setPixmap(QPixmap("://cannon.jpg").scaled(40,40));

    setPos(X,600-Y);

    int d=X2-X;
    int RO = 0.05*d;

    int Vi=20;
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int t = 0;
    int angle = 0;
    for(int V0o = Vi; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos(angle*M_PI/180);
            Vy0 = V0o*sin(angle*M_PI/180);

            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){



                x = X+Vxo*t;
                y = Y + Vy0*t -(0.5*G*t*t);

                if(sqrt(pow((X2 - x),2)+pow((Y2- y),2)) < RO){
                    if(y<0) y = 0;

                    T=0;



                    flag += 1;
                   break;
                }
                if(y < 0){
                    break;
                }
            }
            if(flag == 1) break;

        }
        if(flag == 1) break;
    }

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Ofen()));
    timer->start(10);


}


int bullet::getV0o() const
{
    return V0o;
}

void bullet::setV0o(int value)
{
    V0o = value;
}

int bullet::getAngle() const
{
    return angle;
}

void bullet::setAngle(int value)
{
    angle = value;
}


int bullet::getT() const
{
    return T;
}

void bullet::setT(int value)
{
    T = value;
}

double bullet::getVxo() const
{
    return Vxo;
}

void bullet::setVxo(double value)
{
    Vxo = value;
}

double bullet::getVy0() const
{
    return Vy0;
}

void bullet::setVy0(double value)
{
    Vy0 = value;
}


double bullet::getPosx() const
{
    return posx;
}

void bullet::setPosx(double value)
{
    posx = value;
}

double bullet::getPosy() const
{
    return posy;
}

void bullet::setPosy(double value)
{
    posy = value;
}

void bullet::Ofen()
{

    T+=0.05;

   posx = X+Vxo*T;
   posy = Y + Vy0*T -(0.5*G*T*T);


    setPos(posx,600-posy);
}

