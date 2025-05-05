#ifndef CONNECTIONTEST_H
#define CONNECTIONTEST_H

#include <QObject>
#include <QQuickItem>

class ConnectionTest : public QObject
{
    Q_OBJECT
public:
    explicit ConnectionTest(QObject *parent = 0);
    void givingSomething(QQuickItem *item);

signals:

public slots:
    void nothing();

private:
    QQuickItem *displayText = nullptr;
};

#endif // CONNECTIONTEST_H
