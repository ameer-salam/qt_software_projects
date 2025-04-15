#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "calculator.h"


//create inst of calculator in main and pass that to QML
//this creates problem when created in QML,. use in main

int main(int argc, char *argv[])
{   
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //create instance of calculator class
    Calculator calculator;

    //qmlRegisterType<Calculator>("calculator", 1, 0, "Calculator");

    engine.rootContext()->setContextProperty("calculator", &calculator);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
