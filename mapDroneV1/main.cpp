#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "dronedata.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<DroneData>("droneData", 1, 0, "DroneData");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
