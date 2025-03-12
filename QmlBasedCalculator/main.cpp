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
    qDebug() << "✅ Registering calculator in QML...";


    engine.rootContext()->setContextProperty("calculator", &calculator);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    if(engine.rootObjects().isEmpty())
    {
        qDebug() << "❌ QML loading failed!";
        return -1;
    }

    qDebug() << "✅ QML loaded successfully.";
        return app.exec();
    return app.exec();
}
