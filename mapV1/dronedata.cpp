#include "dronedata.h"
#include <QDebug>

DroneData::DroneData(QObject *parent) : QObject(parent)
{

}

void DroneData::startTheDrone()
{
       qDebug()<<"User clicked to start the drone!";
}
