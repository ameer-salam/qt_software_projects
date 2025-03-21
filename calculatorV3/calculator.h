#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QString>


class Calculator : public QObject{
    Q_OBJECT
    //Q_Property is a store of value which a QML can read and update automatically
    //it takes the variable, what to read, write and notify
    //Q_PROPERTY(variable_type variable_name READ variable_name WRITE setFunction NOTIFY signalFUnction)
    Q_PROPERTY(QString displayText READ displayText WRITE setDisplayText NOTIFY displayTextChanged)

public:
    explicit Calculator(QObject *parent=nullptr);

    //Q_INVOKABLE void example(QString sym);

    Q_INVOKABLE void equalsPressed();
    Q_INVOKABLE void clearPressed();
    Q_INVOKABLE void buttonPressed(QString button);

    //Q_Property Funcations
    QString displayText();
    void setDisplayText(const QString &display_text);

signals:
    void displayTextChanged();

private:
    QString OperatorAndOperand;
    QString tempOperand_one;
    QString tempOperand_two;
    int OperatorAndOperand_length;
};

#endif // CALCULATOR_H
