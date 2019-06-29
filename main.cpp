#include <QCoreApplication>
#include "ServerDemo.h"
#include "ServerHandler.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ServerHandler handler;
    ServerDemo server;

    server.setHandler(&handler);
    server.start(8890);
    qDebug() << "Started";
    return a.exec();
}
