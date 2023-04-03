#include <QtCore>

#include <indibase.h>
#include <basedevice.h>
#include <baseclientqt.h>

class MyClient : public INDI::BaseClientQt
{
    Q_OBJECT
public:
    MyClient(QObject *parent = Q_NULLPTR) : INDI::BaseClientQt(parent) {}
    virtual ~MyClient();

public:
    virtual void newDevice(INDI::BaseDevice baseDevice) override;
    virtual void removeDevice(INDI::BaseDevice baseDevice) override;
    virtual void newProperty(INDI::Property property) override;
    virtual void removeProperty(INDI::Property property);
    virtual void newMessage(INDI::BaseDevice baseDevice, int messageID) override;
    virtual void serverConnected();
    virtual void serverDisconnected(int exit_code);
};
