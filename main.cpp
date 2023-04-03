#include <QtCore>

#include "client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClient client;
    client.setServer("localhost", 7624);
    client.connectServer();

    return a.exec();
}
