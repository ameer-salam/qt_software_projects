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
    Q_INVOKABLE void increment();
    int count();
    void setCount(int count);

signals:
    void countChanged();

public slots:

private:
    int count_changed;
};

#endif // EXAMPLE_H
