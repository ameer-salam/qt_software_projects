#include "calculator.h"
#include <QDebug>

Calculator::Calculator(QObject *parent) : QObject(parent), OperatorAndOperand("")
{
}


void Calculator::buttonClicked(QChar text)
{
    if (text.isDigit()) {
        OperatorAndOperand += text; //suggestion: append function can be used
    } else {
        OperatorAndOperand += " " + QString(text) + " "; //suggestion: append usage
    }
    setDisplayText(OperatorAndOperand);
    //suggestion: emit for the textDisplay can be added here directly
}


void Calculator::equalsPressed()
{
    qDebug()<<"Equals pressed!";
    if (OperatorAndOperand.isEmpty()) {
        setDisplayText("0");
        return;
    }

    QStringList tokens = OperatorAndOperand.split(" ", QString::SkipEmptyParts);
    qDebug() << "Parsed tokens: " << tokens;

    if (tokens.size() < 3) return; //two opearator and 1 operand
    // [1+3-4/]
    double result = tokens[0].toDouble();
    for (int i = 1; i < tokens.size(); i += 2)
    {
        QString op = tokens[i];
        double num = tokens[i + 1].toDouble(); //what if index goes beyond the size

        if (op == "+") result += num;
        else if (op == "-") result -= num;
        else if (op == "*") result *= num;
        else if (op == "/" && num != 0) result /= num;
        else if (op == "/" && num == 0) {
            setDisplayText("Error: Divide by Zero");
            return;
        }
    }

    //handle the no opearator in the end ex: 1+5/
    //not to access index without size check


    setDisplayText(QString::number(result));
    OperatorAndOperand=""; //this so that the next time i click a button 0 is taken back on textArrea again
    //use clear everywhere
}




void Calculator::clearPressed()
{

    OperatorAndOperand=""; //qString::clear this can be used
    qDebug()<<"String Cleared";
    setDisplayText(""); //suggestion: hoe can specifice member variable van be bound

}

QString Calculator::displayText() const
{
    return OperatorAndOperand;
}

void Calculator::setDisplayText(const QString &recieved)
{
    //by commenting the if I was able to see text on TestBox
    //I dont know y shold c
    //if(OperatorAndOperand != recieved)
    //{
        OperatorAndOperand = recieved;
        emit displayTextChanged();

        //suggestion: the emit can be directly put into the
    //}
}
