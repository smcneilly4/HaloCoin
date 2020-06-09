#ifndef SERVERDATABASE_H
#define SERVERDATABASE_H

#include <QObject>
#include <QVector>
#include <QStringView>

class ServerDataBase : public QObject
{
    Q_OBJECT
public:
    explicit ServerDataBase(QObject *parent = nullptr);

public Q_SLOTS:
    static bool isExists(QStringView name);
    static bool isEmpty();
    static QString getLast();
    static void addClient(QStringView name);
    static void deleteLastClient();
    static void deleteClientByName(QStringView name);
    static void clear();

private:
    static QVector<QString> clients;
};

#endif // SERVERDATABASE_H
