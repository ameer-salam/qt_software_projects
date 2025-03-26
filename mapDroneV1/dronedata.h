#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <QGeoCoordinate>
#include <QVector>

class DroneData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool buttonShow READ buttonShow WRITE setButtonShow NOTIFY buttonShowChanged)
    //Q_PROPERTY(QVector<QGeoCoordinate> displayHexagon READ displayHexagon WRITE setDisplayHexagon NOTIFY displayHexagonChanged)

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

    //for Q_Property
    bool buttonShow(){ return firstGeoClick; }
    void setButtonShow(bool state){
        if(firstGeoClick != state)
            firstGeoClick=state;
        emit buttonShowChanged();
    }

    //QPROPERTY for hexagon display
    //void displayHexagon();
    //void setDisplayHexagon();

signals:
    void buttonShowChanged(); //to display the button
    //void displayHexagonChanged(); //to display the hexagon

public slots:
};

#endif // DRONEDATA_H
