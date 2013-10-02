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
initmmf("APP 01",instance);

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
MYID("LOADED ON SITE DEBUGGER IN APP_0 ");
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

//Aquí se declaran todas las variables del programa.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////
	double FlujoInTanque=0;
    double FlujoOutTanque=0;
    double LargoTanque=0.78;
    double AnchoTanque=0.4;
    double CINivelTanque=0.4853;
    double TempAceiteTank=308.15;
    double WElec=0;
    double UTanque=0.05;
    double TempAmbiente=298.15;
    double CpAceite=1.98;
    double MasaAceite=0.0;
    double CITempAceiteTanque=308.15;
    double UInter=0.0;
    double MasaAceiteInter=0.0;
    double CITempAceiteInter=298.15;
    double PotMaxVentilador=2237.103;
    double TaoVentilador=0.05;
    double CIPotVentilador=0.0;
    double PotMaxBomba=149140.2;
    double TaoBomba=1.0;
    double CIPotBomba=0.0;
    double VelocidadArranHidra=0.0;
    double VelocidadMaxAH=104.7197551;
    double TaoAH=2.0;
    double CIVelArranHidra=0.0;
    double TempMetalAH=298.15;
    double hMetal=250;
    double Mmetal=150;
    double CpMetal=0.47625;
    double ViscosidadAceite=0.00001408;
    double eLub=0.00000043;
    double AContac=0.03;
    double Diametro=0.3;
    double CITempMetalAH=298.15;
    double TempAceiteAH=298.15;
    double MAceiteAH=2.8870072;
    double CITempAceiteAH=298.15;
    double Integral=0.0;
    double CIInt=0.0;
    double Proporional=0.0;
    double IntPro=0.0;
    double errorPI=0.0;
    double Sat=0.0;
    double Variador=1.0;
    double CPI=0.0;
    double LInf=0.0;
    double LSup=200.0;
    double SetPoint=308.15;
    double ki=0.5;
    double kp=10.0;

    double Nivel_Tanque=0.4853;
    double PotenciaBomba=0.0;
    double PotenciaVentilador=0.0;
    double PresionBombS=0.0;
    double FlujoBombS=0.0;
    double PresionBombP=0.0;
    double FlujoBombP=0.0;
    double TempAceiteIntercambiador=0.0;
    double TempAceiteInTank=0.0;
    double FlujoOutInter=0.0;
    double VelocidadVentilador=0.0;
    double Proporcional=0.0;
    double TorqueAH=0.0;
    double Tiempo=0.0;
    double DensidadAceite=880.0;

	double Patm=101300;

    int FallaVent=1;
    int FallaBomb=1;
    int OnOffVentilador=0;
    int OnOffBomba=0;
    int OnOffCalentador=0;

////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////CONTROL///////////////////////////////////////////

	int FALSE_CLUTCH_Y;//IF CLUTCH TUNE TRUE
int CORE_DIGITAL_FUELON;
int SFC_STEP_RST_AND_ST;//SHUTDOWN RESTART
int OUT_RESTRTMASK;
int SFC_STEP_AUXFAN_DLY;//UNIT RUNNING 
int OUT_CLRPMPOR;
int SPEED_SW_COASTDOWN;//ZERO SPEED INPUT 
int HYD_STRT_NOT_PMPON;
int OUT_CLUTCHOFF;
int FALSE_SEL_OFF;//SELECT SYSTEM OFF
int OUT_MASK_ON;
int LATCH_DE1364LAT;
int ALARM_RESET;
int HYD_STRT_LSLL1601SD;
int FALSE_PROB_LAT;
int LATCH1_PROB_LAT;
int OUT_PMP_OFF;
int HYD_STRT_DE1364A;//SALIDA HYDR STAR CLUTCH LUBE/COOLER PUMP-START-STOP SALIDA A PLC
int HYD_STRT_TRIPPED;
int SFC_STEP_CRNKTMRDN;//COOLDOWN CRANK TIMER DONE
int SPEED_SW_N25GT4600;
int SHUTDOWN_FOURHRLOK;//FOUR HOUR LOCK OUT
int SHUTDOWN_SDN_CORE;//SHUTDOWN NO MOTOR INPUT (ESN)
int SFC_STEP_CRANKSTOP;//CRANK ABORT 
int SFC_STEP_ES_1;//STOP MOTOR BEFORE MOTOR 
int SFC_STEP_WWCRANK_11;
int OUT_KILL_PUMP;
int HYD_STRT_CNK_SEQPRM;//SALIDA (INTLK) STOP ANY CRANK STARTER NOT READY 
int LATCH_STRT_LATCH;
int TRUE_MASK_PMP;
int OUT_MASK_PMP;
int OUT_OUT_AND_STRT_MASK_PMP[5];
double TP_out_AND_STRT_MASK_PMP=10;
int Nout_AND_STRT_MASK_PMP;
int Nout_out_AND_STRT_MASK_PMP;
int out_SFC_STEP_AUXFAN_DLY[5];
double TP_SFC_STEP_AUXFAN_DLY=10;
int HYD_STRT_DLY_SD;
int out_HYD_STRT_DLY_SD[5];
double TP_HYD_STRT_DLY_SD=10;
int HYD_STRT_MOT1615;
int out_HYD_STRT_MOT1615[5];//"HYDRAULIC STARTER PUMP" SALIDA A PLC
double TP_HYD_STRT_MOT1615=12;
//SHEET 221

int CORE_DIGITAL_RESET;
int HYD_STRT_PSLL1605SD;
int HYD_STRT_PDSH1600SD;
int LATCH1_TRIPPED;
int HYD_STRT_NOTSTART;
int OUT_ST_A_OFFOR;
int SFC_STEP_STRTR_SPD;
double NC_OFFSPDSEL;
double NO_OFFSPDSEL;
double OUT_OFFSPDSEL;
int SFC_STEP_LO_SPD_OR;
int HYD_STRT_PUMPONDLY;
int OUT_MASK_1;
int SFC_STEP_HI_SPD_OR;
int OUT_MASK_2;
int FUEL_SYS_GAS100;
double NC_CSTSPD_SW;
double NO_CSTSPD_SW;
double OUT_CSTSPD_SW;
int SFC_STEP_HIEST_SEL;
int OUT_MASK_3;
double CORE_ANALOG_N25SEL;
int TRUE_LIQ_GAS_2;
double NO_LIQ_GAS_2;
double NC_LIQ_GAS_2;
double OUT_LIQ_GAS_2;
int OUT_N25COMP1;
int OUT_N25COMP2;
int HYD_STRT_MOV_UP_Z;
int LT_N25COMP1;
int GT_N25COMP1;
int LT_N25COMP2;
int GT_N25COMP2;
int OUT_RATE_SEL1;
int OUT_RATE_SEL2;
int OUT_RATE_SEL3;
int HYD_STRT_MASK1;
int HYD_STRT_MASK3;
int OUT_FAIL_OR;
int SPEED_SW_N25LT1200;
int SPEED_SW_N25LT1700;
int OUT_FLSPD_SW;
int HYD_STRT_STRT_LATCH;
int A1_A04_MPU_N25_MAX;
int OUT_N25LT200;
int FALSE_N25LO_MASK;
int OUT_N25LO_MASK;
int OUT_N25LT_DEL;
int SHUTDOWN_SD_RESET;
int OUT_FAILTOACC;
int FL_DEL_TMR;//
int out_FL_DEL_TMR[5];
double TP_FL_DEL_TMR=20;
int CRANK_TMR;
int out_CRANK_TMR[5];
double TP_CRANK_TMR=30;
int HYD_STRT_STRT_FAIL1;//N25 LT 1200 20 SEC
//SHEET 222
int N1N34_BI_LSLL1601;//"START SKID HYD RESERVOIR OIL LEVEL LO" ENTRADA PLC Y SALIDA
int N3N41_BI_HYD_ST_AUX;//"START SKID MOTOR STARTER AUX CONTACT" ENTRADA PLC
int N1N34_BI_TSH1602;//"START SKID HYD RESERVOIR OIL TEMP HI" ENTRADA PLC mayor 180°f
int N1N34_BI_TSH1603;//"START SKID HYD RESERVOIR OIL TEMP LO" ENTRADA PLC
int N1N34_BI_PDSHH1600;//"START SKID HYD PUMP VACUUM DELTA P HI" ENTRADA PLC
int N1N34_BI_PSLL1605;//"START SKID HYUD PUMP PRESSURE LO" ENTRADA PLC
int SFC_STEP_START_INIT;
int SFC_STEP_CRANKING;
int HYD_STRT_LSLL1601AL;//START SKID HYD RESERVOIR OIL LEVEL LO
int HYD_STRT_AUXCNTFLT;//START SKID MOTOR STARTER AUX CONTACT ALM
int HYD_STRT_AUXCONTDLY;
int out_HYD_STRT_AUXCONTDLY[5];
double TP_HYD_STRT_AUXCONTDLY=5;
int HYD_STRT_PDSHH1600D;
int out_HYD_STRT_PDSHH1600D[5];
double TP_HYD_STRT_PDSHH1600D=5;
int HYD_STRT_MOT1615DLY;
int out_HYD_STRT_MOT1615DLY[5];
double TP_HYD_STRT_MOT1615DLY=13;
int HYD_STRT_STRTORCRNK;

////////////////////////////////////////////////////////////////////////////

//Aqui se declaran todas las funciones del programa.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////

double NivelTanque(double FlujoIn, double FlujoOut, double Largo, double Ancho, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(FlujoIn-FlujoOut)/(Largo*Ancho);
        k2=((FlujoIn-FlujoOut)+((h/2)*k1))/(Largo*Ancho);
        k3=((FlujoIn-FlujoOut)+((h/2)*k2))/(Largo*Ancho);
        k4=((FlujoIn-FlujoOut)+(h*k3))/(Largo*Ancho);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double TempAceiteTanque(double WElec, double UTank, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(WElec+((UTank*1.2508)*(TempAmbiente-x[j-1]))+(FICp*TempInAceite)-(FOCp*x[j-1]))/(MCv);
        k2=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h/2)*k1))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k1))))/(MCv);
        k3=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h/2)*k2))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*k2))))/(MCv);
        k4=(WElec+((UTank*1.2508)*(TempAmbiente-(x[j-1]+((h)*k3))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h)*k3))))/(MCv);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double TempAceiteInter(double UInter, double TempAmbiente, double FICp, double TempInAceite, double FOCp, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((UInter*0.797964534)*(TempAmbiente-x[j-1]))+(FICp*TempInAceite)-(FOCp*x[j-1]))/MCv;
        k2=(((UInter*0.797964534)*(TempAmbiente-(x[j-1]+((h/2)*(k1)))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*(k1)))))/MCv;
        k3=(((UInter*0.797964534)*(TempAmbiente-(x[j-1]+((h/2)*(k2)))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h/2)*(k2)))))/MCv;
        k4=(((UInter*0.797964534)*(TempAmbiente-(x[j-1]+((h)*(k3)))))+(FICp*TempInAceite)-(FOCp*(x[j-1]+((h)*(k3)))))/MCv;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double PotVentilador(int Segnal, double PotMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((PotMax*Segnal*Falla)-x[j-1])/(Tao);
        k2=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k1)))/(Tao);
        k3=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k2)))/(Tao);
        k4=((PotMax*Segnal*Falla)-(x[j-1]+((h)*k3)))/(Tao);

        x[j]=x[j-1]+((h/6)*(k1+(k2)+(k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double PotBomba(int Segnal, double PotMax, double Tao, double CI, int Falla)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=((PotMax*Segnal*Falla)-x[j-1])/(Tao);
        k2=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k1)))/(Tao);
        k3=((PotMax*Segnal*Falla)-(x[j-1]+((h/2)*k2)))/(Tao);
        k4=((PotMax*Segnal*Falla)-(x[j-1]+((h)*k3)))/(Tao);

        x[j]=x[j-1]+((h/6)*(k1+(k2)+(k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double VelArranHidra(double VelMax, double Tao, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(VelMax-x[j-1])/Tao;
        k2=(VelMax-(x[j-1]+((h/2)*k1)))/Tao;
        k3=(VelMax-(x[j-1]+((h/2)*k2)))/Tao;
        k4=(VelMax-(x[j-1]+((h)*k3)))/Tao;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];

    if(x[0]<0.00001)
    {
        x[0]=0;
    }

    return x[0];
}

double TempMetalArranHidra(double hMetal, double TempInAceite, double Velocidad, double MmetalCp, double Vis, double eLub, double Diam, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(((hMetal*0.03)*(TempInAceite-x[j-1]))+(((Vis*0.03)/(2*eLub))*((Diam*3.141516*Velocidad)*(Diam*3.141516*Velocidad))))/MmetalCp;
        k2=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h/2)*(k1)))))+(((Vis*0.03)/(2*eLub))*((Diam*3.141516*Velocidad)*(Diam*3.141516*Velocidad))))/MmetalCp;
        k3=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h/2)*(k2)))))+(((Vis*0.03)/(2*eLub))*((Diam*3.141516*Velocidad)*(Diam*3.141516*Velocidad))))/MmetalCp;
        k4=(((hMetal*0.03)*(TempInAceite-(x[j-1]+((h)*(k3)))))+(((Vis*0.03)/(2*eLub))*((Diam*3.141516*Velocidad)*(Diam*3.141516*Velocidad))))/MmetalCp;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double TempAceiteArranHidra(double hMetal, double TempInMetal, double F, double Cp, double DenAce, double TempInAceite, double MCv, double CI)
{
    int j;
    double h=0.05/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<25;j++)
    {
        k1=(((hMetal*0.03)*(TempInMetal-x[j-1]))+((F*DenAce*Cp)*(TempInAceite-x[j-1])))/MCv;
        k2=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h/2)*(k1)))))+((F*DenAce*Cp)*(TempInAceite-(x[j-1]+((h/2)*(k1))))))/MCv;
        k3=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h/2)*(k2)))))+((F*DenAce*Cp)*(TempInAceite-(x[j-1]+((h/2)*(k2))))))/MCv;
        k4=(((hMetal*0.03)*(TempInMetal-(x[j-1]+((h)*(k3)))))+((F*DenAce*Cp)*(TempInAceite-(x[j-1]+((h)*(k3))))))/MCv;

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double I(double ki, double error, double CI)
{
    int j;
    double h=0.01/25;
    double x[26];
    double k1,k2,k3,k4;

    x[0]=CI;

    for(j=1;j<=25;j++)
    {
        k1=(ki*error);
        k2=(ki*error)+((h/2*k1));
        k3=(ki*error)+((h/2)*k2);
        k4=(ki*error)+(h*k3);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }

    x[0]=x[j-1];
    return x[0];
}

double P(double kp, double error)
{
    double Prop;

    Prop=kp*error;

    return Prop;
}

double PI(double P, double I)
{
    double pi;

    pi=P+I;

    return pi;
}

double ErrorPI(double SPT, double TempAceite)
{
    double errorpi;

    errorpi=SPT-TempAceite;

    return errorpi;
}

double Saturacion(double Segnal, double LInf, double LSup)
{
    double Sat;

    if(Segnal<LInf)
    {
        Sat=LInf;
    }
    else if(Segnal>LSup)
    {
        Sat=LSup;
    }
    else
    {
        Sat=Segnal;
    }

    return Sat;
}

////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

	


//funcion de entrada de ejecucion  
 int main0(int pars) 
{ 
//ejemplo de ejecucion...genera la raiz cuadrada

//SetFloat(sqrt((float)i),i);

//Región para llamar todas las funciones de los programas.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////

	errorPI=(SetPoint-CITempAceiteTanque)*OnOffCalentador;
    Integral=I(ki,errorPI,CIInt);
    Proporcional=P(kp,errorPI);
    CPI=PI(Proporcional,Integral);
    Sat=Saturacion(CPI,LInf,LSup);
    WElec=Sat;
    //qDebug()<<errorPI<<CIInt<<SetPoint<<CITempAceiteTanque;
    //if(OnOffBomba==1)
    //{
        FlujoInTanque=(0.045424/0.0454249)*FlujoBombS;
    //}
    //else
    //{
      //  FlujoInTanque=0;
    //}

    /*if(CITempAceiteAH<322.15)
    {
        FlujoOutInter=0;
        TempAceiteInTank=CITempAceiteAH;
    }
    else
    {
        FlujoOutInter=FlujoBombP-0.000001892;
        TempAceiteInTank=CITempAceiteInter;
    }*/
/////////////////////////////Tanque/////////////////////////////////////////////////////
	if((PresionBombS-Patm)>21998.190789)
	{
		N1N34_BI_PDSHH1600=0;
	}
	else
	{
		N1N34_BI_PDSHH1600=1;
	}
    PotenciaBomba=PotBomba(out_HYD_STRT_MOT1615[1],PotMaxBomba,TaoBomba,CIPotBomba,FallaBomb)*N1N34_BI_PDSHH1600;
    PresionBombS=(2413165.052609/PotMaxBomba)*CIPotBomba;
	if(FlujoBombS>0.03 && PresionBombS<1723689.323292)
	{
		N1N34_BI_PSLL1605=1;
	}
	else
	{
		N1N34_BI_PSLL1605=0;
	}
    FlujoBombS=(0.0454249/PotMaxBomba)*CIPotBomba;
    PresionBombP=(((33439572.871867+PresionBombS)/PotMaxBomba)*CIPotBomba)*Variador;
    FlujoBombP=((0.0454249/PotMaxBomba)*CIPotBomba)*Variador;
    FlujoOutTanque=FlujoBombS;
    Nivel_Tanque=NivelTanque(FlujoInTanque,FlujoOutTanque,LargoTanque,AnchoTanque,CINivelTanque);
	if(CINivelTanque<0.1524)
	{
		N1N34_BI_LSLL1601=1;
	}
	else
	{
		N1N34_BI_LSLL1601=0;
	}
    MasaAceite=(CINivelTanque*LargoTanque*AnchoTanque)*DensidadAceite;
    TempAceiteTank=TempAceiteTanque(WElec,UTanque,TempAmbiente,(FlujoInTanque*CpAceite),CITempAceiteAH,(FlujoOutTanque*CpAceite),(MasaAceite*CpAceite),CITempAceiteTanque);
	if(CITempAceiteTanque<21.11111)
	{
		N1N34_BI_TSH1603=1;
	}
	else
	{
		N1N34_BI_TSH1603=0;
	}
///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////Intercambiador////////////////////////////////////////////////
    PotenciaVentilador=PotVentilador(OnOffVentilador,PotMaxVentilador,TaoVentilador,CIPotVentilador,FallaVent);
    VelocidadVentilador=(1800/PotMaxVentilador)*CIPotVentilador;
    UInter=(25.0/1800.0)*VelocidadVentilador;
    //qDebug()<<UInter<<VelocidadVentilador;
    if(CITempAceiteAH<322.15 && OnOffVentilador==0)
    {
        TempAceiteIntercambiador=0;
        CITempAceiteInter=0;
    }
    else
    {
        CITempAceiteInter=CITempAceiteAH;
        MasaAceiteInter=MAceiteAH;
///////***********************PROBLEMAS EN EL INTERCAMBIADOR!!!***************************************///////////////
        TempAceiteIntercambiador=TempAceiteInter(UInter,TempAmbiente,(0.333116666*CpAceite),371.6,(0.333116666*CpAceite),(0.333116666*CpAceite),CITempAceiteInter);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //qDebug()<<UInter<<TempAmbiente<<(0.333116666*CpAceite)<<CpAceite<<CITempAceiteAH<<(0.333116666*CpAceite)<<CpAceite<<MasaAceiteInter<<CpAceite<<CITempAceiteInter;

    }
///////////////////////////////////////////////////////////////////////////////////////////
    VelocidadArranHidra=(VelArranHidra(VelocidadMaxAH,TaoAH,CIVelArranHidra)/(33439572.871867+PresionBombS))*PresionBombP;
    TorqueAH=(4000*VelocidadArranHidra);

    if(OnOffBomba==0)
    {
        CITempMetalAH=298.15;
        CITempAceiteAH=0;
        TempAceiteAH=0;
    }
    else
    {
        TempMetalAH=TempMetalArranHidra(hMetal,CITempAceiteTanque,VelocidadArranHidra,(Mmetal*CpMetal),ViscosidadAceite,eLub,Diametro,CITempMetalAH);
        TempAceiteAH=TempAceiteArranHidra(hMetal,CITempMetalAH,FlujoBombP,CpAceite,DensidadAceite,TempAceiteTank,(MAceiteAH*CpAceite),CITempAceiteAH);
		if(CITempAceiteTanque>82.2222)
		{
			N1N34_BI_TSH1602=1;
		}
		else
		{
			N1N34_BI_TSH1602=0;
		}
    }

    if(OnOffCalentador==0)
    {
        CIInt=0;
    }
    else
    {
        CIInt=Integral;
    }

////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//Región para reiniciar todas las condiciones inciales de los modelos.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////
	CIPotBomba=PotenciaBomba;
    CINivelTanque=Nivel_Tanque;
    CITempAceiteTanque=TempAceiteTank;
    CIPotVentilador=PotenciaVentilador;
    CITempAceiteInter=TempAceiteIntercambiador;
    CIVelArranHidra=VelocidadArranHidra;
    CITempMetalAH=TempMetalAH;
    CITempAceiteAH=TempAceiteAH;

////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////


if (pars==1){
int p=5/((int)sqrt(1.0f)-1);
}
return 1;

}
