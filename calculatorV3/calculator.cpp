#include "calculator.h"
#include <QDebug>

Calculator::Calculator(QObject *parent) : QObject(parent), OperatorAndOperand("")
{

}

void Calculator::buttonClicked(QChar text)
{
    OperatorAndOperand+=text;
    setDisplayText(OperatorAndOperand);
    qDebug()<<"The button clicked is : "<<text<<" The string is : "<<OperatorAndOperand;

}

void Calculator::equalsPressed()
{
    OperatorAndOperand_length=OperatorAndOperand.length();
    qDebug()<<"Equals is pressed. Length of the string is : "<<OperatorAndOperand_length;
    setDisplayText(OperatorAndOperand);
}

void Calculator::clearPressed()
{
    OperatorAndOperand="";
    qDebug()<<"String Cleared";
    setDisplayText("");
}

QString Calculator::displayText() const
{
    return OperatorAndOperand;
}

void Calculator::setDisplayText(const QString &recieved)
{
    if(OperatorAndOperand != recieved)
    {
        OperatorAndOperand = recieved;
        emit displayTextChanged();
    }
}
