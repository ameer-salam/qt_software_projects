#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>

class DroneData : public QObject
{
    Q_OBJECT
public:
    explicit DroneData(QObject *parent = nullptr);
    Q_INVOKABLE void startTheDrone();
    Q_INVOKABLE void returnOfLatLon(QString, QString);

signals:

public slots:
};

#endif // DRONEDATA_H
