#include "qmlbasedcalculato.h"
#include <QDebug>

QmlBasedCalculato::QmlBasedCalculato(QObject *parent) : QObject(parent)
{

}

void QmlBasedCalculato::learnFuncCall()
{
    qDebug("Function called here!");
}
