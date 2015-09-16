#ifndef NSII_ALERT
#define NSII_ALERT

#include "nsii_logging.h"

namespace nsii { namespace common { namespace alert {

struct AlertClass
{
    enum Enum : uint32_t
    {
        Panic = 1,
        Critical = 10,
        Error = 100,
        Warn = 1000,
        Info = 10000
    };
};

class AlertToken
{
public:
    virtual ~AlertToken(){}
};

class AlertManager
{
public:
    virtual ~AlertManager(){}

    virtual AlertToken notify(
            const QString& msg,
            const QString& module,
            AlertClass::Enum classification=AlertClass::Enum::Info) = 0;
    virtual AlertToken modify(
            const AlertToken& token,
            const QString& msg,
            const QString& module,
            AlertClass::Enum classification=AlertClass::Enum::Info) = 0;
    virtual AlertToken escalate(const AlertToken& token) = 0;
    virtual void clear(const AlertToken& token) = 0;
};

} } } // namespaces

#endif // NSII_ALERT

