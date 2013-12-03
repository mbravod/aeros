#ifndef SQLITE_H
#define SQLITE_H

#include <QtSql/QtSql>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>

class SQLite
{
    public:
        SQLite();

        static bool IniciaBD();
        static bool CreaBD();
        static bool VaciarTxtBD(QString ruta);
        static int BuscarVal(QString var);
        static QStringList GetText(QString file);
    private:
        static QString BDName;
};

#endif // SQLITE_H
