#include "connectiontest.h"
#include <QDebug>

ConnectionTest::ConnectionTest(QObject *parent) : QObject(parent)
{

}

void ConnectionTest::givingSomething(QQuickItem *item)
{
    displayText=item;
    qDebug()<<"Setting Done!";
}

void ConnectionTest::nothing()
{
    qDebug()<<"I am Here!";
    displayText->setProperty("text", "3");
}
