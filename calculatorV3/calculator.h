#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QString>


class Calculator : public QObject
{
    Q_OBJECT

public:
    explicit Calculator(QObject *parent=nullptr);
    Q_INVOKABLE void example(const QString sym);
};

#endif // CALCULATOR_H
