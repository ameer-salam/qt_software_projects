#ifndef DRONEDATA_H
#define DRONEDATA_H

#include <QObject>
#include <qstring.h>

class DroneData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool coordCliked READ coordCliked WRITE setCoordCliked NOTIFY coordClikedChanged)

public:
    explicit DroneData(QObject *parent = nullptr);
    Q_INVOKABLE void returnOfLatLon(QString, QString);

    float homeLat, homeLon;
    bool coordCliked();
    void setCoordCliked(bool);

signals:

public slots:

private:
    bool init_coordClicked = false;
};

#endif // DRONEDATA_H
