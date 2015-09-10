#ifndef UILAB_MODULES_H
#define UILAB_MODULES_H

#include <QObject>

namespace nsii { namespace common { namespace ui {

class ModuleInterface
{
public:
    virtual ~ModuleInterface(){}

    virtual QObject* getModule() = 0;
};

} } } // namespaces

#define ModuleInterface_iid "com.interativeideas.uilab.ModuleInterface/1"

Q_DECLARE_INTERFACE(nsii::common::ui::ModuleInterface, ModuleInterface_iid)


#endif // UILAB_MODULES_H

