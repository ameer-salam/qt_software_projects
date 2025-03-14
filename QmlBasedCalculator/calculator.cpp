#include <QObject>
#include <QDebug>
#include <QString>
#include "calculator.h"

QString Inputs;
long ans;

double a=0, b=0;
double quo=0, rem=0, sum=0, dif=0, pro=0;


calculator::calculator(QObject *parent) : QObject(parent){}

//function to recieve the button clicked
void calculator:: buttonPressed(char chIn)
{
    qDebug()<<chIn;
    Inputs.append(chIn);
    qDebug()<<Inputs;
}

/*
 * 1 - add
 * 2 - subtract
 * 3 - divide
 * 4 - multiply
 * 5 - equals
 */



void calculator::clear()
{
}
