#ifndef LOGIN_H
#define LOGIN_H

#include <QtGui>
#include <QDebug>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
        float rnd_num;
        char hash_bas[30];
        char nombre[25];
        char password[25];
} Usuario;

class Login
{
    private:
        Usuario user;                   // Tipo dato a guardar
        //------------------
        QList<Usuario> lst_usrs;        // Lista donde se guardaran los tipos
        QStringList lst_nams;           // Lista donde se guardaran los nombres
        //--------------
        FILE *arc;                      // Puntero al archivo
        char rtFile[150];               // Ruta relativa al fichero
        //Banderas
        bool lst_usrs_full;             // La lista de usuarios ha sido inicializada
        bool lst_nams_full;             // La lista de nombres ha sido inicializada
        bool errorFile;                 // Error al abrir el archivo
        bool errorExiste;               // Error al no existir el archivo
        bool usrValido;                 // User invalido
    public:
        // Construcor vacio
        Login();
        // Destructor
        ~Login();
        //Adquiere usuarios
        bool obtenUsers();
        bool guardaUsers();
        bool buscaName(QString nom);
        bool creaUser(QString name, QString pwd);
        bool modificaUser(QString name, QString pass);
        bool eliminaUser(QString name);
        bool validaUser(QString name, QString pass);
        bool validaCar(QString str);
        static bool borraDirs(QString directorio);
        Usuario userpass(QString name);
        //-----------------
        Usuario getUser() { return this->user; }
        QList<Usuario> getLst_Users() { return this->lst_usrs; }
        QStringList getLst_Names() { return this->lst_nams; }
        bool isLst_Users() { return this->lst_usrs_full; }
        bool isLst_Names() { return this->lst_nams_full; }
        bool isUsrValido() { return this->usrValido; }
        // -----------------
    };

#endif // LOGIN_H
