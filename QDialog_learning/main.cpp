#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    MainWindow mainWindow_instance;

    engine.rootContext()->setContextProperty("mainWindow_instance", &mainWindow_instance);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
