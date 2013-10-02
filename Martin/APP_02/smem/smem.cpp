// Archivo DLL principal.
int main0(int pars);
# define _SECURE_SCL 0
// Archivo DLL principal.
#include <math.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "..\\..\\mmf.h"

using namespace std;


// funciones de inicializacion de memoria y acceso a memoria compartida


//----------Definiciones de Control de errores----------------
FARPROC lpfnGetADD ;
FARPROC lpfnGetADD2 ;
FARPROC lpfnGetADD3 ;
typedef  void (__stdcall * pICDLLFUNC00)();//(char *); 
   pICDLLFUNC00 TRACE; 
typedef  void (__stdcall * pICDLLFUNC01)(EXCEPTION_POINTERS* pExp, DWORD dwExpCode);//(char *); 
   pICDLLFUNC01 TRACE2; 
typedef  void (__stdcall * pICDLLFUNC02)(char ID[]);//(char *); 
   pICDLLFUNC02 MYID; 


__declspec(dllexport) void __cdecl load(int instance) 
{ 
initmmf("APP 02",instance);



//carga el debugger

HINSTANCE hGetProcIDDLL2 = LoadLibrary(L"kernel.dll"); 
if (!hGetProcIDDLL2  ){
	cout<<"No se encontro el dll solicitado: kernel.dll";
}
lpfnGetADD = GetProcAddress(HMODULE (hGetProcIDDLL2),"?CALLSTACK@@YAHXZ");    
TRACE = pICDLLFUNC00(lpfnGetADD) ;
lpfnGetADD2 = GetProcAddress(HMODULE (hGetProcIDDLL2),"?ExpFilter@@YGJPAU_EXCEPTION_POINTERS@@K@Z");    
TRACE2 = pICDLLFUNC01(lpfnGetADD2) ;
lpfnGetADD3 = GetProcAddress(HMODULE (hGetProcIDDLL2),"?NAME@@YAHQAD@Z");    
MYID = pICDLLFUNC02(lpfnGetADD3) ;
MYID("LOADED ON SITE DEBUGGER IN APP_02 ");
cout<<"\n******************************\nCargando On Site Debugger ...";


}





//----------Fin Funciones Virtuales (Permiten debugger)-------
#pragma unmanaged

//----------**************STACK TRACE**************-----------
   LONG WINAPI ExpFilterO(EXCEPTION_POINTERS* pExp, DWORD dwExpCode)
{
	cout<<"Aplicacion Interrumpida - On Site Debugger en Diagnostico";
	TRACE2(pExp, dwExpCode);
	return EXCEPTION_EXECUTE_HANDLER;
}
//-------**************Entrada de Main**************----------
__declspec(dllexport) int __cdecl execute(int pars) 

{
__try
{
	
///////////////////////////////////////////////FIN Funiones de Genericas De Control //////////////////////
	int su;
	su=main0(pars);          ////cambiar por la funcion main local
	return su;
///////////////////////////////////////////////Funiones de control de errores//////////////////////
}
__except(ExpFilterO(GetExceptionInformation(), GetExceptionCode()))
{
	
	system("pause");
	return -1;
}
}


//----------FIN DE FUNCIONES DE DEBUGGER----------------------

//Esta aplicación se utilizará para crear todos los equipos auxiliares como son: CHILLER, LAVADO CON AGUA, VIBRACIONES,
// AIRE DE INSTRUMENTOS, SISTEMA ELÉCTRICO, LUBRICACIÓN TURBINA Y LUBRICACIÓN GENERADOR.
//Aqui se declaran todas las variables del programa

/////////////////CHILLER//////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

/////////////////LAVDO DE COMPRESOR///////////////////////////////////////////
	double FlujoInAgua;		//FLUJO DE ENTRADA DE AGUA AL TANQUE
    double FlujoInQuimico;		//FLUJO DE ENTRADA DEL QUIMICO AL TANQUE
    double LG6520;		//MEDIDOR DE NIVEL DEL TANQUE
    int LS6543;                 //SWITCH DE BAJO NIVEL
    int TAH1620;		//ALARMA POR ALTA TEMPERATURA
    double FMOT6535;            //BOMBA DEL SISTEMA DE LAVADO
    int SOV6540;		//VÁLVULA SOLENOIDE DE LA PURGA POR AIRE
    double PI6538;		//INDICADOR DE PRESIÓN
    int SOV6516=1;		//VÁLVULA SOLENOIDE PARA LAVADO EN LÍNEA
    int SOV6504=1;		//VÁLVULA SOLENOIDE PARA LAVADO FUERA DE LÍNEA
    int ValBol1=1;		//VÁLVULA DE BOLA PARA LA ENTRADA DEL QUÍMICO
    int ValBol2=1;		//VÁLVULA DE BOLA PARA LA ENTRADA DE AGUA
    int ValBol3;		//VÁLVULA DE BOLA PARA EL DRENADO DEL TANQUE
    int ValBol4=1;		//VÁLVULA DE BOLA PARA LA SUCCIÓN DE LA BOMBA
    int OpSOV6540=1;		//APERTURA DE LA VÁLVULA SOV6540
    int ClSOV6540=1;		//CIERRE DE LA VÁLVULA SOV6540
    int OpSOV6516;		//APERTURA DE LA VÁLVULA SOV6516
    int ClSOV6516=1;		//CIERRE DE LA VÁLVULA SOV6516
    int OpSOV6504;		//APERTURA DE LA VÁLVULA SOV6504
    int ClSOV6504=1;		//CIERRE DE LA VÁLVULA SOV6504
    int Local_Remoto_WWash=0;	//LOCAL REMOTO DEL ACCIONAMIENTO DEL SISTEMA
    int StartHS6505=1;            //ARRANQUE LOCAL DEL SISTEMA
    int StopHS6505;		//PARO LOCAL DEL SISTEMA
    int StartRemoto;            //ARRANQUE REMOTO DEL SISTEMA
    int StopRemoto;             //PARO REMOTO DEL SISTEMA
    int FallaMOT6535=1;           //FALLA BOMBA MOT6535
    int FallaSOV6516=1;           //FALLA VÁLVULA SOLENOIDE SOV6516
    int FallaSOV6540=1;           //FALLA VÁLVULA SOLENOIDE SOV6540
    int FallaSOV6504=1;           //FALLA VÁLVULA SOLENOIDE SOV6504
    double CIFMOT6535;          //CONDICIONES INICIALES FLUJO MOT6535
    double NivelTank;           //NIVEL DEL TANQUE
    double CINivelTank;         //CONDICIONES INICIALES DE NIVEL DEL TANQUE
    int OnMOT6535=1;		//ARRANQUE DE MOT6535
    int OffMOT6535;		//PARO DE MOT6535
    double Tiempo;		//TIEMPO TRANSCURRIDO
    double qoutTank;            //FLUJO DE SALIDA DEL TANQUE
    double FugaTank;		//FLUJO DE FUGA DEL TANQUE
    double qDren;		//FLUJO DEL DREN
    double qOverflow;		//FLUJO DEL OVERFLOW
    double PMOT6535;            //PRESION DE LA BOMBA
    double CIPMOT6535;          //CONDICIONES INICIALES PRESION MOT6535
    int ResetFuga;		//RESET PARA LA FUGA DEL TANQUE
    double qAire;		//FLUJO DE AIRE PARA PURGA

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////VIBRCIONES////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////AIRE DE INTRUMENTOS///////////////////////////////////////////////
	int OnOffCompresor;		//ENCENDIDO Y APAGADO POR EL COMPRESOR
    double PotenciaCompresor;		//POTENCIA ENTREGADA POR EL COMPRESOR
    double PotMaxCompresor;		//POTENCIA MAXIMA DEL COMPRESOR
    double TempAireCompresor;		//TEMPERATURA DEL AIRE A LA SALIDA DEL COMPRESOR
    double TempAireTanque;		//TEMPERATURA DEL AIRE EN EL TANQUE
    double PresionTanque;		//PRESION DEL AIRE EN EL TANQUE
    double NivelSecador;		//NIVEL DE CONDENSADO EN EL SECADOR DE AIRE
    double FlujoInAire;		//FLUJO DE ENTRADA DE AIRE AL TANQUE
    double FlujoOutAire;		//FLUJO DE SALIDA DE AIRE DEL TANQUE
    double FlujoCompresor;		//FLUJO DE AIRE DEL COMPRESOR
    double FlujoOutSecador;		//FLUJO DE AIRE A LA SALIDA DEL SECADOR
    double R_Aire;		//CONSTANTE DE LOS GASES PARA EL AIRE
    double Masa_Tanque;		//MASA DE AIRE QUE HAY EN EL TANQUE
    double VolumenTanque;		//VOLUMEN DEL TANQUE
    double HumedadEspecifica;		//HUMEDAD ESPECIFICA DEL AIRE
    double EficienciaSecador;		//EFICIENCIA DE SECADO DEL SECADOR
    double DensidadAgua;		//DENSIDAD DEL AGUA
    double DensidadAire;		//DENSIDAD DEL AIRE
    double TaoCompresor;		//CONSTANTE DE RESPUESTA DEL COMPRESOR
    double TempAmbiente;		//TEMPERATURA AMBIENTE
    double CpAire;		//CAPACIDAD CALORIFICA A PRECIÓN CONSTANTE DEL AIRE
    double CvAire;		//CAPACIDAD CALORIFICA A VOLUMEN CONSTANTE DEL AIRE
    double PresionAmbiente;		//PRESIÓN AMBIENTE
    double MasaCompresor;		//MASA DE AIRE QUE PASA A TRAVES DEL COMPRESOR
    double VolCompresor;		//VOLUMEN QUE COMPRIME DE AIRE EL COMPRESOR
    double PresionOutComp;		//PRESIÓN DEL AIRE A LA SALIDA DEL COMPRESOR
    double CIPotComp;		//CONDICIONES INICIALES DE LA POTENCIA DEL COMPRESOR
    double CITempAireComp;		//CONDICIONES INICIALES DE TEMPERATURA DEL AIRE DEL COMPRESOR
    double CIMasaTanque;		//CONDICIONES INICIALES DE LA MASA EN EL TANQUE
    double CIPresionTanque;		//CONDICIONES INICIALES DE PRESIÓN EN EL TANQUE
    double CIDensidadAire;		//CONDICIONES INICIALES DE LA DENSIDAD DEL AIRE
    
    int FallaCompresor;		//FALLA DEL COMPRESOR

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////SISTEMA ELËCTRICO/////////////////////////////////////////////////

	double TaoGeneradorUnidad;      //Constante de respuesta del Generador.
    double PotenciaGenerador;       //Potencia Otrogada por el Generador.
    double VoltajeGenerador;        //Voltaje Máximo Otorgado por el Generador.
    double VFAGeneradorU;           //Voltaje en la Fase A del Generador.
    double VFBGeneradorU;           //Voltaje en la Fase B del Generador.
    double VFCGeneradorU;           //Voltaje en la Fase C del Generador.
    double CFAGeneradorU;           //Corriente en la Fase A del Generador.
    double CFBGeneradorU;           //Corriente en la Fase B del Generador.
    double CFCGeneradorU;           //Corriente en la Fase C del Generador.
    double GeneradorUnidadP;        //Generador Unidad Potencia.
    double GeneradorAuxiliar;       //Generador Auxiliar.
    double VoltajeGeneradorAuxiliar;//Voltaje Máximo Otorgado por el Generador Auxiliar.
    double TaoGenAux;               //Constante de Respuesta del Generador Auxiliar.
    double CIVGenAux;               //Condiciones Iniciales de Voltaje del Generador Auxiliar.
    double CIPGenAux;               //Condiciones Iniciales de Potencia del Generador Auxiliar.
    double CIGeneradorUnidadP;      //Condiciones Iniciales de Potencia del Generador Unidad.
    double CIGeneradorUnidadVFA;    //Condiciones Iniciales de Voltaje en la Fase A del Generador de la Unidad.
    double CIGeneradorUnidadVFB;    //Condiciones Iniciales de Voltaje en la Fase B del Generador de la Unidad.
    double CIGeneradorUnidadVFC;    //Condiciones Iniciales de Voltaje en la Fase C del Generador de la Unidad.
    double TaoIsocrono;             //Constante de Respuesta del Controlodor Isocrono del Generador Auxiliar.
    double SetPointFrecuencia;      //Set Point de la Frecuencia del Generador Auxiliar.
    double CIContrIsoc;             //Condiciones Iniciales del Controlador Isócrono.
    double ControlIsocrono;         //Controlador Isocrono.
    double PotMecanica;             //Potencia Mecánica del Generador Auxiliar.
    double PotElectrica;            //Potencia Eléctrica del Generador Auxiliar.
    double AmortiguamientoAux;      //Constante de Amortiguamiento del Generador Auxiliar.
    double RozamientoAux;           //Constante de Rozamiento del Generador Auxiliar.
    double FrecGeneradorAux;        //Frecuencia del Generador Auxiliar.
    double CIFrecAux;               //Condiciones Iniciales de la Frecuencia del Generador Auxiliar.
    double CIPotElec;               //Condiciones Iniciales de la Potencia Electrica Demandada.
    double CGeneradorAux;           //Corriente Proporcionada por el Generador Auxiliar.
    double TaoCuchillas;            //Constante de Respuesta de las Cuchillas.
    double C92BT221A;               //Posición Cuchilla 92BT221A.
    double CIC92BT221A;             //Condiciones Iniciales de la Cuchilla 92BT221A.
    double C92BAT21A;               //Posición Cuchilla 92BAT21A.
    double CIC92BAT21A;             //Condiciones Iniciales de la Cuchilla 92BAT21A.
    double C92BT221C;               //Posición Cuchilla 92BT221C.
    double CIC92BT221C;             //Condiciones Iniciales de la Cuchilla 92BT221C.
    double C92BCT21A;               //Posición Cuchilla 92BCT21A.
    double CIC92BCT21A;             //Condiciones Iniciales de la Cuchilla 92BCT21A.
    double C90MC;                   //Posición Cuchilla 90MC.
    double CIC90MC;                 //Condiciones Iniciales de la Cuchilla 90MC.
    double VFAT21A;                 //Voltaje Fase A del Transformador T21A.
    double VFBT21A;                 //Voltaje Fase B del Transformador T21A.
    double VFCT21A;                 //Voltaje Fase C del Transformador T21A.
    double CFAT21A;                 //Corriente Fase A del Transformador T21A.
    double CFBT21A;                 //Corriente Fase B del Transformador T21A.
    double CFCT21A;                 //Corriente Fase C del Transformador T21A.
    double VFAT20AuxG1;             //Voltaje Fase A del Transformador T20AuxG1.
    double VFBT20AuxG1;             //Voltaje Fase B del Transformador T20AuxG1.
    double VFCT20AuxG1;             //Voltaje Fase C del Transformador T20AuxG1.
    double CFAT20AuxG1;             //Corriente Fase A del Transformador T20AuxG1.
    double CFBT20AuxG1;             //Corriente Fase B del Transformador T20AuxG1.
    double CFCT20AuxG1;             //Corriente Fase C del Transformador T20AuxG1.
    double VFAT00AuxG1;             //Voltaje Fase A del Transformador T00AuxG1.
    double VFBT00AuxG1;             //Voltaje Fase B del Transformador T00AuxG1.
    double VFCT00AuxG1;             //Voltaje Fase C del Transformador T00AuxG1.
    double CFAT00AuxG1;             //Corriente Fase A del Transformador T00AuxG1.
    double CFBT00AuxG1;             //Corriente Fase B del Transformador T00AuxG1.
    double CFCT00AuxG1;             //Corriente Fase C del Transformador T00AuxG1.
    double VFAT221A;                //Voltaje Fase A del Transformador T221A.
    double VFBT221A;                //Voltaje Fase B del Transformador T221A.
    double VFCT221A;                //Voltaje Fase C del Transformador T221A.
    double CFAT221A;                //Corriente Fase A del Transformador T221A.
    double CFBT221A;                //Corriente Fase B del Transformador T221A.
    double CFCT221A;                //Corriente Fase C del Transformador T221A.
    double VFAT221C;                //Voltaje Fase A del Transformador T221C.
    double VFBT221C;                //Voltaje Fase B del Transformador T221C.
    double VFCT221C;                //Voltaje Fase C del Transformador T221C.
    double CFAT221C;                //Corriente Fase A del Transformador T221C.
    double CFBT221C;                //Corriente Fase B del Transformador T221C.
    double CFCT221C;                //Corriente Fase C del Transformador T221C.
    double TabCCM;                  //Potencia Consumida en el Tablero CCM.
    double TabChiller;              //Potencia Consumida en el Tablero del Chiller.
    double TabCompAire;             //Potencia Consumida en el Tablero del Compresor de Aire.
    double TabBCI;                  //Potencia Consumida en el Tablero de la Bomba Contra Incendio.
//    double Tiempo;                  //El tiempo del timer;
    int OnOffGenerador;             //Señal de Arranque y Paro del Generador de la Unidad.
    int OnOffGeneradorAuxiliar;     //Señal de Arranque y Paro del Generador Auxiliar.
    int OnOffC92BT221A;             //Señal de Apertura y Cierre de la Cuchilla 92BT221A.
    int OnOffC92BAT21A;             //Señal de Apertura y Cierre de la Cuchilla 92BAT21A.
    int OnOffC92BT221C;             //Señal de Apertura y Cierre de la Cuchilla 92BT221C.
    int OnOffC92BCT21A;             //Señal de Apertura y Cierre de la Cuchilla 92BCT21A.
    int OnOffC90MC;                 //Señal de Apertura y Cierre de la Cuchilla 90MC.
    int I521T21A;                   //Interruptor 521T21A.
    int I522T21A;                   //Interruptor 522T21A.
    int I52AuxG1;                   //Interruptor 52AuxG1.
    int I51G1;                      //Interruptor 51G1.
    int I501AuxG1;                  //Interruptor 501AuxG1.
    int I50ANG1;                    //Interruptor 50ANG1.
    int I502AuxG1;                  //Interruptor 502AuxG1.
    int Conexion1T21A;              //Variable de Conexión del Transformador T21A.
    int Conexion2T21A;              //Variable de Conexión Alternativa del Transformador T21A.
    int Conexion1T20AuxG1;          //Variable de Conexión del Transformador T20AuxG1.
    int Conexion2T20AuxG1;          //Variable de Conexión Alternativa del Transformador T20AuxG1.
    int Conexion1T00AuxG1;          //Variable de Conexión del Transformador T00AuxG1.
    int Conexion2T00AuxG1;          //Variable de Conexión Alternativa del Transformador T00AuxG1.

    int FGenerador;                 //Falla del Generador de la Unidad.
    int FGeneradorAux;              //Falla del Generador Auxiliar.
    int FC92BT221A;                 //Falla de Cuchilla 92BT221A.
    int FC92BAT21A;                 //Falla de Cuchilla 92BAT21A.
    int FC92BT221C;                 //Falla de Cuchilla 92BT221C.
    int FC92BCT21A;                 //Falla de Cuchilla 92BCT21A.
    int FC90MC;                     //Falla de Cuchilla 90MC.
    int FI521T21A;                  //Falla de Interruptor 521T21A.
    int FI522T21A;                  //Falla de Interruptor 522T21A.
    int FI52AuxG1;                  //Falla de Interruptor 52AuxG1.
    int FI51G1;                     //Falla de Interruptor 51G1.
    int FI501AuxG1;                 //Falla de Interruptor 501AuxG1.
    int FI50ANG1;                   //Falla de Interruptor 50ANG1.
    int FI502AuxG1;                 //Falla de Interruptor 502AuxG1.
    int FTabCCM;                    //Falla del Tablero de CCM.
    int FTabChiller;                //Falla del Tablero del Chiller.
    int FTabCompAire;               //Falla del Tablero del Compresor de Aire.
    int FTabBCI;                    //Falla del Tablero de la Bomba Contra Incendio.

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN TURBINA///////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN GENERADOR/////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////


//Aqui se declaran todas las funciones del programa

/////////////////CHILLER//////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

////////////////////LAVADO DE COMPRESOR///////////////////////////////
double Motobomba(int Segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double x[25];
    double h=0.05/25;
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<25;j++)
    {
        k1=((Segnal*Falla*ValMax)-(x[j-1]))/Tao;
        k2=((Segnal*Falla*ValMax)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((Segnal*Falla*ValMax)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((Segnal*Falla*ValMax)-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];

}

double NivelTanqueRectangular(double FlujoIn, double FlujoOut, double CINivel, double Largo, double Ancho)
{
    int j;
    double x[25];
    double h=0.05/25;
    double k1,k2,k3,k4;
    double Area;

    Area=Largo*Ancho;

    x[0]=CINivel;


    for(j=1;j<25;j++)
    {
        k1 = (FlujoIn - FlujoOut) / Area;
        k2 = ((FlujoIn - FlujoOut) + ((h / 2) * k1)) / Area;
        k3 = ((FlujoIn - FlujoOut) + ((h / 2) * k2)) / Area;
        k4 = ((FlujoIn - FlujoOut) + (h * k3)) / Area;

        x[j] = x[j-1] + ((h / 6) * (k1 + (2 * k2) + (2 * k3) + k4));
    }

    x[0]=x[j-1];

    return x[0];

}

///////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////VIBRCIONES////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////AIRE DE INTRUMENTOS///////////////////////////////////////////////

double PotCompresor(int Segnal, double ValMax, double CI, double Tao, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((Segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((Segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((Segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((Segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];
}

double TempOutAire(double WComp, double FCp, double Tin, double FCvTao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {

        k1=((WComp*Falla)+((FCp)*(Tin-x[j-1])))/FCvTao;
        k2=((WComp*Falla)+((FCp)*(Tin-(x[j-1]+((h/2)*k1)))))/FCvTao;
        k3=((WComp*Falla)+((FCp)*(Tin-(x[j-1]+((h/2)*k2)))))/FCvTao;
        k4=((WComp*Falla)+((FCp)*(Tin-(x[j-1]+((h)*k3)))))/FCvTao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double MasaTanque(double qinAire, double qoutAire, double DensidadAire, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(qinAire-qoutAire)*DensidadAire;
        k2=((qinAire-qoutAire)+((h/2)*k1))*DensidadAire;
        k3=((qinAire-qoutAire)+((h/2)*k2))*DensidadAire;
        k4=((qinAire-qoutAire)+(h*k3))*DensidadAire;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////SISTEMA ELËCTRICO/////////////////////////////////////////////////

double GeneradorPot(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];

}

double GeneradorVol(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-(x[j-1]))/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+(h*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];
}

double ContrlIsoc(double TiempoInteg, double SP, double Frec, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    for(j=1;j<=25;j++)
    {
        k1=(SP-Frec)/TiempoInteg;
        k2=((SP-Frec)+((h/2)*k1))/TiempoInteg;
        k3=((SP-Frec)+((h/2)*k2))/TiempoInteg;
        k4=((SP-Frec)+(h*k3))/TiempoInteg;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];

}

double FrecuenciaGenerador(double PotM, double PotE, double B, double J, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((PotM-PotE)/B)-(x[j-1]*J));
        k2=(((PotM-PotE)/B)-((x[j-1]+((h/2)*k1))*J));
        k3=(((PotM-PotE)/B)-((x[j-1]+((h/2)*k2))*J));
        k4=(((PotM-PotE)/B)-((x[j-1]+((h)*k3))*J));

        x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double PosicionCuchilla(int segnal, double ValMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((segnal*ValMax*Falla)-x[j-1])/Tao;
        k2=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k1)))/Tao;
        k3=((segnal*ValMax*Falla)-(x[j-1]+((h/2)*k2)))/Tao;
        k4=((segnal*ValMax*Falla)-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]>=0.99)
    {
        x[0]=1;
    }

    if(x[0]<0.0001)
    {
        x[0]=0;
    }

    return x[0];

}

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN TURBINA///////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN GENERADOR/////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////


//funcion de entrada de ejecucion  
 int main0(int pars) 
{ 
//ejemplo de ejecucion...genera la raiz cuadrada

//SetFloat(sqrt((float)i),i);

//Región para llamar todas las funciones de los programas.

/////////////////CHILLER//////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

///////////////////LAVADO DE COMPRESOR//////////////////////////////////////////////////////////
	FlujoInAgua = 0.0025 * ValBol1;
    FlujoInQuimico = 0.000833 * ValBol2;
    qDren = ((sqrt(2*9.81*CINivelTank))*((3.141516*0.0254*0.0254)/4)) * ValBol3;

    if(OpSOV6540==1)
    {
        SOV6540=1;
    }
    else if(ClSOV6540==0)
    {
        SOV6540=0;
    }

    if(OpSOV6516==1)
    {
        SOV6516=1;
    }
    else if(ClSOV6516==0)
    {
        SOV6516=0;
    }

    if(OpSOV6504==1)
    {
        SOV6504=1;
    }
    else if(ClSOV6504==0)
    {
        SOV6504=0;
    }

    if (NivelTank > 0.72 && ValBol2==1 && ValBol1==0)
    {
        qOverflow = 0.000833;
    }
    else if (NivelTank>0.72 && ValBol1==1 && ValBol2==0)
    {
        qOverflow = 0.0025;
    }
    else if (NivelTank>0.72 && ValBol1==1 && ValBol2==1)
    {
        qOverflow = 0.003333;
    }
    else
    {
        qOverflow = 0;
    }

    if (OpSOV6540 == 1)
    {
        qAire = 0.004719475;
    }
    else if (ClSOV6540 == 1)
    {
        qAire = 0;
    }

    if ((Local_Remoto_WWash == 1 && StartRemoto == 1) || (Local_Remoto_WWash == 0 && StartHS6505 == 1))
    {
        OnMOT6535 = 1;
    }
    else if ((Local_Remoto_WWash == 1 && StopRemoto == 1) || (Local_Remoto_WWash == 0 && StopHS6505 == 1))
    {
        OnMOT6535 = 0;
    }


    qoutTank = CIFMOT6535 + qDren + qOverflow + FugaTank;



    if (NivelTank < 0)
    {
        NivelTank = 0;
        CIFMOT6535 = 0;
    }
    else
    {
        NivelTank = NivelTanqueRectangular((FlujoInAgua + FlujoInQuimico), qoutTank, CINivelTank, 0.8, 0.6);
    }

    if ((SOV6504 == 0) && (SOV6516 == 0))
    {
        PMOT6535 = 0;
        FMOT6535 = 0;
    }
    else if ((SOV6504 == 1))
    {
        PMOT6535 = Motobomba(OnMOT6535, 827000, 0.35, CIPMOT6535, FallaMOT6535) * ValBol4;
        FMOT6535 = (0.0005/827000)*CIPMOT6535;//Motobomba(OnMOT6535, 0.0005, 0.35, CIFMOT6535, FallaMOT6535) * ValBol4;
    }
    else if ((SOV6516 == 1))
    {
        PMOT6535 = Motobomba(OnMOT6535, 827000, 0.35, CIPMOT6535, FallaMOT6535) * ValBol4;
        FMOT6535 = (0.0003166/82700)*CIPMOT6535;/*Motobomba(OnMOT6535, 0.0003166, 0.35, CIFMOT6535, FallaMOT6535) * ValBol4;*/
    }

////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////VIBRCIONES////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////AIRE DE INTRUMENTOS///////////////////////////////////////////////

	PotenciaCompresor=PotCompresor(OnOffCompresor,PotMaxCompresor,CIPotComp,TaoCompresor,FallaCompresor);
    FlujoCompresor=(0.0645/PotMaxCompresor)*CIPotComp;
    MasaCompresor=(PresionAmbiente*VolCompresor)/(R_Aire*TempAmbiente);
    TempAireCompresor=TempOutAire(CIPotComp,(FlujoCompresor*CpAire),TempAmbiente,(MasaCompresor*CvAire*TaoCompresor),CITempAireComp,FallaCompresor);
    TempAireTanque=CITempAireComp;
    PresionOutComp=((PresionAmbiente*(pow(((TempAireTanque)/(TempAmbiente)),(3.5*0.48))))/PotMaxCompresor)*CIPotComp;
    FlujoOutSecador=FlujoCompresor-(FlujoCompresor*HumedadEspecifica*EficienciaSecador)/(DensidadAgua*0.78);
    
    DensidadAire=(CIPresionTanque)/(R_Aire*CITempAireComp);

    if(Masa_Tanque<=0)
    {
        Masa_Tanque=0;
    }
    else if(Masa_Tanque>=9.63)
    {
        Masa_Tanque=9.636803339;
    }
    else
    {
        Masa_Tanque=MasaTanque(FlujoOutSecador,FlujoOutAire,CIDensidadAire,CIMasaTanque);

    }

    PresionTanque=(CIMasaTanque*R_Aire*TempAireTanque)/(VolumenTanque);

    if((PresionTanque-PresionAmbiente)>882.59)
    {
        OnOffCompresor=0;
    }


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////SISTEMA ELËCTRICO/////////////////////////////////////////////////

	CIPotElec=(TabCCM+TabChiller+TabCompAire+TabBCI);

    GeneradorUnidadP=GeneradorPot(OnOffGenerador,PotenciaGenerador,TaoGeneradorUnidad,CIGeneradorUnidadP,FGenerador);
    VFAGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFA,FGenerador);
    VFBGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFB,FGenerador);
    VFCGeneradorU=GeneradorVol(OnOffGenerador,VoltajeGenerador,TaoGeneradorUnidad,CIGeneradorUnidadVFC,FGenerador);

    if(VFAGeneradorU==0 || VFBGeneradorU==0 || VFCGeneradorU==0)
    {
        CFAGeneradorU=0;
        CFBGeneradorU=0;
        CFCGeneradorU=0;
    }
    else
    {
        CFAGeneradorU=sqrt((CIGeneradorUnidadP*I51G1)/(3*VFAGeneradorU));
        CFBGeneradorU=sqrt((CIGeneradorUnidadP*I51G1)/(3*VFBGeneradorU));
        CFCGeneradorU=sqrt((CIGeneradorUnidadP*I51G1)/(3*VFCGeneradorU));
    }


    PotMecanica=1800*CIContrIsoc*OnOffGeneradorAuxiliar;
    PotElectrica=GeneradorPot(OnOffGeneradorAuxiliar,CIPotElec,TaoGenAux,CIPGenAux,FGeneradorAux);
    GeneradorAuxiliar=GeneradorVol(OnOffGeneradorAuxiliar,VoltajeGeneradorAuxiliar,TaoGenAux,CIVGenAux,FGeneradorAux);


    if(PotElectrica==0)
    {
        CGeneradorAux=0;
    }
    else
    {
        if(CIVGenAux<1)
        {
            CGeneradorAux=0;
        }
        else
        {
            CGeneradorAux=sqrt((PotElectrica*I50ANG1)/CIVGenAux);
        }

    }


    Conexion1T21A=I51G1*I521T21A;
    Conexion2T21A=I51G1*I522T21A;
    Conexion1T20AuxG1=I51G1*I52AuxG1*I501AuxG1*I502AuxG1;
    Conexion2T20AuxG1=I50ANG1*I501AuxG1*I52AuxG1;
    Conexion1T00AuxG1=I51G1*I52AuxG1*I501AuxG1*I502AuxG1;
    Conexion2T00AuxG1=I50ANG1*I502AuxG1;


    VFAT21A=1.666666667*CIGeneradorUnidadVFA*I51G1;
    VFBT21A=1.666666667*CIGeneradorUnidadVFB*I51G1;
    VFCT21A=1.666666667*CIGeneradorUnidadVFC*I51G1;

    if(VFAT21A==0 || VFBT21A==0 || VFCT21A==0)
    {
       CFAT21A=0;
       CFBT21A=0;
       CFCT21A=0;
    }
    else
    {
        if(Conexion1T21A==1 || Conexion2T21A==1)
        {
            CFAT21A=sqrt((CIGeneradorUnidadP)/(3*VFAT21A));
            CFBT21A=sqrt((CIGeneradorUnidadP)/(3*VFBT21A));
            CFCT21A=sqrt((CIGeneradorUnidadP)/(3*VFCT21A));
        }
        else
        {
            CFAT21A=0;
            CFBT21A=0;
            CFCT21A=0;
        }
    }



    if(OnOffGenerador==1 && OnOffGeneradorAuxiliar==0)
    {
        VFAT20AuxG1=(0.178260869)*VFAT21A*I52AuxG1;

        if(VFAT20AuxG1==0)
        {
            CFAT20AuxG1=0;
        }
        else
        {
            CFAT20AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFAT20AuxG1));
        }

        VFBT20AuxG1=(0.178260869)*VFBT21A*I52AuxG1;

        if(VFBT20AuxG1==0)
        {
            CFBT20AuxG1=0;
        }
        else
        {
            CFBT20AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFBT20AuxG1));
        }

        VFCT20AuxG1=(0.178260869)*VFCT21A*I52AuxG1;

        if(VFCT20AuxG1==0)
        {
            CFCT20AuxG1=0;
        }
        else
        {
            CFCT20AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T20AuxG1)/(3*VFCT20AuxG1));
        }

    }
    else if(OnOffGeneradorAuxiliar==1 && OnOffGenerador==0)
    {
        VFAT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFAT20AuxG1==0)
        {
            CFAT20AuxG1=0;
        }
        else
        {
            CFAT20AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFAT20AuxG1));
        }

        VFBT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFBT20AuxG1==0)
        {
            CFBT20AuxG1=0;
        }
        else
        {
            CFBT20AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFBT20AuxG1));
        }

        VFCT20AuxG1=(5.609756098)*CIVGenAux*I501AuxG1*I50ANG1;

        if(VFCT20AuxG1==0)
        {
            CFCT20AuxG1=0;
        }
        else
        {
            CFCT20AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T20AuxG1)/(3*VFCT20AuxG1));
        }

    }
    else
    {
        VFAT20AuxG1=0;
        CFAT20AuxG1=0;
        VFBT20AuxG1=0;
        CFBT20AuxG1=0;
        VFCT20AuxG1=0;
        CFCT20AuxG1=0;
    }

    if(OnOffGenerador==1 && OnOffGeneradorAuxiliar==0)
    {
        VFAT00AuxG1=(0.11707317)*VFAT20AuxG1;

        if(VFAT00AuxG1==0)
        {
            CFAT00AuxG1=0;
        }
        else
        {
            CFAT00AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFAT00AuxG1));
        }

        VFBT00AuxG1=(0.11707317)*VFBT20AuxG1;

        if(VFBT00AuxG1==0)
        {
            CFBT00AuxG1=0;
        }
        else
        {
            CFBT00AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFBT00AuxG1));
        }

        VFCT00AuxG1=(0.11707317)*VFCT20AuxG1;

        if(VFCT00AuxG1==0)
        {
            CFCT00AuxG1=0;
        }
        else
        {
            CFCT00AuxG1=sqrt((CIGeneradorUnidadP*Conexion1T00AuxG1)/(3*VFCT00AuxG1));
        }

    }
    else if(OnOffGenerador==0 && OnOffGeneradorAuxiliar==1)
    {
        VFAT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFAT00AuxG1==0)
        {
            CFAT00AuxG1=0;
        }
        else
        {
            CFAT00AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFAT00AuxG1));
        }

        VFBT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFBT00AuxG1==0)
        {
            CFBT00AuxG1=0;
        }
        else
        {
            CFBT00AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFBT00AuxG1));
        }

        VFCT00AuxG1=(0.11707317)*CIVGenAux*I50ANG1*I502AuxG1;

        if(VFCT00AuxG1==0)
        {
            CFCT00AuxG1=0;
        }
        else
        {
            CFCT00AuxG1=sqrt(((CIPotElec*1000000)*Conexion2T00AuxG1)/(3*VFCT00AuxG1));
        }

    }
    else
    {
        VFAT00AuxG1=0;
        CFAT00AuxG1=0;
        VFBT00AuxG1=0;
        CFBT00AuxG1=0;
        VFCT00AuxG1=0;
        CFCT00AuxG1=0;
    }


    C92BT221A=PosicionCuchilla(OnOffC92BT221A,1,TaoCuchillas,CIC92BT221A,FC92BT221A);

    if(CIC92BT221A>0.99)
    {
        C92BT221A=1;
    }

    C92BAT21A=PosicionCuchilla(OnOffC92BAT21A,1,TaoCuchillas,CIC92BAT21A,FC92BAT21A);

    if(CIC92BAT21A>0.99)
    {
        C92BAT21A=1;
    }

    C92BT221C=PosicionCuchilla(OnOffC92BT221C,1,TaoCuchillas,CIC92BT221C,FC92BT221C);

    if(CIC92BT221C>0.99)
    {
        C92BT221C=1;
    }

    C92BCT21A=PosicionCuchilla(OnOffC92BCT21A,1,TaoCuchillas,CIC92BCT21A,FC92BCT21A);

    if(CIC92BCT21A>0.99)
    {
        C92BCT21A=1;
    }

    C90MC=PosicionCuchilla(OnOffC90MC,1,TaoCuchillas,CIC90MC,FC90MC);

    if(CIC90MC>0.99)
    {
        C90MC=1;
    }


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN TURBINA///////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN GENERADOR/////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////


//Región para reiniciar todas las condiciones iniciales de los modelos.

/////////////////CHILLER//////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

///////////////////LAVADO DE COMPRESOR//////////////////////////////////////////////////////////

	CIPMOT6535 = PMOT6535;
    CIFMOT6535 = FMOT6535;
    PI6538 = CIPMOT6535;
    CINivelTank = NivelTank;

////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////VIBRCIONES////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////AIRE DE INTRUMENTOS///////////////////////////////////////////////

	CIPotComp=PotenciaCompresor;
    CITempAireComp=TempAireCompresor;
    CIDensidadAire=DensidadAire;
    CIMasaTanque=Masa_Tanque;
    CIPresionTanque=PresionTanque;

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////SISTEMA ELËCTRICO/////////////////////////////////////////////////

	CIGeneradorUnidadP=GeneradorUnidadP;
    CIGeneradorUnidadVFA=VFAGeneradorU;
    CIGeneradorUnidadVFB=VFBGeneradorU;
    CIGeneradorUnidadVFC=VFCGeneradorU;
    CIVGenAux=GeneradorAuxiliar;
    CIPGenAux=PotElectrica;
    CIC92BT221A=C92BT221A;
    CIC92BAT21A=C92BAT21A;
    CIC92BT221C=C92BT221C;
    CIC92BCT21A=C92BCT21A;
    CIC90MC=C90MC;

//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN TURBINA///////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN GENERADOR/////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////


if (pars==1){
int p=5/((int)sqrt(1.0f)-1);
}
return 1;

}
