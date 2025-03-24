#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <qstring.h>

class DroneData : public QObject
{
    Q_OBJECT

public:
    explicit DroneData(QObject *parent = nullptr);
    Q_INVOKABLE void returnOfLatLon(QString, QString);

    float homeLat, homeLon;

signals:

public slots:

private:
};

#endif // DRONEDATA_H
