#include "dronedata.h"
#include <QDebug>
#include <QString>

DroneData::DroneData(QObject *parent) : QObject(parent)
{
}


void DroneData::returnOfLatLon(QString lat, QString lon)
{
    qDebug()<<"The Latitude is : "<<lat<<" Longitude is : "<<lon;

    //converting QString to float
    DroneData::homeLat = lat.toFloat();
    DroneData::homeLon = lon.toFloat();
    qDebug()<<"The Latitude is : "<<DroneData::homeLat<<" Longitude is : "<<DroneData::homeLon;
}
