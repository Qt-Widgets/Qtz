#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <QString>
#include <qtz/core/library.h>
#include "database.h"

class QTZ_SHARED_EXPORT DataProvider {
    friend class DataProviderInformation;
public:
    DataProvider();
    DataProvider(const QString &, const quint8 &, const QString &, const quint32 &,
                 const QString &, const QString &);
    ~DataProvider();
    QString providerName() const;
    quint8 providerCode() const;
    QString defaultHost() const;
    quint32 defaultPort() const;
    QString defaultUsername() const;
    QString defaultDatabase() const;
private:
    QString m_providerName;
    Database::Type m_type;
    QString m_defaultHost;
    quint32 m_defaultPort;
    QString m_defaultUsername;
    QString m_defaultDatabase;
};

#endif // DATAPROVIDER_H
