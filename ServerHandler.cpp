#include "ServerHandler.h"

ServerHandler::ServerHandler()
{

}

void ServerHandler::handle(QTcpSocket &obj, TextMessage &message)
{
    qDebug() << &obj;
    qDebug() << message.type();
    qDebug() << message.data();

    if( message.type() == "CONN" ){
        qDebug() << "MessageType DSCN";
    }
    else if( message.type() == "DSCN" ){
        qDebug() << "MessageType DSCN";
    }
}
