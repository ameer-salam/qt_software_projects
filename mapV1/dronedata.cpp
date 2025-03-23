#include "dronedata.h"
#include <QDebug>
#include <QString>

DroneData::DroneData(QObject *parent) : QObject(parent)
{

}

void DroneData::startTheDrone()
{
    qDebug()<<"User clicked to start the drone!";
}

void DroneData::returnOfLatLon(QString lat, QString lon)
{
    qDebug()<<"The Latitude is : "<<lat<<" Longitude is : "<<lon;
}

