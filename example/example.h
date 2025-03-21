#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QObject>

class Example : public QObject
{
    Q_OBJECT
public:
    explicit Example(QObject *parent = 0);

signals:

public slots:
};

#endif // EXAMPLE_H