#include "dronedata.h"
#include <QDebug>
#include <QTimer>

DroneData::DroneData(QObject *parent) : QObject(parent), firstGeoClick(false)
{
}



void DroneData::getCoorFunction(QGeoCoordinate coord)
{
    qDebug()<<"The coordinates obtaines are : Latitude = "<<coord.latitude()<<"  longitude = "<<coord.longitude();
    if(DroneData::firstGeoClick == false)
    {
        setButtonShow(true);
        home = coord;
        qDebug()<<"Home has been Set!";
        createHexagon(home);
    }
}

void DroneData::createHexagon(QGeoCoordinate firstPoint)
{
    DroneData::bottomLeft = firstPoint; //.atDistanceAndAzimuth(200, 210, 0);;
    DroneData::middleLeft = bottomLeft.atDistanceAndAzimuth(200, 270, 0);
    DroneData::topLeft = middleLeft.atDistanceAndAzimuth(200, 330, 0);
    DroneData::topRight = topLeft.atDistanceAndAzimuth(200, 30, 0);
    DroneData::middleRight = topRight.atDistanceAndAzimuth(200, 90, 0);
    bottomRight = middleRight.atDistanceAndAzimuth(200, 150, 0);

    hexagonCoord.append({bottomLeft, middleLeft, topLeft, topRight, middleRight,bottomRight,bottomLeft});
    //qDebug()<<"This : "<<hexagonCoord[0];
    qDebug()<<"The Hexagon Coordinates are : ";
    for(int i=0; i<hexagonCoord.length(); i++)
    {
        qDebug()<<"\t\t"<<"Point"<<i+1<<" : Latitude : "<<hexagonCoord[i].latitude()<<"   \t Longitude : "<<hexagonCoord[i].longitude();
    }
}

bool DroneData::buttonShow()
{
    return firstGeoClick;
}

void DroneData::setButtonShow(bool state)
{
    if(firstGeoClick != state)
    {
        firstGeoClick=state;
        emit buttonShowChanged();
        qDebug()<<"Now the firstGeoClick is : "<<firstGeoClick;
    }
}

void DroneData::missionStart(){
    //qDebug()<<"Start of the Mission";
    //setDroneLocation(hexagonCoord[count]);
    if(DroneData::count>6) //here also take note to imporve the code and make it more fexblme
    {
        qDebug()<<"Done Moved completely!";
                  return;
    }

    setDroneLocation(hexagonCoord[count]);
    DroneData::count += 1;

    QTimer::singleShot(1500, [this]() { missionStart(); });
    //diff bw QTimer and singleShot
}
