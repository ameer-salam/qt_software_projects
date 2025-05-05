//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
//#include <QQmlContext>
//#include <QQuickItem>
//#include <QObject>

////Q_OBJECT

//int main(int argc, char *argv[])
//{
//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

//    QObject *mainQML = engine.rootObjects.first();
//    QQuickItem *rectangleText = mainQML->findChild<QQuickItem*>("_stylingRectangleText");
//    QQuickItem *rectangle = mainQML->findChild<QQuickItem*>("_stylingRectangle");

//    rectangle->setWidth(400);
//    rectangleText->setProperty("text", "3");
//    return app.exec();
//}


#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QQuickItem>
#include "connectiontest.h"

QQuickItem *displayText = nullptr;

//void justCall()
//{
//    displayText->setProperty("text", "3");
//}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    QObject *main_window = engine.rootObjects().first();
    displayText = main_window->findChild<QQuickItem*>("_RectangleText");
    QObject *startStopButton = main_window->findChild<QObject*>("_startStopButton");

    ConnectionTest *ct = new ConnectionTest;
    ct->givingSomething(displayText);


    QObject::connect(startStopButton, SIGNAL(clicked()), ct, SLOT(nothing()));
    //QObject::connect(startStopButton, SIGNAL(clicked()), [=](){displayText->setProperty("text", "3");});


    return app.exec();
}
