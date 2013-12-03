#ifndef BITAC_H
#define BITAC_H

#include <QtGui>
#include <QDebug>
#include <Qt>
#include <time.h>
#include <stdio.h>

class BitaC
{
    public:
        BitaC();
        static void escribeBTC(QString cadena);
        static bool creatBTC();
        // Variables
        static QString user;
        static QString foto;
        static char directorio[13];
        static char rutaBTC[93];
        static char ruta[93];
        static bool activa;
        static bool escribiendo;
    private:
};

#endif // BITAC_H
