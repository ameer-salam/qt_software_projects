#ifndef XAMPLE_H
#define XAMPLE_H

#include <QObject>
#include <QVariant>
#include <QList>

class Xample : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantList exposeList READ exposeList WRITE setExposeList NOTIFY exposeListChanged)

public:
    explicit Xample(QObject *parent = 0);
    QList<int> Example = [1, 2, 3];

signals:

public slots:
};

#endif // XAMPLE_H
