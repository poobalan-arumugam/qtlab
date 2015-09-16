#ifndef NSII_OBSERVABLES
#define NSII_OBSERVABLES

#include <QVariant>

namespace nsii { namespace common { namespace observables {

class Observable
{
public:
    virtual ~Observable(){}

};

class Visitor
{
public:
    virtual ~Visitor(){}
};

class Visitable
{
public:
    virtual ~Visitable(){}

    virtual void accept(Visitor& visitor, QVariantMap& arg) const = 0;
};

class Resource
{
public:
    virtual ~Resource(){}
};

class ResourceProvider
{
public:
    virtual ~ResourceProvider(){}

};

class Holder
{
public:
    virtual ~Holder(){}

    virtual Resource& resource() = 0;
    virtual void resource_changed() = 0;
};

} } } // namespaces

#endif // NSII_OBSERVABLES

