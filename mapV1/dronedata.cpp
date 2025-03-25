#include "dronedata.h"
#include <QDebug>
#include <QString>

DroneData::DroneData(QObject *parent) : QObject(parent), coordCliked(false)
{
}


void DroneData::returnOfLatLon(QString lat, QString lon)
{
    //qDebug()<<"The Latitude is : "<<lat<<" Longitude is : "<<lon;
    //converting QString to float
    DroneData::homeLat = lat.toFloat();
    DroneData::homeLon = lon.toFloat();
    qDebug()<<"The Latitude is : "<<DroneData::homeLat<<" Longitude is : "<<DroneData::homeLon;
    setCoordCliked(true);
}

bool DroneData::coordCliked()
{
    return init_coordClicked;
}

void DroneData::setCoordCliked(bool status)
{
    if(init_coordClicked != status)
        init_coordClicked = status;
    qDebug()<<"Has the user clicked on the Map once : "<<init_coordClicked;
}
