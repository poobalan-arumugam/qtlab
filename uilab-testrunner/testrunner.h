#ifndef TESTRUNNER_H
#define TESTRUNNER_H

#include "uilab-testrunner_global.h"
#include <QObject>
#include "uilab_modules.h"
#include <QtPlugin>

class UILABTESTRUNNERSHARED_EXPORT TestRunner : public QObject,
        public nsii::common::ui::ModuleInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.iterativeideas.uilab.TestRunner/1")
    Q_INTERFACES(nsii::common::ui::ModuleInterface)
public:
    TestRunner();

    QObject* getModule() override;
};

#endif // TESTRUNNER_H
