#include "hvachandler.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlContext>

#include <system.h>

#include<hvachander.h>
#include<audiocontroller.h>


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);


    System m_systemHandler;



    HVACHandler m_driverHVACHandler;

    HVACHandler m_passenderHVACHandler;
    AudioController m_audioController;




    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    QQmlContext* context(engine.rootContext());

        context->setContextProperty("systemHandler", &m_systemHandler);


        context->setContextProperty("driverHVAC", &m_driverHVACHandler);
        context->setContextProperty("passengerHVAC", &m_passenderHVACHandler);
        context->setContextProperty("audioController", &m_audioController);



    return app.exec();
}
