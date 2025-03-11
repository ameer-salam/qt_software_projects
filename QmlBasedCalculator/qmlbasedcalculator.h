#ifndef QMLBASEDCALCULATOR_H
#define QMLBASEDCALCULATOR_H

#include <QObject>
#include <QString>

QString first_no;

class Calculator : public QObject{
    Q_OBJECT

public:
    explicit Calculator(QObject *parent=nullptr){}

    Q_INVOKABLE void appenQString(char a)
    {
        first_no+=a;
    }
};

#endif // QMLBASEDCALCULATOR_H
