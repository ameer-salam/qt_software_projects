#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class calculator : public QObject{
    Q_OBJECT

public:
    explicit calculator(QObject *parent=nullptr);

    Q_INVOKABLE void digitPressed(double d);
    Q_INVOKABLE void divide();
    Q_INVOKABLE void multiply();
    Q_INVOKABLE void subtract();
    Q_INVOKABLE void add();
    Q_INVOKABLE void equals();
    Q_INVOKABLE void clear();
};

#endif // CALCULATOR_H
