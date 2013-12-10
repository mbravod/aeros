#include "sqlite.h"

SQLite::SQLite()
{
}

QString SQLite::BDName = "C:/SiTTuGAs/config/sittugas.bd";

bool SQLite::IniciaBD()
{
    // Verificamos que el archivo exista
    QFile *file = new QFile(BDName);
    if(file->exists())
    {
        file->remove();
    }

    // Preparamos el SQLite
    QSqlDatabase dbA =  QSqlDatabase::addDatabase("QSQLITE");

    // Abrimos el archivo de la BD
    dbA.setDatabaseName(BDName);
    // Verificamos que lo haya abierto
    if(!dbA.open())
        return false;

    dbA.exec("create table punteros(var varchar(25) primary key not null, value int(7) not null)");
    dbA.commit();
    dbA.exec("create table config(id int(1) primary key not null, mode int(1) not null, protocolo varchar(5) not null, server varchar(100) not null, asp varchar(100) not null)");
    dbA.commit();
    dbA.exec("insert into 'config' ('id', 'mode', 'protocolo', 'server', 'asp') values (1, 0, 'http://', '127.0.0.1', 'onlinesthie.aspx');");
    dbA.commit();

    dbA.close();

    return true;
}

bool SQLite::VaciarTxtBD(QString ruta)
{
    // Preparamos el SQLite
    QSqlDatabase dbA =  QSqlDatabase::addDatabase("QSQLITE");

    // Verificamos que el archivo exista
    QFile *file = new QFile(BDName);

    // si el archivo no existe o su tamaño es cero
    if(!file->exists() || file->size() <= 0)
    {
        // Lo crea...
        if(!SQLite::IniciaBD())
            return false;
    }

    // Abrimos el archivo de la BD
    dbA.setDatabaseName(BDName);
    // Verificamos que lo haya abierto
    if(!dbA.open())
        return false;

    // Abrimos el archivo
    QStringList listaPtrs = SQLite::GetText(ruta);
    QString strTemp;
    QStringList varsval;
    for(int i = 0; i < listaPtrs.size(); i++)
    {
        strTemp = listaPtrs.at(i);
        varsval = strTemp.split(QString(";"));
        QString str = "insert into 'punteros' ('var', 'value') values ('" + varsval.at(0) + "', " + varsval.at(1) + ");";
        qDebug()<<str;
        dbA.exec(str);
    }
    dbA.close();

    return true;
}

QStringList SQLite::GetText(QString file)
{
    QStringList SystFile;
    QFile ListFile(file);
    if (!ListFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(NULL, "Error", QString("No se encontró el archivo '%1'").arg(file));
        SystFile.clear();
        return SystFile;
    }

    QString DataFile = ListFile.readAll();
    if (DataFile.isEmpty())
    {
        QMessageBox::information(NULL, "Error", QString("El archivo '%1' no contiene datos").arg(file));
        SystFile.clear();
        return SystFile;
    }

    SystFile= DataFile.split(QString("\n"));
    return SystFile;
}

int SQLite::BuscarVal(QString var)
{
    qDebug()<<"BuscaVal recibe... "<< var;
    int indice;
    bool found = false;

    // Preparamos el SQLite
    QSqlDatabase dbA =  QSqlDatabase::addDatabase("QSQLITE");

    // Verificamos que el archivo exista
    QFile *file = new QFile(BDName);

    // si el archivo no existe o su tamaño es cero
    if(!file->exists() || file->size() <= 0)
    {
        qDebug()<<"No existe la BD...";
        // Lo crea...
        if(!SQLite::IniciaBD())
            return -1;
    }

    // Abrimos el archivo de la BD
    dbA.setDatabaseName(BDName);
    // Verificamos que lo haya abierto
    if(!dbA.open())
    {
        qDebug()<<"No se pudo abrir la BD...";
        return -1;
    }

    QString strc = "select * from 'punteros' where var = '" + var + "';";

    QSqlQuery query = dbA.exec(strc);

    while (query.next())
    {
        indice = query.value(1).toInt();
        found = true;
    }

    dbA.close();

    if(!found)
        return -1;

    return indice;
}

Config SQLite::getConfig()
{
    Config h;

    return h;
}
