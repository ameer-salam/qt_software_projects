#include "example.h"

Example::Example(QObject *parent) : QObject(parent), m_count(0)
{

}

int Example::count()
{
    return m_count;
}

void Example::increment()
{
    setCount(m_count + 1);
}

void Example::setCount(int number)
{
    if(m_count != number)
    {
        m_count = number;
        emit countChanged();
    }
}
