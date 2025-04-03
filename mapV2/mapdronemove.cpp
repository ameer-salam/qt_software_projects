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

void mapDroneMove::moveDrone(int distance, int bearing)
{
    setDroneLocation(previousDroneLocation.atDistanceAndAzimuth(distance, bearing));
    qDebug()<<"Drone travelled : "<<distance<<" at the angle of : "<<bearing;
}
