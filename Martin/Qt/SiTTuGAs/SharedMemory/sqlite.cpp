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

Config * SQLite::getConfig()
{
    // Preparamos el SQLite
    bool found = false;
    QSqlDatabase dbA =  QSqlDatabase::addDatabase("QSQLITE");

    // Verificamos que el archivo exista
    QFile *file = new QFile(BDName);

    // si el archivo no existe o su tamaño es cero
    if(!file->exists() || file->size() <= 0)
    {
        qDebug()<<"No existe la BD...";
        return NULL;
    }

    // Abrimos el archivo de la BD
    dbA.setDatabaseName(BDName);
    // Verificamos que lo haya abierto
    if(!dbA.open())
    {
        qDebug()<<"No se pudo abrir la BD...";
        return NULL;
    }

    QString strc = "select * from 'config' where id = 1;";

    QSqlQuery query = dbA.exec(strc);

    Config *h;
    while (query.next())
    {
        if(h != NULL)
            delete h;

        h = new Config();
        h->setMode(query.value(2).toInt());
        h->setProtocolo(query.value(3).toString());
        h->setServer(query.value(4).toString());
        h->setAsp(query.value(5).toString());
        found = true;
    }

    dbA.close();

    if(!found)
        return NULL;

    return h;
}

void SQLite::setConfig(Config *cfg)
{
    if( cfg == NULL)
        return;

    bool found = false;
    QSqlDatabase dbA =  QSqlDatabase::addDatabase("QSQLITE");

    // Verificamos que el archivo exista
    QFile *file = new QFile(BDName);

    // si el archivo no existe o su tamaño es cero
    if(!file->exists() || file->size() <= 0)
    {
        qDebug()<<"No existe la BD...";
        if(!SQLite::IniciaBD())
            return;
    }

    // Abrimos el archivo de la BD
    dbA.setDatabaseName(BDName);
    // Verificamos que lo haya abierto
    if(!dbA.open())
    {
        qDebug()<<"No se pudo abrir la BD...";
        return;
    }

    QString strc = "select * from 'config' where id = 1;";

    QSqlQuery query = dbA.exec(strc);

    while (query.next())
    {
        found = true;
    }

    if(found)
    {
        strc = QString("update config set mode = %1, protocolo = '%2', server = '%3', asp = '%4' where id = 1;").arg(cfg->getMode()).arg(cfg->getProtocolo()).arg(cfg->getServer()).arg(cfg->getAsp());
    }
    else
        strc = QString("insert into config (id, mode, protocolo, server, asp) values (1, %1, '%2', '%3','%4');").arg(cfg->getMode()).arg(cfg->getProtocolo()).arg(cfg->getServer()).arg(cfg->getAsp());

    dbA.exec(strc);
    dbA.commit();
    dbA.close();
}


