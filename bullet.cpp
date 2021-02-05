#include "bullet.h"


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

int bullet::getPosx() const
{
    return posx;
}

void bullet::setPosx(int value)
{
    posx = value;
}

int bullet::getPosy() const
{
    return posy;
}

void bullet::setPosy(int value)
{
    posy = value;
}

bullet::bullet()
{

}
void bullet::disparoOfen(int X1, int Y1, int X2, int Y2)
{
    setPixmap(QPixmap("://cannon.jpg"));

    int d=X2-X1;
    int RO = 0.05*d;

    int Vi=50;
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int t = 0;
    int angle = 0;
    for(int V0o = Vi; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos(angle*pi/180);
            Vy0 = V0o*sin(angle*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){



                x = X1+Vxo*t;
                y = Y1 + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((X2 - x),2)+pow((Y2- y),2)) < RO){
                    if(y<0) y = 0;

                    setAngle(angle);
                    setV0o(V0o);


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

    setPosx(X1);
    setPosy(Y1);



    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Ofen()));
    timer->start(100);

}


void bullet::Ofen()
{

    posx = V0o*cos(angle*pi/180);
    posy = V0o*sin(angle*pi/180);
    setPosx(posx);
    setPosy(posy);
}

