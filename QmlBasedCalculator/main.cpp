#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "calculator.h"
#include <QDebug>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    calculator calculator;

    engine.rootContext()->setContextProperty("calculator", &calculator);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    if(engine.rootObjects().isEmpty())
    {
        return -1;
    }
    return app.exec();
}
