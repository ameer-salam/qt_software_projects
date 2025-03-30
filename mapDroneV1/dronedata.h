#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <QGeoCoordinate>
#include <QList>
#include <QDebug>

class DroneData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool buttonShow READ buttonShow WRITE setButtonShow NOTIFY buttonShowChanged)
    Q_PROPERTY(QVariantList displayhexagon READ getdisplayhexagon)
    Q_PROPERTY(QGeoCoordinate droneLocation READ droneLocation WRITE setDroneLocation NOTIFY droneLocationChanged)

public:
    explicit DroneData(QObject *parent = nullptr);

    //to get the geocoordinates when clicked
    Q_INVOKABLE void getCoorFunction(QGeoCoordinate);
    Q_INVOKABLE void missionStart();

    //home coordinates
    QGeoCoordinate home;

    //create hexagon
    void createHexagon(QGeoCoordinate);

    //for Q_Property of button
    bool buttonShow();
    void setButtonShow(bool);

    QVariantList getdisplayhexagon() const{
        QVariantList list;
        for(const QGeoCoordinate &coord : hexagonCoord){
            QVariantMap map;
            map["latitude"] = coord.latitude();
            map["longitude"] = coord.longitude();
            list.append(map);
        }
        return list;
    }

    QGeoCoordinate droneLocation()
    {
        return first_droneLocation;
    }

    void setDroneLocation(QGeoCoordinate new_position)
    {
        if(first_droneLocation != new_position)
        {
            first_droneLocation = new_position;
            emit droneLocationChanged();
        }
    }


signals:
    void buttonShowChanged(); //to display the button
    void droneLocationChanged();

public slots:

private:
    //hexagonPoints
    //points start from bottom left and go clockwise to bottom right
    QGeoCoordinate bottomLeft, middleLeft, topLeft, topRight, middleRight, bottomRight; //b-bottom, t-top, r-right, l-left, m-middle
    QList<QGeoCoordinate> hexagonCoord;

    bool firstGeoClick;
    QGeoCoordinate first_droneLocation = home;


};

#endif // DRONEDATA_H
