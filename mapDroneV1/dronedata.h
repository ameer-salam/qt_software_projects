#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <QGeoCoordinate>
#include <QVector>

class DroneData : public QObject
{
    Q_OBJECT

public:
    explicit DroneData(QObject *parent = nullptr);

    //to get the geocoordinates when clicked
    Q_INVOKABLE void getCoorFunction(QGeoCoordinate);
    bool firstGeoClick = false;

    //home coordinates
    QGeoCoordinate home;

    //create hexagon
    void createHexagon(QGeoCoordinate);

    //hexagonPoints
    //points start from bottom left and go clockwise to bottom right
    QGeoCoordinate bottomLeft, middleLeft, topLeft, topRight, middleRight, bottomRight; //b-bottom, t-top, r-right, l-left, m-middle
    QVector<QGeoCoordinate> hexagonCoord;

signals:

public slots:
};

#endif // DRONEDATA_H
