#ifndef CIN_H
#define CIN_H

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>
#include <QString>
#include <QtGui>
#include <QObject>

class CIn : QObject
{

public:
    CIn();
    HINSTANCE hGetProcIDDLL;
    typedef  int  (__stdcall * pICFUNCx22)(char USER[],char PASS[],char SERVER[]);
    pICFUNCx22 REGINSERV;
    typedef  int  (__stdcall * pICFUNCx20)(char *);
    pICFUNCx20 RETRIEVEFILESVIRTUALTABLE;
    typedef  int  (__stdcall * pICFUNCx21)(char *);
    pICFUNCx21 RETRIEVESQLVIRTUALTABLE;
    typedef  int (__stdcall * pICFUNCx2)();//(char *);
    pICFUNCx2 testST;
    typedef  int (__stdcall * pICFUNClpfnGetProcessISREADY)();//(char *);
    pICFUNClpfnGetProcessISREADY ISREADY;
    typedef  int (__stdcall * pICFUNClpfnGetProcessfromdisk)(char FILEDEC);
    pICFUNClpfnGetProcessfromdisk getdirfromdisk;
    typedef  int (__stdcall * pICFUNClpfnGetProcessfromsql)(char FILEDEC);
    pICFUNClpfnGetProcessfromsql getdirfromsql;
    typedef  int (__stdcall * pICFUNClpfnGetProcessloadtomemfromdisk)(char FILETOLOAD[]);
    pICFUNClpfnGetProcessloadtomemfromdisk loadtomemfromdisk;
    typedef  int (__stdcall * pICFUNClpfnGetProcessloadtomemfromsql)(char FILETOLOAD[]);
    pICFUNClpfnGetProcessloadtomemfromsql loadtomemfromsql;
    typedef  int (__stdcall * pICFUNClpfnGetProcessdisktosql)(char FILEDEC[],char comment[],char owner[]);
    pICFUNClpfnGetProcessdisktosql disktosql;
    char SQLVIRTUALTABLE[1024*5][128];
    char FILESVIRTUALTABLE[1024*20][32];
    int xu;

    int login();
private:

    int errorMessage(int error);

};

#endif // CIN_H
