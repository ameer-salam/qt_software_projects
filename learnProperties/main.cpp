#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "examplebutton.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<exampleButton>("example",  1, 0, "ExampleButton");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
