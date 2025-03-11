#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    calculator calci;
    engine.rootContext()->setContextProperty("calci", &calci);

    if(engine.rootObjects().isEmpty())
        return -1;
    return app.exec();
}
