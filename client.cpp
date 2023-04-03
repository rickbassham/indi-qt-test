#include "client.h"

MyClient::~MyClient()
{
}

void MyClient::newDevice(INDI::BaseDevice baseDevice) {}
void MyClient::removeDevice(INDI::BaseDevice baseDevice) {}
void MyClient::newProperty(INDI::Property property) {}
void MyClient::removeProperty(INDI::Property property) {}
void MyClient::newMessage(INDI::BaseDevice baseDevice, int messageID) {}
void MyClient::serverConnected() {}
void MyClient::serverDisconnected(int exit_code) {}
