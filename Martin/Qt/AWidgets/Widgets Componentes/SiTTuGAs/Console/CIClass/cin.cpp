#include "cin.h"
#include <QString>
CIn::CIn()
{

/*    printf("\n Abriendo memoria ...\n\n");

    hGetProcIDDLL = LoadLibrary(L"coresql.dll");
    if (!hGetProcIDDLL  ){
       printf("No se encontro el dll solicitado: coresql.dll");
    }

    FARPROC lpfnGetProcessREGINSERV ;
    lpfnGetProcessREGINSERV = GetProcAddress(HMODULE (hGetProcIDDLL),"?REGINSERV@@YAHQAD00@Z");
    REGINSERV = pICFUNCx22(lpfnGetProcessREGINSERV) ;


    FARPROC lpfnGetProcessFILES ;
    lpfnGetProcessFILES = GetProcAddress(HMODULE (hGetProcIDDLL),"?RETRIEVEFILESVIRTUALTABLE@@YAHPAD@Z");
    RETRIEVEFILESVIRTUALTABLE = pICFUNCx20(lpfnGetProcessFILES);

    FARPROC lpfnGetProcessSQL ;
    lpfnGetProcessSQL = GetProcAddress(HMODULE (hGetProcIDDLL),"?RETRIEVESQLVIRTUALTABLE@@YAHPAD@Z");
    RETRIEVESQLVIRTUALTABLE = pICFUNCx21(lpfnGetProcessSQL) ;

    FARPROC lpfnGetProcessID05 ;
    lpfnGetProcessID05 = GetProcAddress(HMODULE (hGetProcIDDLL),"?test@@YAHXZ");
    testST = pICFUNCx2(lpfnGetProcessID05) ;


    FARPROC lpfnGetProcessISREADY ;
    lpfnGetProcessISREADY = GetProcAddress(HMODULE (hGetProcIDDLL),"?ISREADY@@YAHXZ");
    ISREADY = pICFUNClpfnGetProcessISREADY(lpfnGetProcessISREADY) ;


    FARPROC lpfnGetProcessfromdisk ;
    lpfnGetProcessfromdisk= GetProcAddress(HMODULE (hGetProcIDDLL),"?getdirfromdisk@@YAHD@Z");
    getdirfromdisk = pICFUNClpfnGetProcessfromdisk(lpfnGetProcessfromdisk) ;


    FARPROC lpfnGetProcessfromsql ;
    lpfnGetProcessfromsql= GetProcAddress(HMODULE (hGetProcIDDLL),"?getdirfromsql@@YAHD@Z");
    getdirfromsql = pICFUNClpfnGetProcessfromsql(lpfnGetProcessfromsql) ;


    FARPROC lpfnGetProcessloadtomemfromdisk ;
    lpfnGetProcessloadtomemfromdisk= GetProcAddress(HMODULE (hGetProcIDDLL),"?loadtomemfromdisk@@YAHQAD@Z");
    loadtomemfromdisk = pICFUNClpfnGetProcessloadtomemfromdisk(lpfnGetProcessloadtomemfromdisk) ;


    FARPROC lpfnGetProcessloadtomemfromsql ;
    lpfnGetProcessloadtomemfromsql= GetProcAddress(HMODULE (hGetProcIDDLL),"?loadtomemfromsql@@YAHQAD@Z");
    loadtomemfromsql = pICFUNClpfnGetProcessloadtomemfromsql(lpfnGetProcessloadtomemfromsql) ;



    FARPROC lpfnGetProcessdisktosql ;
    lpfnGetProcessdisktosql= GetProcAddress(HMODULE (hGetProcIDDLL),"?disktosql@@YAHQAD00@Z");
    disktosql = pICFUNClpfnGetProcessdisktosql(lpfnGetProcessdisktosql) ;
*/
}

int CIn::login(){
/*
    xu= REGINSERV("COINS","STHIE","192.168.2.65");
    return errorMessage(xu);*/
    return 0;
}

int CIn::errorMessage(int error){
/*
    QString message;

    switch(error)
    {
    case 1: return 0;
    case -1002:
        message="Escena no encontrada";
        break;
    case -860:
        message="El usuario no está autentificado";
        break;
    case -1001:
        message="Autentificación inválida, verifique usuario y/o contraseña";
        break;
    default: message=tr("Error: %1").arg(error).arg("Conexión con SQL");
    }
    QMessageBox::information(0, tr("Error"),message);*/
    return -1;
}

