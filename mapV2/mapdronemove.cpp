#include "mapdronemove.h"
#include <QDebug>

MapDroneMove::MapDroneMove(QObject *parent) : QObject(parent), home_set(false), home_location(0,0,0), is_droneArmed(false)
{

}

void MapDroneMove::getCoordinate(QGeoCoordinate clickedCoord)
{
    if(home_set == false){
        setHomeLocation(clickedCoord);
        qDebug()<<"The coordinate obtained are : Latitude = "<<clickedCoord.latitude()<<"  Longitude : "<<clickedCoord.longitude();
        qDebug()<<"Home has been set!";
        setHome(true);
    }
}

QGeoCoordinate MapDroneMove::ArmAndStart()
{
    if(is_droneArmed == false)
    {
        setDroneArmed(true);
    }
}
