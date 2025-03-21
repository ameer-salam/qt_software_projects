#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class Calculator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString displayText READ displayText WRITE setDisplayText NOTIFY displayTextChanged)

public:
    explicit Calculator(QObject *parent = nullptr);

    Q_INVOKABLE void buttonClicked(QChar text);
    Q_INVOKABLE void equalsPressed();
    Q_INVOKABLE void clearPressed();

    QString displayText() const;
    void setDisplayText(const QString &recieved);

signals:
    void displayTextChanged();

public slots:

private:
    QString OperatorAndOperand;
    int OperatorAndOperand_length;
};

#endif // CALCULATOR_H
