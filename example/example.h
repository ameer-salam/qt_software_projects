#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>

class Example : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int count READ count WRITE setCount NOTIFY countChanged)
public:
    explicit Example(QObject *parent = nullptr);

    int count();
    Q_INVOKABLE void increment();
    void setCount(int number);

signals:
    void countChanged();

public slots:

private:
    int m_count;
};

#endif // EXAMPLE_H
