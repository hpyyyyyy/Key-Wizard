#ifndef MYSQL_H
#define MYSQL_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

class mySql
{
public:
    static QSqlDatabase& getDatabase();
    static void init();
private:
    mySql(){};
    static QSqlDatabase database;
};

#endif // MYSQL_H
