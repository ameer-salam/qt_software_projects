#include "calculator.h"
#include <QDebug>

Calculator::Calculator(QObject *parent) : QObject(parent), OperatorAndOperand("")
{

}


void Calculator::buttonClicked(QChar text)
{
    if (text.isDigit()) {
        OperatorAndOperand += text;
    } else {
        OperatorAndOperand += " " + QString(text) + " ";
    }
    setDisplayText(OperatorAndOperand);
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

    if (tokens.size() < 3) return;

    double result = tokens[0].toDouble();
    for (int i = 1; i < tokens.size(); i += 2)
    {
        QString op = tokens[i];
        double num = tokens[i + 1].toDouble();

        if (op == "+") result += num;
        else if (op == "-") result -= num;
        else if (op == "*") result *= num;
        else if (op == "/" && num != 0) result /= num;
        else if (op == "/" && num == 0) {
            setDisplayText("Error: Divide by Zero");
            return;
        }
    }

    setDisplayText(QString::number(result));
    OperatorAndOperand=""; //this so that the next time i click a button 0 is taken back on textArrea again
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
    //by commenting the if I was able to see text on TestBox
    //I dont know y shold c
    //if(OperatorAndOperand != recieved)
    //{
        OperatorAndOperand = recieved;
        emit displayTextChanged();
    //}
}
