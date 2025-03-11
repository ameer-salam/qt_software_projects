#ifndef QMLBASEDCALCULATO_H
#define QMLBASEDCALCULATO_H

#include <QObject>

class QmlBasedCalculato : public QObject
{
    Q_OBJECT
public:
    explicit QmlBasedCalculato(QObject *parent = 0);

signals:

public slots:
    void learnFuncCall();
};

#endif // QMLBASEDCALCULATO_H
