#include <QObject>
#include <QDebug>
#include "calculator.h"

double a=0, b=0;
double quo=0, rem=0, sum=0, dif=0, pro=0;
calculator::calculator(QObject *parent) : QObject(parent){}

void calculator::digitPressed(double d)
{
    if(a==0)
        a=d;
    else
        b=d;

    qDebug()<<"a ="<<a<<"  b = "<<b;
}

void calculator::divide()
{
    quo=a/b;
    qDebug()<<quo;
}

void calculator::multiply()
{
    pro=a*b;
    qDebug()<<pro;
}

void calculator::subtract()
{
    dif=a-b;
     qDebug()<<dif;
}

void calculator::add()
{
    sum=a+b;
    qDebug()<<sum;
}

void calculator::equals()
{
    qDebug()<<"Equals has to be added";
}

void calculator::clear()
{
    a=b=quo=rem=sum=dif=pro=0;
}
