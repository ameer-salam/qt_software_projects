#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "mapdronemove.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<mapDroneMove>("mapDroneMove", 1,0, "MapDroneMove");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}


//have different classes and QML's
