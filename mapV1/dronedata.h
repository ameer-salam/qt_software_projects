#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>

class DroneData : public QObject
{
    Q_OBJECT
public:
    explicit DroneData(QObject *parent = nullptr);
    Q_INVOKABLE void startTheDrone();

signals:

public slots:
};

#endif // DRONEDATA_H
