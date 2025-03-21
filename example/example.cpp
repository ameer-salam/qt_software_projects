#include "example.h"
#include <QDebug>

Example::Example(QObject *parent) : QObject(parent), count_changed(0)
{

}

void Example::exampleFun()
{
    qDebug()<<"Clicked!";
}

void Example::increment()
{
    count+=1;
    setCount(count_changed);
}

int Example::count()
{
    return count_changed;
}

Example::setCount(int count)
{
    if(count_changed != count)
    {
        count_changed = count;
        emit countChanged();
    }
}
