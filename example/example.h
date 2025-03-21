#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>

class Example : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int count READ count WRITE setCount NOTIFY countChanged)

public:
    explicit Example(QObject *parent = nullptr);
    Q_INVOKABLE void exampleFun();

    int count();
    Q_INVOKABLE void setCount(int count);
    Q_INVOKABLE void incremnet();

signals:
    void countChanged();

public slots:

private:
    int m_count;
};

#endif // EXAMPLE_H
