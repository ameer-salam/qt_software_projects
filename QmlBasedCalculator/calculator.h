#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class calculator : public QObject{
    Q_OBJECT

public:
    explicit calculator(QObject *parent=nullptr);

    Q_INVOKABLE void exampleFun();
};

#endif // CALCULATOR_H
