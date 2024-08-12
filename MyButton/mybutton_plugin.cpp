#include "mybutton_plugin.h"

#include "myitem.h"
#include "MyButton.h"

#include <qqml.h>

void MyButtonPlugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
    qmlRegisterType<MyButton>(uri, 1, 0, "MyButton");
}
