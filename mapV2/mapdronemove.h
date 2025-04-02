#ifndef MAPDRONEMOVE_H
#define MAPDRONEMOVE_H

#include <QObject>
#include <QGeoCoordinate>
#include <QDebug>

class MapDroneMove : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool home READ home WRITE setHome NOTIFY homeChanged)
    Q_PROPERTY(QGeoCoordinate homeLocation READ homeLocation WRITE setHomeLocation NOTIFY homeLocationChanged)
    Q_PROPERTY(bool droneArmed READ droneArmed WRITE setDroneArmed NOTIFY droneArmedChanged)
public:
    explicit MapDroneMove(QObject *parent = nullptr);
    Q_INVOKABLE void getCoordinate(QGeoCoordinate);
    Q_INVOKABLE QGeoCoordinate ArmAndStart();



    //Q_PROPERTY - Home
    bool home()
    {
        return home_set;
    }
    void setHome(bool homeSet)
    {
        if(home_set != homeSet){
            home_set = homeSet;
            qDebug()<<"Drone arm state changed";
            emit homeChanged();
        }
    }


    //home posotion
    QGeoCoordinate homeLocation()
    {
        return home_location;
    }
    void setHomeLocation(QGeoCoordinate newLocation)
    {
        if(home_location != newLocation)
        {
            home_location = newLocation;
            emit homeLocationChanged();
        }
    }


    //variables


    //arming the drone
    bool droneArmed()
    {
        return is_droneArmed;
    }

    void setDroneArmed(bool armState)
    {
        if(is_droneArmed != armState)
        {
            is_droneArmed = armState;
            emit droneArmedChanged();
        }
    }

signals:
    void homeChanged();
    void homeLocationChanged();
    void droneArmedChanged();

public slots:

private:
    bool home_set;
    bool is_droneArmed;
    QGeoCoordinate home_location;
};

#endif // MAPDRONEMOVE_H
