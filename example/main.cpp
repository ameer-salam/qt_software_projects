#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "example.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<Example>("example", 1, 0, "Example");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
