#ifndef MAPDRONEMOVE_H
#define MAPDRONEMOVE_H

#include <QObject>
#include <QGeoCoordinate>

class mapDroneMove : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QGeoCoordinate homeLocationCoordinate READ homeLocationCoordinate WRITE setHomeLocationCoordinate NOTIFY homeLocationCoordinateChanged)
    Q_PROPERTY(bool homeSet READ homeSet WRITE setHomeSet NOTIFY homeSetChanged)
    Q_PROPERTY(bool armState READ armState WRITE setArmState NOTIFY armStateChanged)
    Q_PROPERTY(QGeoCoordinate droneLocation READ droneLocation WRITE setDroneLocation NOTIFY droneLocationChanged)

public:
    explicit mapDroneMove(QObject *parent = nullptr);

    //related to getting the home coordinate
    QGeoCoordinate homeLocationCoordinate()
    {
        return homeLocation;
    }

    void setHomeLocationCoordinate(QGeoCoordinate newHome)
    {
        if(homeLocation != newHome)
        {
            homeLocation = newHome;
            setDroneLocation(homeLocation);
            emit homeLocationCoordinateChanged();
        }
    }


    //to get coordinates clicked
    Q_INVOKABLE void clickOnMap(QGeoCoordinate);


    //home set state
    bool homeSet()
    {
        return homeSetState;
    }

    void setHomeSet(bool state)
    {
        if(homeSetState != state)
        {
            homeSetState = state;
            emit homeSetChanged();
        }
    }


    //arm states of the drone
    bool armState()
    {
        return droneArmed;
    }

    void setArmState(bool state)
    {
        if(droneArmed == false)
        {
            droneArmed = true;
            emit armStateChanged();
        }
        else
        {
            droneArmed = false;
            emit armStateChanged();
        }
    }

    Q_INVOKABLE void armButtonPressed(bool);

    //drone location
    QGeoCoordinate droneLocation()
    {
        return previousDroneLocation;
    }

    void setDroneLocation(QGeoCoordinate locationChange)
    {
        if(previousDroneLocation != locationChange);
        {
            previousDroneLocation = locationChange;
            emit droneLocationChanged();
        }
    }
    Q_INVOKABLE void moveDrone(int);


signals:
    void homeLocationCoordinateChanged();
    void homeSetChanged();
    void armStateChanged();
    void droneLocationChanged();

public slots:

private:
    QGeoCoordinate homeLocation;
    bool homeSetState;
    bool droneArmed;
    QGeoCoordinate previousDroneLocation;
};

#endif // MAPDRONEMOVE_H
