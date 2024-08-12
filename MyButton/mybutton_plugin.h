#ifndef MYBUTTON_PLUGIN_H
#define MYBUTTON_PLUGIN_H

#include <QQmlExtensionPlugin>

class MyButtonPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // MYBUTTON_PLUGIN_H
