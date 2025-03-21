#ifndef EXAMPLEBUTTON_H
#define EXAMPLEBUTTON_H

#include <QObject>

class ExampleButton : public QObject
{
    Q_OBJECT

public:
    explicit ExampleButton(QObject *parent=nullptr);
    Q_INVOKABLE void exmaple1();
};

#endif // EXAMPLEBUTTON_H
