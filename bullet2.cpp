#include "bullet2.h"



bullet2::bullet2(int Xo, int Yo, int Xd, int Yd)
{


    X=Xo;
    Y=Yo;
    X2=Xd;
    Y2=Yd;

      setPixmap(QPixmap("://cannon.jpg").scaled(40,40));

      setPos(X,600-Y);
       int d=X2-X;
       float RD = 0.025*d;

    int Vi=20;
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int t = 0;
    int angle = 0;
    for(int V0o = Vi; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos((180-angle)*3.14/180);
            Vy0 = V0o*sin((180-angle)*3.14/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x =Xd + Vxo*t;
                y = Yd + Vy0*t -(0.5*G*t*t);
                if(sqrt(pow((Xo - x),2)+pow((Yo - y),2)) < RD){
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
    connect(timer,SIGNAL(timeout()),this,SLOT(Def()));
    timer->start(10);
}

int bullet2::getV0o() const
{
    return V0o;
}

void bullet2::setV0o(int value)
{
    V0o = value;
}

int bullet2::getAngle() const
{
    return angle;
}

void bullet2::setAngle(int value)
{
    angle = value;
}


int bullet2::getT() const
{
    return T;
}

void bullet2::setT(int value)
{
    T = value;
}

double bullet2::getVxo() const
{
    return Vxo;
}

void bullet2::setVxo(double value)
{
    Vxo = value;
}

double bullet2::getVy0() const
{
    return Vy0;
}

void bullet2::setVy0(double value)
{
    Vy0 = value;
}


double bullet2::getPosx() const
{
    return posx;
}

void bullet2::setPosx(double value)
{
    posx = value;
}

double bullet2::getPosy() const
{
    return posy;
}

void bullet2::setPosy(double value)
{
    posy = value;
}

void bullet2::Def()
{
    T+=0.05;

   posx = X+Vxo*T;
   posy = Y + Vy0*T -(0.5*G*T*T);


    setPos(posx,600-posy);
}
