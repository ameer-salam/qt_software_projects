#include "example.h"
#include <QDebug>

Example::Example(QObject *parent) : QObject(parent), m_count(0)
{

}

void Example::exampleFun()
{
    qDebug()<<"Pressed!";
}

void Example::setCount(int count)
{
    if(m_count != count)
    {
        m_count = count;
        emit countChanged();
    }
}

void Example::incremnet()
{
    setCount(m_count+1);
}

int Example::count()
{
    return m_count;
}
