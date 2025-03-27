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

public:
    explicit DroneData(QObject *parent = nullptr);

    //to get the geocoordinates when clicked
    Q_INVOKABLE void getCoorFunction(QGeoCoordinate);

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


signals:
    void buttonShowChanged(); //to display the button

public slots:

private:
    //hexagonPoints
    //points start from bottom left and go clockwise to bottom right
    QGeoCoordinate bottomLeft, middleLeft, topLeft, topRight, middleRight, bottomRight; //b-bottom, t-top, r-right, l-left, m-middle
    QList<QGeoCoordinate> hexagonCoord;

    bool firstGeoClick;


};

#endif // DRONEDATA_H
