
#include <QQmlExtensionPlugin>

#include <qqml.h>

#include "zmq_rep.h"
#include "zmq_req.h"


class ZMQPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes(const char *uri)
    {
        qmlRegisterType<ZMQ_Rep>(uri, 1, 0, "ZMQ_Rep");
        qmlRegisterType<ZMQ_Req>(uri, 1, 0, "ZMQ_Req");
    };
};
