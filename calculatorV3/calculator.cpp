#include "calculator.h"
#include <QDebug>
#include <QString>

Calculator::Calculator(QObject *parent):QObject(parent), OperatorAndOperand("0")
{

}

//void Calculator::example(const QString sym)
//{
//    qDebug()<<"The clicked button is : "<<sym;
//}

void Calculator::equalsPressed(){
    qDebug()<<"Equals has been pressed!";
    OperatorAndOperand_length=OperatorAndOperand.length();
    qDebug()<<"The length of the String : "<<OperatorAndOperand<<" is : "<<OperatorAndOperand_length;
}


void Calculator::clearPressed(){
    qDebug()<<"Clear has been pressed";
    OperatorAndOperand=""; //empties the string
    setDisplayText("");
}

void Calculator::buttonPressed(QString button)
{
    qDebug()<<"The button pressed is : "<<button;
    OperatorAndOperand+=button; //appends the string and adds the operator and the operands
    qDebug()<<"The String is now : "<<OperatorAndOperand;
}


//Q_PROPERTY FUNCTIONS
QString Calculator::displayText(){
    return OperatorAndOperand;
}

void Calculator::setDisplayText(const QString &display_text){
    if(OperatorAndOperand != display_text){
        OperatorAndOperand != display_text;
        emit displayTextChanged();
    }
}
