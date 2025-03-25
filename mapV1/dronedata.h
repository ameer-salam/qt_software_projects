#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <qstring.h>
#include <QVector>

class DroneData : public QObject
{
    Q_OBJECT
public:
    explicit DroneData(QObject *parent = nullptr);
    Q_INVOKABLE void returnOfLatLon(QString, QString);

    double homeLat, homeLon;
    bool clikedForGrid = false;
    struct GeoPoint{
        double latitude;
        double longitude;

        GeoPoint(double lat, double lon) : latitude(lat), longitude(lon) {}
    };
    QVector<GeoPoint> hexagon; //vector to store hexagon
    void createHexagon(GeoPoint);

signals:

public slots:

private:
};

#endif // DRONEDATA_H
