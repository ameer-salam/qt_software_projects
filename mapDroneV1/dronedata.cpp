#include "dronedata.h"
#include <QDebug>

DroneData::DroneData(QObject *parent) : QObject(parent)
{

}

void DroneData::getCoorFunction(QGeoCoordinate coord)
{
    qDebug()<<"The coordinates obtaines are : Latitude = "<<coord.latitude()<<"  longitude = "<<coord.longitude();
    if(DroneData::firstGeoClick == false)
    {
        DroneData::firstGeoClick = true;
        DroneData::home = coord;
        qDebug()<<"Home has been Set!";
    }
    createHexagon(home);
}

void DroneData::createHexagon(QGeoCoordinate firstPoint)
{
    DroneData::bottomLeft = firstPoint;
    DroneData::middleLeft = bottomLeft.atDistanceAndAzimuth(200, 60, 0);
    DroneData::topLeft = middleLeft.atDistanceAndAzimuth(200, 90, 0);
    DroneData::topRight = topLeft.atDistanceAndAzimuth(200, 90, 0);
    DroneData::middleRight = topRight.atDistanceAndAzimuth(200, 120, 0);
    DroneData::bottomRight = firstPoint.atDistanceAndAzimuth(200, 90, 0);

    hexagonCoord.append({bottomLeft, middleLeft, topLeft, topRight, middleRight, bottomRight});
    //qDebug()<<"This : "<<hexagonCoord[0];
    for(int i=0; i<hexagonCoord.length(); i++)
    {
        qDebug()<<"\t\tLatitude : "<<hexagonCoord[i].latitude()<<" Longitude : "<<hexagonCoord[i].longitude();
    }
}
