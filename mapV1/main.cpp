#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QNetworkAccessManager>
//#include <QSslConfiguration>
#include "dronedata.h"
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //QNetworkAccessManager networkManager;
    //QSslConfiguration sslconfig = QSslConfiguration::defaultConfiguration();
    //sslconfig.setProtocol(QSsl::UnknownProtocol);
    //QSslConfiguration::setDefaultConfiguration(sslconfig);

    qmlRegisterType<DroneData>("droneData", 1, 0, "DroneData");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    //qDebug() << QSslSocket::supportsSsl();


    return app.exec();
}
