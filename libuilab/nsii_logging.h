#ifndef NSII_LOGGING
#define NSII_LOGGING

#include <QString>

namespace nsii { namespace common { namespace logging {

struct LogClass
{
    enum Enum : uint32_t
    {
        Panic = 1,
        Critical = 10,
        Error = 100,
        Warn = 1000,
        Info = 10000,
        Debug = 100000,
        Avalanche = 2**32
    };
};

class Logger
{
public:
    virtual ~Logger(){}

    virtual void log(const QString& msg,
                     const QString& module,
                     LogClass::Enum classification=LogClass::Enum::Debug) = 0;
};

} } } // namespaces

#endif // NSII_LOGGING

