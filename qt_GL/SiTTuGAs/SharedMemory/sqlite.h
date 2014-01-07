#ifndef SQLITE_H
#define SQLITE_H

#include <QtSql/QtSql>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>
#include "config.h"

class SQLite
{
    public:
        SQLite();

        static bool IniciaBD();
        static bool VaciarTxtBD(QString ruta);
        static int BuscarVal(QString var);
        static QStringList GetText(QString file);
        static Config *getConfig();
        static void setConfig(Config *cfg);
        static QSqlDatabase dbA;
    private:
        static QString BDName;
};

#endif // SQLITE_H
