#include "mapdronemove.h"
#include <QDebug>

mapDroneMove::mapDroneMove(QObject *parent) : QObject(parent), homeSetState(false), homeLocation(13.328353, 77.080545), droneArmed(false), previousDroneLocation()
{

}

void mapDroneMove::clickOnMap(QGeoCoordinate mapClickPoint)
{
    if(homeSetState == false)
    {
        mapDroneMove::setHomeLocationCoordinate(mapClickPoint);
        setHomeSet(true);
        qDebug()<<"Home State : "<<homeSetState;
        qDebug()<<"Coordinates are : Latitude = "<<mapClickPoint.latitude()<<"  Longitude = "<<mapClickPoint.longitude();
    }
}

void mapDroneMove::armButtonPressed(bool state)
{
    setArmState(state);
    qDebug()<<"Now the armed state : " << droneArmed;
}

void mapDroneMove::moveDrone(int direction)
{
    switch (direction) {
    case 1:
        qDebug()<<"Moving to 315 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 315, 0));
        break;
    case 2:
        qDebug()<<"Moving to 0 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 0, 0));
        break;
    case 3:
        qDebug()<<"Moving to 45 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 45, 0));
        break;
    case 4:
        qDebug()<<"Moving to 270 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 270, 0));
        break;
    case 5:
        qDebug()<<"setting back to home";
        setDroneLocation(homeLocation);
        break;
    case 6:
        qDebug()<<"Moving to 90 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 90, 0));
        break;
    case 7:
        qDebug()<<"Moving to 215 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 215, 0));
        break;
    case 8:
        qDebug()<<"Moving to 180 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 180, 0));
        break;
    case 9:
        qDebug()<<"Moving to 135 degree";
        setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(200, 135, 0));
        break;
    default:
        qDebug()<<"Defect";
        break;
    }
}
