#include "calculator.h"
#include <QDebug>
#include <QString>

Calculator::Calculator(QObject *parent):QObject(parent)
{

}

void Calculator::example(const QString sym)
{
    qDebug()<<"The clicked button is : "<<sym;
}
