#include <QObject>
#include <QDebug>
#include "calculator.h"


calculator::calculator(QObject *parent) : QObject(parent){}

void calculator::exampleFun()
{
    qDebug()<<"Hello!";
}
