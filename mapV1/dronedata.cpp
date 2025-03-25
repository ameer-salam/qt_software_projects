#include "dronedata.h"
#include <QDebug>
#include <QString>
#include <QGeoCoordinate>


DroneData::DroneData(QObject *parent) : QObject(parent)
{
}


void DroneData::returnOfLatLon(QString lat, QString lon)
{
    //qDebug()<<"The Latitude is : "<<lat<<" Longitude is : "<<lon;
    qDebug()<<"The Latitude is : "<<lat<<" Longitude is : "<<lon;
    if(DroneData::clikedForGrid == false)
    {
        //converting QString to float
        DroneData::homeLat = lat.toDouble();
        DroneData::homeLon = lon.toDouble();
        clikedForGrid = true;
        qDebug()<<"The first Grid read";
        qDebug()<<"The Latitude is : "<<homeLat<<" Longitude is : "<<homeLon;
        hexagon.append(GeoPoint(homeLat, homeLon));
        createHexagon(hexagon[0]);
    }
}

void DroneData::createHexagon(GeoPoint home)
{

    QGeoCoordinate homePoint(home.latitude, home.longitude);
    qDebug()<<"Point is  : "<<homePoint.QGeoCoordinate::atDistanceAndAzimuth(200, 60);
}
