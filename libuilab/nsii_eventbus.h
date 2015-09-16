#ifndef NSII_EVENTBUS
#define NSII_EVENTBUS

#include <QObject>
#include <QSharedPointer>

namespace nsii { namespace common { namespace eventbus {

class Event
{
public:
    virtual ~Event() {}
};

class EventBus
{
public:
    virtual ~EventBus() {}

    virtual void dispatch(const Event& event) = 0;
};

class Subscriber
{
public:
    virtual ~Subscriber(){}

    virtual void onevent(const Event& event);
};

class Subscription
{
public:
    virtual ~Subscription(){}
    virtual void cancel_subscription() = 0;
};

class EventBusSubscriptions
{
public:
    virtual ~EventBusSubscriptions() {}

    virtual Subscription subscribe(const Subscriber& subscriber);
};

} } } // namespaces

#endif // NSII_EVENTBUS

