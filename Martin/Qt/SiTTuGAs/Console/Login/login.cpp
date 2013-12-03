#include <QWidget>
#include <QtGui>
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include "login.h"
#include "Settings/Paths.h"

Login::Login()
{
    QString ruta = InstallPath;
    ruta.append(ConfigFileDir);
    ruta.append(LoginFileName);
    strcpy(rtFile, ruta.toAscii());

    lst_usrs_full = false;
    lst_nams_full = false;
    errorFile = false;
    errorExiste = false;
    usrValido = false;
    //-----------------
    bool errorObt = true;
    //-----------------
    errorObt = obtenUsers();
    errorObt = !errorObt;
    if (errorObt)
    {
        errorFile = true;
        arc = fopen(rtFile, "w");
        fclose(arc);
    }
    qDebug()<<"Objeto creado con exito...";
    this->obtenUsers();
}

// Destructor
Login::~Login()
{
    fclose(arc);
    arc=NULL;
}

//Adquiere usuarios
bool Login::obtenUsers()
{
    int escrito=0;
    qDebug()<<"Obtención de Usuarios";
    Usuario e1;
    arc = fopen(rtFile, "rb");
    if(arc == NULL)
    {
        qDebug()<<"Obtención de Usuarios - No se pudo abrir el archivo";
        lst_usrs_full = false;
        lst_nams_full = false;
        errorFile = true;
        return false;
    }
    // Se limpian las listas
    lst_usrs.clear();
    lst_nams.clear();
    fseek(arc, 0, 0);
    qDebug()<<"Comenzaremos con la lectura del archivo";
    //----------------------------
    escrito=fread(&e1, sizeof(Usuario), 1, arc);
    if(escrito == 1)
    {
        lst_usrs.append(e1);
        lst_nams.append(e1.nombre);
    }
    else
    {
        lst_usrs_full = false;
        lst_nams_full = false;
        errorFile = true;
        return false;
    }
    qDebug()<<"El User es: "<<e1.nombre<<"pass: "<<e1.password<<"Tamaño: "<<lst_usrs.size();
    while(!feof(arc) && escrito == 1)
    {
        escrito=fread(&e1, sizeof(Usuario), 1, arc);
        if(escrito==0)
        {
            break;
        }
        qDebug()<<"a: "<<escrito;
        lst_usrs.append(e1);
        lst_nams.append(e1.nombre);
        qDebug()<<"El User es: "<<e1.nombre<<"pass: "<<e1.password<<"Tamaño: "<<lst_usrs.size();
    }
    fclose(arc);
    lst_usrs_full = true;
    lst_nams_full = true;
    return true;
}

//Función que busca un nombre de usuario
 bool Login::buscaName(QString nom)
{
     QString name;
     if(!lst_nams_full)
     {
         return false;
     }

     for(int it=0; it<lst_nams.size(); it++)
     {
         name = lst_nams.at(it);
         if((QString::compare(name, nom, Qt::CaseInsensitive)) == 0)
         {
             return true;
         }
     }
     return false;
}

//función que crea una nueva cuenta de usuario
bool Login::creaUser(QString name, QString pwd)
{
    qDebug()<<"Vamos a crear un nuevo usuario";
    errorExiste = buscaName(name);

    qDebug()<<"¿Existe el nombre? "<<errorExiste;

    if(!errorExiste)
    {
        if(!lst_usrs_full)
        {
            qDebug()<<"La lista no esta llena. Se obtendran los usuarios";
            obtenUsers();
        }

        Usuario e1;
        bool error = false;

        if (25 < name.size())
            name.resize(25);
        if(25 < pwd.size())
            pwd.resize(25);
        strcpy(e1.nombre, name.toAscii());
        strcpy(e1.password, pwd.toAscii());
        lst_usrs.append(e1);;
        lst_nams.append(name);
        error = guardaUsers();
        if(!error)
        {
            qDebug()<<"GU - Error al crear el archivo de usuarios";
        }
        else
        {
            qDebug()<<"Se crean los directorios";

            mkdir(QString("%1%2").arg(InstallPath).arg(name).toAscii().data());
            mkdir(QString("%1%2\\Bitacora").arg(InstallPath).arg(name).toAscii().data());
            mkdir(QString("%1%2\\GruposCurvas").arg(InstallPath).arg(name).toAscii().data());
            mkdir(QString("%1%2\\GruposTablas").arg(InstallPath).arg(name).toAscii().data());
            mkdir(QString("%1%2\\GruposVariables").arg(InstallPath).arg(name).toAscii().data());
        }
        return true;
    }
    else
    {
        qDebug()<<"GU - El usuario ya existe";
        return false;
    }
}

bool Login::borraDirs(QString directorio)
{
    //--------------------------------------------------------
    // Recibe como parámetro la ruta del directorio a borrar |
    // y regresrá true si fue eliminado satisfactorimente, o |
    // false si es que ha habido un error;                   |
    //--------------------------------------------------------
    QStringList archivos, carpetas;
    QString rtr, src;
    QDir *dirs;
    bool v;

    qDebug()<<"Función que borrara el directorio: "<<directorio;
    dirs = new QDir(directorio);
    qDebug()<<"Se ha creado el objeto del directorio";

    dirs->setSorting(QDir::NoSort);
    dirs->setFilter(QDir::Dirs);
    qDebug()<<"Se ajustan los filtros";




    carpetas = dirs->entryList(dirs->filter(), dirs->sorting());

    qDebug()<<"Se capturan los nombres de los directorios: "<<carpetas<<"\n--------";
    dirs->setFilter(QDir::Files);
    archivos = dirs->entryList(dirs->filter(), dirs->sorting());
    qDebug()<<"Se capturan los nombres de los archivos: "<<archivos<<"\n--------";

    qDebug()<<"Borrará los archivos...";
    for(int i = 0; i < archivos.size(); i++)
    {
        qDebug()<<"Intentando borrar el archivo: "<<archivos.at(i);
        dirs->remove(archivos.at(i));
    }

    for(int i = 0; i < carpetas.size(); i++)
    {
        src = carpetas.at(i);
        if(src.contains(".") || src.contains(".."))
        {
            carpetas.removeAt(i);
            i = i-1;
        }
    }

    qDebug()<<"Lista de directorios: "<<carpetas;


    qDebug()<<"--------------\nBorrara recursivamente los directorios...";
    for(int i = 0; i < carpetas.size(); i++)
    {
        rtr = directorio;
        rtr.append("\\");
        qDebug()<<"Se prepara la ruta: "<<rtr;
        rtr.append(carpetas.at(i));
        qDebug()<<"Se crea la ruta: "<<rtr;
        Login::borraDirs(rtr);
    }

    qDebug()<<"Se intenta borrar el directorio...";

    v = dirs->rmdir(directorio.toAscii().data());

    qDebug()<<"Resultado del borrado..."<<v;

    delete(dirs);
    qDebug()<<"Se borra el objeto creado...";

    return v;
}

//Función que guarda en archivo de texto la información de los usuarios
bool Login::guardaUsers()
{
    Usuario e1;
    int r;
    //Abre el archivo
    if((arc = fopen(rtFile, "wb")) == NULL)
    {
        qDebug()<<"Error al consultar el banco de datos...\n";
        errorFile = true;
        return false;
    }
    qDebug()<<"Archivo abierto para guardar nuevo usuario";
    // Escribe en el fichero
    fseek(arc, 0, 0);
    qDebug()<<"Se mueve al principio del archivo";
    for(int i = 0; i < lst_usrs.size(); i++)
    {
        e1 = lst_usrs.at(i);
        qDebug()<<"Guarda en e1 la etructura de User: "<<e1.nombre<<" - "<<e1.password;
        r= fwrite(&e1, sizeof(Usuario), 1, arc);
        qDebug()<<"Se ha escrito en el archivo... "<<r;
    }
    qDebug()<<"Se cierra el archivo...";
    fclose(arc);
    qDebug()<<"Regresa true...";
    return true;
}

//Función que modifica el password de un usuario
bool Login::modificaUser(QString name, QString pass)
{
    Usuario e1, t1;
    QList<Usuario> new_usrs;
    QString nombre;
    bool guardo = false;
    bool cambiado = false;
    bool obtengo = false;

    for(int i=0; i < lst_usrs.size(); i++)
    {
        e1 = lst_usrs.at(i);
        nombre = e1.nombre;
        if((QString::compare(name, nombre, Qt::CaseSensitive)) != 0)
        {
            qDebug()<<"Nombre: "<<e1.nombre<<" Password: "<<e1.password;
            new_usrs.append(e1);
        }
        else
        {
            qDebug()<<"Nombre: "<<e1.nombre<<" Password: "<<e1.password;
            strcpy(e1.password, pass.toAscii());
            qDebug()<<"Nombre: "<<e1.nombre<<" Password Nuevo: "<<e1.password;
            new_usrs.append(e1);
            cambiado = true;
        }
    }
    lst_usrs.clear();
    lst_nams.clear();
    lst_usrs = new_usrs;
    guardo = guardaUsers();
    obtengo = obtenUsers();

    if(guardo && cambiado && obtengo)
        return true;
    else
        return false;
}

//Función que elimina la cuenta de un usuario
bool Login::eliminaUser(QString name)
{
    Usuario e1, t1;
    QList<Usuario> new_usrs;
    QString nombre;
    bool omitido = false, guardo = false;

    for(int i=0; i < lst_usrs.size(); i++)
    {
        e1 = lst_usrs.at(i);
        nombre = e1.nombre;
        if((QString::compare(name, nombre, Qt::CaseSensitive)) != 0)
        {
            new_usrs.append(e1);
        }
        else
        {
            omitido = true;
        }
    }
    lst_usrs.clear();
    lst_nams.clear();
    lst_usrs = new_usrs;
    for(int i=0; i < lst_usrs.size(); i++)
    {
        t1 = lst_usrs.at(i);
        lst_nams.append(t1.nombre);
    }

    guardo = guardaUsers();

    if(guardo && omitido)
        return true;
    else
        return false;
}

//Función que valida la correspondencia entre username y password
bool Login::validaUser(QString name, QString pass)
{
    Usuario e1;

    for(int it=0; it<lst_usrs.size(); it++)
    {
        e1 = lst_usrs.at(it);
        if(strcmp(e1.nombre, name.toAscii()) == 0)
        {
            qDebug()<<"Se ha encontrado al usuario";
            if(strcmp(e1.password, pass.toAscii()) == 0)
            {
                user = e1;
                qDebug()<<"Coinciden los Passwords";
                usrValido = true;
                return true;
                break;
            }
            qDebug()<<"NO Coinciden los Passwords";
        }
    }
    qDebug()<<"No encontrado...";
    usrValido = false;
    return false;
}

bool Login::validaCar(QString str)
{
    char cadena[30];
    bool perCar;
    strcpy(cadena, str.toAscii());
    int cmp;
    for(int i = 0; i<str.size(); i++)
    {
        cmp = cadena[i];
        if ((48 <= cmp) && (cmp <= 57))
        {
            perCar = true;
        }
        else if ((65 <= cmp) && (cmp <= 90))
        {
            perCar = true;
        }
        else if ((97 <= cmp) && (cmp <= 122))
        {
            perCar = true;
        }
        else
        {
            perCar = false;
            break;
        }
    }

    return perCar;
}

//Función que nos regresa el nombre de usuario y contraseña correspondientes al name mandado
Usuario Login::userpass(QString name)
{
    Usuario e1, t1;
    strcpy(t1.nombre, "INV.USER.NM");
    strcpy(t1.password, "");

    for(int it=0; it<lst_usrs.size(); it++)
    {
        e1 = lst_usrs.at(it);
        if(strcmp(e1.nombre, name.toAscii()) == 0)
        {
            qDebug()<<"Se ha encontrado al usuario";
            return e1;
            break;
        }
    }
    qDebug()<<"No encontrado...";
    return t1;
}
