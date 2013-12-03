#include <QtGui>
#include <QDebug>
#include <Qt>
#include "bitac.h"
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <tchar.h>
#include <stdlib.h>
#include "Settings/Paths.h"

BitaC::BitaC(){};

//Definición de las variables estaticas
char BitaC::directorio[13] = InstallPath;
char BitaC::ruta[93] = "";
char BitaC::rutaBTC[93] = "";
QString BitaC::user = "Operador";
QString BitaC::foto = "Foto inicial... Sin cargar ninguna foto.";
bool BitaC::activa = false;
bool BitaC::escribiendo = false;


bool BitaC::creatBTC()
{
    FILE *arc;
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[29];
    char bufferF[22];
    char rtfHis[90];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 29, "Bitc %d-%m-%Y %H-%M-%S.btc",timeinfo);
    strftime(bufferF, 22, "%d/%m/%Y - %H:%M:%S",timeinfo);
    //-------------------------------------
    strcpy(BitaC::ruta, BitaC::directorio);     // Conformamos la ruta añadiendo directorio: "C:\SITTUGAS\"
    strcat(BitaC::ruta, BitaC::user.toAscii()); // Ahora, username: "C:\SITTUGAS\Nmb_Ins"
    strcat(BitaC::ruta, "\\Bitacora\\");          // La diagonal: "C:\SITTUGAS\Nmb_Ins\Bitacora\" - Directorio de trabajo
    strcpy(BitaC::rutaBTC, BitaC::ruta);        // Copiamos la ruta, en BTC para gestionar la bitacora
    strcpy(rtfHis, BitaC::ruta);                // Copiamos la ruta en His para gestionar el Historial
    strcat(BitaC::rutaBTC, buffer);             // Nombramos el nuevo archivo de la bitacora
    strcat(rtfHis, "Historial.txt");            // Creamos la ruta al archivo de Historial
    if((QString::compare(BitaC::user, "Operador", Qt::CaseInsensitive)) == 0)
    {
        BitaC::foto = "Foto definida por el Instructor... Sin cargar ninguna foto.";
    }
    //-------------------------------------
    arc = fopen(rtfHis, "a");
    if(arc == NULL)
    {
        qDebug()<<"Error... No se pudo crear el archivo de Historial";
        qDebug()<<rtfHis;
        BitaC::activa = false;
        return false;
    }
    fprintf(arc, "%s\n", buffer);
    fclose(arc);
    BitaC::activa = true;
    arc = fopen(BitaC::rutaBTC, "a");
    if(arc == NULL)
    {
        qDebug()<<"Error... No se pudo crear el archivo de Bitacora";
        qDebug()<<BitaC::rutaBTC;
        return false;
    }

    fprintf(arc, "%s\t%s\tInició nueva sesión en SITTUGAS\n", bufferF, BitaC::user.toAscii().data());
    fclose(arc);
    return true;
}

void BitaC::escribeBTC(QString cadena)
{
    qDebug()<<"Escribir en BTC... "<<cadena;
    qDebug()<<"Activa? "<<BitaC::activa<<" Escribiendo? "<<BitaC::escribiendo;
    if(BitaC::activa && !BitaC::escribiendo)
    {
        qDebug()<<"Preparada para escribir...";
        qDebug()<<BitaC::rutaBTC;
        FILE *arc;
        time_t rawtime;
        struct tm *timeinfo;
        char buffer[22];

        time(&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buffer, 22, "%d/%m/%Y - %H:%M:%S",timeinfo);


        arc = fopen(BitaC::rutaBTC, "a");
        if(!arc!=NULL)
        {
            qDebug()<<"Hubo un problema al abrir la bitacora para escritura...";
            return;
        }
        BitaC::escribiendo = true;
        fprintf(arc, "%s\t%s\t%s\t%s\n", buffer, BitaC::user.toAscii().data(), cadena.toAscii().data(), BitaC::foto.toAscii().data());
        BitaC::escribiendo = false;
        fclose(arc);
    }
}
