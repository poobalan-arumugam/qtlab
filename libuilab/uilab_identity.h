#ifndef UILAB_IDENTITY
#define UILAB_IDENTITY

#include <QString>

namespace nsii { namespace common { namespace identity {

class AuthToken
{
public:
    virtual ~AuthToken() {}

    virtual QString token() const = 0;
};

class Permission
{
public:
    virtual ~UserPermission() {}

    virtual QString name() const = 0;
};

class PermissionedBaseEntity
{
public:
    virtual ~PermissionedBaseEntity() {}

    virtual bool has_permission(const QString& permission_name) = 0;
    virtual QList<Permission> get_permissions() const = 0;
};

class UserRole : public PermissionedBaseEntity
{
public:
    virtual ~UserRole() {}

    virtual QString name() const = 0;
    virtual AuthToken* token() const = 0;
    virtual QStringList subroles() const = 0;
};

class PermissionedEntity : public PermissionedBaseEntity
{
public:
    virtual ~PermissionedEntity() {}

    virtual QStringList roles() const = 0;
    virtual UserRole* get_role(const QString& name) const = 0;
};


class UserIdentity : public PermissionedEntity
{
public:
    virtual ~UserIdentity() {}

    virtual QString name() const = 0;
};

class GroupIdentity : public PermissionedEntity
{
public:
    virtual ~GroupIdentity() {}

    virtual QString name() const = 0;
};


} } } // namespaces


#endif // UILAB_IDENTITY

