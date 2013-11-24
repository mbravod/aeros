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

void CARGA_VARIABLES();


FILE *arc = NULL;

FILE *arc1 = NULL;
FILE *arc2 = NULL;
FILE *arc3 = NULL;
FILE *arc4 = NULL;
FILE *arc5 = NULL;
FILE *arc6 = NULL;
FILE *arc7 = NULL;
FILE *arc8 = NULL;
FILE *arc9 = NULL;
FILE *arc10 = NULL;
FILE *arc11 = NULL;
FILE *arc12 = NULL;
FILE *arc13 = NULL;
FILE *arc14 = NULL;
FILE *arc15 = NULL;
FILE *arc16 = NULL;
FILE *arc17 = NULL;
FILE *arc18 = NULL;
FILE *arc19 = NULL;
FILE *arc20 = NULL;
FILE *arc21 = NULL;
FILE *arc22 = NULL;
FILE *arc23 = NULL;
FILE *arc24 = NULL;
FILE *arc25 = NULL;
FILE *arc26 = NULL;
FILE *arc27 = NULL;
FILE *arc28 = NULL;
FILE *arc29 = NULL;



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

CARGA_VARIABLES();
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
	double FlujoInTanque_AH=0;
    double FlujoOutTanque_AH=0;
    double LargoTanque_AH=0.78;
    double AnchoTanque_AH=0.4;
    double CINivelTanque_AH=0.4853;
    double TempAceiteTank_AH=308.15;
    double WElec_AH=0;
    double UTanque_AH=0.05;
    double TempAmbiente=298.15;
    double CpAceite_AH=1.98;
    double MasaAceite_AH=0.0;
    double CITempAceiteTanque_AH=308.15;
    double UInter_AH=0.0;
    double MasaAceiteInter_AH=0.0;
    double CITempAceiteInter_AH=298.15;
    double PotMaxVentilador_AH=2237.103;
    double TaoVentilador_AH=0.05;
    double CIPotVentilador_AH=0.0;
    double PotMaxBomba_AH=149140.2;
    double TaoBomba_AH=1.0;
    double CIPotBomba_AH=0.0;
    double VelocidadArranHidra=0.0;
    double VelocidadMaxAH=104.7197551;
    double TaoAH=2.0;
    double CIVelArranHidra=0.0;
    double TempMetalAH=298.15;
    double hMetal_AH=250;
    double Mmetal_AH=150;
    double CpMetal_AH=0.47625;
    double ViscosidadAceite_AH=0.00001408;
    double eLub_AH=0.00000043;
    double AContac_AH=0.03;
    double Diametro_AH=0.3;
    double CITempMetalAH=298.15;
    double TempAceiteAH=298.15;
    double MAceiteAH=2.8870072;
    double CITempAceiteAH=298.15;
    double Integral_AH=0.0;
    double CIInt_AH=0.0;
    double Proporional_AH=0.0;
    double IntPro_AH=0.0;
    double errorPI_AH=0.0;
    double Sat_AH=0.0;
    double Variador_AH=1.0;
    double CPI_AH=0.0;
    double LInf_AH=0.0;
    double LSup_AH=200.0;
    double SetPoint_AH=308.15;
    double ki_AH=0.5;
    double kp_AH=10.0;

    double Nivel_Tanque_AH=0.4853;
    double PotenciaBomba_AH=0.0;
    double PotenciaVentilador_AH=0.0;
    double PresionBombS_AH=0.0;
    double FlujoBombS_AH=0.0;
    double PresionBombP_AH=0.0;
    double FlujoBombP_AH=0.0;
    double TempAceiteIntercambiador_AH=0.0;
    double TempAceiteInTank_AH=0.0;
    double FlujoOutInter_AH=0.0;
    double VelocidadVentilador_AH=0.0;
    double Proporcional_AH=0.0;
    double TorqueAH=0.0;
    //double Tiempo=0.0;
    double DensidadAceite_AH=880.0;

	double Patm=101300;

    int FallaVent_AH=1;
    int FallaBomb_AH=1;
    int OnOffVentilador_AH=0;
    int OnOffBomba_AH=0;
    int OnOffCalentador_AH=0;

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

//*****************************EL ULISES ES PUÑAL Y LE GUSTA POR ATRAS*************************************//
// Declaración de Variables Globales
// Parámetros del los fluidos de trabajo

int counterTata;//Gracias tata
double Cp_agua;                       // Calor específico del agua
double VolEsp_agua;                   // volumen específico del agua							//NO SE USA EN NINGUN LADO CHECAR TATA
double Densidad_agua;                 // densidad del agua
//double Tiempo;                        // Tiempo
double Cv_aire;                       // Calor epecifico del aire
double Cp_aire;                       // Calor especifico del aire
double TambK;                         // Temperatura ambiente K
double TambC;                         // Temperatura ambiente °C								//NO SE USA EN NINGON LADO CHECAR TATA 
double TambF;                         // Temperatura ambiente °F
double Viscosidad_Aire;               // Viscosidad del aire
double R_aire;                        // constante del aire
double Presion_atm;                   // presion atmosferica
double Densidad_aire;                 // densidad del aire


// Parámetros filtors de aire de entrada


double Tem_in_64031K;                     // Temperatura de entrada de aire de ventilación K
double Tem_in_64031F;                     // °F SENSOR O PANTALLA 
double Tem_in_64031C;                     // °C SENSOR O PANTALLA

double Tem_in_64030K;                     // K SENSOR O PANTALLA
double Tem_in_64030F;                     // °F SENSOR O PANTALLA
double Tem_in_64030C;                     // °C SENSOR O PANTALLA

double Tem_in_64033K;                     // K
double Tem_in_64033F;                     // °F
double Tem_in_64033C;                     // °C

double Tem_in_64032K;                     // K
double Tem_in_64032F;                     // °F
double Tem_in_64032C;                     // °C

double AreafilA;                          //  m
double AreafilB;                          //  m
double AreafilC;                          //  m							EL LUNGAR DONDE SE OCUPA SE ENCUENTRA COMENTADO ASI QUE NO SE USA CHECAR 
double Permeabilidad;                     // m2
double Longitud_filtro;                   // m
double PDSH6405;                          // kPa
double PDSH64060;                         //kPa
double PDSH64060_mmH2O;                   // mm H2O
double PDSH64060_inH2O;                   // in H2O
double PDSH64018;                         // kPa
double TaoHexCarcasa;

// Parámetros de las bombas de agua

double WBombaA;                       // Potencia de la bomba de agua P-100A
double PI_A;                          // Presión de entrada a la bomba P-100A
double CI_PA;                         // Condiciones iniciales de presión de la bomba P-100A			NO SE USA EN NINGUN LUGAR DEL PROGRAMA 
double PresionFinalBomba;             // Diferencia de presion en la bomba P-100A.
double Flujo_in_agua;                      // Flujo másico de agua la entrada
double VolumenBomba;                  // Volumen de la bomba P-100A									NO SE USA EN NINGUN LUGAR DEL PROGRAMA
double Vel_maxBombaA;                 // Velocidad máxima de la bomba de agua P-100A
double Vel_BombaA;                    // Velocidad de la bomba
double VelI_A;                        // Velocidad inicial de la bomba P-100A
double CI_VelA;                       // Condiciones iniciales de la velocidad de bomba P-100A
double Tao_bombaA;                    // Constante de respuesta de la bomba P-100A
double ParInducidoMotorBomba;         // Par inducido en el motor del ventilador.

// Parámetros calentador

double AreaCal;                  // Area de intercambio de calor del Calentador
double UCal;                     // Coeficiente global de trasferencia de calor del calentador
double Temperatura_final_Cal;    // Temperatura de salida del calentador
double MasaCal;                  // Masa de agua en el calentador
double CICale;                    // Condicion inicial en el calentador
double TemperaturaInicial;       // temperatura inicial
double Potencia_resistenciaMax;     // Potencia de la resistencia maxima
double Potencia_resistencia;
double CIRes;
double TaoRes;


// parametro evaporador

double AreaEvap;                  // Area de intercambio de calor del evaporador
double UEvap;                     // Coeficiente global de trasferencia de calor del evaporador
double Temperatura_final_Evap;    // Temperatura a la salida del evaporador
double MasaEvap;                  // Masa en el evaporador
double CIEvap;                    // Condiciones iniciales en el evaporador
double Tempera_Inicial_Evap;      // temperatura inicial en el evaporador
double Potencia_frigorifica_Max;  // Potencia frigorifica
double CI_Potencia_frigorifica;
double Tao_Potencia_frigorifica;
double Potencia_frigorifica;

// parametros del intercambiador de calor sección agua


double TinHexAgua;

// parametros del intercambiador de calor seccion aire


double Tem_fin_6450;    // Temperatura de salida del aire en el HEX, K.
// double Tem_fin_6450p;
double Tem_fin_6450_F;  // Temperatura de salida del aire en el HEX, °F.
double Tem_fin_6499;    // Temperatura de salida del aire en el HEX, K.
double Tem_fin_6499_F;  // Temperatura de salida del aire en el HEX, °F.
double Tem_fin_64072;   // Temperatura de salida del aire en el HEX, K.
double CIAireVentA;
double Tem_fin_6402;
double Tem_fin_6402_F;
double CITem6402;
double Tem_fin_64071;
double CIAireVentB;
double Tem_fin_64072_F;  // Temperatura de salida del aire en el HEX, °F
double Tem_fin_64071_F;  // Temperatura de salida del aire en el HEX, °F.
double MasaHEXAire;      // Masa del aire en el intercambiador
double Flujo_Aire_inTur; // Flujo másio de aire a la entrada del HEX
double Flujo_Aire_inGen; // kg/s  1699 m3/min  con densidad de 1.059 kg/m3
double CIAireA;                    // Condiciones de entrada del aire
double CIAireB;                    // Condiciones de entrada del aire


// Parametros de la cabina de turbina

double Pow_Res_Electrica;          // Potencia electrica de la cabina de turbina
double TgasesTurbina;              // Temperatura de los gases en turbina
double Vel_in_Aire;                // Velocidad de aire a la entrada
double Vel_out_Aire;               // Velocidad de aire a la salida
double Uturbina;                    // m/s
double Aturbina;                    // m2
double MasaTurbina;
double Temperatura_aire_turbina;
double CIAire_Turbina;
double CIMasaTurbina;
double VolCuartoTurb;
double Dif_PI_VentiTur_mmH2O;
double Dif_PI_VentiTur_inH2O;

// Parametros de ventiladores

double WVenti;                        // Potencia del ventilador
double CI_PI_Venti;                      // Presión de entrada del ventilador
double Dif_PI_VentiTur;
double CI_VentiVel;                      // Condiciones iniciales de presión del ventilador

double PresionFinalVenti;             // Diferencia de presion en el ventilador.
double Tao_Ventilador;                // Constante de respuesta del ventilador.
double ParInducidoMotorVentilador;    // Par inducido en el motor del ventilador.
double VelMaxVenti;
double VelFinalVenti;
double RadioMedio;                    // radio medio del ventilador.
double Angulos;                       // suma de angulos del triangulo de velocidad.
double VelAireIn;                     // velocidad  del aire a la salida y entrada del ventilador.
double Area_Ventilador;               // area efectiva del flujo de aire





//-------------------------------------------------------------------
// Variables localizadas
//-------------------------------------------------------------------
double WVentiGen;						// Potencia del generador
double Dif_PI_VentiGen;					//difenecia de presion en el ventilador del generador
double ParInducidoMotorVentiGen;			//par inducido en el motor del ventilador del generador
double RadioMedioGen;					//radio medio del ventilador del generador
double AngulosGen;						//suma de angulos del triángulo de velocidad del generador
double Area_VentiladorGen;				//area efectiva del flujo de aire del generador
double FMaire;							//Flujo masico de aire en el generador
double Flujo_Aire_inTur_B;				//flujo de aire de entrada a la turbina de baja

// Verificar tipo
double CI_VentiVelGen;					//condiciones iniciales de la veocidad del ventilador del generador
double PresionFinalVentiGen;				//presion final del ventilador del generador
double Tao_VentiGen;						//constante tao del ventilador del generador
double VelAireInGen;						//velocidad de aire a la entrada del generador
double VelMaxVentiGen;					//velocidad maxima del ventilador en el generador
double VelFinalVentiGen;					//velocidad final del ventilador en el generador 
double PDSL6407;							//


//Sospecho que estas son enteras
int OnOffBombaChiller;							
int FallaVentilador;
int AutomaticoVent;
int ManualVent;
int onoffVentTurb;
int StartManualVent;
int StopManualVent;
int FallaVentiGen;
int AutomaticoVentGen;
int ManualVentGen;
int onoffVentGen;
int StartManualVentGen;
int StopManualVentGen;
int Calentamiento;
int Enfriamiento;


//-------------------------------------------------------------------
// Verificar tipo e inicialización
//-------------------------------------------------------------------
double A52_1;            //INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
double A52_2;			//INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
double AREA_1_CB_IGV;	// ÁREA DE IGV DEL COMPRESOR DE BAJA
double AREA_FMENF_CA;	// ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE ALTA
double AREA_FMENF_CB;	// ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE BAJA
double AREA_FMOUT_CA;	// ÁREA DE FLUJO MASICO DE SALIDA  ENFRIAMIENTO COMPRESOR DE ALTA
double CDPA;				// VÁLVULA DE PURGA COMPRESOR DE ALTA  
double CICDPA;			// CONDICIÓN INICIAL DE LA VÁLVULA DE PURGA         
double CIST8A;           // CONDICIÓN INICIAL DE LA VÁLVULA DE PURGA
double CITCCA;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE COMPRESOR DE ALTA
double CITCCB;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE COMPRESOR DE BAJA
double CITCTA;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE TURBINA DE ALTA
double CITCTB;			// CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE TURBINA DE BAJA
double CITenf;           // CONDICIÓN INICIAL DE TEMPERATURA DE ENTRADA EN EL HABITACULO DE LA TURBINA
double CITRCA;			// CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR COMPRESOR ALTA
double CITRCB;           // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR COMPRESOR BAJA
double CITRTA;			// CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR TURBINA ALTA
double CITRTB;           // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR TURBINA BAJA
double CIW_TA;           // CONDICIÓN INICIAL DE VELOCIDAD ANGULAR TURBINA ALTA ECUACIÓN 1ER ORDEN
double CIW_TB;			// CONDICIÓN INICIAL DE TELOCIDAD ANGULAR TURBINA  BAJA ECUACIÓN 1ER ORDEN
double CIw1_TA;			// CONDICIÓN INICIAL DE VELOCIDAD ANGULAR TURBINA ALTA ECUACIÓN 2DO ORDEN 
double CIw1_TB;			// CONDICIÓN INICIAL DE TELOCIDAD ANGULAR TURBINA  BAJA ECUACIÓN 2DO ORDEN 
double CPmaterial;        // CALOR ESPECIFICO DEL METAL 
double DENSIDAD_FMENF_CA; // DENSDIAD DEL AIRE EN EL COMPRESOR DE ALTA 
double DENSIDAD_FMENF_CB; // DENSDIAD DEL AIRE EN EL COMPRESOR DE BAJA
double DENSIDAD_FMOUT_CA; // DENSDIAD DEL AIRE EN EL COMPRESOR DE ALTA
double F_MAX_ENF;         // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CCA;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CCB;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CTA;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CTB;	 // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U4RTA;	 // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U4RTB;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double FCV_68127;		 // VÁLVULA DE PURGA EN EL COMPRESOR
double FLUJO_MASICO_AIRE; // FLUJO MASICO DE AIRE
double FLUJO_MASICO_CA;            // FLUJO MASICO DE AIRE
double FLUJO_MASICO_CB;            // FLUJO MASICO DE AIRE EN EL COMPRESOR DE BAJA
double FLUJO_MASICO_ENF_CA;        // FLUJO MASICO DE AIRE DE ENFRIAMIENTO EN EL COMPRESOR DE ALTA 
double FLUJO_MASICO_ENF_CB;		  // FLUJO MASICO DE AIRE DE ENFRIAMIENTO EN EL COMPRESOR DE BAJA
double FLUJO_MASICO_GAS;			  // FLUJO MASICO DE GAS 
double FLUJO_MASICO_GAS_VIGV;	  // FLUJO MASICO DE GAS A LA ENTRADA DE LOS VIGV
double FLUJO_MASICO_OUT_CA;		  // FLUJO MASICO DE SALIDA DEL COMORESOR DE ALTA
double FLUJO_MASICO_SALIDAVBV;	  // FLUJO MASICO DE SALIDA DE LOS ALAVES VBV
double FLUJO_MASICO_TA;			  // FLUJO MASICO EN LA TURBINA DE ALTA
double FLUJO_MASICO_TB;			  // FLUJO MASICO EN LA TURBINA DE BAJA 
double Frecuencia;				  // FRECUENCOA DE GENERADOR 
double K_ADECUACION_CDPA;		  // CONSTANTE DE ADECUACION DE LA VÁLVULA DE PURGA PARA CONTROL 
double K_ADECUACION_K1_ROTOR1_TA;  // CONSTANTE DE ADECUACION PARA ROTOR DE TURBINA DE ALTA
double K_ADECUACION_K1_ROTOR1_TB;  // CONSTANTE DE ADECUACION PARA ROTOR DE TURBINA DE BAJA
double K_ADECUACION_ST8A;		  // CONSTANTE DE ADECIACION PARA VALVULA DE PURGA
double mCCA;						  // MASA DE LA CARCASA DE COMPRESOR DE ALTA
double mCCB;						  // MASA DE LA CARCASA DE COMPRESOR DE BAJA					
double mCTA;						  // MASA DE LA CARCASA DE TURBINA DE ALTA
double mCTB;						  // MASA DE LA CARCASA DE TURBINA DE BAJA
double menf;						  //MASA DE AIRE EN EL HABITACULO
double mRCA;						  //MASA DE ROTOR DE COMPRESOR DE ALTA
double mRCB;						  //MASA DE ROTOR DE COMPRESOR DE BAJA
double mRTA;						  //MASA DE ROTOR DE TURBINA DE ALTA
double mRTB;						  //MASA DE ROTOR DE TURBINA DE BAJA
double POTENCIA_CA;				  //POTENCIA GENERADA POR EL COMPRESOR DE ALTA PRESION 
double POTENCIA_CB;				  //POTENCIA GENERADA POR EL COMPRESOR DE BAJA PRESION 	
double POTENCIA_MEC;			      //POTENCIA MECANICA 
double POTENCIA_TA;                //POTENCIA GENERADA POR TURBINA DE ALTA PRESION 
double POTENCIA_TB;                //POTENCIA GENERADA POR TURBINA DE BAJA PRESION 
double QA;
double QB;
double QCCA;						//CALOR DE LA CARCASA DE COMPRESOR DE ALTA
double QCCB;						//CALOR DE LA CARCASA DE COMPRESOR DE BAJA
double QCTA;						//CALOR DE LA CARCASA DE LA TURBINA DE ALTA
double QCTB;						//CALOR DE LA CARCASA DE LA TURBINA DE BAJA
double QRCA;						//CALOR DEL ROTOR DE COMPRESOR DE ALTA
double QRCB;						//CALOR DEL ROTOR DE COMPRESOR DE BAJA
double QRTA;						//CALOR DEL ROTOR DE TURBINA DE ALTA
double QRTB;						//CALOR DEL ROTOR DE TURBINA DE BAJA
double RADIO_MEDIO_CA;			//RADIO MEDIO DE COMPRESOR DE ALTA 
double RADIO_MEDIO_CB;			//RADIO MEDIO DE COMPRESOR DE BAJA 
double RADIO_MEDIO_TA;			//RADIO MEDIO DE TURBINA DE ALTA 
double RADIO_MEDIO_TB;			//RADIO MEDIO DE TURBINA DE BAJA
double RHO_AREA_1_CB;			//DENSIDAD DE FLUIDO QUE PASA POR AREA 1 COMPRESOR DE BAJA
double ST8A;						//VALVULA DE PURGA
double T_Giro_TA;				//TORQUE DE GITO ROTOR TURBINA DE ALTA
double T_Giro_TB;				//TORQUE DE GIRO ROTOR DE TURBINA DE BAJA 
double TAO_CDPA;					//CONSTANTE TAO DE ADECUACION DE CONTROL PARA VALVULA DE PURGA
double TAO_ST8A;					//CONSTANTE TAO DE ADECUACION DE CONTROL PARA VALVULA DE PURGA
double TAO_TA_ROTOR1;			//TAO DE ADECUACION DE CONTROL ROTOR TURBINA DE ALTA
double TAO_TB_ROTOR1;			//TAO DE ADECUACION DE CONTROL ROTOR TURBINA DE BAJA 
double TCCA;						//TEMPERATURA CARCASA COMPRESOR DE ALTA
double TCCB;						//TEMPERATURA CARCASA COMPRESOR DE BAJA
double Tchiller;					//TEMPERATURA DEL CHILLER
double TCTA;						//TEMPERATURA CARCASA TURBINA DE ALTA
double TCTB;						//TEMPERATURA CARCASA TURBINA DE BAJA
double Tenf;						//TEMPERATURA DE ENFRIAMIENTO
double TgCA;						//TEMPERATURA DE AIRE A LA SALIDA DEL COMPRESOR DE ALTA
double TgCB;						//TEMPERATURA DE AIRE A LA SALIDA DEL COMPRESOR DE BAJA
double Tgenf;					//TEMPERATURA DE AIRE A LA ENTRADA EN LOS ALABES PARA ENFRIAMIENTO
double TgenfA;					//TEMPERATURA DE AIRE A LA ENTRADA EN LOS ALABES PARA ENFRIAMIENTO
double TgTA;						//TEMPERATURA DE AIRE A LA ENTRADA DE LA TURBINA DE ALTA
double TgTB;						//TEMPERATURA DE AIRE A LA ENTRADA DE LA TURBINA DE BAJA
double Tlub;						//TEMPERATURA DEL LUBRICANTE
double Torque_Arracador_TA;		//TORQUE GENERADO POR TURBINA DE ALTA PRESION //CHECAR DE DONDE PROVIENE EL TORQUE SI ES DE MARTIN 
double Torque_Arracador_TB;		//TORQUE GENERADO POR TURBINA DE BAJA PRESION //CHECAR DE DONDE PROVIENE EL TORQUE SI ES DE MARTIN
double TORQUE_CA;				//TORQUE GENERADO POR COMPRESOR DE ALTA PRESION
double TORQUE_CB;				//TORQUE GENERADO POR COMPRESOR DE BAJA PRESION 
double TORQUE_Exc;				
double TORQUE_TA;				//TORQUE GENERADO POR TURBINA DE ALTA PRESION
double TORQUE_TB;				//TORQUE GENERADA POR TURBINA DE BAJA PRESION
double TRCA;						//TEMPERATURA DEL ROTOR DEL COMPRESOR DE ALTA
double TRCB;						//TEMPERATURA DEL ROTOR DEL COMPRESOR DE BAJA
double TRTA;						//TEMPERATURA DEL ROTOR DE TURBINA DE ALTA
double TRTB;						//TEMPERATURA DEL ROTOR DE TURBINA DE BAJA
double U_CA;						//COEFICIENTE DE TRANSFERENCIA DE CALOR COMPRESOR DE ALTA
double U_CB;						//COEFICIENTE DE TRANSFERENCIA DE CALOR COMPRESOR DE BAJA
double U_TA;						//COEFICIENTE DE TRANSFERENCIA DE CALOR TURBINA DE ALTA
double U_TB;						//COEFICIENTE DE TRANSFERENCIA DE CALOR TURBINA DE BAJA
double U1CCA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE ALTA
double U1CCB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE BAJA
double U1CTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE ALTA
double U1CTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE BAJA
double U1enf;					//COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U1RCA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U1RCB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U1RTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U1RTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U2CCA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE ALTA					
double U2CCB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE BAJA
double U2CTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE ALTA
double U2CTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE BAJA
double U2enf;					//COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U2RCA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U2RCB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U2RTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U2RTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U3enf;					//COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U3RCA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U3RCB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U3RTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U3RTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U4enf;					//COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U4RTA;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U4RTB;					//COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double VELOCIDAD_FMENF_CA;		//VELOCIDAD DEL FLUJO MASICO DE ENFRIAMIENTO COMPRESOR DE ALTA
double VELOCIDAD_FMENF_CB;		//VELOCIDAD DEL FLUJO MASICO DE ENFRIAMIENTO COMPRESOR DE BAJA
double VELOCIDAD_FMOUT_CA;		//VELOCIDAD DEL FLUJO MASICO DE SALIDA COMPRESOR DE ALTA
double VN1_CB;					//Componente de velocidad normal al área de entrada de alabe rotor DE COMPRESOR DE BAJA 
double VT1_CA;					//componente auxiliar en entrada de alabe rotor en compresor de alta
double VT1_CB;					//componente auxiliar en entrada de alabe rotor en compresor de baja
double VT2_CA;					//componente auxiliar en salida de alabe rotor en compresor de alta 
double VT2_CB;					//componente auxiliar en salida de alabe rotor en compresor de baja
double VT2_TA;					//componente auxiliar en salida de alabe rotor turbina de alta
double VT2_TB;					//componente auxiliar en salida de alabe rotor turbina de baja
double VT3_TA;					//componente auxiliar en salida de alabe estator turbina de baja
double VT3_TB;					//componente auxiliar en salida de alabe estator turbina de baja
double W_CA;						// velocidad angular compresor de alta
double W_CB;						// velocidad angular compresor de baja
double W_TA;						// velocidad angular turbina de alta
double W_TB;						// velocidad angular turbina de baja
double w1_TA;					// velocidad angular turbina de alta control
double w1_TB;					// velocidad angular turbina de baja control
double AFCV_6872;
double ALFA1_CB;					//Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA
double Alfa1_cb_control;			//angulo de entrada de de alaves de COMPRESOR DE BAJA de control
double ALFA1_CONTROL_CB;			//ANGULO DE FLUJO ABSOLUTO COMPRESOR DE BAJA
double ALFA2_CB;					//Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA					
double ALFA3_CB;					// Angulo de flujo absoluto a la salida del alabe estator.COMPRESOR DE BAJA
double AREA_1_CB;				//AREA 1 DE ENTRADA COMPRESOR BAJA sistema de primer orden				
double AREA_2_CB;				//AREA 2 DE ENTRADA COMPRESOR BAJA sistema de primer orden
double AREA_3_CB;				//AREA 1 DE ENTRADA COMPRESOR BAJA sistema de primer orden
double BETA1_CB;					//Angulo de entrada de alabe, propiedad física del alabe 
double BETA2_CB;					//Angulo de salida de alabe, propiedad física del alabe COMPRESOR DE BAJA
double BETA3_CB;					//Angulo de salida de alabe, propiedad física del alabe, estator.COMPRESOR DE BAJA
double CIALFA1;					//Condiciones iniciales de angulo alfa de alabes para control
double CIAREA1IGV;				// CONDICION DE INICIO AREA1 IGV
double CIAREA1VBV;				//CONDICIONES INICIALES DE AREA 1 VBV 
double CP_CB;					//CONSTANTE DE CALOR ESPECIFICO TURBINA BAJA
double DELTA_PRESION_CB;			//CAMBIO DE PRESION A SALIDA DE COMPRESOR DE BAJA 
double FCV_6872;					//VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB 
double GRAVEDAD;					//acelelracion de la gravedad
double K_ADECUACION_1_CB;		//CONSTANTE DE ADECUACION ALFA CONTROL COMPRESOR BAJA para control
double K_ADECUACION_AREA1_CA;	//CONSTANTE DE ADECACION AREA 1 COMPRESOR DE ALTA para control
double K_ADECUACION_AREA1_CB;	// CONTANTE DE ADECUACION DE AREA 1 COMPRESOR DE BAJA para control
double PDI64070;
double PRESION_ENTRADA_COMPRESOR_BAJA;// PRESION ENTRADA COMPRESOR BAJA AMBIENTE
double PRESION_SALIDA_COMPRESOR_BAJA; //PRESION_SALIDA_COMPRESOR_BAJA; 
double RHO_AREA_2_CB;					// DENSIDAD PARA AREA 2 EN COMPRESOSR DE BAJA 
double RHO_AREA_3_CB;				// DENSIDAD PARA AREA 3 EN COMPRESOSR DE BAJA
double RHO_DELTA_PRESION_CB;			// DENSIDAD PARA CALCULO DE DELTA DE PRESION DE ETAPA COMPRESOR DE BAJA
double TAO_ALFA_1_CB;				// TAO ALFA CONTROL COMPRESOR BAJA 
double TAO_IGV_CB_A1;				// TAO DE IGV EN AREA1 COMPRESOR DE BAJA 
double TAO_VBV_CA_A1;				// TAO VBV AREA 1 COMPRESOR DE ALTA
double TEMPERATURA_ENTRADA_COMPRESOR_BAJA;	//TEMPERATURA ENTRADA COMPRESOR BAJA AMBIENTE
double TEMPERATURA_SALIDA_COMPRESOR_BAJA;	//TEMPERATURA DE SALIDA COMPRESOR DE BAJA 
double V1_CB;								//velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE BAJA
double V2_CB;								//velocidad absoluta del fluido en sentido del ángulo alfa 2 COMPRESOR DE BAJA
double V3_CB;								//velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE BAJA
double VN2_CB;								//Componente de velocidad normal al área de salida alabe rotor.COMPRESOR DE BAJA
double VN3_CB;								//Componente de velocidad normal al área de salida alabe rotor.COMPRESOR DE BAJA
double VRB1_CB;								//Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE BAJA
double VRB2_CB;								//Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2. COMPRESOR DE BAJA
double VRB3_CB;								//Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE BAJA
double VT3_CB;								//componente auxiliar en salida de alabe estator.COMPRESOR DE BAJA
double ALFA_1_CA;							//Angulo de flujo absoluto a la salida del alabe rotor DE CONTROL COMPRESOR DE BAJA				
double ALFA1_CA;								//ANGULO ALFA DONDE SE GUARDA LA VARIABLE DE CONTROL DE PRIMER ORDEN
double Alfa1_ca_control;						//angulo de entrada de de alaves de COMPRESOR DE ALTA
double ALFA1_CONTROL_CA;						//ANGULO DE FLUJO ABSOLUTO COMPRESOR DE ALTA
double ALFA2_CA;								//Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE ALTA
double ALFA3_CA;								//Angulo de flujo absoluto a la salida del alabe estator COMPRESOR DE ALTA.
double AREA_1_CA;							// AREA 1 DE ENTRADA COMPRESOR ALTA
double AREA_2_CA;							// AREA 2 DE ENTRADA COMPRESOR ALTA
double AREA_3_CA;							// AREA 3 DE ENTRADA COMPRESOR ALTA
double AREA1_CONTROL_CA;						// AREA 1 CONTROL PARA SISTEMA DE PRIMER ORDEN COMPRESOR DE ALTA
double BETA_3_CA;							// BETA 3 AL COMPRESOR DE ALTA PRESION 
double BETA1_CA;								//Angulo de entrada de alabe, propiedad física del alabe COMPRESOR DE ALTA
double BETA2_CA;								//Angulo de salida de alabe, propiedad física del alabe COMPRESOR DE ALTA
double BETA3_CA;								//Angulo de salida de alabe, propiedad física del alabe, estator COMPRESOR DE ALTA.
double CIALFA1_CA;							// CONDICIONES INICIALES DE ALFA CONTROL COMPRESOR DE ALTA
double CIAREA1_CA;							// CONDICIONES INICIALES AREA 1 COMPRESOR DE ALTA 
double CIBETA3CA;							// CONDICIONES INICIALES BETA 3 COMPRESOR DE ALTA 
double CONTROL_BETA3_CA_CONTROL;				// VARIABLE DE CONTROL PARA ACTIVAR O DESACTIVAR EL PROCESO DE CALCULO DE BETA 3
double CP_CA;								//CONSTANTE DE CALOR ESPECIFICO COMPRESOR DE ALTA
double DELTA_PRESION_CA;						// DELTA DE PRESION A SALIDA DE COMPRESOR DE BAJA
double FCV_6871;								// VALVULA DE CONTROL DE FLUJO PARA EL SANGRADO VBV
double FCV_6873;								// VALULA DE CONTROL DE FLUJO DEL ACCTUADOR PARA EL TORQUEMOTOR 
double K_ADECUACION_1_CA;					// CONSTANTE DE ADECUACION DE ALFA CONTROL COMPRESOR ALTA
double K_ADECUACION_BETA3_CA;				// CONTANTE DE ADECUACION DE BETA 3 COMPRESOR DE ALTA
double PRESION_SALIDA_COMPRESOR_ALTA;		//PRESION DE SALIDA DE COMPRESOR DE ALTA 
double RHO_AREA_1_CA;						// DENSIDAD PARA AREA 1 EN COMPRESOSR DE ALTA
double RHO_AREA_2_CA;						// DENSIDAD PARA AREA 2 EN COMPRESOSR DE ALTA
double RHO_AREA_3_CA;						// DENSIDAD PARA AREA 3 EN COMPRESOSR DE ALTA
double RHO_DELTA_PRESION_CA;					// DENSIDAD PARA CALCULO DE DELTA DE PRESION DE ETAPA COMPRESOR DE ALTA
double TAO_ALFA_1_CA;						// TAO ALFA CONTROL COMPRESOR ALTA 
double TAO_BETA3_CA;							// TAO DE ADECUACION BETA 3 DE COMPRESOR DE ALTA 
double TAO_CA_A1;							// CONSTANTE TAO DE ADECUACION DE AREA 1 EN COMPRESOR DE BAJA PARA SISTEMA DE PRIMER ORDEN 
double TEMPERATURA_SALIDA_COMPRESOR_ALTA;	// TEMPERATURA DE SALIDA DE COMPRESOR DE ALTA
double V1_CA;								// velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE ALTA
double V2_CA;								//VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE ALTA 
double V3_CA;								// velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE ALTA
double VN1_CA;								// COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE ALTA
double VN2_CA;								// Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
double VN3_CA;								//Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE ALTA
double VRB1_CA;								// Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
double VRB2_CA;								// componente auxiliar en salida de alabe rotor COMPRESOR DE ALTA
double VRB3_CA;								// Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE ALTA
double VT3_CA;								// componente auxiliar en salida de alabe estator.COMPRESOR DE ALTA

double aux1;									//ajuste de con
double dif;
double n;

double X_bioxidoR;
double X_etano;
double X_Ibutano;
double X_Ipentano;
double X_metano;
double X_Nbutano;
double X_Neopentano;
double X_Nhexano;
double X_nitrogenoR;
double X_Npentano;
double X_Propano;
double X_Oxigeno;
double DH_Agua_V;
double DH_bioxido;
double DH_Ibutano;
double DH_metano;
double DH_Nbutano;
double DH_Nhexano;
double DH_nitrogeno;
double DH_Oxigeno;
double DH_Propano;
double TemAmb;
double TemGas;
double DH_Neopentano;
double DH_Ipentano;
double DH_Npentano;
double DH_etano;

double B_Agua;
double B_bioxido;
double B_etano;
double B_Ibutano;
double B_Ipentano;
double B_metano;
double B_Nbutano;
double B_Neopentano;
double B_Nhexano;
double B_nitrogeno;
double B_Npentano;
double B_Propano;
double Cp_bioxido;
double Cp_etano;
double Cp_gas;
double Cp_Ibutano;
double Cp_Ipentano;
double Cp_metano;
double Cp_Nbutano;
double Cp_Neopentano;
double Cp_Nhexano;
double Cp_nitrogeno;
double Cp_Npentano;
double Cp_Propano;
double HF_Agua_V;
double HF_bioxido;
double HF_etano;
double HF_Ibutano;
double HF_Ipentano;
double HF_metano;
double HF_Nbutano;
double HF_Neopentano;
double HF_Nhexano;
double HF_Npentano;
double HF_Oxigeno;
double HF_Propano;
double kJkg_Btulb;
double M_aire;
double M_bioxido;
double M_etano;
double M_gas;
double M_Ibutano;
double M_Ipentano;
double M_metano;
double M_Nbutano;
double M_Neopentano;
double M_Nhexano;
double M_nitrogeno;
double M_Npentano;
double M_Propano;
double PCIp;
double PreRef;
double Pres_in;
double PreSatAgua;
double Rho_rel;
double Rhoideal;
double Ru;
double TRef;
double X_Agua_L;
double X_Agua_Sat;
double X_bioxidoP;
double X_nitrogenoP;
double Z_Gas_humedo;
double Z_Gas_seco;
double Cv_gas;
double k_gas;
double Rgas;
double Rhoreal;
double TemGasC;
double TemGasF;

double HOxigenoSY;
double HnitrogenoSY;
double HbioxidoSY;
double HNhexanoSY;
double HPropanoSY;
double HmetanoSY;
double HNbutanoSY;
double HIbutanoSY;
double HNeopentanoSY;
double HIpentanoSY;
double HNpentanoSY;
double HetanoSY;
double HAgua_L;
double hhv;
double kJ_kCal;
double HF_Agua_L;
//double HOxigenoSY;

double AC_masa;
double AC_mol;
double AG;
double error6;
double Exceso_MASICO_porciento;
double Exceso_MOLAR_porciento;
double f_molar;
double fMASICO;
double Hproductos;

double M_aire_kg_kmol;
double M_gas_kg_kmol;						//masa molar del gas combustible Kg/kmol
double mairemax_kg_s;						//flujo masico maximo de aire, fuente:manual (kg/s)
double mairemax_kmol_s;						//flujo molar maximo de aire, fuente:manual (Kmol/seg)
double mgas_kg_s;							//flujo masico maximo de combustible, fuente:manual (kg/s)
double mgas_kmol_s;							//flujo molar maximo de combustible, fuente:manual (Kmol/seg)
double num_carbon;							//
double num_hidrogeno;
double num_hidrogeno2;
double num_nitrogeno;
double num_oxigeno;
double poli1suma;
double poli2suma;
double RAC_ideal_masa;						//relacion aire combustible ideal masa
double RAC_ideal_mol;						//relacion de aire combustible ideal molar
double RACreal_masa;							//relacion aire/combustible real masa
double RACreal_mol;							//relacion de aire/combustible real molar
double RCA_ideal_masa;						//relacion combustible/aireideal masa			
double RCA_ideal_mol;						//relacion combustible/aire ideal molar
double RCAreal_masa;							//relacion combustible/air4e real masa
double RCAreal_mol;							//relacion combustible/aire real molar
double suma;
double suma2;
double Temperatura;

double bio;
double bioxido_kj_mol;
double constante;
double etano_kj_mol;
double Hreactivos;
double i_butano_kj_mol;
double i_pentano_kj_mol;
double metano_kj_mol;
double n_butano_kj_mol;
double n_hexano_kj_mol;
double n_pentano_kj_mol;
double neopentano_kj_mol;
double nitro;
double nitro2;
double nitrogeno_kj_mol;
double nitrogeno2_kj_mol;
double oxi;
double oxigeno_kj_mol;
double propano_kj_mol;
double psi_T;
double psi_tref;
double T1_3;
double T2_3;
double T5_3;
double T6_3;
double T7_3;
double T8_3;

double A_i;
double B_i;
double C_i;
double D_i;
double error1;
double error2;
double error3;
double error4;
double F_i;
double Pn;
double Q_i;
double R_i;
double r1;
double r2;
double r3;
double r4;
double S_i;
double x;
double Y_i;

double C_B;
double C_C;
double C_H2;
double CH4_B;
double CH4_C;
double CH4_H2;
double CO_B;
double CO_C;
double CO_H2;
double E_i;
double F;
double FA;
double FB;
double G;
double G_i;
double H;
double H_H2;
double H_i;
double HCN_B;
double HCN_C;
double HCN_D;
double HCN_H2;
double J;
double N_D;
double NH3_D;
double NH3_H2;
double NO_B;
double NO_D;
double NO_H2;
double NO2_B;
double NO2_D;
double NO2_H2;
double O_B;
double O_H2;
double O2_B;
double O2_H2;
double O3_B;
double O3_H2;
double OH_B;
double OH_H2;
double P_i;
double R_CO;
double R_HO;
double R_NO;
double U_i;
double V_i;
double W_i;
double X_i;
double Z_i;

double aux2;
double constante1;
double d;
double error5;
double FC;
double FD;
double GA;
double GB;
double GC;
double GD;
double HA;
double HB;
double HC;
double HD;
double JA;
double JB;
double JC;
double JD;
double N_H2;
double Ni;
double Ta;
double Ti;
double Tr;
double Tx;

double C_a;
double F_a;
double NOx;
double Q_a;
double T_C;
double T_F;
double U_a;
double V_a;

double ALFA_1_TA;						// ANGULO DE FLUJO ABSOLUTO TURBINA DE ALTA DE CONTROL 
double ALFA_1_TB;						// ANGULO DE FLUJO ABSOLUTO TURBINA DE BAJA DE CONTROL 
double ALFA1_TA;							// ANGULO DE FLUJO ABSOLUTO TURBINA DE ALTA
double ALFA1_TB;							// ANGULO DE FLUJO ABSOLUTO TURBINA DE BAJA
double ALFA2_TA;							// Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
double ALFA2_TB;							// Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
double ALFA3_TA;							// Angulo de flujo absoluto a la salida del alabe estator TURBINA DE ALTA.
double ALFA3_TB;							//Angulo de flujo absoluto a la salida del alabe estator TURBINA BAJA.
double BETA1_TA;							//Angulo de entrada de alabe, propiedad física del alabe TURBINA DE ALTA
double BETA1_TB;							//Angulo de entrada de alabe, propiedad física del alabe TURBINA DE BAJA
double BETA2_TA;							//Angulo de salida de alabe, propiedad física del alabe TURBINA DE ALTA
double BETA2_TB;							//Angulo de salida de alabe, propiedad física del alabe TURBINA DE BAJA
double BETA3_TA;							//Angulo de salida de alabe, propiedad física del alabe, estator TURBINA DE ALTA.
double BETA3_TB;							//Angulo de salida de alabe, propiedad física del alabe, estator TURBINA DE BAJA.
double CONSTANTE_AREAS_1_TA;				//AREA DE ENTRADA A ETAPA DE TURBINA DE ALTA
double CONSTANTE_AREAS_1_TB;				// AREA 1 DE ENTRADA TURBINAR BAJA
double CONSTANTE_AREAS_2_TA;				// AREA 2 DE ENTRADA TURBINA ALTA
double CONSTANTE_AREAS_2_TB;				// AREA 2 DE ENTRADA TURBINA BAJA
double AREA_1_TB;
double CP_TA;							//CONSTANTE DE CALOR ESECIFICO TURBINA ALTA
double CP_TB;							//CONSTANTE DE CALOR ESECIFICO TURBINA BAJA
double DELTA_PRESION_TA;					//DELTA DE PRESION A SALIDA DE TURBINA DE ALTA
double DELTA_PRESION_TB;					//DELTA DE PRESION A SALIDA DE TURBINA DE BAJA 
double PRESION_SALIDA_TURBINA_ALTA;		//TEMPERATURA DE SALIDA TURBINA DE ALTA 
double PRESION_SALIDA_TURBINA_BAJA;		//PRESION DE SALIDA DE TURBINA DE BAJA 
double RHO_DELTA_PRESION_TA;				//DENSIDAD DEL DELTA DE PRESION EN TURBINA DE ALTA 
double RHO_DELTA_PRESION_TB;				//DENSIDAD DEL DELTA DE PRESION EN TURBINA DE BAJA
double TEMPERATURA_ENTRADA_TURBINA_ALTA;	//TEMPERATURA A LA ENTRADA DE TURBINA DE ALTA PRESION PROVENIENTE DE MANUEL
double TEMPERATURA_SALIDA_TURBINA_ALTA;	//TEMPERATURA DE SALIDA TURBINA DE ALTA 
double TEMPERATURA_SALIDA_TURBINA_BAJA;	//TEMPERATURA DE SALIDA TURBINA DE BAJA 
double V1_TA;							// velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE ALTA
double V1_TB;							// velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE BAJA
double V2_TA;							// velocidad absoluta del fluido en sentido del ángulo alfa 2 TURBINA DE ALTA
double V2_TB;							//VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA BAJA
double V3_TA;							//velocidad absoluta del fluido en sentido del ángulo alfa 3, estator TURBINA DE ALTA.						
double V3_TB;							//velocidad absoluta del fluido en sentido del ángulo alfa 3, estator TURBINA DE BAJA.
double VN1_TA;							// COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE ALTA
double VN1_TB;							// COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE BAJA
double VN2_TA;							// Componente de velocidad normal al área de salida alabe rotor TURBINA DE ALTA
double VN2_TB;							// Componente de velocidad normal al área de salida alabe rotor TURBINA DE BAJA
double VN3_TA;							//Componente de velocidad normal al área de salida alabe rotor.TURBINA DE BAJA
double VN3_TB;							//Componente de velocidad normal al área de salida alabe rotor.TURBINA DE BAJA
double VRB1_TA;							//Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA						
double VRB1_TB;							//Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE BAJA
double VRB2_TA;							// Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2 TURBINA DE ALTA.
double VRB2_TB;							// Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2 TURBINA DE BAJA.
double VRB3_TA;							// Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator TURBINA DE ALTA.
double VRB3_TB;							// Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator TURBINA DE BAJA.
double VT1_TA;							// componente auxiliar en entrada de alabe rotor TURBINA DE ALTA
double VT1_TB;							// componente auxiliar en entrada de alabe rotor TURBINA DE BAJA


double CIIEx_GE;
double CIVFaseA_GE;
double CIVFaseB_GE;
double CIVFaseC_GE;
double Consigna_VinTranEx_GE;
double delta;
double IEx_GE;
double IEx_IMagA;
double IEx_IMagB;
double IEx_IMagC;
double IFaseA_GE;
double IFaseB_GE;
double IFaseC_GE;
double IntCarga_GE;
double IntCrow_Bar;
double IntEx_GE;
double KEx_GE;
double KGen_GE_A;
double KGen_GE_B;
double KGen_GE_C;
double KTranEx_GE;
double Por_FA;
double Por_FB;
double Por_FC;
double SatIEx;
double TaoEx_GE;
double TaoGen_GE;
double VAB_GE;
double VAC_GE;
double VBC_GE;
double VEx_GE;
double VFaseA_GE;
double VFaseB_GE;
double VFaseC_GE;
double VinTranEx_GE;

double KcapaReac;
double PActiva;
double PReacFaseA_GE;
double PReacFaseB_GE;
double PReacFaseC_GE;
double PReactiva;
double PTotal;
double Vred_GE;

double CI2TORQUE_TA;							//CONDICIONES INICIALES DE TORQUE EN TURBINA DE BAJA EN CONTROL
double CIBETA3CB;							// CPONDICIONES INICIALES DE BETA 3 COMPRESOR DE BAJA
double CIFCV68127;							// CONDICIONES INICIALES DE VALVULA DE PRUGA ST8 DE PRIMER ORDEN
double CIFCV68128;							//VALVULA DE CONTROL ETAPA DE SANGRADO 
double CONTROL_FCV68128;						// variable de control de etapa de sangrado de primer orden 
double CIFCV6871;							//condiciones iniciales de la valvula de purga para sistema de primer orden
double CIFCV6872;							// condiciones iniciales de la valvula de alaves guias primer orden 				
double CIFCV6873;							// condiciones iniciales de actuador para torque motor de primer orden 
double CITORQUE_TA;							//CONDICIONES INICIALES PARA TAORQUE 2 TURBINA DE ALTA DE PRIMER ORDEN
double CONTROL_FCV68127;						//VARIABLE DE CONTROL DE VALVULA DE PRUGA ST8 PARA PRIMER ORDEN
//double CONTROL_FCV68128;						//variable de control de VALVULA DE CONTROL ETAPA DE SANGRADO primer orden
double CONTROL_FCV6871;						//variable de control de VALVULA DE PURGA VBV de primer orden
double CONTROL_FCV6872;						//variable de control PARA ALAVES GUIAA IGVB de primer orden
double CONTROL_FCV6873;						//varaiable de control ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR de primer orden
double FCV_68128;							//VALVULA DE CONTROL DE FLUJO EN LA ETAPA DE SANGRADO 
double K_ADECUACION_FCV68127;				// CONSTANTE DE ADECUACION DE VALVULA DE PRUGA ST8 de primer orden
double K_ADECUACION_FCV68128;				// CONSTANTE DE ADECUACION VALVULA DE CONTROL ETAPA DE SANGRADO de primer orden
double K_ADECUACION_FCV6871;					//CONSTANTE DE ADECUACION PARA LA VALVULA DE PURGA VBV de primer orden
double K_ADECUACION_FCV6872;					// CONSTANTE DE ADECUACION PARA ALAVES GUIAA IGVB de primer orden
double K_ADECUACION_FCV6873;					// CONSTANTE DE ADECIACION DEL ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR 
double PRESION_ENTRADA_TURBINA_ALTA;			// TEMPERATURA A LA ENTRADA DE TURBINA DE ALTA PRESION PROVENIENTE DE MANUEL
double PT_6804;								// PS3B PRESION DE DESCARGA COMPRESOR DE ALTA 
double PT_6814;								// PS3B PRESION DE DESCARGA COMPRESOR DE ALTA 
double PT_6859A;								// PRESION DE ENTRAD ADE COMPRESOR DE ALTA 
double PT_6859B;								// PRESION DE ENTRAD ADE COMPRESOR DE ALTA 
double PT_6860;								// PRESION DE ENTRADA A TURBINA DE BAJA 
double SE_6800A;								//VELOCIDAD DE COMPRESOR DE ALTA XN25A
double SE_6800B;								//VELOCIDAD DE COMPRESOR DE ALTA XN25B
double SE_6812;								// VELOCIDAD DE LA TURBINA DE BAJA XNSD_A
double SE_6813;								// VELOCIDAD DE LA TURBINA DE BAJA XNSD_B
double TAO_FCV68127;							// tao de adeciacion VARIABLE DE CONTROL DE VALVULA DE PRUGA ST8 PARA PRIMER ORDEN
double TAO_FCV68128;							// tao de adecuacion de VALVULA DE CONTROL ETAPA DE SANGRADO primer orden
double TAO_FCV6871;							//tao de adecuacion de la valvula de purga para sistema de primer orden
double TAO_FCV6872;							//tao de adecuacion PARA ALAVES GUIAA IGVB de primer orden
double TAO_FCV6873;							//tao de adecuacion DEL ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR 
double TE_6821A;								//RTD TEMPERATURA DE ENTRADA DEL AIRE AL COMPRESOR DE BAJA T2
double TE_6821B;								//RTD TEMPERATURA DE ENTRADA DEL AIRE AL COMPRESOR DE BAJA T2
double TE_6837A;								// TC TIPO K TEMPERATURA DE ENTRADA DE AIRE DEL COMPRESOR DE ALTA 
double TE_6837B;								// TC TIPO K TEMPERATURA DE ENTRADA DE AIRE DEL COMPRESOR DE ALTA
double TE_6838A1;							// TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6838A2;							// TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6838B1;							// TEMPERATURA DE COMPRESOR DE ALTA
double TE_6838B2;							// TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6843;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48A (SUPERIOR)
double TE_6844;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48B (SUPERIOR)
double TE_6845;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48C (INFERIOR)
double TE_6846;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48D (INFERIOR)
double TE_6847;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48E (INFERIOR)
double TE_6848;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48F (INFERIOR)
double TE_6849;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48G (SUPERIOR)
double TE_6850;								// TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48H (SUPERIOR)
double TORQUE_TA2;							// Calculo de torque 2 turbina de alta presion 
double ZT_68127A;							//SEÑAL DE POSICION DE LA VALVULA FCV_68127A
double ZT_68127B;							//SEÑAL DE POSICION DE LA VALVULA FCV_68127B
double ZT_68128A;							//POSICION DE LA VALVULA CDPB FCV68128
double ZT_68128B;							//POSICION DE LA VALVULA CDPB FCV68129
double ZT_6871A;								// POSICION DE LA VALVULA VBV FCB6871
double ZT_6871B;								// POSICION DE LA VALVULA VBV FCB6872
double ZT_6872A;								//POSICION DE LA VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB FCV6872
double ZT_6872B;								//POSICION DE LA VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB FCV6872
double ZT_6873A;								//SEÑAL DE RETORNO DE LA POSICION DE LA VALVULA FCV6873
double ZT_6873B;								//SEÑAL DE RETORNO DE LA POSICION DE LA VALVULA FCV6873

// Verificar tamaños
double coef_esq[11];
double M[12];
double logk[14];
double k[14];
double kj_mol[14];
double cal_mol[17];
double a1[17];
double a2[17];
double a3[17];
double a4[17];
double a5[17];
double a6[17];
double a7[17];
double A1[17];
double A2[17];
double A3[17];
double A4[17];
double A5[17];
double A6[17];
double A7[17];
double h0_href_R[9];
double h0_href[9];
double A[9];
double B[9];
double C[9];
double m[4][5];
double hc[17];
double H_k[17];
double poli1[17];
double poli2[17];
int i, z, j;

double TGE;                //TEMPERATURA DEL GENERADOR
double Texc;               //TEMPERATURA DE EXCITACION
double Taire;              //TEMPERATURA DE AIRE EN EL HABITACULO DEL GENERADOR
double I_Generador;                  //CORRIENTE QUE PASA EN EL GENERADOR
double R_Generador;                  //RESISTENCIA DEL GENERADOR
double Ugen;               //COEFICIENTE DE TRANSFERENCIA DEL GENERADOR
double Iexc;               //CORRIENTE DE EXCITACION
double Rexc;               //RESISTENCIA DE EXCITACION
double Uexc;               //COEFICIENTE DE TRANSFERENCIA DE EXCITACION
double Flujo_masico;       //FLUJO MASICO EN EL GENERADOR
double Uexc_aire;
double Ugen_aire;

double Tao_TempGE;
double Tao_Tempexc;
double Tao_Tairege;

double CITGE;
double CITexc;
double CITaire;

////////ULTIMAS DECLARADAS///////

double TemRefCROMA;
double HF_nitrogenoR;
double X_Agua_V;
double X_Agua_Corregida;
double X_NhexanoX;
double X_PropanoX;
double X_IbutanoX;
double X_NbutanoX;
double X_NeopentanoX;
double X_IpentanoX;
double X_NpentanoX;
double X_nitrogenoRX;
double X_metanoX;
double X_bioxidoRX;
double X_etanoX;
double M_Oxigeno;
double M_Agua;
double B_Oxigeno;
double B_aire;
double Z_Aire_seco;
double Z_Aire_humedo;
double cal_mol_reactivos;
double suma_productos;
double error;
double C_1=0;			
double H_1=0;				
double O_1=0;				
double N_1=0;
double T_nueva=0;	
double T_i=0;
double T3_3;
double T4_3;
double h0_href_O2;
double n_C6H14_g;
double C3H8_g;
double i_C4H10_g;
double n_C4H10_g;
double neo_C5H12_g;
double i_C5H12_g;
double n_C5H12_g;
double N2;
double CH4;
double CO2;
double C2H6_g;
double O2;
double NH3_B;
double iteracion;
double num1;
double num2;
double y;
double ALFA_2;

double TAO_TA_ROTOR_1;
double CONTROL_TA_TORQUE_1;
double IGV_CONTROL_CB_A1;


//*********************************************************************************************************//

//*********************************AL TATA Y EL COCHI <3 SE AMAN********************************************************//
// variables de propiedades  de fluidos

    double Cv;                       // Calor especifico del gas
    double Cp;                       // Calor especifico del gas
    double R_gas;                    // constante de gas
    double Tiempo;                   // Tiempo
    double Flujo_in;                 // Flujo de gas
    double Tamb;                     // Temperatura ambiente
    double Humedadgasin;             // humedad especifica del gas
    double DensidadAgua;             // Densidad del agua
    double DensidadGas;              // Densidad del gas
    double PresionSum;               // Presión de suministro,kPa, GC_B_PI 1101
    double PresionSum_kg;            // Presión de suministro,kg/cm2, GC_B_PI 1101
    double ViscosiGas;
    double VelocidadGasin;
    double VelocidadGasin2;

    // variables válvulas de control


    double XvalControl1max;          // Porcentaje maximo de apertura de la valvula
    double CIXvalControl1;           // Condición inicial del porcentaje de apertura de la valvula
    double TaoXvalControl1;          // Constante de respuesta del sistema
    double FlujoMax;                 // Flujo de suministro
    double XvalControl1;             // Porcentaje de aperuta de valvula


    //Variables de la valvula de control para el modelo de presion a la entrada del compresor_v1


    double XvalControlv1max; //// apertura del 100% para el sistema 1 y 2

    //**** sistema 1

    double CIXvalControl_1_v1;
    double TaoXvalControl_1_v1;
    double XvalControl_1_v1;

    //**** sistema 2

    double CIXvalControl_2_v1;
    double TaoXvalControl_2_v1;
    double XvalControl_2_v1;


    ///*** variables para el PID
   double ki_CG;
   double  kp_CG;
   double  LInf_CG;////limite inferior de la saturacion
   double  LSup_CG; //// limite superior de la saturacion
   double  SPP_v1;// set point de la presion de entrada [kPa]***[7 Kg/cm2]
   double  errorPI_CG; //error general del sistema
   double  Acc_P_CG; ///accion de control proporcional
   double  Acc_I_CG;  ///accion de control integral
   double  Acc_PI_CG; // accion de control PI que va a multiplicar al modelo de la valvula
   double  Ap_valvula_CG;//apertura de la valvula para multiplicar por el flujo masico  ***salida del control***
   double  CI_I_CG; //// condicion inicial de la accion integral
   double  satu_CG; //// condicion de saturacion entre 0-1
   double  Valvula_control_CG;
   int     On_off_Valvula_YX106; // Apertura o cierre de valvula de suministro



    // Variables tanque de depuración V-1

    double AreaTub;                   //Área de tuberia de 6"
    double VolTanqueDepu1;           // Volumen del tanque depurador
    double AreaTanqueDepu1;          // Area del tanque depurador
    double UTanqueDepu1;             // Coeficiente global de trasferencia de calor del tanque depurador
    double TemperaturaOutTanqueDepu1;// Temperatura en el tanque de depuración
    double TemperaturaOutTanqueDepu1_C;// Temperatura en el tanque de depuración
    double MasaTanqueDepu1;          // Masa en el tanque de depuración
    double CIMasaTanqDepu1;          // Condiciones iniciace de Masa a la presion y temperatura inicial
    double CITanqDepu1;              // Temperatura inicial en el tanque de depuración
    double CI_PresionTanqueDepu1;       // Presión en el tanque de depuracion en kPa
    double PresionTanqueDepu1_kg;    // Presión en el tanque de depuracion en kg/cm2
    double Eta_Fil1;                 // Eficiencia de filtrado
    double AreaFilTanqueDepu1;       // Area del tanque transversal al flujo de gas
    double CIFIL1;                   // Condiciones iniciales del Nivel en tanque de depuración
    double NivelTanqueDepu1;         // Nivel de agua en el tanque de depuración
    double NivelTanqueDepu1mm;       // Nivel de agua en el tanque de depuración
    double TaoTanqueDepu1;           // Tao de tanque de depuración 1
    double Flujo_outDepu1;           // flujo da salida de gas
    double Flujo_purgaTanDepu1;              // flujo de purga
    double P_in;
    double P_out;
    double Temperatura_inTanqueDepu1;

    // variables tanque de succión 1(PB-1)

    double Temperatura_final_TanSuc1;   //
    double MasaTanqueSuc1;              // kg
    double VolTanqueSuc1;               // m3
    double UTanqueSuc1;                 // kJ/m2 K
    double AreaTanqueSuc1;              // m2
    double CIPresionOutTanSuc1;           // kPa
    double CITanqueSuc1;                // K
    double Flujo_OutTanSuc1;           // flujo da salida de gas
    double CIMasaTanSuc1;              // kg


    // Variables compresor 1ra etapa CZ-2


    double Temperatura_in;           // Temperatura de entrada del gas al compresor de 1ra etapa
    double Masa1;                     // Masa de gas contenida en el compresor de 1ra etapa
    double VelMaximaMotorCompresor;  // Velicidad maxima del motor del compresor
    double TaoMotorCompresor;        // Constante de respuesta motor compresor
    double CIVelocidad;              // Condición inicial del motor de compresor
    double DiamFlechaMotor;          // diametro de flecha del motor
    double Temperatura_final_1ra;    // GC_B_ TI_1105, Temperatura final del gas a la salida del compresor de 1ra etapa K
    double Temperatura_final_1ra_C;  // GC_B_ TI_1105, Temperatura final del gas a la salida del compresor de 1ra etapa °C
    double Trabajo_in1;              // Potencia de compresión de 1ra etapa
    double ParInducidoMotorComp1;    // Par inducido en el motor del compresor
    double CIMotorCompresor;         //
    double VelMotorCompresor;
    double PresionIn1ra;             // Presion de entrada al compresor de la 1ra etapa
    double PresionOut1ra ;           // Presion de salida del compresor de la 1ra etapa
    double CI1ra;                    // Temperatura inicial del compresor de 1ra etapa
    double TaoComp1ra;               // Tao de compresor1
    double Eta_CIC;                   // eficiencia del compresor
    int onoffComp1ra;
    int StartManual1ra;
    int StopManual1ra;
    int LocalRemoto1ra;
    int Automatico1ra;
    int Manual1ra;
    int FallaCompresor;


    // Variables tanque de expanción PB-2

    double UTanqueExp;               // Coeficiente global de trasferencia de calor del HEX
    double CITanqueExp;              // Temperatura inicial en el tanque de expansión
    double MasaTanqueExp;            // Masa de gas en el tanque de expansion
    double VolTanqueExp;             // Volumen tanque de expansion
    double UTanqueDeExpa;            // Coeficiente global de trasferencia de calor del tanque de expansion
    double Temperatura_final_TanExp; // Temperatura final del gas a la salida del tanque de expansion.
    double AreaTanqueExp;            // Area tanque de expansión
    double CIPresionOutTanExp;         // Presión a la salida del tanque kPa
    double PresionOutTanExp_kg;      // Presión a la salida del tanque kg/cm2
    double Temperatura_final_TanExp_C; // Temperatura en °C
    double CIMasaTanqueExp;

    // Variables HEX

    double AreaHEX;                  // Area de intercambio de calor del HEX
    double UHEX;                     // Coeficiente global de trasferencia de calor del HEX
    double Temperatura_final_HEX;    // Temperatura de salida del HEX K
    double Temperatura_final_HEX_C;  // Temperatura de salida del HEX °C
    double MasaHEX;                  // Masa de gas en el intercambiador de gas
    double CIHEX1;                    // Temperatura inicial en el HEX
    double PresionOutHEX;            // Presión a la salida del intercambiador de calor.

    // variables ventilador HEX

    double CI_Vel_Vent_HEX;
    double Tao_Vent_HEX;
    double Vel_MAX_Vent_HEX;
    double OnOff_Vent_HEX;
    double Falla_Vent_HEX;
    double Velocidad_Ventilador_HEX;

    // Variables tanque de depuración V-2

    double VolTanqueDepu2;           // Volumen del tanque depurador 2
    double AreaTanqueDepu2;          // Area del tanque depurador 2
    double UTanqueDepu2;             // Coeficiente global de trasferencia de calor del tanque depurador 2
    double TemperaturaOutTanqueDepu2;// Temperatura en el tanque de depuración 2
    double TemperaturaOutTanqueDepu2_C; //
    double CIMasaTanqueDepu2;          // Masa en el tanque de depuración 2
    double MasaTanqueDepu2;           // Masa inicial en el tanque de depuración 2
    double CITanqDepu2;              // Temperatura inicial en el tanque de depuración 2
    double CIPresionTanqueDepu2;       // presion en el tanque de depuracion 2
    double NivelTanqueDepu2;         // Nivel de agua en el tanque de depuración
    double NivelTanqueDepu2mm;         // Nivel de agua en el tanque de depuración
    double Eta_Fil2;                 // Eficiencia de filtrado
    double AreaFilTanqueDepu2;       // Area del tanque transversal al flujo de gas
    double CIFIL2;                   // Condiciones iniciales del Nivel en tanque de depuración

    // vairables tanque de succión PB-3

    double Temperatura_final_TanSuc2;   // temperatura final tanque de succión 2
    double MasaTanqueSuc2;              // masa tanque de succión 2
    double VolTanqueSuc2;               // volumen tanque de succión 2
    double UTanqueSuc2;                 // coeficiente global de trasnferencia de calor tanque succión 2
    double AreaTanqueSuc2;              // atrea transfercnia de calor tanque succión 2
    double PresionOutTanSuc2;           // presión final tanque de succión 2
    double CITanqueSuc2;                // condiciones iniciales tanque de succión 2

    // Variables compresor 2da etapa CZ-1

    double Masa2;                    // Masa de gas contenida en el compresor de 2da etapa
    double Temperatura_final_2da;    // Temperatura final del gas a la salida del compresor de 2da etapa K
    double Temperatura_final_2da_C;    // Temperatura final del gas a la salida del compresor de 2da etapa °C
    double ParInducidoMotorComp2;     // Par inducido en el compresor 2
    double PresionIn2da;             // Presion de entrada al compresor de la 2da etapa
    double TaoComp2da;               // Tao de compresor2
    double Trabajo_in2;              // Potencia de compresión de 2da etapa
    double PresionOut2da ;           // Presion de salida del compresor de la 1ra etapa kPa
    double PresionOut2da_kg ;           // Presion de salida del compresor de la 1ra etapa kg/cm2
    double CI2da;                    // Condiciones iniciales compresor 2da etapa
    double eficom2;                   // eficiencia del compresor

    // Variables tanque de expanción PB-4

    double UTanqueExp2;               // Coeficiente global de trasferencia de calor del HEX
    double CITanqueExp2;              // Temperatura inicial en el tanque de expansión
    double MasaTanqueExp2;
    double CIMasaTanqueExp2;          // Masa de gas en el tanque de expansion
    double VolTanqueExp2;             // Volumen tanque de expansion
    double UTanqueDeExpa2;            // Coeficiente global de trasferencia de calor del tanque de expansion
    double Temperatura_final_TanExp2; // Temperatura final del gas a la salida del tanque de expansion.
    double AreaTanqueExp2;            // Area tanque de expansión
    double CIPresionOutTanExp2;       // Temeperatura a la salida del tanque kPa
    double PresionOutTanExp2_kg;      // Temeperatura a la salida del tanque kg/cm2
    double AreaTub2;                  // Área de tubo de 4"
    double VelocidadGasin3;           // Velocidad del cambio de área

    // Variables HEX2

    double AreaHEX2;                  // Area de intercambio de calor del HEX2
    double UHEX2;                     // Coeficiente global de trasferencia de calor del HEX2
    double Temperatura_final_HEX2;    // Temperatura de salida del HEX2 K
    double Temperatura_final_HEX2_C;    // Temperatura de salida del HEX2 °C
    double MasaHEX2;                  // Masa de gas en el intercambiador de gas 2
    double CIHEX2;                    // Temperatura inicial en el HEX2
    double PresionOutHEX2;            // Presión a la salida del intercambiador de calor 2.
    double PresionOutHEX2_kg;            // Presión a la salida del intercambiador de calor 2.

    // Variables filtro coalescencia V-3

    double VolTanqueCoal_V3;        // Volumen del filtro coalescencia
    double AreaTanqCoal_V3;         // Area del filtro coalescencia
    double UFilCoal_V3;             // Coeficiente global de trasferencia de calor del filtro coalescencia
    double TempOutCoal_V3;          // Temperatura en el filtro coalescencia K
    double TempOutCoal_V3_C;        // Temperatura en el filtro coalescencia °C
    double CIMasaTanqueCoal_V3;     // Masa en el filtro coalescencia
    double MasaTanqueCoal_V3;       // Masa en el filtro coalescencia
    double Eta_Coal_V3;             // Eficiencia de filtrado del filtro coalescencia
    double Eta_VANE;                  // Eficiencia de filtrado del Vane Pack
    double CITemCoal_V3;              // Temperatura inicial en el filtro coalescencia
    double PresionTanqueCoal_V3_kg;   // presion en el filtro coalescencia
    double CIPresionTanqueCoal_V3;
    double NivelCoal_V3;              //  m, Nivel de agua en el filtro coalescencia V3 seccion inferior
    double NivelCoal_V3mm;            // mm, Nivel de agua en el filtro coalescencia V3B seccion superior
    double AreaFilTanqCoal_V3;        // Area del filtro coalescencia transversal al flujo de gas
    double CICoal_V3;                 // Condiciones iniciales del Nivel en filtro coalescencia V3 seccion inferior
    double CICoal_V3B;                // Condiciones iniciales del Nivel en filtro coalescencia V3B seccion superior
    double NivelCoal_V3B;             // m, Nivel de agua en el filtro coalescencia V3 seccion Superior
    double NivelCoal_V3Bmm;           // mm, Nivel de agua en el filtro coalescencia V3 seccion Superior
    double DifPresCoal_V3;               // Diferencia de presión en el filtro coalescente


    // variables filtros colescentes

    double AreaFilTanqCoal_V082_1;    // Área de filtrado
    double CICoal_FV082_1A;            // Condiciones iniciales del Nivel en filtro coalescencia FV082-1
    double CICoal_FV082_1B;            // Condiciones iniciales del Nivel en filtro coalescencia FV082-1
    double TempOutCoalFV082_1;        // Tempertura de salida del filtro de coalescencia  FV082-1
    double TempOutCoalFV082_1_C;
    double CITemCoalV082_1;
    double CIPre_Fil_FV082_1;         // presion inicial del filtro colalescrncia FV082_1
    double NivelCoalFV082_1A;          // Nivel de agua en el filtro coalescencia LG 1310, m
    double NivelCoalFV082_1Amm;        // Nivel de agua en el filtro coalescencia LG 1306, mm
    double NivelCoalFV082_1B;          // Nivel de agua en el filtro coalescencia LG 1310, m
    double NivelCoalFV082_1Bmm;        // Nivel de agua en el filtro coalescencia LG 1306, mm
    double VolCoalV082_1;             // volumen del tanque
    double CIMasaCoalV082_1;          // Masa inicial en el filtro V082_1
    double MasaCoalFV082_1;          // Masa en el filtro
    double Eta_Coal_FV082_1A;         // eficiencia de filtrado
    double Eta_Coal_FV082_1B;         // eficiencia de filtrado
    double On_off_Filtro_FV082_1;    // encendido del filtro
    double AreaTub3;                 // Tuberia de salida del filtro 3"
    double Longi_Filto_FV082;        // longitud del filto
    double AreaFilTanqCoal_V082_2;    // Área de filtrado
    double CICoal_FV082_2A;            // Condiciones iniciales del Nivel en filtro coalescencia FV082-1
    double CICoal_FV082_2B;
    double TempOutCoalFV082_2;        // Tempertura de salida del filtro de coalescencia  FV082-1
    double TempOutCoalFV082_2_C;
    double CITemCoalV082_2;
    double CIPre_Fil_FV082_2;         // presion inicial del filtro colalescrncia FV082_1
    double NivelCoalFV082_2A;          // Nivel de agua en el filtro coalescencia LG 1310, m
    double NivelCoalFV082_2Amm;        // Nivel de agua en el filtro coalescencia LG 1306, mm
    double NivelCoalFV082_2B;          // Nivel de agua en el filtro coalescencia LG 1310, m
    double NivelCoalFV082_2Bmm;
    double VolCoalV082_2;             // volumen del tanque
    double CIMasaCoalV082_2;          // Masa inicial en el filtro V082_1
    double MasaCoalFV082_2;          // Masa en el filtro
    double Eta_Coal_FV082_2A;         // eficiencia de filtrado
    double Eta_Coal_FV082_2B;
    double On_off_Filtro_FV082_2;     //encendido del filtro
    double VelocidadGasout4;
    double TaoCoal1;                  // Tao filtro coalescencia
    double PermeabCoal1;              // permeabilidad del filtro de coalescencia
    double PDIS_082;                  // presion diferencial en los filtros de colescecia
    double PDIS_082_psi;              // presion diferencial en los filtros de colescecia en psi


    // Sistemas auxiliares


    double CI_HEX_LUB;
    double U_HEX_LUB;
    double Area_HEX_LUB;
    double MasaAceite_HEX;
    double Vel_BombaAceite;          // velocidad del aceite
    double CI_VelAceiteceite;        //
    double Tao_bombaAceite;
   // double Vel_maxBombaA;
    double WBombaAceite;
    double ParInducidoMotorBombaAceite;
    double Flujo_in_aceite;
    double PresionFinalBombaAceite_kg;
    double Densidad_aceite;
    double PI_Aceite;
    int LocalRemotoLub;
    int AutomaticoBomLub;
    int ManualBomLub;
    int FallaBomLub;
    int onoffBomLub;
    int StartManualBomLub;
    int StopManualBomLub;


    // Chumaceras del compresor

    double AreaChumaComp;           // area de contacto de la chumacera m2
    double EspesorAceite;           // espesor del aceite entre la chumacera y la flecha
    double UChuma;                  // coeficiente de transferencia de calor

    double TempAceiteoutLubComp;    // Temperatura de salida de la chumacera K
    double TempAceiteoutLubComp_C;  // Temperatura de salida en °C
    double Temperatura_in_LubComp;    // Temperatura de salida K
    double MasaLubComp;                  // Masa de gas en el intercambiador de gas 2
    double CILubComp;                    // Temperatura inicial en el HEX2
    double CpAceite;

    //Factores de conversión

    double kg_kPa;                   // conversion de kPa a kg/cm2

    // Chumacera de empuje Motor del compresor

    double k_L_ln;                    //Coeficiente de transferencia de calor por conveccion
    double CIT_Chuma_3111A;           //Condiciones iniciales de temperatura del metal de chumacera 3111A
    double CIT_Chuma_3111B;           //Condiciones iniciales de temperatura del metal de chumacera 3111B
    double CIT_ChumEmpu_3113;           //Condiciones iniciales de temperatura del metal de chumacera de empuje 31113
    double TemChum3111A;                //temperatura en el cojinete 3111A
    double TemChum3111B;                //temperatura en el cojinete 3111B
    double TemChumEmpu_3113;            //temperatura en el cojinete de empuje 3113
    double Visco_Aceite;                //Viscosidad del aceite entre la chumacera y rotor
    double Area_Contacto;              //Area de contacto entre el eje y la chumacera
    double Diam_eje;                   //Diametro del eje del rotor
    double Espesor_Lub;                //Espesor de la pelicula lubricante
    double Cp_metal;                  //Calor especifico del metal
    double Masa_metal;                //Masa del metal


    // vibraciones

    double Avibra;
    double Bvibra;
    double Cvibra;
    double Dvibra;
    double CIDesplazamiento;
    double CIVelDes;
    double Desplazamiento;
    double VelDesplazamiento;

    // Variables de válvula

    double Apertura_Max_FCV62109;
    double Segnal_FCV62109;
    double CI_Apertura_FCV62109;
    double Tao_Valvula_FCV62109;
    double X_FCV62109;
    double Falla_FCV62109;
    double Onn_Off_FCV62109;
    double LSS2;

    double Apertura_Max_FCV62108;
    double Segnal_FCV62108;
    double CI_Apertura_FCV62108;
    double Tao_Valvula_FCV62108;
    double X_FCV62108;
    double Onn_Off_FCV62108;

    double Apertura_Max_FCV62107;
    double Segnal_FCV62107;
    double CI_Apertura_FCV62107;
    double Tao_Valvula_FCV62107;
    double X_FCV62107;
    double Onn_Off_FCV62107;
    double Flujo62109;

    double FlujoSOV6208 ;
    double Apertura_Max_SOV6208;
    double CI_Apertura_SOV6208 ;
    double Tao_Valvula_SOV6208 ;
    double X_SOV6208 ;
    double Segnal_SOV6208;
    double Onn_Off_SOV6208 ;

    double Flujo_FSV6204;
    double Apertura_Max_FSV6204;
    double CI_Apertura_FSV6204;
    double Tao_Valvula_FSV6204 ;
    double X_FSV6204;
    double Segnal_FSV6204;
    double Onn_Off_FSV6204;

    double Flujo_FSV6249;
    double Apertura_Max_FSV6249 ;
    double CI_Apertura_FSV6249 ;
    double Tao_Valvula_FSV6249 ;
    double X_FSV6249 ;
    double Segnal_FSV6249;
    double Onn_Off_FSV6249;

    double PI6214;
    double PI62139A;
    double PI62140A;
    double PI62141A;
    double PI62139B;
    double PI62140B;
    double PI62141B;
    double PI62136A;
    double PI62137A;
    double PI62138A;
    double PI62136B;
    double PI62137B;
    double PI62138B;

    double SOV62110;
    double SOV62111;
    double SOV62112;
    double SOV62113;
    double SOV62114;
    double SOV62115;
    double SOV62116;
    double SOV62117;
    double SOV62118;
    double SOV62119;
    double SOV62120;

    double On_Off_SOV62110;
    double On_Off_SOV62111;
    double On_Off_SOV62112;
    double On_Off_SOV62113;
    double On_Off_SOV62114;
    double On_Off_SOV62115;
    double On_Off_SOV62116;
    double On_Off_SOV62117;
    double On_Off_SOV62118;
    double On_Off_SOV62119;
    double On_Off_SOV62120;

    double CI_Apertura_SOV62110;
    double CI_Apertura_SOV62111;
    double CI_Apertura_SOV62112;
    double CI_Apertura_SOV62113;
    double CI_Apertura_SOV62114;
    double CI_Apertura_SOV62115;
    double CI_Apertura_SOV62116;
    double CI_Apertura_SOV62117;
    double CI_Apertura_SOV62118;
    double CI_Apertura_SOV62119;
    double CI_Apertura_SOV62120;
    double Tao_Valvula_SOV;
    double Apertura_Max_SOV;
    double K_Val_FCV621;
    double Flujo_FCV62107;
    double Flujo_FCV62109;
    double Flujo_FCV62108;
    double Flujo_SOV62111;
    double Flujo_SOV62113;
    double Flujo_SOV62116;
    double Flujo_SOV62118;
    double Flujo_SOV62120;
    double Flujo_SOV62115;
    double Flujo_toberas;
    double Flujo_SOV62110;
    double Flujo_SOV62112;
    double Flujo_SOV62114;
    double Flujo_SOV62117;
    double Flujo_SOV62119;

	



    // Fallas

    double FallaVenti;                    // Falla del ventilador reduce el U del intercambiador de calor
    double FallaComp;                     // Falla del compresor disminuye la presion de suministro








//**********************************************************************************************************************//

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

//***************************************EL ULISES ES PUÑAL Y LE GUSTA POR ATRAS****************************************************//

// Definición de funciones

double Temperatura_Generador(double I, double R, double Ugen, double Taire,double Tao_TempGE, double CITGE){
  int j;
  double x[26];
  double h = 0.05 / 100;
  double k1, k2, k3, k4;

  x[0] = CITGE;

  for(j=1;j<25;j++) {

    k1 = ((I * R * R) + Ugen * (x [ j - 1 ] - Taire)) / (Tao_TempGE) ;
    k2 = ((I * R * R) + Ugen * ((x [ j - 1 ] + ((h/2)* k1) - Taire))) / (Tao_TempGE) ;
    k3 = ((I * R * R) + Ugen * ((x [ j - 1 ] + ((h/2)* k2)- Taire))) / (Tao_TempGE) ;
    k4 = ((I * R * R) + Ugen * ((x [ j - 1 ] + ( h * k3))) - Taire) / (Tao_TempGE) ;
    x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITGE<0.0001) {
      x[0] = 0;  //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITGE>=2000){
    x[0] = 2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0] = x[j-1];
  }

  return x[0];
}

double Temperatura_Excitacion (double Iexc, double Rexc, double Uexc, double Taire,double Tao_Tempexc, double CITexc){
  int j;
  double x[26];
  double h = 0.05 / 100;
  double k1, k2, k3, k4;

  x[0] = CITexc;

  for(j=1;j<25;j++) {

    k1 = ((Iexc * Rexc * Rexc) + Uexc * (x [ j - 1 ] - Taire)) / (Tao_Tempexc) ;
    k2 = ((Iexc * Rexc * Rexc) + Uexc * ((x [ j - 1 ] + ((h/2)* k1)) - Taire)) / (Tao_Tempexc) ;
    k3 = ((Iexc * Rexc * Rexc) + Uexc * ((x [ j - 1 ] + ((h/2)* k2)) - Taire)) / (Tao_Tempexc) ;
    k4 = ((Iexc * Rexc * Rexc) + Uexc * ((x [ j - 1 ] + ( h * k3) - Taire))) / (Tao_Tempexc) ;
    x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITexc<0.0001) {
      x[0] = 0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITexc>=2000){
    x[0] = 2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0] = x[j-1];
  }

  return x[0];
}

double Temperatura_Aire (double Texc, double TGE, double Tchiller, double Flujo_masico,double Uexc_aire,double Ugen_aire,double Tao_Tairege, double CITaire){
  int j;
  double x[26];
  double h = 0.05 / 100;
  double k1, k2, k3, k4;

  x[0] = CITaire;

  for(j=1;j<25;j++) {

    k1 = (Uexc_aire * ( Texc - (x [ j - 1 ])) + Ugen_aire * ( TGE - (x [ j - 1 ])) + Flujo_masico * ( Tchiller - (x [ j - 1 ]))) / Tao_Tairege ;
    k2 = (Uexc_aire * ( Texc - (x [ j - 1 ] + ((h/2)* k1))) + Ugen_aire * ( TGE - (x [ j - 1 ] + ((h/2)* k1))) + Flujo_masico * ( Tchiller - (x [ j - 1 ] + ((h/2)* k1)))) / Tao_Tairege ;
    k3 = (Uexc_aire * ( Texc - (x [ j - 1 ] + ((h/2)* k2))) + Ugen_aire * ( TGE - (x [ j - 1 ] + ((h/2)* k2))) + Flujo_masico * ( Tchiller - (x [ j - 1 ] + ((h/2)* k2)))) / Tao_Tairege ;
    k4 = (Uexc_aire * ( Texc - (x [ j - 1 ] + ( h * k3))) + Ugen_aire * ( TGE - (x [ j - 1 ] + ( h * k3))) + Flujo_masico * ( Tchiller - (x [ j - 1 ] + ( h * k3)))) / Tao_Tairege ;
    x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITaire<0.0001) {
      x[0] = 0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITaire>=2000){
    x[0] = 2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0] = x[j-1];
  }

  return x[0];
}

double Masa(double CI, double P_in, double P_out,double CA_RT)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CI;

    for (j=1;j<25;j++)
    {
        k1=((CA_RT)*(P_in-P_out));
        k2=(CA_RT)*(P_in-P_out)+(k1*(h/2));
        k3=(CA_RT)*(P_in-P_out)+(k2*(h/2));
        k4=(CA_RT)*(P_in-P_out)+(h*k3);

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double VelocidadBomba(double CIBomba, double TaoBomba, double VelMax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIBomba;

    for (j=1;j<25;j++)
    {
        k1=((VelMax)-(x[j-1]))/TaoBomba;
        k2=((VelMax)-(x[j-1]+(h*k1/2)))/TaoBomba;
        k3=((VelMax)-(x[j-1]+(h*k2/2)))/TaoBomba;
        k4=((VelMax)-(x[j-1]+(h*k3)))/TaoBomba;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double resistencia(double CIResistencia, double TaoResistencia, double PotenciResMax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIResistencia;

    for (j=1;j<25;j++)
    {
        k1=((PotenciResMax)-(x[j-1]))/TaoResistencia;
        k2=((PotenciResMax)-(x[j-1]+(h*k1/2)))/TaoResistencia;
        k3=((PotenciResMax)-(x[j-1]+(h*k2/2)))/TaoResistencia;
        k4=((PotenciResMax)-(x[j-1]+(h*k3)))/TaoResistencia;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double frigorifico(double CIPotenciaFrigo, double TaoPotencia, double PotenciaFrigoMax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIPotenciaFrigo;

    for (j=1;j<25;j++)
    {
        k1=((PotenciaFrigoMax)-(x[j-1]))/TaoPotencia;
        k2=((PotenciaFrigoMax)-(x[j-1]+(h*k1/2)))/TaoPotencia;
        k3=((PotenciaFrigoMax)-(x[j-1]+(h*k2/2)))/TaoPotencia;
        k4=((PotenciaFrigoMax)-(x[j-1]+(h*k3)))/TaoPotencia;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}
double Calentador (double TICal, double CICal, double Aguain_Cp, double UA, double Tamb, double Masa_Cp_Cal, double Potencia_Resistencia)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CICal;

    for (j=1;j<25;j++)
    {
       k1=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-(((UA+Aguain_Cp)*x[j-1])))/Masa_Cp_Cal;
       k2=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-((UA+Aguain_Cp)*(x[j-1]+((h/2)*k1))))/Masa_Cp_Cal;
       k3=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-((UA+Aguain_Cp)*(x[j-1]+((h/2)*k2))))/Masa_Cp_Cal;
       k4=(((Potencia_Resistencia) + (UA*Tamb)+(Aguain_Cp*TICal))-((UA+Aguain_Cp)*(x[j-1]+((h)*k3))))/Masa_Cp_Cal;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double Evaporador (double TIEvap, double CIEvap, double Aguain_Cp, double UA, double Tamb, double Masa_Cp_Evap, double Potencia_Frigorifica)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIEvap;

    for (j=1;j<25;j++)
    {
       k1=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-(((UA+Aguain_Cp)*x[j-1])))/Masa_Cp_Evap;
       k2=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-((UA+Aguain_Cp)*(x[j-1]+((h/2)*k1))))/Masa_Cp_Evap;
       k3=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-((UA+Aguain_Cp)*(x[j-1]+((h/2)*k2))))/Masa_Cp_Evap;
       k4=((-(Potencia_Frigorifica) + (UA*Tamb)+(Aguain_Cp*TIEvap))-((UA+Aguain_Cp)*(x[j-1]+((h)*k3))))/Masa_Cp_Evap;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double HEX (double TIHEX, double CIHEX, double AguainCpHEX, double UA, double Tamb, double Masa_Cp_Hex)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIHEX;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tamb)+(AguainCpHEX*TIHEX))-(((UA+AguainCpHEX)*x[j-1])))/Masa_Cp_Hex;
       k2=(((UA*Tamb)+(AguainCpHEX*TIHEX))-((UA+AguainCpHEX)*(x[j-1]+((h/2)*k1))))/Masa_Cp_Hex;
       k3=(((UA*Tamb)+(AguainCpHEX*TIHEX))-((UA+AguainCpHEX)*(x[j-1]+((h/2)*k2))))/Masa_Cp_Hex;
       k4=(((UA*Tamb)+(AguainCpHEX*TIHEX))-((UA+AguainCpHEX)*(x[j-1]+((h)*k3))))/Masa_Cp_Hex;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double HEX_Aire(double TIAire, double CIAire, double Airein_CpAire, double UA, double Tagua_in, double Masa_Cv_Aire,double TaoHex)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIAire;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(((Airein_CpAire)*x[j-1])))/Masa_Cv_Aire*TaoHex;
       k2=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(Airein_CpAire*(x[j-1]+((h/2)*k1))))/Masa_Cv_Aire*TaoHex;
       k3=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(Airein_CpAire*(x[j-1]+((h/2)*k2))))/Masa_Cv_Aire*TaoHex;
       k4=(((UA*Tagua_in)+(TIAire*(Airein_CpAire-UA)))-(Airein_CpAire*(x[j-1]+((h)*k3))))/Masa_Cv_Aire*TaoHex;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double TurbinaCalor(double TIAire, double CIAire_Turbina, double Airein_CpAire, double UA, double Tgases, double MasaCabina_Cv_Aire, double Vel_in, double Vel_out, double Pow_Electr)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIAire_Turbina;

    for (j=1;j<25;j++)
    {
       k1=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-x[j-1])+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k2=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k1/2)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k3=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k2/2)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;
       k4=(Pow_Electr + UA*(Tgases-TIAire)+Airein_CpAire*((TIAire-(x[j-1]+(h*k3)))+(((Vel_in*Vel_in)-(Vel_out*Vel_out))/2)))/MasaCabina_Cv_Aire;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double VelocidadVenti(double CIVenti, double TaoVenti, double VelMaxVenti, int onoff)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIVenti;

    for (j=1;j<25;j++)
    {
        k1=((VelMaxVenti*onoff)-(x[j-1]))/TaoVenti;
        k2=((VelMaxVenti*onoff)-(x[j-1]+(h*k1/2)))/TaoVenti;
        k3=((VelMaxVenti*onoff)-(x[j-1]+(h*k2/2)))/TaoVenti;
        k4=((VelMaxVenti*onoff)-(x[j-1]+(h*k3)))/TaoVenti;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

// Encontradas

double BombaAgua(double TI,double CI, double Aguain_Cp, double Masa_Cp, double Potencia);

void Modelo();

void InicializaAF(double *A, int t)
{
	int iAc_H = 0;
	for(iAc_H = 0; iAc_H < t; iAc_H++)
	{
		A[iAc_H] = 0.0;
	}
}

void InicializaA2F(double **A, int a, int b)
{
	int iAc_H = 0;
	int iAc_H2 = 0;

	for(iAc_H = 0; iAc_H < a; iAc_H++)
	{
		for(iAc_H2 = 0; iAc_H2 < b; iAc_H2++)
		{
			A[iAc_H][iAc_H2] = 0.0;
		}
	}
}

// Encontradas Definidas... Cambiar a Prototipo
//**********************************************************************************
double Temperatura_de_Aire_en_el_Habitaculo(double U1enf, double TCTB, double U2enf, double TCCB, double FMaire, double Tchiller, double U3enf, double TCTA, double U4enf, double TCCA, double menf, double CPaire, double CITenf)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITenf;

  for(j=1;j<25;j++) {

    k1 = ( U1enf * (TCTB - x[j-1]) + U2enf * (TCCB - x[j-1]) + FMaire * CPaire * (Tchiller - x[j-1]) + U3enf *(TCTA - x[j-1]) + U4enf * (TCCA -x[j-1])) / (menf * CPaire);
    k2 = ( U1enf * (TCTB - (x[j-1]+ ((h/2)* k1))) + U2enf * (TCCB - (x[j-1]+ ((h/2)* k1))) + FMaire * CPaire * (Tchiller - (x[j-1]+ ((h/2)* k1))) + U3enf *(TCTA - (x[j-1]+ ((h/2)* k1))) + U4enf * (TCCA -(x[j-1]+ ((h/2)* k1)))) / (menf * CPaire);
    k3 = ( U1enf * (TCTB - (x[j-1]+ ((h/2)* k2))) + U2enf * (TCCB - (x[j-1]+ ((h/2)* k2))) + FMaire * CPaire * (Tchiller - (x[j-1]+ ((h/2)* k2))) + U3enf *(TCTA - (x[j-1]+ ((h/2)* k2))) + U4enf * (TCCA -(x[j-1]+ ((h/2)* k2)))) / (menf * CPaire);
    k4 = ( U1enf * (TCTB - (x[j-1]+ (h*k3))) + U2enf * (TCCB - (x[j-1]+ (h*k3))) + FMaire * CPaire * (Tchiller - (x[j-1]+ (h*k3))) + U3enf *(TCTA - (x[j-1]+ (h*k3))) + U4enf * (TCCA -(x[j-1]+ (h*k3)))) / (menf * CPaire);
    x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITenf<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITenf>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }

	return x[0];
}

double Temperatura_Rotor_Compresor_de_Alta(double TgCA, double U1RCA, double TCCA, double U2RCA, double TRTA, double U3RCA, double Tlub, double mRCA, double CPmaterial, double CITRCA)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITRCA;

  for(j=1;j<25;j++) {

        k1 = ( U1RCA * ( TgCA - x[j-1]) + U2RCA * (TRTA - x[j-1]) + U3RCA * ( Tlub - x[j-1])) / (mRCA * CPmaterial);
        k2 = ( U1RCA * ( TgCA - (x[j-1] + ((h/2) * k1))) + U2RCA * (TRTA - (x[j-1] + ((h/2) * k1))) + U3RCA * ( Tlub - (x[j-1] + ((h/2) * k1)))) / (mRCA * CPmaterial);
        k3 = ( U1RCA * ( TgCA - (x[j-1] + ((h/2) * k2))) + U2RCA * (TRTA - (x[j-1] + ((h/2) * k2))) + U3RCA * ( Tlub - (x[j-1] + ((h/2) * k2)))) / (mRCA * CPmaterial);
        k4 = ( U1RCA * ( TgCA - (x[j-1] + (h * k3))) + U2RCA * (TRTA - (x[j-1] + (h * k3))) + U3RCA * ( Tlub - (x[j-1] + (h * k3)))) / (mRCA * CPmaterial);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITRCA<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITRCA>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Carcasa_Compresor_de_Alta(double U1CCA, double Tenf, double U2CCA, double TgCA, double mCCA, double CPmaterial, double CITCCA)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITCCA;

  for(j=1;j<25;j++) {

        k1 = ( U1CCA * ( Tenf - x[j-1] ) + U2CCA * ( TgCA - x[j-1] ) ) / ( mCCA * CPmaterial);
        k2 = ( U1CCA * ( Tenf - ( x[j-1] + (( h/2 ) * k1))) + U2CCA * ( TgCA - ( x[j-1] + (( h/2 ) * k1) ) )) / ( mCCA * CPmaterial);
        k3 = ( U1CCA * ( Tenf - ( x[j-1] + (( h/2 ) * k2))) + U2CCA * ( TgCA - ( x[j-1] + (( h/2 ) * k2) ) ) )/ ( mCCA * CPmaterial);
        k4 = ( U1CCA * ( Tenf - ( x[j-1] + ( h * k3)) ) + U2CCA * ( TgCA - ( x[j-1] + ( h * k3) ) ) )/ ( mCCA * CPmaterial);
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITCCA<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITCCA>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Rotor_Compresor_de_Baja(double TgCB, double U1RCB, double TCCB, double U2RCB, double TRTB, double U3RCB, double Tlub, double mRCB, double CPmaterial, double CITRCB)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITRCB;

  for(j=1;j<25;j++) {

        k1 = ( U1RCB * ( TgCB - x[j-1]) + U2RCB * (TRTB - x[j-1]) + U3RCB * ( Tlub - x[j-1])) / (mRCB * CPmaterial);
        k2 = ( U1RCB * ( TgCB - (x[j-1] + ((h/2) * k1))) + U2RCB * (TRTB - (x[j-1] + ((h/2) * k1))) + U3RCB * ( Tlub - (x[j-1] + ((h/2) * k1)))) / (mRCB * CPmaterial);
        k3 = ( U1RCB * ( TgCB - (x[j-1] + ((h/2) * k2))) + U2RCB * (TRTB - (x[j-1] + ((h/2) * k2))) + U3RCB * ( Tlub - (x[j-1] + ((h/2) * k2)))) / (mRCB * CPmaterial);
		k4 = ( U1RCB * ( TgCB - (x[j-1] + (h * k3))) + U2RCB * (TRTB - (x[j-1] + (h * k3))) + U3RCB * ( Tlub - (x[j-1] + (h * k3)))) / (mRCB * CPmaterial);

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITRCB<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITRCB>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Carcasa_Compresor_de_Baja(double U1CCB, double Tenf, double U2CCB, double TgCB, double mCCB, double CPmaterial, double CITCCB)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITCCB;

  for(j=1;j<25;j++) {

        k1 = ( U1CCB * ( Tenf - x[j-1] ) + U2CCB * ( TgCB - x[j-1] ) ) / ( mCCB * CPmaterial);
        k2 = ( U1CCB * ( Tenf - ( x[j-1] + (( h/2 ) * k1) )) + U2CCB * ( TgCB - ( x[j-1] + (( h/2 ) * k1) ) )) / ( mCCB * CPmaterial);
        k3 = ( U1CCB * ( Tenf - ( x[j-1] + (( h/2 ) * k2) ) ) + U2CCB * ( TgCB - ( x[j-1] + (( h/2 ) * k2) ) ) )/ ( mCCB * CPmaterial);
        k4 = ( U1CCB * ( Tenf - ( x[j-1] + ( h * k3) ) )+ U2CCB * ( TgCB - ( x[j-1] + ( h * k3) ) ) ) / ( mCCB * CPmaterial);
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITCCB<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITCCB>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Rotor_Turbina_de_Baja(double U1RTB, double TgTB, double U2RTB, double TRCB, double U3RTB, double Tlub, double U4RTB, double Tgenf, double mRTB, double CPmaterial, double CITRTB)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITRTB;

  for(j=1;j<25;j++) {

        k1 = ( U1RTB * ( TgTB - x[j-1] ) + U2RTB * ( TRCB - x[j-1] ) + U3RTB * ( Tlub - x[j-1]) + U4RTB * ( Tgenf - x[j-1] )) / (mRTB * CPmaterial);
        k2 = ( U1RTB * ( TgTB - ( x[j-1] + ((h/2) * k1) )) + U2RTB * ( TRCB - ( x[j-1] + ((h/2) * k1) )) + U3RTB * ( Tlub - ( x[j-1] + ((h/2) * k1))) + U4RTB * ( Tgenf - ( x[j-1] + ((h/2) * k1) ))) / (mRTB * CPmaterial);
        k3 = ( U1RTB * ( TgTB - ( x[j-1] + ((h/2) * k2) )) + U2RTB * ( TRCB - ( x[j-1] + ((h/2) * k2) )) + U3RTB * ( Tlub - ( x[j-1] + ((h/2) * k2))) + U4RTB * ( Tgenf - ( x[j-1] + ((h/2) * k2) ))) / (mRTB * CPmaterial);
        k4 = ( U1RTB * ( TgTB - ( x[j-1] + (h * k3) )) + U2RTB * ( TRCB - ( x[j-1] + (h * k3)) ) + U3RTB * ( Tlub - ( x[j-1] + (h * k3))) + U4RTB * ( Tgenf - ( x[j-1] + (h * k3)) )) / (mRTB * CPmaterial);
        
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITRTB<0.0001) {
      x[0]=0; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITRTB>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Carcasa_Turbina_de_Baja(double U1CTB, double Tenf, double U2CTB, double TgTB, double mCTB, double CPmaterial, double CITCTB)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITCTB;

  for(j=1;j<25;j++) {

        k1 = ( U1CTB * ( Tenf - x[j-1] ) + U2CTB * ( TgTB - x[j-1] ) ) / ( mCTB * CPmaterial);
        k2 = ( U1CTB * ( Tenf - ( x[j-1] + (( h/2 ) * k1)) ) + U2CTB * ( TgTB - ( x[j-1] + (( h/2 ) * k1) ) )) / ( mCTB * CPmaterial);
        k3 = ( U1CTB * ( Tenf - ( x[j-1] + (( h/2 ) * k2) )) + U2CTB * ( TgTB - ( x[j-1] + (( h/2 ) * k2) ) )) / ( mCTB * CPmaterial);
        k4 = ( U1CTB * ( Tenf - ( x[j-1] + ( h * k3) )) + U2CTB * ( TgTB - ( x[j-1] + ( h * k3) ) )) / ( mCTB * CPmaterial);
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITCTB<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITCTB>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Rotor_Turbina_de_Alta(double U1RTA, double TgTA, double U2RTA, double TRCA, double U3RTA, double Tlub, double U4RTA, double Tgenf, double mRTA, double CPmaterial, double CITRTA)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITRTA;

  for(j=1;j<25;j++) {

        k1 = ( U1RTA * ( TgTA - x[j-1] ) + U2RTA * ( TRCA - x[j-1] ) + U3RTA * ( Tlub - x[j-1]) + U4RTA * ( Tgenf - x[j-1] )) / (mRTA * CPmaterial);
        k2 = ( U1RTA * ( TgTA - ( x[j-1] + ((h/2) * k1)) ) + U2RTA * ( TRCA - ( x[j-1] + ((h/2) * k1)) ) + U3RTA * ( Tlub - ( x[j-1] + ((h/2) * k1))) + U4RTA * ( Tgenf - ( x[j-1] + ((h/2) * k1)) )) / (mRTA * CPmaterial);
        k3 = ( U1RTA * ( TgTA - ( x[j-1] + ((h/2) * k2) )) + U2RTA * ( TRCA - ( x[j-1] + ((h/2) * k2)) ) + U3RTA * ( Tlub - ( x[j-1] + ((h/2) * k2))) + U4RTA * ( Tgenf - ( x[j-1] + ((h/2) * k2) ))) / (mRTA * CPmaterial);
        k4 = ( U1RTA * ( TgTA - ( x[j-1] + (h * k3) )) + U2RTA * ( TRCA - ( x[j-1] + (h * k3)) ) + U3RTA * ( Tlub - ( x[j-1] + (h * k3))) + U4RTA * ( Tgenf - ( x[j-1] + (h * k3) ))) / (mRTA * CPmaterial);
        
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITRTA<0.0001) {
      x[0]=0; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITRTA>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double Temperatura_Carcasa_Turbina_de_Alta(double U1CTA, double Tenf, double U2CTA, double TgTA, double mCTA, double CPmaterial, double CITCTA)
{
	int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITCTA;

  for(j=1;j<25;j++) {

        k1 = ( U1CTA * ( Tenf - x[j-1] ) + U2CTA * ( TgTA - x[j-1] ) ) / ( mCTA * CPmaterial);
        k2 = ( U1CTA * ( Tenf - ( x[j-1] + (( h/2 ) * k1) )) + U2CTA * ( TgTA - ( x[j-1] + (( h/2 ) * k1) )) ) / ( mCTA * CPmaterial);
        k3 = ( U1CTA * ( Tenf - ( x[j-1] + (( h/2 ) * k2) )) + U2CTA * ( TgTA - ( x[j-1] + (( h/2 ) * k2) ) ) )/ ( mCTA * CPmaterial);
        k4 = ( U1CTA * ( Tenf - ( x[j-1] + ( h * k3) )) + U2CTA * ( TgTA - ( x[j-1] + ( h * k3) ) )) / ( mCTA * CPmaterial);
        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
  }
  
  if(CITCTA<0.0001) {
      x[0]=0; ; //Imprimir cuando esto pase 'Temperatura que tiende a menos infinito'
  }
  else if (CITCTA>=2000){
    x[0]=2000;//Imprimir temperatura incorrecta, 'temperatura en aumento hacia infinito'
  }
  else {
      x[0]=x[j-1];
  }
	return x[0];
}

double TORQUETA(double K_ADECUACION_K1_ROTOR1_TA, double T_Giro_TA, double TAO_TA_ROTOR_1,double CONTROL_TA_TORQUE_1, double CITORQUE_TA, double CIw1_TA)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CITORQUE_TA;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-x[j-1])/TAO_TA_ROTOR_1;
    k2= (K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h/2)*k1)))/TAO_TA_ROTOR_1;
    k3= (K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h/2)*k2)))/TAO_TA_ROTOR_1;  
    k4= (K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h)*k3)))/TAO_TA_ROTOR_1;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
		}
	 if (CITORQUE_TA<0.0001)
	  {

	  x[0]=0;
	  }
	  else 
	  {
	  x[0]=x[j-1];

	  }
	return x[0];

}
double TORQUETA2 (double  K_ADECUACION_K2_ROTOR2,double CITORQUE_TA,double TAO_TA_ROTOR2,double CI2TORQUE_TA) {
  int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CI2TORQUE_TA;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_K2_ROTOR2*CITORQUE_TA-x[j-1])/TAO_TA_ROTOR2;
    k2= (K_ADECUACION_K2_ROTOR2*CITORQUE_TA-(x[j-1]+((h/2)*k1)))/TAO_TA_ROTOR2;
    k3= (K_ADECUACION_K2_ROTOR2*CITORQUE_TA-(x[j-1]+((h/2)*k2)))/TAO_TA_ROTOR2;  
    k4= (K_ADECUACION_K2_ROTOR2*CITORQUE_TA-(x[j-1]+((h)*k3)))/TAO_TA_ROTOR2;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CI2TORQUE_TA<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
  return x[0];
  }   
double ALFA1CONTROLCA (double K_ADECUACION_1_CA,double ALFA1_CONTROL_CA,double TAO_ALFA_1_CA,double CIALFA1_CA){
  int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIALFA1_CA;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_1_CA*ALFA1_CONTROL_CA-x[j-1])/TAO_ALFA_1_CA;
    k2= (K_ADECUACION_1_CA*ALFA1_CONTROL_CA-(x[j-1]+((h/2)*k1)))/TAO_ALFA_1_CA;
    k3= (K_ADECUACION_1_CA*ALFA1_CONTROL_CA-(x[j-1]+((h/2)*k2)))/TAO_ALFA_1_CA;  
    k4= (K_ADECUACION_1_CA*ALFA1_CONTROL_CA-(x[j-1]+((h)*k3)))/TAO_ALFA_1_CA;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIALFA1_CA<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
  return x[0];
  }
double BETA3CONTROLCB (double K_ADECUACION_BETA3_CB,double BETA3_CONTROL_CB,double TAO_BETA3_CB,double CIBETA3CB){

  int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIBETA3CB;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_BETA3_CB*BETA3_CONTROL_CB-x[j-1])/TAO_BETA3_CB;
    k2= (K_ADECUACION_BETA3_CB*BETA3_CONTROL_CB-(x[j-1]+((h/2)*k1)))/TAO_BETA3_CB;
    k3= (K_ADECUACION_BETA3_CB*BETA3_CONTROL_CB-(x[j-1]+((h/2)*k2)))/TAO_BETA3_CB; 
    k4= (K_ADECUACION_BETA3_CB*BETA3_CONTROL_CB-(x[j-1]+((h)*k3)))/TAO_BETA3_CB;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIBETA3CB<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
  return x[0];
  }



double ST8AFUN(double K_ADECUACION_ST8A, double FCV_68127, double TAO_ST8A, double CIST8A)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIST8A;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_ST8A*FCV_68127-x[j-1])/TAO_ST8A;
    k2= (K_ADECUACION_ST8A*FCV_68127-(x[j-1]+((h/2)*k1)))/TAO_ST8A;
    k3= (K_ADECUACION_ST8A*FCV_68127-(x[j-1]+((h/2)*k2)))/TAO_ST8A;  
    k4= (K_ADECUACION_ST8A*FCV_68127-(x[j-1]+((h)*k3)))/TAO_ST8A;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIST8A<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double CDPAFUN (double K_ADECUACION_CDPA, double FCV_68128, double TAO_CDPA, double CICDPA)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CICDPA;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_CDPA*FCV_68128-x[j-1])/TAO_CDPA;
    k2= (K_ADECUACION_CDPA*FCV_68128-(x[j-1]+((h/2)*k1)))/TAO_CDPA;
    k3= (K_ADECUACION_CDPA*FCV_68128-(x[j-1]+((h/2)*k2)))/TAO_CDPA;  
    k4= (K_ADECUACION_CDPA*FCV_68128-(x[j-1]+((h)*k3)))/TAO_CDPA;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CICDPA<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double ALFA1CONTROLCB(double K_ADECUACION_1_CB,double ALFA1_CONTROL_CB, double TAO_ALFA_1_CB, double CIALFA1)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIALFA1;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_1_CB*ALFA1_CONTROL_CB-x[j-1])/TAO_ALFA_1_CB;
    k2= (K_ADECUACION_1_CB*ALFA1_CONTROL_CB-(x[j-1]+((h/2)*k1)))/TAO_ALFA_1_CB;
    k3= (K_ADECUACION_1_CB*ALFA1_CONTROL_CB-(x[j-1]+((h/2)*k2)))/TAO_ALFA_1_CB;  
    k4= (K_ADECUACION_1_CB*ALFA1_CONTROL_CB-(x[j-1]+((h)*k3)))/TAO_ALFA_1_CB;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIALFA1<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double AREA1VBVCB (double K_ADECUACION_AREA1_CA, double FCV_6872, double TAO_VBV_CA_A1, double CIAREA1VBV)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIAREA1VBV;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_AREA1_CA*FCV_6872-x[j-1])/TAO_VBV_CA_A1;
    k2= (K_ADECUACION_AREA1_CA*FCV_6872-(x[j-1]+((h/2)*k1)))/TAO_VBV_CA_A1;
    k3= (K_ADECUACION_AREA1_CA*FCV_6872-(x[j-1]+((h/2)*k2)))/TAO_VBV_CA_A1; 
    k4= (K_ADECUACION_AREA1_CA*FCV_6872-(x[j-1]+((h)*k3)))/TAO_VBV_CA_A1;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIAREA1VBV<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double AREA1IGVCB (double K_ADECUACION_AREA1_CB, double AFCV_6872,double IGV_CONTROL_CB_A1, double TAO_IGV_CB_A1, double CIAREA1IGV)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIAREA1IGV;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_AREA1_CB*IGV_CONTROL_CB_A1-x[j-1])/TAO_IGV_CB_A1;
    k2= (K_ADECUACION_AREA1_CB*IGV_CONTROL_CB_A1-(x[j-1]+((h/2)*k1)))/TAO_IGV_CB_A1;
    k3= (K_ADECUACION_AREA1_CB*IGV_CONTROL_CB_A1-(x[j-1]+((h/2)*k2)))/TAO_IGV_CB_A1; 
    k4= (K_ADECUACION_AREA1_CB*IGV_CONTROL_CB_A1-(x[j-1]+((h)*k3)))/TAO_IGV_CB_A1;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIAREA1IGV<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double AREA1CA (double K_ADECUACION_AREA1_CA, double FCV_6871, double TAO_CA_A1, double CIAREA1_CA)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIAREA1_CA;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_AREA1_CA*FCV_6871-x[j-1])/TAO_CA_A1;
    k2= (K_ADECUACION_AREA1_CA*FCV_6871-(x[j-1]+((h/2)*k1)))/TAO_CA_A1;
    k3= (K_ADECUACION_AREA1_CA*FCV_6871-(x[j-1]+((h/2)*k2)))/TAO_CA_A1; 
    k4= (K_ADECUACION_AREA1_CA*FCV_6871-(x[j-1]+((h)*k3)))/TAO_CA_A1;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIAREA1_CA<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double BETA3CA (double K_ADECUACION_BETA3_CA, double FCV_6873, double TAO_BETA3_CA, double CIBETA3CA)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIBETA3CA;

  for (j=1;j<25;j++)

  {
    k1= (K_ADECUACION_BETA3_CA*FCV_6873-x[j-1])/TAO_BETA3_CA;
    k2= (K_ADECUACION_BETA3_CA*FCV_6873-(x[j-1]+((h/2)*k1)))/TAO_BETA3_CA;
    k3= (K_ADECUACION_BETA3_CA*FCV_6873-(x[j-1]+((h/2)*k2)))/TAO_BETA3_CA; 
    k4= (K_ADECUACION_BETA3_CA*FCV_6873-(x[j-1]+((h)*k3)))/TAO_BETA3_CA;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIBETA3CA<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double PriO(double A, double B, double C, double D)  // falta modelo del genrador
{
	return 0;
}

double SAT(double A, double B, double C) // falta modelo ulises
{
	return 0;
}
  // falta modelo del generador 
double FCV6871 (double K_ADECUACION_FCV6871, double CONTROL_FCV6871, double TAO_FCV6871, double CIFCV6871)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIFCV6871;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_FCV6871*CONTROL_FCV6871-x[j-1])/TAO_FCV6871;
    k2= (K_ADECUACION_FCV6871*CONTROL_FCV6871-(x[j-1]+((h/2)*k1)))/TAO_FCV6871;
    k3= (K_ADECUACION_FCV6871*CONTROL_FCV6871-(x[j-1]+((h/2)*k2)))/TAO_FCV6871;  
    k4= (K_ADECUACION_FCV6871*CONTROL_FCV6871-(x[j-1]+((h)*k3)))/TAO_FCV6871;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIFCV6871<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double FCV6872 (double K_ADECUACION_FCV6872, double CONTROL_FCV6872, double TAO_FCV6872, double CIFCV6872)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIFCV6872;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_FCV6872*CONTROL_FCV6872-x[j-1])/TAO_FCV6872;
    k2= (K_ADECUACION_FCV6872*CONTROL_FCV6872-(x[j-1]+((h/2)*k1)))/TAO_FCV6872;
    k3= (K_ADECUACION_FCV6872*CONTROL_FCV6872-(x[j-1]+((h/2)*k2)))/TAO_FCV6872;  
    k4= (K_ADECUACION_FCV6872*CONTROL_FCV6872-(x[j-1]+((h)*k3)))/TAO_FCV6872;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIFCV6872<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double FCV6873 (double K_ADECUACION_FCV6873, double CONTROL_FCV6873, double TAO_FCV6873, double CIFCV6873)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIFCV6873;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_FCV6873*CONTROL_FCV6873-x[j-1])/TAO_FCV6873;
    k2= (K_ADECUACION_FCV6873*CONTROL_FCV6873-(x[j-1]+((h/2)*k1)))/TAO_FCV6873;
    k3= (K_ADECUACION_FCV6873*CONTROL_FCV6873-(x[j-1]+((h/2)*k2)))/TAO_FCV6873;  
    k4= (K_ADECUACION_FCV6873*CONTROL_FCV6873-(x[j-1]+((h)*k3)))/TAO_FCV6873;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIFCV6873<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double FCV68127 (double K_ADECUACION_FCV68127, double CONTROL_FCV68127, double TAO_FCV68127, double CIFCV68127)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIFCV68127;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_FCV68127*CONTROL_FCV68127-x[j-1])/TAO_FCV68127;
    k2= (K_ADECUACION_FCV68127*CONTROL_FCV68127-(x[j-1]+((h/2)*k1)))/TAO_FCV68127;
    k3= (K_ADECUACION_FCV68127*CONTROL_FCV68127-(x[j-1]+((h/2)*k2)))/TAO_FCV68127;  
    k4= (K_ADECUACION_FCV68127*CONTROL_FCV68127-(x[j-1]+((h)*k3)))/TAO_FCV68127;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIFCV68127<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}

double FCV68128 (double K_ADECUACION_FCV68128, double CONTROL_FCV68128, double TAO_FCV68128, double CIFCV68128)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIFCV68128;

  for (j=1;j<25;j++){
    k1= (K_ADECUACION_FCV68128*CONTROL_FCV68128-x[j-1])/TAO_FCV68128;
    k2= (K_ADECUACION_FCV68128*CONTROL_FCV68128-(x[j-1]+((h/2)*k1)))/TAO_FCV68128;
    k3= (K_ADECUACION_FCV68128*CONTROL_FCV68128-(x[j-1]+((h/2)*k2)))/TAO_FCV68128;  
    k4= (K_ADECUACION_FCV68128*CONTROL_FCV68128-(x[j-1]+((h)*k3)))/TAO_FCV68128;

      x[j]=x[j-1]+((h/6)+(k1+(2*k2)+(2*k3)+k4));
  }
  if (CIFCV68128<0.0001)
  {

  x[0]=0;
  }
  else 
  {
  x[0]=x[j-1];

  }
	return x[0];
}


//***********************************************************************************************************************************//

//*****************************************EL TATA Y EL COCHI <3 SE AMAN*************************************************************//

double Xvalvulas(double XI, double CIVal, double TaoVal, double Xmax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIVal;

    for (j=1;j<25;j++)
    {
        k1=((Xmax)-(x[j-1]))/TaoVal;
        k2=((Xmax)-(x[j-1]+(h*k1/2)))/TaoVal;
        k3=((Xmax)-(x[j-1]+(h*k2/2)))/TaoVal;
        k4=((Xmax)-(x[j-1]+(h*k3)))/TaoVal;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double Accion_I(double ki,double error,double CI)
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

double Accion_P(double kp,double error)
{
    double Prop;

    Prop=kp*error;

    return Prop;
}

double Accion_PI (double I,double P)
{
    double pi;

    pi=P+I;

    return pi;
}

double Error_PI (double Pin_v1,double SP_Pin)
{
    double Error;

    Error=SP_Pin-Pin_v1;

    return Error;
}


double Xvalvcontrol1_v1(double Segnal,double CIVal, double TaoVal, double Xmax)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIVal;

    for (j=1;j<25;j++)
    {
        k1=((Segnal*Xmax)-(x[j-1]))/TaoVal;
        k2=((Segnal*Xmax)-(x[j-1]+(h*k1/2)))/TaoVal;
        k3=((Segnal*Xmax)-(x[j-1]+(h*k2/2)))/TaoVal;
        k4=((Segnal*Xmax)-(x[j-1]+(h*k3)))/TaoVal;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double control(double control_PI, double apertura_valvula)
{
 double C_de_apertura;

 C_de_apertura= apertura_valvula*control_PI;

 return C_de_apertura;

}

double VelocidadCompresor(double CIMotorCompresor, double TaoMotor, double VelMax, int onoff)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIMotorCompresor;

    for (j=1;j<25;j++)
    {
        k1=((VelMax*onoff)-(x[j-1]))/TaoMotor;
        k2=((VelMax*onoff)-(x[j-1]+(h*k1/2)))/TaoMotor;
        k3=((VelMax*onoff)-(x[j-1]+(h*k2/2)))/TaoMotor;
        k4=((VelMax*onoff)-(x[j-1]+(h*k3)))/TaoMotor;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double Compresor(double TI,double CI, double Gasin_Cp, double Masa_Cv, double Potencia)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CI;

    for (j=1;j<25;j++)
    {

       k1=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])))/Masa_Cv;
       k2=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k1/2)))/Masa_Cv;
       k3=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k2/2)))/Masa_Cv;
       k4=(((Gasin_Cp*TI)+Potencia)-((Gasin_Cp*x[j-1])+(h*k3)))/Masa_Cv;

       x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double HEX (double TIHEX, double CIHEX, double GasinCpHEX,double GasoutCpHEX, double UA, double Tamb, double Masa_Cv_Hex)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIHEX;

    for (j=1;j<25;j++)
    {
       k1=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasoutCpHEX)*x[j-1])))/Masa_Cv_Hex;
       k2=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasoutCpHEX)*(x[j-1]+(h*(k1/2))))))/Masa_Cv_Hex;
       k3=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasoutCpHEX)*(x[j-1]+(h*(k2/2))))))/Masa_Cv_Hex;
       k4=(((UA*Tamb)+(GasinCpHEX*TIHEX))-(((UA+GasoutCpHEX)*(x[j-1]+(h*k3)))))/Masa_Cv_Hex;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double LubComp (double TinAceite, double CITAceite, double AceiteinCp, double AceiteoutCp, double Masa_Cv_Aceite, double DisVis)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CITAceite;

    for (j=1;j<25;j++)
    {
        k1=(((DisVis)+(AceiteinCp*TinAceite))-(((AceiteoutCp)*x[j-1])))/Masa_Cv_Aceite;
        k2=(((DisVis)+(AceiteinCp*TinAceite))-(((AceiteoutCp)*(x[j-1]+(h*(k1/2))))))/Masa_Cv_Aceite;
        k3=(((DisVis)+(AceiteinCp*TinAceite))-(((AceiteoutCp)*(x[j-1]+(h*(k2/2))))))/Masa_Cv_Aceite;
        k4=(((DisVis)+(AceiteinCp*TinAceite))-(((AceiteoutCp)*(x[j-1]+(h*k3)))))/Masa_Cv_Aceite;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double Nivel(double CIFIL, double Gasin_FIL, double Humedad, double EtaFIL, double Area_DensiAgua)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIFIL;

    for (j=1;j<25;j++)
    {
       k1=((Gasin_FIL*Humedad*EtaFIL))/Area_DensiAgua;
       k2=(((Gasin_FIL*Humedad*EtaFIL)+(h*k1/2))/Area_DensiAgua);
       k3=((Gasin_FIL*Humedad*EtaFIL)+(h*k2/2))/Area_DensiAgua;
       k4=((Gasin_FIL*Humedad*EtaFIL)+(h*k3)/Area_DensiAgua);

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double TempChumaceraEmpujeMotor(double kL, double CITac_out, double CITmetal_empuje, double CP_metal_Masa_metal,double DisVis)
{
    int j;
    double x[26];
    double h=0.05/25;
    double k1,k2,k3,k4;

    x[0]=CITmetal_empuje;

    for(j=1;j<25;j++)
    {
        k1=(DisVis+((kL*CITac_out)-(kL*x[j-1])))/(CP_metal_Masa_metal);
        k2=(DisVis+((kL*CITac_out)-(kL*(x[j-1]+((h/2)*k1)))))/(CP_metal_Masa_metal);
        k3=(DisVis+((kL*CITac_out)-(kL*(x[j-1]+((h/2)*k2)))))/(CP_metal_Masa_metal);
        k4=(DisVis+((kL*CITac_out)-(kL*(x[j-1]+(h*k3)))))/(CP_metal_Masa_metal);


        /*k1=((h_chuma*As_metal*(CITac_out-x[j-1]))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k2=((h_chuma*As_metal*(CITac_out-(x[j-1]+((h/2)*k1))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k3=((h_chuma*As_metal*(CITac_out-(x[j-1]+((h/2)*k2))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);
        k4=((h_chuma*As_metal*(CITac_out-(x[j-1]+(h*k3))))+((Viscosidad_AreaContacto*((Diametro_eje*Pi*VelocidadAngular)*(Diametro_eje*Pi*VelocidadAngular)))/(2*EspesorLub)))/(CP_metal_Masa_metal);*/

        x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+(k4)));
    }

    x[0]=x[j-1];
    return x[0];
}

double VelocidadBomba(double CIBomba, double TaoBomba, double VelMax, int onoffBomLub, int FallaBomLub)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIBomba;

    for (j=1;j<25;j++)
    {
        k1=((VelMax*onoffBomLub*FallaBomLub)-(x[j-1]))/TaoBomba;
        k2=((VelMax*onoffBomLub*FallaBomLub)-(x[j-1]+(h*k1/2)))/TaoBomba;
        k3=((VelMax*onoffBomLub*FallaBomLub)-(x[j-1]+(h*k2/2)))/TaoBomba;
        k4=((VelMax*onoffBomLub*FallaBomLub)-(x[j-1]+(h*k3)))/TaoBomba;

        x[j]= x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
    }
    x[0]= x[j-1];
    return x[0];
}

double Vibraciones(double A,double B,double C,double D,double *CIDesplazamiento,double *CIVelDes,double VelAngular,double Tiempo)
{
    int j;
    double x[26];
    double x1[26];
    double h=0.05/25;
    double k1,k2,k3,k4,l1,l2,l3,l4;
//    Tiempo = 0;
//    double res[2];

   // qDebug()<<"Recibo: "<< *CIDesplazamiento<<" , "<<*CIVelDes;

    x[0]=*CIDesplazamiento;
    x1[0]=*CIVelDes;

    for(j=1;j<25;j++)
    {
       // qDebug()<<"Valores iniciales del For-> x["<<j-1<<"] = "<<x[j-1]<<" x1["<<j-1<<"] = "<<x1[j-1]<<Tiempo;
        k1=h*x1[j-1];
        l1=h*(((A*cos(Tiempo*VelAngular))-(B*x[j-1])-(C*x1[j-1]))/D);
        //qDebug()<<"\tk1 = "<<k1<<" l1 = "<<l1;
        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*((A*cos((Tiempo+(h/2))*VelAngular)-(B*(x[j-1]+(0.5*k1)))-(C*(x1[j-1]+(0.5*l1))))/D);
        //qDebug()<<"\tk2 = "<<k2<<" l2 = "<<l2;
        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(((A*cos((Tiempo+(h/2))*VelAngular))-(B*(x[j-1]+(0.5*k2)))-(C*(x1[j-1]+(0.5*l2))))/D);
        //qDebug()<<"\tk3 = "<<k3<<" l3 = "<<l3;
        k4=h*(x1[j-1]+l3);
        l4=h*(((A*cos((Tiempo+h)*VelAngular))-(B*(x[j-1]+k3))-(C*(x1[j-1]+l3)))/D);
       // qDebug()<<"\tk4 = "<<k4<<" l4 = "<<l4;

        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);
        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);

        //qDebug()<<"Valores FINALES-> x["<<j<<"] = "<<x[j]<<" x1["<<j<<"] = "<<x1[j];
//        Tiempo+=0.1;
    }

    *CIDesplazamiento = x[j-1];
    *CIVelDes = x1[j-1];

   // qDebug()<<"Regreso: "<< *CIDesplazamiento<<" , "<<*CIVelDes;


    return x1[j-1];
}

//***********************************************************************************************************************************//




//funcion de entrada de ejecucion  
 int main0(int pars) 
{
	arc = fopen("C:/prog.csv", "a");
	arc1 = fopen("C:/prog1.csv", "a");
	arc2 = fopen("C:/prog2.csv", "a");
	arc3 = fopen("C:/prog3.csv", "a");
	arc4 = fopen("C:/prog4.csv", "a");
	arc5 = fopen("C:/prog5.csv", "a");
	arc6 = fopen("C:/prog6.csv", "a");
	arc7 = fopen("C:/prog7.csv", "a");
	arc8 = fopen("C:/prog8.csv", "a");
	arc9 = fopen("C:/prog9.csv", "a");
	arc10 = fopen("C:/prog10.csv", "a");
	arc11 = fopen("C:/prog11.csv", "a");
	arc12 = fopen("C:/prog12.csv", "a");
	arc13 = fopen("C:/prog13.csv", "a");
	arc14 = fopen("C:/prog14.csv", "a");
	arc15 = fopen("C:/prog15.csv", "a");
	arc16 = fopen("C:/prog16.csv", "a");
	arc17 = fopen("C:/prog17.csv", "a");
	arc18 = fopen("C:/prog18.csv", "a");
	arc19 = fopen("C:/prog19.csv", "a");
	arc20 = fopen("C:/prog20.csv", "a");
	arc21 = fopen("C:/prog21.csv", "a");
	arc22 = fopen("C:/prog22.csv", "a");
	arc23 = fopen("C:/prog23.csv", "a");
	arc24 = fopen("C:/prog24.csv", "a");
	arc25 = fopen("C:/prog25.csv", "a");
	arc26 = fopen("C:/prog26.csv", "a");
	arc27 = fopen("C:/prog27.csv", "a");
	arc28 = fopen("C:/prog28.csv", "a");
	arc29 = fopen("C:/prog29.csv", "a");

	if(arc == NULL||arc1==NULL||arc2==NULL||arc3==NULL||arc4==NULL||arc5==NULL||arc6==NULL||arc7==NULL||arc8==NULL||arc9==NULL||arc10==NULL||arc11==NULL||arc12==NULL||arc13==NULL||arc14==NULL||arc15==NULL||arc16==NULL||arc17==NULL||arc18==NULL||arc19==NULL||arc20==NULL||arc21==NULL||arc22==NULL||arc23==NULL||arc24==NULL||arc25==NULL||arc26==NULL||arc27==NULL||arc28==NULL||arc29==NULL)
		{
			return 0;
		}

		fprintf(arc, "Temperatura_entrada_compresor_baja;%f\n",TEMPERATURA_ENTRADA_COMPRESOR_BAJA);
		fprintf(arc1, "Temperatura_salida_compresor_baja;%f\n",TEMPERATURA_SALIDA_COMPRESOR_BAJA);
		fprintf(arc2, "Presion_entrada_compresor_baja;%f\n",PRESION_ENTRADA_COMPRESOR_BAJA);
		fprintf(arc3, "Presion_salida_compresor_baja;%f\n",PRESION_SALIDA_COMPRESOR_BAJA);

		fprintf(arc4, "Temperatura_salida_compresor_alta;%f\n",TEMPERATURA_SALIDA_COMPRESOR_ALTA);
		fprintf(arc5, "Presion_salida_compresor_alta;%f\n",PRESION_SALIDA_COMPRESOR_ALTA);
		fprintf(arc6, "Temperatura_entrada_turbina_alta;%f\n",TEMPERATURA_ENTRADA_TURBINA_ALTA);
		fprintf(arc7, "Presion_entrada_turbina_alta;%f\n",PRESION_ENTRADA_TURBINA_ALTA);

		fprintf(arc8, "Presion_salida_turbina_alta;%f\n",PRESION_SALIDA_TURBINA_ALTA);
		fprintf(arc9, "Temperatura_salida_turbina_alta;%f\n",TEMPERATURA_SALIDA_TURBINA_ALTA);
		fprintf(arc10, "Presion_salida_turbina_baja;%f\n",PRESION_SALIDA_TURBINA_BAJA);
		fprintf(arc11, "Temperatura_salida_turbina_baja;%f\n",TEMPERATURA_SALIDA_TURBINA_BAJA);

		fprintf(arc12, "Tenf;%f\n",Tenf);
		fprintf(arc13, "TRTA;%f\n",TRTA);
		fprintf(arc14, "TRTB;%f\n",TRTB);
		fprintf(arc15, "TRCA;%f\n",TRCA);

		fprintf(arc16, "TRCB;%f\n",TRCB);
		fprintf(arc17, "TCTA;%f\n",TCTA);
		fprintf(arc18, "TCTB;%f\n",TCTB);
		fprintf(arc19, "TCCA;%f\n",TCCA);

		fprintf(arc20, "TCCB;%f\n",TCCB);
		fprintf(arc21, "POTENCIA_CB;%f\n",POTENCIA_CB);
		fprintf(arc22, "POTENCIA_TA;%f\n",POTENCIA_TA);
		fprintf(arc23, "POTENCIA_CA;%f\n",POTENCIA_CA);

		fprintf(arc24, "POTENCIA_TB;%f\n",POTENCIA_TB);
		fprintf(arc25, "TPOTENCIA_MECf\n",POTENCIA_MEC);
		fprintf(arc26, "TORQUE_CB;%f\n",TORQUE_CB);
		fprintf(arc27, "TORQUE_TA;%f\n",TORQUE_TA);
		fprintf(arc28, "TORQUE_CA;%f\n",TORQUE_CA);
		fprintf(arc29, "TORQUE_TB;%f\n",TORQUE_TB);


//ejemplo de ejecucion...genera la raiz cuadrada

//Setdouble(sqrt((double)i),i);

//Región para llamar todas las funciones de los programas.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////

	errorPI_AH=(SetPoint_AH-CITempAceiteTanque_AH)*OnOffCalentador_AH;
    Integral_AH=I(ki_AH,errorPI_AH,CIInt_AH);
    Proporcional_AH=P(kp_AH,errorPI_AH);
    CPI_AH=PI(Proporcional_AH,Integral_AH);
    Sat_AH=Saturacion(CPI_AH,LInf_AH,LSup_AH);
    WElec_AH=Sat_AH;
    //qDebug()<<errorPI<<CIInt<<SetPoint<<CITempAceiteTanque;
    //if(OnOffBomba==1)
    //{
        FlujoInTanque_AH=(0.045424/0.0454249)*FlujoBombS_AH;
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
	if((PresionBombS_AH-Patm)>21998.190789)
	{
		N1N34_BI_PDSHH1600=0;
	}
	else
	{
		N1N34_BI_PDSHH1600=1;
	}
    PotenciaBomba_AH=PotBomba(out_HYD_STRT_MOT1615[1],PotMaxBomba_AH,TaoBomba_AH,CIPotBomba_AH,FallaBomb_AH)*N1N34_BI_PDSHH1600;
    PresionBombS_AH=(2413165.052609/PotMaxBomba_AH)*CIPotBomba_AH;
	if(FlujoBombS_AH>0.03 && PresionBombS_AH<1723689.323292)
	{
		N1N34_BI_PSLL1605=1;
	}
	else
	{
		N1N34_BI_PSLL1605=0;
	}
    FlujoBombS_AH=(0.0454249/PotMaxBomba_AH)*CIPotBomba_AH;
    PresionBombP_AH=(((33439572.871867+PresionBombS_AH)/PotMaxBomba_AH)*CIPotBomba_AH)*Variador_AH;
    FlujoBombP_AH=((0.0454249/PotMaxBomba_AH)*CIPotBomba_AH)*Variador_AH;
    FlujoOutTanque_AH=FlujoBombS_AH;
    Nivel_Tanque_AH=NivelTanque(FlujoInTanque_AH,FlujoOutTanque_AH,LargoTanque_AH,AnchoTanque_AH,CINivelTanque_AH);
	if(CINivelTanque_AH<0.1524)
	{
		N1N34_BI_LSLL1601=1;
	}
	else
	{
		N1N34_BI_LSLL1601=0;
	}
    MasaAceite_AH=(CINivelTanque_AH*LargoTanque_AH*AnchoTanque_AH)*DensidadAceite_AH;
    TempAceiteTank_AH=TempAceiteTanque(WElec_AH,UTanque_AH,TempAmbiente,(FlujoInTanque_AH*CpAceite_AH),CITempAceiteAH,(FlujoOutTanque_AH*CpAceite_AH),(MasaAceite_AH*CpAceite_AH),CITempAceiteTanque_AH);
	if(CITempAceiteTanque_AH<21.11111)
	{
		N1N34_BI_TSH1603=1;
	}
	else
	{
		N1N34_BI_TSH1603=0;
	}
///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////Intercambiador////////////////////////////////////////////////
    PotenciaVentilador_AH=PotVentilador(OnOffVentilador_AH,PotMaxVentilador_AH,TaoVentilador_AH,CIPotVentilador_AH,FallaVent_AH);
    VelocidadVentilador_AH=(1800/PotMaxVentilador_AH)*CIPotVentilador_AH;
    UInter_AH=(25.0/1800.0)*VelocidadVentilador_AH;
    
    if(CITempAceiteAH<322.15 && OnOffVentilador_AH==0)
    {
        TempAceiteIntercambiador_AH=0;
        CITempAceiteInter_AH=0;
    }
    else
    {
        CITempAceiteInter_AH=CITempAceiteAH;
        MasaAceiteInter_AH=MAceiteAH;
///////***********************PROBLEMAS EN EL INTERCAMBIADOR!!!***************************************///////////////
        TempAceiteIntercambiador_AH=TempAceiteInter(UInter_AH,TempAmbiente,(0.333116666*CpAceite_AH),371.6,(0.333116666*CpAceite_AH),(0.333116666*CpAceite_AH),CITempAceiteInter_AH);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //qDebug()<<UInter<<TempAmbiente<<(0.333116666*CpAceite)<<CpAceite<<CITempAceiteAH<<(0.333116666*CpAceite)<<CpAceite<<MasaAceiteInter<<CpAceite<<CITempAceiteInter;

    }
///////////////////////////////////////////////////////////////////////////////////////////
    VelocidadArranHidra=(VelArranHidra(VelocidadMaxAH,TaoAH,CIVelArranHidra)/(33439572.871867+PresionBombS_AH))*PresionBombP_AH;
    TorqueAH=(4000*VelocidadArranHidra);

    if(OnOffBomba_AH==0)
    {
        CITempMetalAH=298.15;
        CITempAceiteAH=0;
        TempAceiteAH=0;
    }
    else
    {
        TempMetalAH=TempMetalArranHidra(hMetal_AH,CITempAceiteTanque_AH,VelocidadArranHidra,(Mmetal_AH*CpMetal_AH),ViscosidadAceite_AH,eLub_AH,Diametro_AH,CITempMetalAH);
        TempAceiteAH=TempAceiteArranHidra(hMetal_AH,CITempMetalAH,FlujoBombP_AH,CpAceite_AH,DensidadAceite_AH,TempAceiteTank_AH,(MAceiteAH*CpAceite_AH),CITempAceiteAH);
		if(CITempAceiteTanque_AH>82.2222)
		{
			N1N34_BI_TSH1602=1;
		}
		else
		{
			N1N34_BI_TSH1602=0;
		}
    }

    if(OnOffCalentador_AH==0)
    {
        CIInt_AH=0;
    }
    else
    {
        CIInt_AH=Integral_AH;
    }

////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//******************************************EL ULISES ES PUÑAL Y LE GUSTA POR ATRAS***********************************************//
Densidad_aire = Presion_atm/(R_aire*TambK);
///////////////////////////////////////////////////////////////////////////////////////////////////

    // sistema del chiller

    Vel_BombaA = VelocidadBomba(CI_VelA,Tao_bombaA,Vel_maxBombaA)*OnOffBombaChiller;
    WBombaA = (1.341*CI_VelA*ParInducidoMotorBomba*2*3.1416)/60000; // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    Flujo_in_agua=(CI_VelA/Vel_maxBombaA)*30;//flujo maximo 30 kg/s
    if(Flujo_in_agua==0)
    {
        PresionFinalBomba=0;
    }
    else
    {
        PresionFinalBomba = (((WBombaA*Densidad_agua)/Flujo_in_agua)+PI_A)*0.145;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    if((FallaVentilador == 1&& AutomaticoVent == 1)||FallaVentilador==1&&ManualVent==1&&StartManualVent==1)
    {
        onoffVentTurb = 1;
    }
    else if(FallaVentilador==0||StopManualVent==1 )
    {
        onoffVentTurb = 0;
    }
    VelFinalVenti = VelocidadVenti(CI_VentiVel,Tao_Ventilador,VelMaxVenti,onoffVentTurb)*FallaVentilador;
    VelAireIn = (RadioMedio*(CI_VentiVel*0.1047))/Angulos;  // 0.1047 factor de conversion de RPM a Rad/seg
    WVenti =(2*3.1416*CI_VentiVel*ParInducidoMotorVentilador)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    Flujo_Aire_inTur = Densidad_aire*VelAireIn*Area_Ventilador;
    PDSH64060 = (Flujo_Aire_inTur*Viscosidad_Aire*Longitud_filtro)/(Densidad_aire*AreafilB*Permeabilidad);
    PDSH64060_mmH2O = PDSH64060*101.97;           // 101.97 facto de conversion a mmH2O
    PDSH64060_inH2O = PDSH64060*4.014;            // 4.014 factor de conversion a inH2O
    CI_PI_Venti = (CIMasaTurbina*R_aire*Tem_fin_64071/VolCuartoTurb);
    Dif_PI_VentiTur = (WVenti*Densidad_aire)/(Flujo_Aire_inTur);
    Dif_PI_VentiTur_mmH2O = Dif_PI_VentiTur*101.9;
    Dif_PI_VentiTur_inH2O = Dif_PI_VentiTur*4.014;

	//NO LE HAGAS CASO A MARTIN, POR QUE NO CONSIDERA LOS MANUALES, REPETIR PARA CASO DE VENTILADOR B
    FMaire = Flujo_Aire_inTur + Flujo_Aire_inTur_B;//[kg/s]

    if((FallaVentiGen == 1 && AutomaticoVentGen == 1)||FallaVentiGen==1&&ManualVentGen==1&&StartManualVentGen==1)
    {
        onoffVentGen = 1;
    }
    else if(FallaVentilador==0||StopManualVent==1 )
    {
        onoffVentGen = 0;
    }

    VelFinalVentiGen = VelocidadVenti(CI_VentiVelGen,Tao_VentiGen,VelMaxVentiGen,onoffVentGen)*FallaVentiGen;
    Flujo_Aire_inGen = (Densidad_aire*RadioMedioGen*(CI_VentiVelGen*0.1047)*Area_VentiladorGen)/AngulosGen;  // 0.1047 factor de conversion de RPM a Rad/seg
    WVentiGen =(2*3.1416*CI_VentiVelGen*ParInducidoMotorVentiGen)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.*/
    VelAireInGen = Flujo_Aire_inGen/Densidad_aire* Area_VentiladorGen;

    if(Calentamiento == 1)
    {
       if(Flujo_in_agua>0)
       {
           Potencia_resistencia = resistencia(CIRes,TaoRes,Potencia_resistenciaMax);
       }
       else
       {
           Potencia_resistencia = 0;
       }

       Temperatura_final_Cal = Calentador(TambK,CICale,(Flujo_in_agua*Cp_agua),(UCal*AreaCal),TambK,(MasaCal*Cp_agua),Potencia_resistencia);

       TinHexAgua = CICale;

    }
    if (Enfriamiento == 1)
    {
       if(Flujo_in_agua>0)
       {
           Potencia_frigorifica = frigorifico(CI_Potencia_frigorifica,Tao_Potencia_frigorifica,Potencia_frigorifica_Max);
       }
       else
       {
           Potencia_frigorifica = 0;
       }
       Temperatura_final_Evap = Evaporador(TemperaturaInicial,CIEvap,(Flujo_in_agua*Cp_agua),(UEvap*AreaEvap),TambK,(MasaEvap*Cp_agua),CI_Potencia_frigorifica);
       TinHexAgua = CIEvap;
    }
    else if(Calentamiento==0 && Enfriamiento==0)
    {
       Temperatura_final_Evap =TambK;
       TinHexAgua=TambK;
    }

    // verifcar si el flujo de aire en ambos casos es el de los ventiladores de la turbina, ya que el aire al compresor es variable pproporcionada por ulises de acuerdo al DTI son la TE 6499 y TE 6450

    Tem_fin_6450 = HEX_Aire(TambK,CIAireA,(Flujo_Aire_inTur*Cp_aire),(AreaHEX*UHEX),TinHexAgua,(MasaHEXAire*Cv_aire),TaoHexCarcasa);
    Tem_fin_6499 = HEX_Aire(TambK,CIAireB,(Flujo_Aire_inTur*Cp_aire),(AreaHEX*UHEX),TinHexAgua,(MasaHEXAire*Cv_aire),TaoHexCarcasa);
    Tem_fin_64072 = HEX_Aire(TambK,CIAireVentA,(Flujo_Aire_inTur*Cp_aire),(8),TinHexAgua,(MasaHEXAire*Cv_aire),TaoHexCarcasa);  // EL VALOR 8 REPRESNTA LA MITAD DE LA VARIABLE (AreaHEX*UHEX) YA QUE AL PARECER EN EL DTI SE ENTIENDE QUE ESTE AIRE NO PASA DIRECTAMENTE POR EL INTERCAMBIADOR PERO SI LE AFECTA
    Tem_fin_64071 = HEX_Aire(TambK,CIAireVentB,(Flujo_Aire_inTur*Cp_aire),(8),TinHexAgua,(MasaHEXAire*Cv_aire),TaoHexCarcasa);  // EL VALOR 8 REPRESNTA LA MITAD DE LA VARIABLE (AreaHEX*UHEX) YA QUE AL PARECER EN EL DTI SE ENTIENDE QUE ESTE AIRE NO PASA DIRECTAMENTE POR EL INTERCAMBIADOR PERO SI LE AFECTA
    Tem_fin_6402 = HEX_Aire(TambK,CITem6402,(Flujo_Aire_inGen*Cp_aire),(8),TinHexAgua,(MasaHEXAire*Cv_aire),TaoHexCarcasa);
    //Temperatura_aire_turbina = TurbinaCalor(Temperatura_final_AireA,Temperatura_final_AireA,(FlujoAireTurbina*Cp_aire),(Uturbina*Aturbina),TgasesTurbina,(MasaTurbina*Cv_aire),Vel_in_Aire,Vel_out_Aire,Pow_Res_Electrica);
    //Temperatura_aire_generador = Temperatura_aire_turbina*0.9;
    Densidad_aire = Presion_atm/(R_aire*TambK);
    PDSH6405 = (Flujo_Aire_inTur*Viscosidad_Aire*Longitud_filtro)/(Permeabilidad*AreafilA*Densidad_aire);
    PDSH64018 = (Flujo_Aire_inTur*Viscosidad_Aire*Longitud_filtro)/(Permeabilidad*Densidad_aire*AreafilC);
    //PDSL6407 = (Flujo_Aire_inGen*Viscosidad_Aire*Longitud_filtro)/(Permeabilidad*Densidad_aire*AreafilC);
    //PDSL6407 = Dif_PI_VentiGen - Dif_PI_Venti;
    //qDebug()<<Dif_PI_VentiGen<<Dif_PI_Venti<<WVenti<<WVentiGen;
    TambF = (1.8*TambK)-459.67;
    Tem_in_64030F = (1.8*TambK)-459.67;
    Tem_in_64032F = (1.8*TambK)-459.67;
    Tem_in_64031F = (1.8*TambK)-459.67;
    Tem_in_64033F = (1.8*TambK)-459.67;
    Tem_fin_6450_F = (1.8*Tem_fin_6450)-459.67;   // conversión a °F
    Tem_fin_6499_F = (1.8*Tem_fin_6499)-459.67;   // conversión a °F
    Tem_fin_64072_F = (1.8*Tem_fin_64072)-459.67;
    Tem_fin_64071_F = (1.8*Tem_fin_64071)-459.67;
    Tem_fin_6402_F = (1.8*Tem_fin_6402)-459.67;

    /****************************************************************************
    *                              calculo CALORES                              *
    ****************************************************************************/

    //1.1 CALCULO DE CALORES TOTALES PARA EFICIENCIA

    QRTB=(TgTB - TRTB) * U1RTB + (TRCB - TRTB) * U2RTB + (Tlub /*CARLOS*/ - TRTB) * U3RTB + (Tgenf - TRTB) * U4RTB ; //Calor total del Rotor de TURBINA DE BAJA
    QCTB=(Tenf - TCTB) * U1CTB + (TgTB - TCTB) * U2CTB; //Calor total de Carcasa de TURBINA DE BAJA
    QRCB=(TgCB - TRCB) * U1RCB + (TRTB - TRCB) * U2RCB + (Tlub /*CARLOS*/ - TRCB) * U3RCB;  //Calor total del Rotor de COMPRESOR DE BAJA
    QCCB=(Tenf - TCCB) * U1CCB + (TgCB - TCCB) * U2CCB;  //Calor total de Carcasa de COMPRESOR DE BAJA

    QRTA=(TgTA - TRTA) * U1RTA + (TRCA - TRTA) * U2RTA + (Tlub /*CARLOS*/- TRTA) * U3RTA + (TgenfA - TRTA) * U4RTA ; //Calor total del Rotor de TURBINA DE ALTA
    QCTA=(Tenf - TCTA) * U1CTA + (TgTA - TCTA) * U2CTA; //Calor total de Carcasa de TURBINA DE ALTA
    QRCA=(TgCA - TRCA) * U1RCA + (TRTA - TRCA) * U2RCA + (Tlub /*CARLOS*/ - TRCA) * U3RCA;  //Calor total del Rotor de COMPRESOR DE BAJA
    QCCA=(Tenf - TCCA) * U1CCA + (TgCA - TCCA) * U2CCA;  //Calor total de Carcasa de COMPRESOR DE ALTA

    QB = QRTB + QCTB + QRCB + QCCB;     //Calor total de BAJA
    QA= QRTA + QCTA + QRCA + QCCA;      //Calor Total de ALTA
	
	//1.2 TEMPERATURAS DE ROTORES Y CARCAZAS

    //COEFICIENTES DE COMPRESOR Y TURBINA DE BAJA

    U1RTB=(( W_TB / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 DE ROTOR DE TURBINA DE BAJA
    U3RTB=(( W_TB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 DE ROTOR DE TURBINA DE BAJA
    U4RTB=(( FLUJO_MASICO_TB/*Igualar con flujos de abajo*/ / F_MAX_ENF_U4RTB/*cte*/) * 98 + .02)*100;//F_MAX_ENF VARIABLE DE MANUEL

    U1CTB= ((FLUJO_MASICO_TB/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CTB/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE TURBINA DE BAJA
    U2CTB=(( W_TB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE TURBINA DE BAJA

    U1RCB=(( W_CB / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 ROTOR COMPRESOR DE BAJA
    U3RCB=(( W_CB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 ROTOR COMPRESOR DE BAJA

    U1CCB= ((FLUJO_MASICO_CB/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CCB/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE COMPRESOR DE BAJA
    U2CCB=(( W_CB / 3600 ) * .90 + .10) * 100;// COEFICIENTE 2 DE CARCASA DE COMPRESOR DE BAJA

    //COEFICIENTES DE COMPRESOR Y TURBINA DE ALTA

    U1RTA=(( W_TA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 DE ROTOR DE TURBINA DE ALTA
    U3RTA=(( W_TA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 DE ROTOR DE TURBINA DE ALTA
    U4RTA=(( FLUJO_MASICO_TA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U4RTA/*cte*/) * 98 + .02)*100;//F_MAX_ENF VARIABLE DE MANUEL

    U1CTA= ((FLUJO_MASICO_TA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CTA/*cte*/) * .90 + .10)*100;// COEFICIENTE 1 DE CARCASA DE TURBINA DE ALTA
    U2CTA=(( W_TA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE TURBINA DE ALTA

    U1RCA=(( W_CA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 ROTOR COMPRESOR DE ALTA
    U3RCA=(( W_CA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 3 ROTOR COMPRESOR DE ALTA

    U1CCA= ((FLUJO_MASICO_CA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CCA/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE COMPRESOR DE ALTA
    U2CCA=(( W_CA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE COMPRESOR DE ALTA

    //COEFICIENTES DEL HABITACULO
    Tchiller = ((Tem_fin_64072 + Tem_fin_64071)/2) - 273;//Tchiller[°C] y Tem_fin_64072[K]

    U1enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL
    U2enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL
    U3enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL
    U4enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL

	TGE = Temperatura_Generador( I_Generador,  R_Generador,  Ugen,  Taire, Tao_TempGE,  CITGE);		//TEMPERATURA DEL GENERADOR
	Texc = Temperatura_Excitacion ( Iexc,  Rexc,  Uexc,  Taire, Tao_Tempexc,  CITexc);//TEMPERATURA DE EXCITACION
	Taire = Temperatura_Aire ( Texc,  TGE,  Tchiller,  Flujo_masico, Uexc_aire, Ugen_aire, Tao_Tairege,  CITaire);//TEMPERATURA DEL AIRE EN EL HABITACULO DEL GENERADOR

    Tenf = Temperatura_de_Aire_en_el_Habitaculo(U1enf, TCTB, U2enf, TCCB, FMaire, Tchiller, U3enf, TCTA, U4enf, TCCA, menf/*cte*/, Cp_aire, CITenf);

    TRCA = Temperatura_Rotor_Compresor_de_Alta(TgCA,U1RCA, TCCA, U2RCA, TRTA, U3RCA, Tlub/*CARLOS*/, mRCA, CPmaterial, CITRCA); //TEMPERATURA ROTOR COMPRESOR DE ALTA
    TCCA = Temperatura_Carcasa_Compresor_de_Alta(U1CCA, Tenf, U2CCA, TgCA, mCCA, CPmaterial, CITCCA); // TEMPERATURA CARCASA COMPRESOR DE ALTA
    TRCB = Temperatura_Rotor_Compresor_de_Baja(TgCB,U1RCB, TCCB, U2RCB, TRTB, U3RCB, Tlub/*CARLOS*/, mRCB, CPmaterial, CITRCB); //TEMPERATURA ROTOR COMPRESOR DE BAJA
    TCCB = Temperatura_Carcasa_Compresor_de_Baja(U1CCB, Tenf, U2CCB, TgCB, mCCB, CPmaterial, CITCCB); // TEMPERATURA CARCASA COMPRESOR DE BAJA

    TRTB = Temperatura_Rotor_Turbina_de_Baja(U1RTB, TgTB, U2RTB, TRCB, U3RTB, Tlub/*CARLOS*/, U4RTB, Tgenf, mRTB, CPmaterial, CITRTB); //TEMPERATURA ROTOR TURBINA DE BAJA
    TCTB = Temperatura_Carcasa_Turbina_de_Baja(U1CTB, Tenf, U2CTB, TgTB, mCTB, CPmaterial, CITCTB); //TEMPERATURA CARCASA TURBINA DE BAJA
    TRTA = Temperatura_Rotor_Turbina_de_Alta(U1RTA, TgTA, U2RTA, TRCA, U3RTA, Tlub/*CARLOS*/, U4RTA, Tgenf, mRTA, CPmaterial, CITRTA); //TEMPERATURA ROTOR TURBINA DE ALTA
    TCTA = Temperatura_Carcasa_Turbina_de_Alta(U1CTA, Tenf, U2CTA, TgTA, mCTA, CPmaterial, CITCTA); // TEMPERATURA CARCASA TURBINA DE ALTA

    //1.3 EFICIENCIA Y POTENCIA MECANICA PARA GE

    POTENCIA_CB=(FLUJO_MASICO_GAS_VIGV*U_CB*(VT1_CB - VT2_CB));         //potencia consumida por COMPRESOR DE BAJA (-)
    TORQUE_CB= (RADIO_MEDIO_CB*FLUJO_MASICO_CB*(VT1_CB - VT2_CB));//Torque consumido por COMPRESOR DE BAJA (-)
    POTENCIA_CA=(FLUJO_MASICO_AIRE*U_CA*(VT1_CA - VT2_CA));         //Potencia consumida por COMPRESOR DE ALTA (-)
    TORQUE_CA= (RADIO_MEDIO_CA*FLUJO_MASICO_CA*(VT1_CA - VT2_CA));//Torque consumido por COMPRESOR DE ALTA (-)

    POTENCIA_TA= U_TA*FLUJO_MASICO_GAS * (VT2_TA - VT3_TA); //Potencia entregada por TURBINA DE ALTA (+)
    TORQUE_TA=U_TA*RADIO_MEDIO_TA*(VT2_TA- VT3_TA);		   //Torque entregada por TURBINA DE ALTA (+)
    POTENCIA_TB= U_TB*FLUJO_MASICO_GAS * (VT2_TB - VT3_TB); //Potencia entregada por TURBINA DE BAJA (+)
    TORQUE_TB=U_TB*RADIO_MEDIO_TB*(VT2_TB- VT3_TB);		   //Torque entregada por TURBINA DE BAJA (+)

    POTENCIA_MEC=POTENCIA_TB/*+*/ + POTENCIA_CB /*-*/ - QB; //Potencia Mecánica a entregar al GE


    /****************************************************************************
    *                              VELOCIDAD ANGULAR                            *
    ****************************************************************************/

    //1.1 CALCULO DE TORQUE PARA GIRO DE ROTOR TURBINA DE ALTAUUU

    //Torque_Arrancador_TA=Torque_Hidraulico*cte_TA;
    T_Giro_TA=Torque_Arracador_TA+TORQUE_CA+TORQUE_TA;//Torque total TA
	w1_TA= TORQUETA( K_ADECUACION_K1_ROTOR1_TA,  T_Giro_TA,  TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CITORQUE_TA,  CIw1_TA);//1er Orden
    W_TA= TORQUETA( K_ADECUACION_K1_ROTOR1_TA,  T_Giro_TA,  TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CITORQUE_TA,  CIw1_TA);//2do Orden; Velocidad angular en rpm

    //1.2 CALCULO DE TORQUE PARA GIRO DE ROTOR TURBINA DE BAJA


    if(A52_1==0 && A52_2==0)
	{
            //Torque_Arrancador_TB=Torque_Hidraulico*cte_TB;
            T_Giro_TB=Torque_Arracador_TB+TORQUE_CB+TORQUE_TB-TORQUE_Exc;//Torque total TB
            w1_TB= TORQUETA( K_ADECUACION_K1_ROTOR1_TA,  T_Giro_TA,  TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CITORQUE_TA,  CIw1_TA);//1er Orden
            W_TB= TORQUETA( K_ADECUACION_K1_ROTOR1_TA,  T_Giro_TA,  TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CITORQUE_TA,  CIw1_TA);//2do Orden; Velocidad angular en rpm
    }
    else if(A52_1==1 || A52_2==1)
    {
            W_TB=Frecuencia/60;
    }


    FLUJO_MASICO_GAS_VIGV=(RHO_AREA_1_CB/*cte*/ *AREA_1_CB_IGV * VN1_CB);// FLUJO MASICO COMPRESOR DE BAJA
    FLUJO_MASICO_ENF_CB= (DENSIDAD_FMENF_CB/*cte*/ * AREA_FMENF_CB * VELOCIDAD_FMENF_CB); // FLUJO MASICO DE ENFRIAMIENTO COMRESOR DE BAJA
    FLUJO_MASICO_OUT_CA= (DENSIDAD_FMOUT_CA/*cte*/ * AREA_FMOUT_CA * VELOCIDAD_FMOUT_CA);  //FLUJO MASICO SALIDA COMPRESOR DE BAJA
    FLUJO_MASICO_ENF_CA= (DENSIDAD_FMENF_CA/*cte*/ * AREA_FMENF_CA * VELOCIDAD_FMENF_CA); //FLUJO MASICO ENFRIAMIENTO COMPRESOR DE BAJA
    FLUJO_MASICO_AIRE= FLUJO_MASICO_GAS_VIGV - FLUJO_MASICO_OUT_CA - FLUJO_MASICO_ENF_CA - FLUJO_MASICO_ENF_CB - FLUJO_MASICO_SALIDAVBV; // FLUJO MASICO DE GAS
    //PURGA

    ST8A = ST8AFUN (K_ADECUACION_ST8A, FCV_68127, TAO_ST8A, CIST8A);
    CDPA = CDPAFUN (K_ADECUACION_CDPA, FCV_68128, TAO_CDPA, CICDPA);


    /****************************************************************************
    *                            calculo COMPRESORES                            *
    ****************************************************************************/
    //llamada de funcion runge kuta  para COMPRESOR DE BAJA presion
    ALFA1_CB=ALFA1CONTROLCB( K_ADECUACION_1_CB,   ALFA1_CONTROL_CB,  TAO_ALFA_1_CB,  CIALFA1); // FUNCION RUNGE KUTA ALFA 1 COMPRESOR DE BAJA
    AFCV_6872 = AREA1VBVCB (K_ADECUACION_AREA1_CA, FCV_6872,TAO_VBV_CA_A1, CIAREA1VBV);// FUNCION RUNGE KUTA AREA 1 COMPRESOR DE BAJA
    AREA_1_CB_IGV=AREA1IGVCB ( K_ADECUACION_AREA1_CB,  AFCV_6872, IGV_CONTROL_CB_A1,  TAO_IGV_CB_A1,  CIAREA1IGV); // COMPRESOR DE BAJA PRESION
    //CALCULO DE VARIABLES PARA COMPRESOR DE BAJA PRESION

    U_CB=RADIO_MEDIO_CB*W_CB; //CALCULO VELOCIDAD ANGULAR DE COMPRESOR DE BAJA
    VN1_CB=((U_CB/(tan(ALFA1_CB)*(1/(tan(BETA1_CB))))))/*AREA_1_CB_IGV*/; // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE BAJA

///////////////////////////////////////////////////////
    V1_CB=(VN1_CB/cos(ALFA1_CB));// velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE BAJA
    VT1_CB=V1_CB*tan(ALFA1_CB);// componente auxiliar en entrada de alabe rotor COMPRESOR DE BAJA
    VRB1_CB=VN1_CB/sin(BETA1_CB); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE BAJA
    VN2_CB=((AREA_1_CB/*cte*/*RHO_AREA_1_CB)/(AREA_2_CB/*cte*/*RHO_AREA_2_CB))*VN1_CB;  //QUEDA PENDEIENTE MODIFICAR EL AREA 1 DEBIDO A QUE ES VARIANTE DE CONTROL.
    ALFA2_CB=atan((U_CB/VN2_CB)-(1/tan(BETA2_CB))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA
    V2_CB=(VN2_CB/cos(ALFA2_CB)); // CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE BAJA
    VT2_CB=V2_CB*sin(ALFA2_CB); // COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor. COMPRESOR DE BAJA
    VRB2_CB=VN2_CB/sin(BETA2_CB); // componente auxiliar en salida de alabe rotor COMPRESOR DE BAJA
    VN3_CB=(((AREA_2_CB*RHO_AREA_2_CB)/(AREA_3_CB*RHO_AREA_3_CB))*VN2_CB); //Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE BAJA
    ALFA3_CB=atan((U_CB/VN3_CB)-(1/tan(BETA3_CB))); //QUEDA PENDEINTE DEBIDO A QUE TAMBIEN ES CONSIDERADA COMO ENTRADA
    V3_CB=(VN3_CB/cos(ALFA3_CB)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE BAJA
    VT3_CB=V3_CB*sin(ALFA3_CB); // componente auxiliar en salida de alabe estator.COMPRESOR DE BAJA
    VRB3_CB=VN3_CB/sin(BETA3_CB); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE BAJA
    DELTA_PRESION_CB=((RHO_DELTA_PRESION_CB/2*GRAVEDAD)*((VRB1_CB*VRB1_CB)-(VRB2_CB*VRB2_CB)))+((RHO_DELTA_PRESION_CB/2*GRAVEDAD)*((V2_CB*V2_CB)-(V3_CB*V3_CB)));// DELTA DE PRESION  COMPRESOR DE BAJA
    PRESION_ENTRADA_COMPRESOR_BAJA = Presion_atm -  PDSH6405 - PDI64070/*falta calcular*/;//Manuel
    PRESION_SALIDA_COMPRESOR_BAJA=(PRESION_ENTRADA_COMPRESOR_BAJA+ DELTA_PRESION_CB);//PRESION_SALIDA_COMPRESOR_BAJA=(PRESION_ENTRADA_COMPRESOR_BAJA/*Tata*/ + DELTA_PRESION_CB); //PRESION DE SALIDA DE COMPRESOR DE BAJA
    TEMPERATURA_ENTRADA_COMPRESOR_BAJA = ((Tem_fin_6499 + Tem_fin_6450)/2)-273;
    TEMPERATURA_SALIDA_COMPRESOR_BAJA = (TEMPERATURA_ENTRADA_COMPRESOR_BAJA/*Tata*/ + ((V3_CB*V3_CB)/2*CP_CB)); // TEMPERATURA DE SALIDA DE COMPRESOR DE BAJA

    // llamada de funcion runge kuta  para COMPRESOR DE ALTA presion
    ALFA1_CA=ALFA1CONTROLCA(K_ADECUACION_1_CA, ALFA1_CONTROL_CA, TAO_ALFA_1_CA,CIALFA1_CA)*Alfa1_ca_control;//SI LO REGULA CONTROL JUNTO CON AREA 1 PARA COMPRESOR DE ALTA
    AREA_1_CA= AREA1CA (K_ADECUACION_AREA1_CA, FCV_6871, TAO_CA_A1,CIAREA1_CA)*AREA1_CONTROL_CA;// CALCULO DE AREA 1 COMPRESOR DE BAJA
    //AREA 2 COMO PARAMETRO PARA REPARAMETRIZACION
    BETA_3_CA= BETA3CA (K_ADECUACION_BETA3_CA, FCV_6873, TAO_BETA3_CA, CIBETA3CA)*CONTROL_BETA3_CA_CONTROL;//CON ESTE SE REGULA PRESION DE ENTRADA HACIA CAMARA DE COMBUSTION
    // condiciones iniciales para COMPRESOR DE ALTA presion
    CIALFA1_CA=ALFA1_CA; //CONDICIONES INICIALES DE ALFA 1 COMPRESOR DE ALTA
    CIAREA1_CA=AREA_1_CA; // CONDICIONES INICIALES AREA 1 COMPRESOR DE ALTA
    CIBETA3CA=BETA_3_CA; // CONDICIONES INICIALES BETA 3 COMPRESOR DE ALTA
    //CALCULO DE VARIABLES PARA COMPRESOR DE ALTA PRESION

    U_CA=RADIO_MEDIO_CA*W_CA; //CALCULO VELOCIDAD ANGULAR DE COMPRESOR DE ALTA
    VN1_CA=(U_CA/(tan(ALFA1_CA)*(1/(tan(BETA1_CA)))));// COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE ALTA
    V1_CA=(VN1_CA/cos(ALFA_1_CA)); // velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE ALTA
    VT1_CA=V1_CA*sin(ALFA1_CA); // componente auxiliar en entrada de alabe rotor COMPRESOR DE ALTA
    VRB1_CA=VN1_CA/sin(BETA1_CA);  // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE ALTA
    VN2_CA=((AREA_1_CA*RHO_AREA_1_CA)/(AREA_2_CA*RHO_AREA_2_CA))*VN1_CA; // Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
    V2_CA=(VN2_CA/cos(ALFA2_CA));// CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE ALTA
    VT2_CA=V2_CA*sin(ALFA2_CA); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor COMPRESOR DE ALTA
    VRB2_CA=VN2_CA/sin(BETA2_CA); // componente auxiliar en salida de alabe rotor COMPRESOR DE ALTA
    VN3_CA=(((AREA_2_CA*RHO_AREA_2_CA)/(AREA_3_CA*RHO_AREA_3_CA))*VN2_CA); //Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE ALTA
    ALFA3_CA=atan((U_CA/VN3_CA)-(1/tan(BETA3_CA)));  //Angulo de flujo absoluto a la salida del alabe estator COMPRESOR DE ALTA.
    V3_CA=(VN3_CA/cos(ALFA3_CA)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE ALTA
    VT3_CA=V3_CA*sin(ALFA3_CA); // componente auxiliar en salida de alabe estator.COMPRESOR DE ALTA
    VRB3_CA=VN3_CA/sin(BETA3_CA); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE ALTA
    DELTA_PRESION_CA=((RHO_DELTA_PRESION_CA/2*GRAVEDAD)*((VRB1_CA*VRB1_CA)-(VRB2_CA*VRB2_CA)))+((RHO_DELTA_PRESION_CA/2*GRAVEDAD)*((V2_CA*V2_CA)-(V3_CA*V3_CA))); // DELTA DE PRESION  COMPRESOR DE ALTA
    PRESION_SALIDA_COMPRESOR_ALTA=(PRESION_SALIDA_COMPRESOR_BAJA/*PRESION_ENTRADA_COMPRESOR_ALTA*/+DELTA_PRESION_CA); //PRESION DE SALIDA DE COMPRESOR DE ALTA
    TEMPERATURA_SALIDA_COMPRESOR_ALTA=(TEMPERATURA_SALIDA_COMPRESOR_BAJA/*TEMPERATURA_ENTRADA_COMPRESOR_ALTA*/ + ((V3_CA*V3_CA)/2*CP_CA)); // TEMPERATURA DE SALIDA DE COMPRESOR DE ALTA

    /****************************************************************************
    *						calculo CAMARA DE COMBUSTION	*
    ****************************************************************************/

    // 1.1 ALGORITMO PARA CAMBIO DE COMPOSICION DEL COMBUSTIBLE DE ENTRADA

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**********************************************************************************************************
//    aux1=ui->lineEdit_1->text().toDouble();
    aux1=aux1/100.0;

    if ( aux1 < X_metano )
    {
       dif = X_metano - aux1;
       X_Nhexano = X_Nhexano + (dif/n);
       X_Propano = X_Propano + (dif/n);
       X_Ibutano = X_Ibutano + (dif/n);
       X_Nbutano = X_Nbutano + (dif/n);
       X_Neopentano = X_Neopentano + (dif/n);
       X_Ipentano = X_Ipentano + (dif/n);
       X_Npentano = X_Npentano + (dif/n);
       X_nitrogenoR = X_nitrogenoR + (dif/n);
       X_bioxidoR = X_bioxidoR + (dif/n);
       X_etano = X_etano + (dif/n);
    }
    else
    {
       dif = aux1 - X_metano;
       X_Nhexano = X_Nhexano - (dif/n);
       X_Propano = X_Propano - (dif/n);
       X_Ibutano = X_Ibutano - (dif/n);
       X_Nbutano = X_Nbutano - (dif/n);
       X_Neopentano = X_Neopentano - (dif/n);
       X_Ipentano = X_Ipentano - (dif/n);
       X_Npentano = X_Npentano - (dif/n);
       X_nitrogenoR = X_nitrogenoR - (dif/n);
       X_bioxidoR = X_bioxidoR - (dif/n);
       X_etano = X_etano - (dif/n);
    }

    coef_esq[0]=X_Nhexano;
    coef_esq[1]=X_Propano;
    coef_esq[2]=X_Ibutano;
    coef_esq[3]=X_Nbutano;
    coef_esq[4]=X_Neopentano;
    coef_esq[5]=X_Ipentano;
    coef_esq[6]=X_Npentano;
    coef_esq[7]=X_nitrogenoR;
    coef_esq[8]=X_metano;
    coef_esq[9]=X_bioxidoR;
    coef_esq[10]=X_Oxigeno;

    //POLINOMIOS DEL CAMBIO ENTALPIAS

    DH_Oxigeno =((33051.759*(((TemGas-TemAmb)/1000)))+(-20917.083*(pow((TemGas/1000),2)-pow((TemAmb/1000),2)))+(49341.367*(pow((TemGas/1000),3)-pow((TemAmb/1000),3)))+(-51255.572*(pow((TemGas/1000),4)-pow((TemAmb/1000),4)))+(29073.599*(pow((TemGas/1000),5)-pow((TemAmb/1000),5)))+(-8715.1202*(pow((TemGas/1000),6)-pow((TemAmb/1000),6)))+(1082.4395*(pow((TemGas/1000),7)-pow((TemAmb/1000),7))))/1000;
    DH_Agua_V =((27885.805*((TemGas-TemAmb)/1000))+(4221.5098*(pow((TemGas/1000),2)-pow((TemAmb/1000),2)))+(3995.099*(pow((TemGas/1000),3)-pow((TemAmb/1000),3)))+(-4023.058*(pow((TemGas/1000),4)-pow((TemAmb/1000),4)))+(2727.2546*(pow((TemGas/1000),5)-pow((TemAmb/1000),5)))+(-1078.8167*(pow((TemGas/1000),6)-pow((TemAmb/1000),6)))+(169.87509*(pow((TemGas/1000),7)-pow((TemAmb/1000),7)))+(731.476*(log(TemGas/1000)-log(TemAmb/1000))))/1000;
    DH_nitrogeno =((28151.964*((TemGas-TemAmb)/1000))+(6598.5613*(pow((TemGas/1000),2)-pow((TemAmb/1000),2)))+(-24827.371*(pow((TemGas/1000),3)-pow((TemAmb/1000),3)))+(47495.9*(pow((TemGas/1000),4)-pow((TemAmb/1000),4)))+(-45323.358*(pow((TemGas/1000),5)-pow((TemAmb/1000),5)))+(23673.626*(pow((TemGas/1000),6)-pow((TemAmb/1000),6)))+(-6520.071*(pow((TemGas/1000),7)-pow((TemAmb/1000),7)))+(743.59419*(pow((TemGas/1000),8)-pow((TemAmb/1000),8))))/1000;
    DH_bioxido =((17640.049*((TemGas-TemAmb)/1000))+(46863.472*(pow((TemGas/1000),2)-pow((TemAmb/1000),2)))+(-43458.218*(pow((TemGas/1000),3)-pow((TemAmb/1000),3)))+(38492.636*(pow((TemGas/1000),4)-pow((TemAmb/1000),4)))+(-27999.206*(pow((TemGas/1000),5)-pow((TemAmb/1000),5)))+(13858.643*(pow((TemGas/1000),6)-pow((TemAmb/1000),6)))+(-3939.7868*(pow((TemGas/1000),7)-pow((TemAmb/1000),7)))+(478.72667*(pow((TemGas/1000),8)-pow((TemAmb/1000),8))))/1000;
    DH_Nhexano = ((3.025*(TemGas-TemAmb))+(0.053722*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000016662*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Propano = ((1.213*(TemGas-TemAmb))+(0.028785*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000008824*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_metano = ((1.702*(TemGas-TemAmb))+(0.009081*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000002164*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Nbutano = ((1.935*(TemGas-TemAmb))+(0.036915*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000011402*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Ibutano = ((1.935*(TemGas-TemAmb))+(0.036915*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000011402*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Neopentano = ((2.464*(TemGas-TemAmb))+(0.045351*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Ipentano = ((2.464*(TemGas-TemAmb))+(0.045351*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_Npentano = ((2.464*(TemGas-TemAmb))+(0.045351*(pow(TemGas,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;
    DH_etano = ((1.131*(TemGas-TemAmb))+(0.019225*(pow(TemGas,2)-pow(TemAmb,2))/2)+( -0.000005561*(pow(TemGas,3)-pow(TemAmb,3))/3))*8.314/1000;




    //BALANCE DE MASA ESTEQUEOETRICO

    X_bioxidoP = (6*X_Nhexano)+(3*X_Propano)+(4*X_Ibutano)+(4*X_Nbutano)+(5*X_Neopentano)+(5*X_Ipentano)+(5*X_Npentano)+(X_metano)+(2*X_etano)+X_bioxidoR;
    X_Agua_L = ((14*X_Nhexano)+(8*X_Propano)+(10*X_Ibutano)+(10*X_Nbutano)+(12*X_Neopentano)+(12*X_Ipentano)+(12*X_Npentano)+(4*X_metano)+(6*X_etano))*0.5;
    X_Oxigeno = ((2*X_bioxidoP)+X_Agua_L-(2*X_bioxidoR))*0.5;
    X_nitrogenoP = X_nitrogenoR+(3.76*X_Oxigeno);

    //MASA MOLAR DEL GAS

    M_gas = (X_Nhexano*M_Nhexano)+(X_Propano*M_Propano)+(X_Ibutano*M_Ibutano)+(X_Nbutano*M_Nbutano)+(X_Neopentano*M_Neopentano)+(X_Ipentano*M_Ipentano)+(X_Npentano*M_Npentano)+(X_nitrogenoR*M_nitrogeno)+(X_metano*M_metano)+(X_bioxidoR*M_bioxido)+(X_etano*M_etano);

    //CPs

    Cp_nitrogeno =((28.151964*(pow((TemGas/1000),0)))+(13.197123*(pow((TemGas/1000),1)))+(-74.482113*(pow((TemGas/1000),2)))+(189.98363*(pow((TemGas/1000),3)))+(-226.6168*(pow((TemGas/1000),4)))+(142.04175*(pow((TemGas/1000),5)))+(-45.640429*(pow((TemGas/1000),6)))+(5.9487537*(pow((TemGas/1000),7))))/1000;
    Cp_bioxido =((17.640049*(pow((TemGas/1000),0)))+(93.726944*(pow((TemGas/1000),1)))+(-130.37466*(pow((TemGas/1000),2)))+(153.97055*(pow((TemGas/1000),3)))+(-139.99603*(pow((TemGas/1000),4)))+(83.151862*(pow((TemGas/1000),5)))+(-27.578508*(pow((TemGas/1000),6)))+(3.8298136*(pow((TemGas/1000),7))))/1000;
    Cp_Nhexano = ((3.025)+(0.053722*TemGas)+(-0.000016662*(pow(TemGas,2))))*8.314/1000;
    Cp_Propano = ((1.213)+(0.028785*TemGas)+(-0.000008824*(pow(TemGas,2))))*8.314/1000;
    Cp_metano = ((1.702)+(0.009081*TemGas)+(-0.000002164*(pow(TemGas,2))))*8.314/1000;
    Cp_Nbutano = ((1.935)+(0.036915*TemGas)+(-0.000011402*(pow(TemGas,2))))*8.314/1000;
    Cp_Ibutano = ((1.935)+(0.036915*TemGas)+(-0.000011402*(pow(TemGas,2))))*8.314/1000;
    Cp_Neopentano = ((2.464)+(0.045351*TemGas)+(-0.000014111*(pow(TemGas,2))))*8.314/1000;
    Cp_Ipentano = ((2.464)+(0.045351*TemGas)+(-0.000014111*(pow(TemGas,2))))*8.314/1000;
    Cp_Npentano = ((2.464)+(0.045351*TemGas)+(-0.000014111*(pow(TemGas,2))))*8.314/1000;
    Cp_etano = ((1.131)+(0.019225*TemGas)+(-0.000005561*(pow(TemGas,2))))*8.314/1000;
    Cp_gas = (((X_Nhexano*Cp_Nhexano)+(X_Propano*Cp_Propano)+(X_Ibutano*Cp_Ibutano)+(X_Nbutano*Cp_Nbutano)+(X_Neopentano*Cp_Neopentano)+(X_Ipentano*Cp_Ipentano)+(X_Npentano*Cp_Npentano)+(X_nitrogenoR*Cp_nitrogeno)+(X_metano*Cp_metano)+(X_bioxidoR*Cp_bioxido)+(X_etano*Cp_etano))*1000)/M_gas;

    //PODER CALORIFICO INFERIOR DE PRODUCTOS

    PCIp =(1/Z_Gas_seco)*(-(((X_bioxidoP-X_bioxidoR)*(HF_bioxido+DH_bioxido))+(X_Agua_L*(HF_Agua_V+DH_Agua_V))+(X_nitrogenoP*(DH_nitrogeno))-(X_Nhexano*(HF_Nhexano+DH_Nhexano))-(X_Propano*(HF_Propano+DH_Propano))-(X_Ibutano*(HF_Ibutano+DH_Ibutano))-(X_Nbutano*(HF_Nbutano+DH_Nbutano))-(X_Neopentano*(HF_Neopentano+DH_Neopentano))-(X_Ipentano*(HF_Ipentano+DH_Ipentano))-(X_Npentano*(HF_Npentano+DH_Npentano))-(X_metano*(HF_metano+DH_metano))-(X_etano*(HF_etano+DH_etano))-(X_Oxigeno*(HF_Oxigeno+DH_Oxigeno))-(X_nitrogenoP*(DH_nitrogeno))))*1000/(kJkg_Btulb*M_gas);

    //DENSIDAD Y DENSIDAD RELATIVA DEL COMBUSTIBLE

    Rhoideal = (M_gas*Pres_in)/(TRef*Ru);
    Rho_rel = M_gas/M_aire;

    //HUMEDAD RELATIVA

    X_Agua_Sat =  PreSatAgua/PreRef;

    //FACTOR DE COMPRESIBILIDAD SECO Y HUMEDO

    Z_Gas_seco = 1-((pow(((X_Nhexano*B_Nhexano)+(X_Propano*B_Propano)+(X_Ibutano*B_Ibutano)+(X_Nbutano*B_Nbutano)+(X_Neopentano*B_Neopentano)+(X_Ipentano*B_Ipentano)+(X_Npentano*B_Npentano)+(X_nitrogenoR*B_nitrogeno)+(X_metano*B_metano)+(X_etano*B_etano)+(X_bioxidoR*B_bioxido)),2))*PreRef);
    Z_Gas_humedo =1-PreRef* pow(((1-X_Agua_Sat)*((X_Nhexano*B_Nhexano)+(X_Propano*B_Propano)+(X_Ibutano*B_Ibutano)+(X_Nbutano*B_Nbutano)+(X_Neopentano*B_Neopentano)+(X_Ipentano*B_Ipentano)+(X_Npentano*B_Npentano)+(X_nitrogenoR*B_nitrogeno)+(X_metano*B_metano)+(X_etano*B_etano)+(X_bioxidoR*B_bioxido))+(X_Agua_Sat*B_Agua)),2);
    Rhoreal = Rhoideal/Z_Gas_seco;

    //CONSTANTE DEL GAS,Cv Y k

    Rgas = Ru/(M_gas);
    Cv_gas = Cp_gas - Rgas;
    k_gas = Cp_gas/Cv_gas;

    //CONVERSION DE UNIDADES

    TemGasF = 1.8*TemGas-459.67;
    TemGasC = TemGas-273.15;

	//ENTALPIAS

    HOxigenoSY =((33051.759*(((TRef-TemAmb)/1000)))+(-20917.083*(pow((TRef/1000),2)-pow((TemAmb/1000),2)))+(49341.367*(pow((TRef/1000),3)-pow((TemAmb/1000),3)))+(-51255.572*(pow((TRef/1000),4)-pow((TemAmb/1000),4)))+(29073.599*(pow((TRef/1000),5)-pow((TemAmb/1000),5)))+(-8715.1202*(pow((TRef/1000),6)-pow((TemAmb/1000),6)))+(1082.4395*(pow((TRef/1000),7)-pow((TemAmb/1000),7))))/1000;
    HnitrogenoSY =((28151.964*((TRef-TemAmb)/1000))+(6598.5613*(pow((TRef/1000),2)-pow((TemAmb/1000),2)))+(-24827.371*(pow((TRef/1000),3)-pow((TemAmb/1000),3)))+(47495.9*(pow((TRef/1000),4)-pow((TemAmb/1000),4)))+(-45323.358*(pow((TRef/1000),5)-pow((TemAmb/1000),5)))+(23673.626*(pow((TRef/1000),6)-pow((TemAmb/1000),6)))+(-6520.071*(pow((TRef/1000),7)-pow((TemAmb/1000),7)))+(743.59419*(pow((TRef/1000),8)-pow((TemAmb/1000),8))))/1000;
    HbioxidoSY =((17640.049*((TRef-TemAmb)/1000))+(46863.472*(pow((TRef/1000),2)-pow((TemAmb/1000),2)))+(-43458.218*(pow((TRef/1000),3)-pow((TemAmb/1000),3)))+(38492.636*(pow((TRef/1000),4)-pow((TemAmb/1000),4)))+(-27999.206*(pow((TRef/1000),5)-pow((TemAmb/1000),5)))+(13858.643*(pow((TRef/1000),6)-pow((TemAmb/1000),6)))+(-3939.7868*(pow((TRef/1000),7)-pow((TemAmb/1000),7)))+(478.72667*(pow((TRef/1000),8)-pow((TemAmb/1000),8))))/1000;
    HNhexanoSY = ((3.025*(TRef-TemAmb))+(0.053722*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000016662*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HPropanoSY = ((1.213*(TRef-TemAmb))+(0.028785*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000008824*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HmetanoSY = ((1.702*(TRef-TemAmb))+(0.009081*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000002164*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HNbutanoSY = ((1.935*(TRef-TemAmb))+(0.036915*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000011402*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HIbutanoSY = ((1.935*(TRef-TemAmb))+(0.036915*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000011402*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HNeopentanoSY = ((2.464*(TRef-TemAmb))+(0.045351*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HIpentanoSY = ((2.464*(TRef-TemAmb))+(0.045351*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HNpentanoSY = ((2.464*(TRef-TemAmb))+(0.045351*(pow(TRef,2)-pow(TemAmb,2))/2)+(-0.000014111*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HetanoSY = ((1.131*(TRef-TemAmb))+(0.019225*(pow(TRef,2)-pow(TemAmb,2))/2)+( -0.000005561*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;
    HAgua_L = ((8.712*(TRef-TemAmb))+( 0.00125*(pow(TRef,2)-pow(TemAmb,2))/2)+( -0.0000018*(pow(TRef,3)-pow(TemAmb,3))/3))*8.314/1000;


    //PODER CALORIFICO SUPERIOR

    hhv =((-1000*Rhoideal)/(M_gas*kJ_kCal))*((X_bioxidoP*(HF_bioxido+HbioxidoSY))+(X_Agua_L*(HF_Agua_L+HAgua_L))+(X_nitrogenoP*(HnitrogenoSY))-(X_metano*(HF_metano+HmetanoSY))-(X_Oxigeno*(HF_Oxigeno+HOxigenoSY))-(X_nitrogenoP*(HnitrogenoSY))-(X_Nhexano*(HF_Nhexano+HNhexanoSY))-(X_Propano*(HF_Propano+HPropanoSY))-(X_Ibutano*(HF_Ibutano+HIbutanoSY))-(X_Nbutano*(HF_Nbutano+HNbutanoSY))-(X_Neopentano*(HF_Neopentano+HNeopentanoSY))-(X_Ipentano*(HF_Ipentano+HIpentanoSY))-(X_Npentano*(HF_Npentano+HNpentanoSY))-(X_etano*(HF_etano+HetanoSY))-(X_bioxidoR*(HF_bioxido+HbioxidoSY)));

    // 1.2 TEMPERATURA DE FLAMA

    M_gas_kg_kmol = 0;
    suma = 0;
    suma2 = 0;
    Hproductos = 0;
    poli1suma = 0;
    poli2suma = 0;

    for( i = 0; i < 12; i++){
        M_gas_kg_kmol=M_gas_kg_kmol+(M[i]*coef_esq[i]);
    }

    mairemax_kg_s=FLUJO_MASICO_AIRE;//mairemax_kg_s=95;//
    //AGREGAR MODELOS DE VALVULAS PARA FLUJO MASICO DE COMBUSTIBLE
    mairemax_kmol_s=mairemax_kg_s/M_aire_kg_kmol;
    mgas_kg_s=2.7;//proveniento de valvulas pendientes TATA
    FLUJO_MASICO_GAS=FLUJO_MASICO_AIRE+mgas_kg_s;
    mgas_kmol_s=mgas_kg_s/M_gas_kg_kmol;
    RACreal_masa=mairemax_kg_s/mgas_kg_s;
    num_carbon=(6*coef_esq[0])+(3*coef_esq[1])+(4*coef_esq[2])+(4*coef_esq[3])+(5*coef_esq[4])+(5*coef_esq[5])+(5*coef_esq[6])+coef_esq[8]+coef_esq[9]+(2*coef_esq[10]);
    num_hidrogeno=((14*coef_esq[0])+(8*coef_esq[1])+(10*coef_esq[2])+(10*coef_esq[3])+(12*coef_esq[4])+(12*coef_esq[5])+(12*coef_esq[6])+(4*coef_esq[8])+(6*coef_esq[10]))/2;
    AG=((2*num_carbon)+num_hidrogeno-(2*coef_esq[9]))/2;
    for(  i = 0; i < 11; i++){
       suma=suma+coef_esq[i];
    }
    AC_mol=(AG*4.76/suma);
    for( i = 0; i < 11; i++){
       suma2= suma2 + (M[i]*coef_esq[i]);
    }
    AC_masa=(AC_mol*28.97)/suma2;
    RAC_ideal_masa=AC_masa;
    RACreal_mol=mairemax_kmol_s/mgas_kmol_s;
    RAC_ideal_mol=AC_mol;
    RCAreal_masa= mgas_kg_s/mairemax_kg_s;
    RCA_ideal_masa=1/RAC_ideal_masa;
    RCAreal_mol=mgas_kmol_s/mairemax_kmol_s;
    RCA_ideal_mol=1/RAC_ideal_mol;
    Exceso_MOLAR_porciento= ((RACreal_mol-RAC_ideal_mol)*100)/RAC_ideal_mol;
    f_molar=RCAreal_mol/RCA_ideal_mol;
    Exceso_MASICO_porciento= ((RACreal_masa-RAC_ideal_masa)/RAC_ideal_masa)*100;
    fMASICO=RCAreal_masa/RCA_ideal_masa;
    num_hidrogeno2=num_hidrogeno*2;
    num_oxigeno=AG/fMASICO;
    num_nitrogeno=((AG*3.76)/fMASICO)+coef_esq[7];

    Temperatura=2000;
    error6=100;

//######VERIFICAR################################################################################
//----------------------------------------------------------------------------------------------
	counterTata=counterTata+1;
	if(counterTata>=1000){
	for(z=0; z < 10; z++)

    {
        for( i=0; i < 14; i++)
        {
            logk[i]=A1[i]+(A2[i]*(Temperatura-1600)*pow(10.0,-3.0))+(A3[i]*(Temperatura-1600)*(Temperatura-2000)*pow(10.0,-6.0))+(A4[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*pow(10.0,-9.0))+(A5[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*pow(10.0,-12.0))+(A6[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*(Temperatura-3200)*pow(10.0,-15.0))+(A6[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*(Temperatura-3200)*pow(10.0,-15.0))+(A7[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*(Temperatura-3200)*(Temperatura-3600)*pow(10.0,-18.0));
        }

        for( i= 0; i < 14; i++)
        {
            k[i]=pow(10,logk[i]);
        }
        
        for( i = 0; i < 17; i++)
        {
            cal_mol[i]=((a1[i]*(T2_3-T1_3))+(a2[i]*(pow(T2_3,2)-pow(T1_3,2))/2)+(a3[i]*(pow(T2_3,3)-pow(T1_3,3))/3)+(a4[i]*(pow(T2_3,4)-pow(T1_3,4))/4)+(a5[i]*(pow(T2_3,5)-pow(T1_3,5))/5)+(a6[i]*(pow(T2_3,6)-pow(T1_3,6))/6)+(a7[i]*(pow(T2_3,7)-pow(T1_3,7))/7))*4.1787;
        }
        
        for(  i = 0; i < 9; i++)
        {
            h0_href_R[i]=A[i]*(psi_T-psi_tref)+((B[i]*(pow(psi_T,2)-pow(psi_tref,2)))/2)+((C[i]*(pow(psi_T,3)-pow(psi_tref,3)))/3);
            h0_href[i]=h0_href_R[i]*constante/1000;
        }
        
        T7_3 = TEMPERATURA_SALIDA_COMPRESOR_ALTA + 273;//T_6_3 Y T_8_3 revisar que temperaturas son

        nitro=((a1[4]*(T5_3-T6_3))+(a2[4]*(pow(T5_3,2)-pow(T6_3,2))/2)+(a3[4]*(pow(T5_3,3)-pow(T6_3,3))/3)+(a4[4]*(pow(T5_3,4)-pow(T6_3,4))/4)+(a5[4]*(pow(T5_3,5)-pow(T6_3,5))/5)+(a6[4]*(pow(T5_3,6)-pow(T6_3,6))/6)+(a7[4]*(pow(T5_3,7)-pow(T6_3,7))/7))*4.187;
        nitro2=((a1[4]*(T7_3-T8_3))+(a2[4]*(pow(T7_3,2)-pow(T8_3,2))/2)+(a3[4]*(pow(T7_3,3)-pow(T8_3,3))/3)+(a4[4]*(pow(T7_3,4)-pow(T8_3,4))/4)+(a5[4]*(pow(T7_3,5)-pow(T8_3,5))/5)+(a6[4]*(pow(T7_3,6)-pow(T8_3,6))/6)+(a7[4]*(pow(T7_3,7)-pow(T8_3,7))/7))*4.187;
        bio=((a1[13]*(T5_3-T6_3))+(a2[13]*(pow(T5_3,2)-pow(T6_3,2))/2)+(a3[13]*(pow(T5_3,3)-pow(T6_3,3))/3)+(a4[13]*(pow(T5_3,4)-pow(T6_3,4))/4)+(a5[13]*(pow(T5_3,5)-pow(T6_3,5))/5)+(a6[13]*(pow(T5_3,6)-pow(T6_3,6))/6)+(a7[13]*(pow(T5_3,7)-pow(T6_3,7))/7))*4.187;
        oxi=((a1[2]*(T7_3-T8_3))+(a2[2]*(pow(T7_3,2)-pow(T8_3,2))/2)+(a3[2]*(pow(T7_3,3)-pow(T8_3,3))/3)+(a4[2]*(pow(T7_3,4)-pow(T8_3,4))/4)+(a5[2]*(pow(T7_3,5)-pow(T8_3,5))/5)+(a6[2]*(pow(T7_3,6)-pow(T8_3,6))/6)+(a7[2]*(pow(T7_3,7)-pow(T8_3,7))/7))*4.187;

        n_hexano_kj_mol=(h0_href[0]+kj_mol[0])*coef_esq[0];
        propano_kj_mol=(h0_href[1]+kj_mol[1])*coef_esq[1];
        i_butano_kj_mol=(h0_href[4]+kj_mol[2])*coef_esq[2];
        n_butano_kj_mol=(h0_href[3]+kj_mol[3])*coef_esq[3];
        neopentano_kj_mol=(h0_href[5]+kj_mol[4])*coef_esq[4];
        i_pentano_kj_mol=(h0_href[6]+kj_mol[5])*coef_esq[5];
        n_pentano_kj_mol=(h0_href[7]+kj_mol[6])*coef_esq[6];
        nitrogeno_kj_mol=(nitro+kj_mol[7])*coef_esq[7];
        metano_kj_mol=(h0_href[2]+kj_mol[8])*coef_esq[8];
        bioxido_kj_mol=(bio+kj_mol[9])*coef_esq[9];
        etano_kj_mol=(h0_href[8]+kj_mol[10])*coef_esq[10];
        nitrogeno2_kj_mol=(kj_mol[7]+nitro2)*num_nitrogeno;
        oxigeno_kj_mol=(kj_mol[11]+oxi)*num_oxigeno;
        Hreactivos=n_hexano_kj_mol+propano_kj_mol+ i_butano_kj_mol+n_butano_kj_mol+neopentano_kj_mol+i_pentano_kj_mol+n_pentano_kj_mol+nitrogeno_kj_mol+metano_kj_mol+bioxido_kj_mol+etano_kj_mol+nitrogeno2_kj_mol+ oxigeno_kj_mol;
        
        do
        {
            if(x==0)
            {
                A_i=7;
                B_i=2;
                C_i=1;
                D_i=7;
   
                error1=100;
                error2=100;
                error3=100;
                error4=100;
            }
            else
            {
                r1=A_i;
                r2=B_i;
                r3=C_i;
                r4=D_i;
   
                A_i=A_i+m[0][4];
                B_i=B_i+m[1][4];
                C_i=C_i+m[2][4];
                D_i=D_i+m[3][4];

                if(A_i<0){
                   A_i=A_i*-1;
                }
                if(B_i<0){
                   B_i=B_i*-1;
                }
                if(C_i<0){
                   C_i=C_i*-1;
                }
                if(D_i<0){
                    D_i=D_i*-1;
                }
   
                if(r1<0){
                   r1=r1*-1;
                }
                if(r2<0){
                   r2=r2*-1;
                }
                if(r3<0){
                   r3=r3*-1;
                }
                if(r4<0){
                   r4=r4*-1;
                }

                error1=((r1-A_i)/r1)*100;
                error2=((r2-B_i)/r2)*100;
                error3=((r3-C_i)/r3)*100;
                error4=((r4-D_i)/r4)*100;
   
                if(error1 < 0){
                   error1=error1*-1;
                }
                if(error2 < 0){
                   error2=error2*-1;
                }
                if(error3 < 0){
                   error3=error3*-1;
                }
                if(error4 < 0){
                   error4=error4*-1;
                }
            }

            Pn=10;
            Q_i=k[0]*pow(k[4],-1)*C_i*pow(B_i,-1)*A_i;
            R_i=k[1]*k[0]*C_i*pow(k[4],-2)*pow(B_i,-2)*pow(A_i,2);
            S_i=k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(A_i,4)*pow(B_i,-2)*C_i*pow(Pn,2);
            Y_i=k[0]*k[1]*C_i*pow(A_i,2.5)*Pn*(D_i)*pow(k[4],-2)*pow(B_i,-2)*pow(k[3],-1);
            F_i=pow(k[4],2)*pow(A_i,-2)*pow(B_i,2)*pow(Pn,-1);
            P_i=k[5]*pow(A_i,-0.5)*(B_i)*pow(Pn,-0.5);
            H_i=k[6]*pow(A_i,0.5)*pow(Pn,-0.5);
            E_i=k[4]*k[7]*pow(A_i,-1)*(B_i)*pow(Pn,-1);
            G_i=pow(k[4],3)*k[8]*pow(A_i,-3)*pow(B_i,3)*pow(Pn,-1);
            Z_i=k[9]*(D_i)*pow(Pn,-0.5);
            U_i=k[4]*k[10]*pow(A_i,-1)*B_i*(D_i)*pow(Pn,-0.5);
            V_i=pow(k[4],2)*k[10]*pow(k[11],-1)*pow(A_i,-2)*pow(B_i,2)*(D_i)*pow(Pn,-0.5);
            W_i=pow(k[12],-1)*pow(A_i,1.5)*D_i*Pn;
            X_i=pow(k[4],2.5)*k[10]*pow(k[11],-1.5)*pow(k[13],-0.5)*pow(A_i,-2.5)*pow(B_i,3)*pow(D_i,0.5)*pow(Pn,-0.75);
  
            CO_H2=k[0]*pow(k[4],-1)*C_i*pow(B_i,-1);
            C_H2=2*k[1]*k[0]*C_i*pow(k[4],-2)*pow(B_i,-2)*(A_i);
            CH4_H2=4*k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(A_i,3)*pow(B_i,-2)*C_i*pow(Pn,2);
            HCN_H2=2.5*k[0]*k[1]*C_i*pow(A_i,1.5)*Pn*(D_i)*pow(k[4],-2)*pow(B_i,-2)*pow(k[3],-1);
            O2_H2=-2*pow(k[4],2)*pow(A_i,-3)*pow(B_i,2)*pow(Pn,-1);
            OH_H2=-0.5*k[5]*pow(A_i,-1.5)*(B_i)*pow(Pn,-0.5);
            H_H2=0.5*k[6]*pow(A_i,-0.5)*pow(Pn,-0.5);
            O_H2=-k[4]*k[7]*pow(A_i,-2)*(B_i)*pow(Pn,-1);
            O3_H2=-3*pow(k[4],3)*k[8]*pow(A_i,-4)*pow(B_i,3)*pow(Pn,-1);
            NO_H2=-1*k[4]*k[10]*pow(A_i,-2)*B_i*(D_i)*pow(Pn,-0.5);
            NO2_H2=-2*pow(k[4],2)*k[10]*pow(k[11],-1)*pow(A_i,-3)*pow(B_i,2)*(D_i)*pow(Pn,-0.5);
            NH3_H2=1.5*pow(k[12],-1)*pow(A_i,0.5)*(D_i)*(Pn);
  
            CO_B=-k[0]*pow(k[4],-1)*C_i*pow(B_i,-2)*A_i;
            C_B=-2*k[1]*k[0]*C_i*pow(k[4],-2)*pow(B_i,-3)*pow(A_i,2);
            CH4_B=-2*k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(A_i,4)*pow(B_i,-3)*C_i*pow(Pn,2);
            HCN_B=-2*k[0]*k[1]*C_i*pow(A_i,2.5)*Pn*(D_i)*pow(k[4],-2)*pow(B_i,-3)*pow(k[3],-1);
            O2_B=2*pow(k[4],2)*pow(A_i,-2)*(B_i)*pow(Pn,-1);
            OH_B=k[5]*pow(A_i,-0.5)*pow(Pn,-0.5);
            O_B=k[4]*k[7]*pow(A_i,-1)*pow(Pn,-1);
            O3_B=3*pow(k[4],3)*k[8]*pow(A_i,-3)*pow(B_i,2)*pow(Pn,-1);
            NO_B=k[4]*k[10]*pow(A_i,-1)*(D_i)*pow(Pn,-0.5);
            NO2_B=2*pow(k[4],2)*k[10]*pow(k[11],-1)*pow(A_i,-2)*B_i*(D_i)*pow(Pn,-0.5);
  
            CO_C=k[0]*pow(k[4],-1)*pow(B_i,-1)*A_i;
            C_C=k[1]*k[0]*pow(k[4],-2)*pow(B_i,-2)*pow(A_i,2);
            CH4_C=k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(A_i,4)*pow(B_i,-2)*pow(Pn,2);
            HCN_C=k[0]*k[1]*pow(A_i,2.5)*Pn*(D_i)*pow(k[4],-2)*pow(B_i,-2)*pow(k[3],-1);
  
            HCN_D=k[0]*k[1]*C_i*pow(A_i,2.5)*Pn*pow(k[4],-2)*pow(B_i,-2)*pow(k[3],-1);
            N_D=k[9]*pow(Pn,-0.5);
            NO_D=k[4]*k[10]*pow(A_i,-1)*B_i*pow(Pn,-0.5);
            NO2_D=pow(k[4],2)*k[10]*pow(k[11],-1)*pow(A_i,-2)*pow(B_i,2)*pow(Pn,-0.5);
            NH3_D=pow(k[12],-1)*pow(A_i,1.5)*(Pn);
  
            F=((R_CO)*(2*C_i+Q_i+B_i+3*G_i+2*F_i+E_i+P_i+2*V_i+U_i))-C_i-Q_i-R_i-S_i-Y_i;
            G=((R_HO)*(2*C_i+Q_i+B_i+3*G_i+2*F_i+E_i+P_i+2*V_i+U_i))-4*S_i-2*B_i-2*A_i-H_i-Y_i-P_i-3*W_i;
            H=((R_NO)*(2*C_i+Q_i+B_i+3*G_i+2*F_i+E_i+P_i+2*V_i+U_i))-Y_i-(2*D_i*D_i)-Z_i-V_i-U_i-W_i;
            J=A_i+B_i+C_i+pow(D_i,2)+Q_i+R_i+S_i+Y_i+F_i+P_i+H_i+E_i+G_i+Z_i+U_i+V_i+W_i-1;
  
            FA=((R_CO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-CO_H2-C_H2-CH4_H2-HCN_H2;
            FB=((R_CO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-CO_B-C_B-CH4_B-HCN_B;
            FC=((R_CO)*(2+CO_C))-1-CO_C-C_C-CH4_C-HCN_C;
            FD=((R_CO)*(2*NO2_D+NO_D))-HCN_D;
  
            GA=((R_HO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-4*CH4_H2-2-H_H2-HCN_H2-OH_H2-3*NH3_H2;
            GB=((R_HO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-4*CH4_B-2-HCN_B-OH_B;
            GC=((R_HO)*(2+CO_C))-4*CH4_C-HCN_C;
            GD=((R_HO)*(2*NO2_D+NO_D))-HCN_D-3*NH3_D;
  
            HA=((R_NO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-HCN_H2-N_H2-NO2_H2-NO_H2-NH3_H2;
            HB=((R_NO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-HCN_B-NO2_B-NO_B;
            HC=((R_NO)*(2+CO_C))-HCN_C;
            HD=((R_NO)*(2*NO2_D+NO_D))-HCN_D-(4*D_i)-N_D-NO2_D-NO_D-NH3_D;
  
            JA=1+CO_H2+C_H2+CH4_H2+HCN_H2+O2_H2+OH_H2+H_H2+O_H2+O3_H2+NO_H2+NO2_H2+NH3_H2;
            JB=1+CO_B+C_B+CH4_B+HCN_B+O2_B+OH_B+O_B+O3_B+NO_B+NO2_B;
            JC=1+CO_C+C_C+CH4_C+HCN_C;
            JD=2*D_i+HCN_D+N_D+NO_D+NO2_D+NH3_D;
            
            m[0][0]=FA;
            m[0][1]=FB;
            m[0][2]=FC;
            m[0][3]=FD;
            m[0][4]=-F;
  
            m[1][0]=GA;
            m[1][1]=GB;
            m[1][2]=GC;
            m[1][3]=GD;
            m[1][4]=-G;
  
            m[2][0]=HA;
            m[2][1]=HB;
            m[2][2]=HC;
            m[2][3]=HD;
            m[2][4]=-H;
  
            m[3][0]=JA;
            m[3][1]=JB;
            m[3][2]=JC;
            m[3][3]=JD;
            m[3][4]=-J;
            
            // INICIO METODO DE GAUSS-JORDAN 4X4
  
            d=m[0][0];
            i=0;
            for ( j = 0; j < 5; j++ )
            {
               m[i][j]=m[i][j]/d;
            }
            aux2=m[1][0];
            i=1;
            for( j=0 ; j < 5; j ++ )
            {
               m[i][j]=m[i][j]-(aux2*m[0][j]);
            }
            aux2=m[2][0];
            i=2;
            for( j=0 ; j < 5; j ++ )
            {
               m[i][j]=m[i][j]-(aux2*m[0][j]);
            }
            aux2=m[3][0];
            i=3;
            for( j=0 ; j < 5; j ++ )
            {
               m[i][j]=m[i][j]-(aux2*m[0][j]);
            }
  
            /////////////////
            d=m[1][1];
            i=1;
            for ( j = 0; j < 5; j++ ){
               m[i][j]=m[i][j]/d;
            }
            aux2=m[0][1];
            i=0;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[1][j]);
            }
            aux2=m[2][1];
            i=2;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[1][j]);
            }
            aux2=m[3][1];
            i=3;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[1][j]);
            }
            ////////////
            d=m[2][2];
            i=2;
            for ( j = 0; j < 5; j++ ){
                m[i][j]=m[i][j]/d;
            }
            aux2=m[0][2];
            i=0;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[2][j]);
            }
            aux2=m[1][2];
            i=1;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[2][j]);
            }
            aux2=m[3][2];
            i=3;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[2][j]);
            }
            /////////////
            d=m[3][3];
            i=3;
            for ( j = 0; j < 5; j++ ){
                m[i][j]=m[i][j]/d;
            }
            aux2=m[0][3];
            i=0;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[3][j]);
            }
            aux2=m[1][3];
            i=1;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[3][j]);
            }
            aux2=m[2][3];
            i=2;
            for( j=0 ; j < 5; j ++ ){
               m[i][j]=m[i][j]-(aux2*m[3][j]);
            }
             // FIN METODO DE GAUSS-JORDAN 4X4
            x++;
        }
        while( (error1 > 0.01)&&(error2 > 0.01)&&(error3 > 0.01)&&(error4 > 0.01) );
        
        hc[0]=A_i;
        hc[1]=H_i;
        hc[2]=F_i;
        hc[3]=E_i;
        hc[4]=D_i;
        hc[5]=Z_i;
        hc[6]=P_i;
        hc[7]=B_i;
        hc[8]=W_i;
        hc[9]=U_i;
        hc[10]=V_i;
        hc[11]=R_i;
        hc[12]=Q_i;
        hc[13]=C_i;
        hc[14]=S_i;
        hc[15]=Y_i;
        hc[16]=G_i;
        
        Ni=(num_carbon+num_hidrogeno2+num_oxigeno+num_nitrogeno)/((3*C_i)+(2*Q_i)+R_i+(5*S_i)+(3*B_i)+(2*A_i)+H_i+(5*X_i)+(3*Y_i)+(3*G_i)+(2*F_i)+E_i+(2*P_i)+(2*D_i)+Z_i+(3*V_i)+(2*U_i)+(4*W_i));
        for ( i = 0; i < 16; i++)
        {
            Hproductos=Hproductos+(hc[i]*(cal_mol[i]+H_k[i]));
        }
        Hproductos=Hproductos*Ni;

        error5=0;
        Tr=0.298;
        Tx=2;
        Ti=2;
        j=1;
        
        //INICIO METODO DE NEWTON-RAPSON
        do
        {
            poli1suma=0;
            poli2suma=0;
            for( i = 0; i < 16; i++)
            {
                poli1[i]=((a1[i]*(Tx-Tr))+(a2[i]*(pow(Tx,2)-pow(Tr,2))/2)+(a3[i]*(pow(Tx,3)-pow(Tr,3))/3)+(a4[i]*(pow(Tx,4)-pow(Tr,4))/4)+(a5[i]*(pow(Tx,5)-pow(Tr,5))/5)+(a6[i]*(pow(Tx,6)-pow(Tr,6))/6)+(a7[i]*(pow(Tx,7)-pow(Tr,7))/7))*4.1787;
                poli2[i]=(a1[i]+(a2[i]*Tx)+(a3[i]*pow(Tx,2))+(a4[i]*pow(Tx,3))+(a5[i]*pow(Tx,4))+(a6[i]*pow(Tx,5))+(a7[i]*pow(Tx,6)))*4.1787;
                poli1suma=(poli1suma+(hc[i]*(poli1[i]+H_k[i])));
                poli2suma=poli2suma+(hc[i]*poli2[i]);
            }
            constante1=Hreactivos;
            poli1suma=poli1suma*Ni;
            poli2suma=poli2suma*Ni;
            Ta=Ti;
            Tx=Ti-((poli1suma-constante1)/poli2suma);
            Ti=Tx;
            error5=((Tx-Ta)/Tx)*100;
            if(error5 < 0){
              error5=error5*-1;
            }
        }
        while( error5 > 0.01);
        
        Temperatura=Tx*1000;
        //FIN METODO DE NEWTON-RAPSON
		
    }
	counterTata=0;
	printf("Si entre por las mamadas del tata");
}
	
//------------------------------------------------------------------------------------------*/
//######FIN VERIFICAR################################################################################
	T_F=(1.8*Temperatura)-459.67;
    T_C=Temperatura-273.15;


    Q_a= (Q_i*1000000)/((mairemax_kg_s+mgas_kg_s)*28.01);//CO ppm
    F_a= (F_i*1000000)/((mairemax_kg_s+mgas_kg_s)*32.0);//O2 ppm
    C_a= (C_i*1000000)/((mairemax_kg_s+mgas_kg_s)*38.01);//CO2 ppm//
    U_a= (U_i*1000000)/((mairemax_kg_s+mgas_kg_s)*30.008);//NO ppm
    V_a= (V_i*1000000)/((mairemax_kg_s+mgas_kg_s)*46.01);//NO2 ppm
    NOx=U_i+V_i;//NOX ppm

    /****************************************************************************
    *							   calculo TURBINAS     *
    ****************************************************************************/
    // CALCULO DE VARIABLES PARA TURBINA DE ALTA PRESION

    //DEBE VENIR COMO CONSTANTE DE REPARAMTERIZACION
    //BETA_3_TA= BETA3TA (K_ADECUACION_BETA3_TA, BETA3_CONTROL_TA, TAO_BETA3_TA, CIBETA3TA)*BETA3_CONTROL_TA;
    //CIBETA3TA= BETA_3_TA;

    TEMPERATURA_ENTRADA_TURBINA_ALTA = T_C * (1750/2309);//[°C] Checar la relación
    PRESION_SALIDA_COMPRESOR_ALTA = PRESION_SALIDA_COMPRESOR_ALTA * 0.98;//Perdida de presion en Camara de Combustión por que Tata no quiso calcularla

    U_TA=RADIO_MEDIO_TA * W_CB; //CALCULO VELOCIDAD ANGULAR DE TURBINA DE ALTA
    VN1_TA=(U_TA/(tan(ALFA1_TA) * (1/(tan(BETA1_TA))))); // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE ALTA
    V1_TA=(VN1_TA/cos(ALFA_1_TA)); // velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE ALTA
    VT1_TA=V1_TA*sin(ALFA1_TA);// CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA
    VRB1_TA=VN1_TA/sin(BETA1_TA); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA

    VN2_TA=((CONSTANTE_AREAS_1_TA))*VN1_TA;  // Componente de velocidad normal al área de salida alabe rotor TURBINA DE ALTA
    ALFA2_TA=atan((U_TA/VN2_TA)-(1/tan(BETA2_TA))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
    V2_TA=(VN2_TA/cos(ALFA_2));// CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA DE ALTA
    VT2_TA=V2_TA*sin(ALFA2_TA); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor TURBINA DE ALTA
    VRB2_TA=VN2_TA/sin(BETA2_TA); // componente auxiliar en salida de alabe rotor TURBINA DE ALTA
    VN3_TA=(((CONSTANTE_AREAS_2_TA))*VN2_TA);//Componente de velocidad no rmal al área de salida alabe rotor.TURBINA DE ALTA

    ALFA3_TA=atan((U_TA/VN3_TA)-(1/tan(BETA3_TA)));  //Angulo de flujo absoluto a la salida del alabe estator TURBINA DE ALTA.
    V3_TA=(VN3_TA/cos(ALFA3_TA)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.TURBINA DE ALTA
    VT3_TA=V3_TA*sin(ALFA3_TA); // componente auxiliar en salida de alabe estator.TURBINA DE ALTA
    VRB3_TA=VN3_TA/sin(BETA3_TA); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.TURBINA DE ALTA
    DELTA_PRESION_TA=((RHO_DELTA_PRESION_TA / 2* GRAVEDAD)*((VRB1_TA * VRB1_TA) - (VRB2_TA * VRB2_TA)))+((RHO_DELTA_PRESION_TA / 2*GRAVEDAD)	*((V2_TA * V2_TA)-(V3_TA * V3_TA))); // DELTA DE PRESION TURBINA DE ALTA
    PRESION_SALIDA_TURBINA_ALTA=(PRESION_SALIDA_COMPRESOR_ALTA + DELTA_PRESION_TA); //PRESION DE SALIDA DE TURBINA DE ALTA
    TEMPERATURA_SALIDA_TURBINA_ALTA=(TEMPERATURA_ENTRADA_TURBINA_ALTA-((V3_TA * V3_TA)/(2 * CP_TA)));//TEMPERATURA_ENTRADA_TURBINA_ALTA=TEMPERATURA SALIDA DE CAMARA DE COMBUSTION 1270

    //CALCULO DE VARIABLES PARA TURBINA DE BAJA PRESION

    U_TB=RADIO_MEDIO_TB * W_CA; //CALCULO VELOCIDAD ANGULAR DE TURBINA BAJA
    VN1_TB=(U_TB/(tan(ALFA1_TB) * (1/(tan(BETA1_TB))))); // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA BAJA
    V1_TB=(VN1_TB/cos(ALFA_1_TB)); // velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA BAJA
    VT1_TB=V1_TB*sin(ALFA1_TB); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA BAJA
    VRB1_TB=VN1_TB/sin(BETA1_TB);  // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA BAJA
    VN2_TB=((CONSTANTE_AREAS_1_TB))*VN1_TB;  // Componente de velocidad normal al área de salida alabe rotor TURBINA BAJA
    ALFA2_TB=atan((U_TB/VN2_TB)-(1/tan(BETA2_TB))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
    V2_TB=(VN2_TB/cos(ALFA2_TB)); // CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA BAJA
    VT2_TB=V2_TB*sin(ALFA2_TB); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor TURBINA BAJA
    VRB2_TB=VN2_TB/sin(BETA2_TB); // componente auxiliar en salida de alabe rotor TURBINA BAJA
    VN3_TB=(((CONSTANTE_AREAS_2_TB))*VN2_TB); //Componente de velocidad no rmal al área de salida alabe rotor.TURBINA BAJA
    ALFA3_TB=atan((U_TB/VN3_TB)-(1/tan(BETA3_TB)));  //Angulo de flujo absoluto a la salida del alabe estator TURBINA BAJA.
    V3_TB=(VN3_TB/cos(ALFA3_TB)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.TURBINA BAJA
    VT3_TB=V3_TB*sin(ALFA3_TB); // componente auxiliar en salida de alabe estator.TURBINA BAJA
    VRB3_TB=VN3_TB/sin(BETA3_TB); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.TURBINA BAJA
    DELTA_PRESION_TB=((RHO_DELTA_PRESION_TB / 2 * GRAVEDAD) * ((VRB1_TB * VRB1_TB) - (VRB2_TB * VRB2_TB))) + ((RHO_DELTA_PRESION_TB / 2*GRAVEDAD)*((V2_TB * V2_TB)-(V3_TB * V3_TB))); // DELTA DE PRESION TURBINA BAJA
    PRESION_SALIDA_TURBINA_BAJA=(PRESION_SALIDA_COMPRESOR_ALTA + DELTA_PRESION_TB); //PRESION DE SALIDA DE TURBINA BAJA
    TEMPERATURA_SALIDA_TURBINA_BAJA=(TEMPERATURA_SALIDA_TURBINA_ALTA + ((V3_TB * V3_TB) / (2 * CP_TB))); //TEMPERATURA DE SALIDA DE TURBINA DE BAJA

    /****************************************************************************
    *						calculo GENERADOR ELECTRICO							*
    ****************************************************************************/

    //1.1 EXCITACIÓN
    if(IntEx_GE==0)
    {
		VEx_GE=0;
        VAB_GE=0;
        VAC_GE=0;
        VBC_GE=0;
        VFaseA_GE=0;
        IFaseA_GE=0;
        IEx_IMagA=0;
        VFaseB_GE=0;
        IFaseB_GE=0;
        IEx_IMagB=0;
        VFaseC_GE=0;
        IFaseC_GE=0;
        IEx_IMagC=0;
        IEx_GE=0;
    }
    else
    {
        VinTranEx_GE=Consigna_VinTranEx_GE;//aqui va la consigna de voltaje que mandara al primario del trafo de excitación
        VEx_GE=KTranEx_GE*((VinTranEx_GE)/**MA_GE+(nna*SalConsIEx)*/);
        SatIEx=SAT(VEx_GE,830,0);
        IEx_GE=PriO(KEx_GE,SatIEx,TaoEx_GE,(CIIEx_GE*IntEx_GE));
        VFaseA_GE=PriO(KGen_GE_A,(CIIEx_GE/(1+(IntCrow_Bar*0.237549))),(TaoGen_GE*2),CIVFaseA_GE);//Voltaje del generador en la fase A.
        VFaseB_GE=PriO(KGen_GE_B,(CIIEx_GE/(1+(IntCrow_Bar*0.241549))),(TaoGen_GE*2),CIVFaseB_GE);
        VFaseC_GE=PriO(KGen_GE_C,(CIIEx_GE/(1+(IntCrow_Bar*0.239549))),(TaoGen_GE*2),CIVFaseC_GE);
		
		if(IntCarga_GE==0)
		{
			IFaseA_GE=0;
            IFaseB_GE=0;
            IFaseC_GE=0;
            delta=0;
        }
		//1.1.A GENERACIÓN
        else
        {
            IFaseA_GE=abs((Por_FA*POTENCIA_MEC*IntCarga_GE)/(CIVFaseA_GE*(Por_FC+Por_FB+Por_FA)));//CORRIENTE DE FASE A (P_APARENTE y P_REACTIVA)
            IFaseB_GE=abs((Por_FB*POTENCIA_MEC*IntCarga_GE)/(CIVFaseB_GE*(Por_FC+Por_FB+Por_FA)));
            IFaseC_GE=abs((Por_FC*POTENCIA_MEC*IntCarga_GE)/(CIVFaseC_GE*(Por_FC+Por_FB+Por_FA)));
        }

        VAB_GE=sqrt(pow((VFaseA_GE)+(0.5*VFaseB_GE),2)+ pow(0.5*(1.732050808)*VFaseB_GE,2));//VOLTAJES ENTRE LINEAS
        VAC_GE=sqrt(pow((VFaseA_GE)+(0.5*VFaseC_GE),2)+ pow(0.5*(1.732050808)*VFaseC_GE,2));
        VBC_GE=sqrt(pow((VFaseB_GE)+(0.5*VFaseC_GE),2)+ pow(0.5*(1.732050808)*VFaseC_GE,2));
    }

    PTotal = IFaseA_GE*VFaseA_GE+IFaseB_GE*VFaseB_GE+IFaseC_GE*VFaseC_GE;

    PReacFaseA_GE=KcapaReac/*depende de la temperatura*/*(CIVFaseA_GE-((Vred_GE)/1.732050808))*0.001;//PReacFaseA_GE=PFaseA_GE*(sin(acos(FP)));//NUEVO GEN
    PReacFaseB_GE=KcapaReac/*depende de la temperatura*/*(CIVFaseB_GE-((Vred_GE)/1.732050808))*0.001;//PReacFaseB_GE=PFaseB_GE*(sin(acos(FP)));//NUEVO GEN
    PReacFaseC_GE=KcapaReac/*depende de la temperatura*/*(CIVFaseC_GE-((Vred_GE)/1.732050808))*0.001;//PReacFaseC_GE=PFaseB_GE*(sin(acos(FP)));//NUEVO GEN
    PReactiva=PReacFaseA_GE+PReacFaseB_GE+PReacFaseC_GE;

    PActiva = sqrt((PTotal*PTotal)-(PReactiva*PReactiva));
//********************************************************************************************************************************//

//*****************************************EL TATA Y EL COCHI <3 SE AMAN**********************************************************//
PresionSum = PresionSum_kg*kg_kPa;
    DensidadGas = ((PresionSum )/(R_gas*Temperatura_in));
    VelocidadGasin = (Flujo_in*R_gas*Temperatura_in)/(PresionSum*AreaTub);
    CI_PresionTanqueDepu1 =(CIMasaTanqDepu1*R_gas*Temperatura_in/VolTanqueDepu1);


    //////////////controlvalvula/////////////////////

    errorPI_CG=(SPP_v1 - CI_PresionTanqueDepu1);
    Acc_I_CG= Accion_I(ki_CG,errorPI_CG,CI_I_CG);
    Acc_P_CG= Accion_P(kp_CG,errorPI_CG);
    Acc_PI_CG=Accion_PI(Acc_I_CG,Acc_P_CG);
    satu_CG = Saturacion(Acc_PI_CG,LInf_CG,LSup_CG);
    Ap_valvula_CG= Xvalvcontrol1_v1(satu_CG,CIXvalControl_1_v1,TaoXvalControl_1_v1, XvalControlv1max)*On_off_Valvula_YX106;
    Flujo_in = (CIXvalControl_1_v1/XvalControl1max)*(FlujoMax)*On_off_Valvula_YX106;

    //////////////// Tanque de depuración S-100//////

    MasaTanqueDepu1 = Masa(CIMasaTanqDepu1,PresionSum,CI_PresionTanqueDepu1,((VelocidadGasin*AreaTub)/(R_gas*CITanqDepu1)));
    Flujo_outDepu1 = (VelocidadGasin*AreaTub*CI_PresionTanqueDepu1)/(R_gas*CITanqDepu1);
    TemperaturaOutTanqueDepu1=HEX(Temperatura_in,CITanqDepu1,(Cp*(Flujo_outDepu1)),(Cp*(Flujo_outDepu1)),(UTanqueDepu1*AreaTanqueDepu1),Tamb,(CIMasaTanqDepu1*Cv));
    TemperaturaOutTanqueDepu1_C = TemperaturaOutTanqueDepu1-273.15;
    PresionTanqueDepu1_kg = CI_PresionTanqueDepu1/kg_kPa;
    NivelTanqueDepu1=Nivel(CIFIL1,(Flujo_in),Humedadgasin,Eta_Fil1,(AreaFilTanqueDepu1*DensidadAgua));
    NivelTanqueDepu1mm = 1000*NivelTanqueDepu1;


    /////////// Tanque de succion  B-100/////////////

    CIPresionOutTanSuc1 = (CIMasaTanSuc1*R_gas*CITanqueSuc1/VolTanqueSuc1);
    MasaTanqueSuc1 = Masa(CIMasaTanSuc1,CI_PresionTanqueDepu1,CIPresionOutTanSuc1,((VelocidadGasin*AreaTub)/(R_gas*CITanqueSuc1)));
    Temperatura_final_TanSuc1 = HEX(CITanqDepu1,CITanqueSuc1,(Cp*((VelocidadGasin*AreaTub*CI_PresionTanqueDepu1)/(R_gas*CITanqDepu1))),(Cp*((VelocidadGasin*AreaTub*CI_PresionTanqueDepu1)/(R_gas*CITanqDepu1))),(AreaTanqueSuc1*UTanqueSuc1),Tamb,(MasaTanqueSuc1*Cv));
    if((FallaCompresor == 1&& Automatico1ra == 1)||(FallaCompresor==1&&Manual1ra==1&&StartManual1ra==1))
    {
        onoffComp1ra = 1;
    }
    else if(FallaCompresor==0 || StopManual1ra==1)
    {
        onoffComp1ra = 0;
    }

    /////////// Compresor C-100////////////////

    VelMotorCompresor = VelocidadCompresor(CIMotorCompresor,TaoMotorCompresor,VelMaximaMotorCompresor,onoffComp1ra);
    Trabajo_in1 = (VelMotorCompresor*ParInducidoMotorComp1*FallaCompresor)/(12900);
    Temperatura_final_1ra = Compresor(CITanqueSuc1,CI1ra,(Cp*((VelocidadGasin*AreaTub*CIPresionOutTanSuc1)/(R_gas*CITanqueSuc1))),(Masa1*Cv),Trabajo_in1); //considero que el flujo que entra es el mismo flujo que sale del tanque de succión
    Temperatura_final_1ra_C = CI1ra - 273.15;
    PresionOut1ra = CIPresionOutTanSuc1*(pow((((CI1ra/CITanqueSuc1))),(Eta_CIC*((Cp/Cv)/((Cp/Cv)-1)))));

    ////////Tanque de expansión B-200/////////

    Temperatura_final_TanExp = HEX(CI1ra,CITanqueExp,(Cp*((VelocidadGasin*AreaTub*CIPresionOutTanSuc1)/(R_gas*CITanqueSuc1))),(Cp*((VelocidadGasin*AreaTub*CIPresionOutTanSuc1)/(R_gas*CITanqueSuc1))),(AreaTanqueExp*UTanqueExp),Tamb,(CIMasaTanqueExp*Cv));  //considero que el flujo que entra es el mismo flujo que sale del tanque de succión
    Temperatura_final_TanExp_C = Temperatura_final_TanExp -273.15;
    CIPresionOutTanExp =(CIMasaTanqueExp*R_gas*CITanqueExp/VolTanqueExp);
    VelocidadGasin2 = (((VelocidadGasin*AreaTub*CIPresionOutTanSuc1)/(R_gas*CITanqueSuc1))*R_gas*CI1ra)/(PresionOut1ra*AreaTub);
    MasaTanqueExp = Masa(CIMasaTanqueExp,PresionOut1ra,CIPresionOutTanExp,((VelocidadGasin2*AreaTub)/(R_gas*CITanqueExp)));
    PresionOutTanExp_kg = CIPresionOutTanExp/kg_kPa;

    ////// Intercambiador de calor E-1///////

    Velocidad_Ventilador_HEX = VelocidadBomba(CI_Vel_Vent_HEX,Tao_Vent_HEX,Vel_MAX_Vent_HEX,OnOff_Vent_HEX,Falla_Vent_HEX);
    UHEX = (CI_Vel_Vent_HEX*0.24)/Vel_MAX_Vent_HEX ;// 0.24 kJ/m2 K (valor original calculado 1.3703)
    Temperatura_final_HEX=HEX(CITanqueExp,CIHEX1,(Cp*(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp))),(Cp*(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp))),(AreaHEX*UHEX*FallaVenti),Tamb,(MasaHEX*Cv));
    PresionOutHEX=CIPresionOutTanExp*(1-0.013);

   // qDebug()<<Velocidad_Ventilador_HEX;

    //////// Tanque de depuración S-200/////

    CIPresionTanqueDepu2 =(CIMasaTanqueDepu2*R_gas*CITanqDepu2/VolTanqueDepu2);
    MasaTanqueDepu2 = Masa(CIMasaTanqueDepu2,CIPresionOutTanExp,CIPresionTanqueDepu2,(VelocidadGasin2*AreaTub)/(R_gas*CITanqDepu2));
    TemperaturaOutTanqueDepu2=HEX(CIHEX1,CITanqDepu2,(Cp*(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp))),(Cp*(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp))),(UTanqueDepu2*AreaTanqueDepu2),Tamb,(MasaTanqueDepu2*Cv));
    TemperaturaOutTanqueDepu2_C = TemperaturaOutTanqueDepu2-273.15;
    NivelTanqueDepu2=Nivel(CIFIL2,(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp)),(Humedadgasin*Eta_Fil1),Eta_Fil2,(AreaFilTanqueDepu2*DensidadAgua));
    NivelTanqueDepu2mm = 1000*NivelTanqueDepu2;

    // Elimine el tanque de succion B-210

    /////////// Compresor C-200 //////////

    Trabajo_in2 = VelMotorCompresor*ParInducidoMotorComp2/(19400);
    Temperatura_final_2da = Compresor(CITanqDepu2,CI2da,(Cp*(VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp))),(Masa2*Cv*TaoComp2da),Trabajo_in2);//considero que el flujo másico de combustible es el mismo que entra al tanque de succión para evitar calcular más cambios de velocidad
    Temperatura_final_2da_C = Temperatura_final_2da-273.15;
    PresionOut2da = CIPresionTanqueDepu2*pow((((CI2da/CITanqDepu2))),(eficom2*((Cp/Cv)/((Cp/Cv)-1))));
    PresionOut2da_kg = PresionOut2da/kg_kPa;

     /////// Tanque de expansión  B-300////

    Temperatura_final_TanExp2 = HEX(CI2da,CITanqueExp2,(Cp*((VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp)))),(Cp*((VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp)))),(AreaTanqueExp2*UTanqueExp2),Tamb,(CIMasaTanqueExp2*Cv));
    CIPresionOutTanExp2=(CIMasaTanqueExp2*R_gas*CITanqueExp2/VolTanqueExp2);
    VelocidadGasin3 = (((VelocidadGasin2*AreaTub*CIPresionOutTanExp/(R_gas*CITanqueExp)))*R_gas*CI2da)/(PresionOut2da*AreaTub2);
    MasaTanqueExp2 = Masa(CIMasaTanqueExp2,PresionOut2da,CIPresionOutTanExp2,(VelocidadGasin3*AreaTub2)/(R_gas*CITanqueExp2));
    PresionOutTanExp2_kg = CIPresionOutTanExp2/kg_kPa;

    ////////// Intercambiador 2////////////

    UHEX2 = (CI_Vel_Vent_HEX*0.450)/Vel_MAX_Vent_HEX; //kJ/m2 K, inicial 0.03703, ultimo valor dado 0.450
    Temperatura_final_HEX2=HEX(CITanqueExp2,CIHEX2,((VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))*Cp),(Cp*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(AreaHEX2*UHEX2*FallaVenti),Tamb,(MasaHEX2*Cv));
    Temperatura_final_HEX2_C = Temperatura_final_HEX2-273.15;
    PresionOutHEX2=CIPresionOutTanExp2*(0.9923); // 0.9923 = perdida de presion en el intercambiadores 0.77%, fuente manual toromout pag 143.
    PresionOutHEX2_kg=PresionOutHEX2/kg_kPa;

    /////////// filtro de coalescencia V3//////

    CIPresionTanqueCoal_V3 = (CIMasaTanqueCoal_V3*R_gas*CITemCoal_V3/VolTanqueCoal_V3);
    PresionTanqueCoal_V3_kg = (CIPresionTanqueCoal_V3*0.9974)/kg_kPa;  // 0.9974 factor de perdidas de presión por Vane pack  no hay datos de ésta
    MasaTanqueCoal_V3= Masa(CIMasaTanqueCoal_V3,PresionOutHEX2,CIPresionTanqueCoal_V3,(VelocidadGasin3*AreaTub2)/(R_gas*CITemCoal_V3));
    NivelCoal_V3=Nivel(CICoal_V3,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2),Eta_VANE,(AreaFilTanqCoal_V3*DensidadAgua));
    NivelCoal_V3mm = 1000*NivelCoal_V3;
    NivelCoal_V3B=Nivel(CICoal_V3B,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2*Eta_VANE),Eta_Coal_V3,(AreaFilTanqCoal_V3*DensidadAgua));
    NivelCoal_V3Bmm = 1000*NivelCoal_V3B;
    TempOutCoal_V3=HEX(Temperatura_final_HEX2,CITemCoal_V3,(Cp*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(Cp*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(UFilCoal_V3*AreaTanqCoal_V3),Tamb,(MasaTanqueCoal_V3*Cv));
    TempOutCoal_V3_C = TempOutCoal_V3-273;
    DifPresCoal_V3= 10000*(PresionOutHEX2_kg-PresionTanqueCoal_V3_kg); // factor de conversión kg/cm2=10000 mm H2O

    ////// filtro de coalescencia FV082-1///////

    CIPre_Fil_FV082_1 = (CIMasaCoalV082_1*R_gas*CITemCoalV082_1/VolCoalV082_1);
    MasaCoalFV082_1 = Masa(CIMasaCoalV082_1,CIPresionTanqueCoal_V3,CIPre_Fil_FV082_1,(VelocidadGasin3*AreaTub2)/(R_gas*CITemCoalV082_1))*On_off_Filtro_FV082_1;
    NivelCoalFV082_1A = Nivel(CICoal_FV082_1A,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2*Eta_VANE*Eta_Coal_V3),Eta_Coal_FV082_1A,(AreaFilTanqCoal_V082_1*DensidadAgua))*On_off_Filtro_FV082_1;
    NivelCoalFV082_1Amm = 1000*NivelCoalFV082_1A;
    NivelCoalFV082_1B = Nivel(CICoal_FV082_1B,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2*Eta_VANE*Eta_Coal_V3*Eta_Coal_FV082_1A),Eta_Coal_FV082_1B,(AreaFilTanqCoal_V082_1*DensidadAgua))*On_off_Filtro_FV082_1;
    NivelCoalFV082_1Bmm = 1000*NivelCoalFV082_1B;
    TempOutCoalFV082_1 = HEX(CITemCoal_V3,CITemCoalV082_1,(Cp*On_off_Filtro_FV082_1*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(Cp*On_off_Filtro_FV082_1*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(UFilCoal_V3*AreaTanqCoal_V3/*usé los mismos que el v3*/),Tamb,(MasaCoalFV082_1*Cv));
    TempOutCoalFV082_1_C = TempOutCoalFV082_1-273;

    //////Filtro de coalescencia FV082-2////////

    CIPre_Fil_FV082_2 = (CIMasaCoalV082_2*R_gas*CITemCoalV082_2/VolCoalV082_2);
    MasaCoalFV082_2 = Masa(CIMasaCoalV082_2,CIPresionTanqueCoal_V3,CIPre_Fil_FV082_2,(VelocidadGasin3*AreaTub2)/(R_gas*CITemCoalV082_2));
    NivelCoalFV082_2A = Nivel(CICoal_FV082_2A,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2*Eta_VANE*Eta_Coal_V3),Eta_Coal_FV082_2A,(AreaFilTanqCoal_V082_1*DensidadAgua))*On_off_Filtro_FV082_2;
    NivelCoalFV082_2Amm = 1000*NivelCoalFV082_2A;
    NivelCoalFV082_2B = Nivel(CICoal_FV082_2B,(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2)),(Humedadgasin*Eta_Fil1*Eta_Fil2*Eta_VANE*Eta_Coal_V3*Eta_Coal_FV082_2B),Eta_Coal_FV082_2B,(AreaFilTanqCoal_V082_1*DensidadAgua))*On_off_Filtro_FV082_2;
    NivelCoalFV082_2Bmm = 1000*NivelCoalFV082_2B;
    TempOutCoalFV082_2 = HEX(CITemCoal_V3,CITemCoalV082_2,(Cp*On_off_Filtro_FV082_2*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(Cp*On_off_Filtro_FV082_2*(VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))),(UFilCoal_V3*AreaTanqCoal_V3/*usé los mismos que el v3*/),Tamb,(MasaCoalFV082_2*Cv));
    TempOutCoalFV082_2_C = TempOutCoalFV082_1-273;
    PDIS_082 = ((VelocidadGasin3*AreaTub2*CIPresionOutTanExp2/(R_gas*CITanqueExp2))*ViscosiGas*Longi_Filto_FV082)/(DensidadGas*AreaFilTanqCoal_V082_2*PermeabCoal1); // unidades en kPa: set point 7 PSID ALARMA ALTA, 12 PSID ALARMA ALTA ALTA. FUENTE MANUAL FILTROS COALES BOP - ARCHIVO:TODOS
    PDIS_082_psi = PDIS_082*0.1450377;  // 0.1450377 conversion de kPa a psi


    ////////// Suministro de gas a turbina //////


    if (On_off_Filtro_FV082_1==1 && On_off_Filtro_FV082_2==0)
    {
        VelocidadGasout4 = (((VelocidadGasin3*0.8589*AreaTub2*CIPresionTanqueCoal_V3/(R_gas*CITemCoal_V3))*R_gas*CITemCoalV082_1)/(CIPre_Fil_FV082_1*AreaTub3));
        Flujo62109= ((VelocidadGasout4*AreaTub3*CIPre_Fil_FV082_1/(R_gas*CITemCoalV082_1)));
        PI6214 = CIPre_Fil_FV082_1;

    }
    else if (On_off_Filtro_FV082_1==0 && On_off_Filtro_FV082_2==1)
    {
        VelocidadGasout4 = (((VelocidadGasin3*0.8589*AreaTub2*CIPresionTanqueCoal_V3/(R_gas*CITemCoal_V3))*R_gas*CITemCoalV082_2)/(CIPre_Fil_FV082_2*AreaTub3));
        Flujo62109= ((VelocidadGasout4*AreaTub3*CIPre_Fil_FV082_2/(R_gas*CITemCoalV082_2)));
        PI6214 = CIPre_Fil_FV082_2;
    }

    X_FSV6249 = Xvalvcontrol1_v1(Segnal_FSV6249*Onn_Off_FSV6249,CI_Apertura_FSV6249,Tao_Valvula_FSV6249,Apertura_Max_FSV6249);
    X_FSV6204 = Xvalvcontrol1_v1(Segnal_FSV6204*Onn_Off_FSV6204,CI_Apertura_FSV6204,Tao_Valvula_FSV6204,Apertura_Max_FSV6204);
    X_SOV6208 = Xvalvcontrol1_v1(Segnal_SOV6208*Onn_Off_SOV6208,CI_Apertura_SOV6208,Tao_Valvula_SOV6208,Apertura_Max_SOV6208);
    Flujo_FSV6249  = (Flujo62109*CI_Apertura_FSV6249);
    FlujoSOV6208  = ((CI_Apertura_SOV6208*(Flujo62109))/(CI_Apertura_SOV6208+CI_Apertura_FSV6204));
    Flujo_FSV6204  = ((CI_Apertura_FSV6204*(Flujo62109))/(CI_Apertura_SOV6208+CI_Apertura_FSV6204));

    PI62139A = PI6214*K_Val_FCV621*K_Val_FCV621*CI_Apertura_FSV6204;
    PI62140A = PI62139A;
    PI62141A = PI62139A;
    PI62139B = PI62139A;
    PI62140B = PI62139A;
    PI62141B = PI62139A;


    //// Válvulas reguladoras anillos///

    Segnal_FCV62109 = LSS2; // valor de LSS2 dado por enrique
    Segnal_FCV62108 = LSS2;
    Segnal_FCV62107 = LSS2;

    X_FCV62109 = Xvalvcontrol1_v1(Segnal_FCV62109*Onn_Off_FCV62109,CI_Apertura_FCV62109,Tao_Valvula_FCV62109,Apertura_Max_FCV62109);
    X_FCV62108 = Xvalvcontrol1_v1(Segnal_FCV62108*Onn_Off_FCV62108,CI_Apertura_FCV62108,Tao_Valvula_FCV62108,Apertura_Max_FCV62108);
    X_FCV62107 = Xvalvcontrol1_v1(Segnal_FCV62107*Onn_Off_FCV62107,CI_Apertura_FCV62107,Tao_Valvula_FCV62107,Apertura_Max_FCV62107);
    Flujo_FCV62109  = ((CI_Apertura_FCV62109*(Flujo62109))/(CI_Apertura_FCV62109+CI_Apertura_FCV62108+CI_Apertura_FCV62107)); // Flujo al manifold A
    Flujo_FCV62108  = ((CI_Apertura_FCV62108*(Flujo62109))/(CI_Apertura_FCV62109+CI_Apertura_FCV62108+CI_Apertura_FCV62107)); // Flujo al manifold B
    Flujo_FCV62107  = ((CI_Apertura_FCV62108*(Flujo62109))/(CI_Apertura_FCV62109+CI_Apertura_FCV62108+CI_Apertura_FCV62107)); // Flujo al manifold C

    PI62136A = (PI62139A*K_Val_FCV621*X_FCV62109);
    PI62137A = (PI62141A*K_Val_FCV621*X_FCV62107);
    PI62138A = (PI62140A*K_Val_FCV621*X_FCV62108);
    PI62136B = (PI62139B*K_Val_FCV621*X_FCV62109);
    PI62137B = (PI62141B*K_Val_FCV621*X_FCV62107);
    PI62138B = (PI62140B*K_Val_FCV621*X_FCV62108);

    ////Válvulas de anillos suministro a combustor////

    //// anillo A (interno) ////

    SOV62111 = Xvalvcontrol1_v1(On_Off_SOV62111,CI_Apertura_SOV62111,Tao_Valvula_SOV,Apertura_Max_SOV);
    SOV62113 = Xvalvcontrol1_v1(On_Off_SOV62113,CI_Apertura_SOV62113,Tao_Valvula_SOV,Apertura_Max_SOV);
    SOV62116 = Xvalvcontrol1_v1(On_Off_SOV62116,CI_Apertura_SOV62116,Tao_Valvula_SOV,Apertura_Max_SOV);
    SOV62118 = Xvalvcontrol1_v1(On_Off_SOV62118,CI_Apertura_SOV62118,Tao_Valvula_SOV,Apertura_Max_SOV);
    SOV62120 = Xvalvcontrol1_v1(On_Off_SOV62120,CI_Apertura_SOV62120,Tao_Valvula_SOV,Apertura_Max_SOV);
    Flujo_SOV62111 = ((CI_Apertura_SOV62111*(Flujo_FCV62109))/(CI_Apertura_SOV62111+CI_Apertura_SOV62113+CI_Apertura_SOV62116+CI_Apertura_SOV62118+CI_Apertura_SOV62120)); // Flujo al manifold A
    Flujo_SOV62113 = ((CI_Apertura_SOV62113*(Flujo_FCV62109))/(CI_Apertura_SOV62111+CI_Apertura_SOV62113+CI_Apertura_SOV62116+CI_Apertura_SOV62118+CI_Apertura_SOV62120));
    Flujo_SOV62116 = ((CI_Apertura_SOV62116*(Flujo_FCV62109))/(CI_Apertura_SOV62111+CI_Apertura_SOV62113+CI_Apertura_SOV62116+CI_Apertura_SOV62118+CI_Apertura_SOV62120));
    Flujo_SOV62118 = ((CI_Apertura_SOV62118*(Flujo_FCV62109))/(CI_Apertura_SOV62111+CI_Apertura_SOV62113+CI_Apertura_SOV62116+CI_Apertura_SOV62118+CI_Apertura_SOV62120));
    Flujo_SOV62120 = ((CI_Apertura_SOV62120*(Flujo_FCV62109))/(CI_Apertura_SOV62111+CI_Apertura_SOV62113+CI_Apertura_SOV62116+CI_Apertura_SOV62118+CI_Apertura_SOV62120));

    ///// anillo B (externo)////

    SOV62115 = Xvalvcontrol1_v1(On_Off_SOV62115,CI_Apertura_SOV62115,Tao_Valvula_SOV,Apertura_Max_SOV);
    Flujo_SOV62115 = ((CI_Apertura_SOV62115*(Flujo_FCV62108))/(CI_Apertura_SOV62115+1));
    Flujo_toberas = ((1*(Flujo_FCV62108))/(CI_Apertura_SOV62115+1));

    //qDebug()<<Flujo_FCV62108<<Flujo_SOV62115+Flujo_toberas;

    ////// anillo C (medio)////

    SOV62110 = Xvalvcontrol1_v1(On_Off_SOV62110,CI_Apertura_SOV62110,Tao_Valvula_SOV,Apertura_Max_SOV);    
    SOV62112 = Xvalvcontrol1_v1(On_Off_SOV62112,CI_Apertura_SOV62112,Tao_Valvula_SOV,Apertura_Max_SOV);    
    SOV62114 = Xvalvcontrol1_v1(On_Off_SOV62114,CI_Apertura_SOV62114,Tao_Valvula_SOV,Apertura_Max_SOV);
    SOV62117 = Xvalvcontrol1_v1(On_Off_SOV62117,CI_Apertura_SOV62117,Tao_Valvula_SOV,Apertura_Max_SOV);    
    SOV62119 = Xvalvcontrol1_v1(On_Off_SOV62119,CI_Apertura_SOV62119,Tao_Valvula_SOV,Apertura_Max_SOV);
    Flujo_SOV62110 = ((CI_Apertura_SOV62110*(Flujo_FCV62107))/(CI_Apertura_SOV62110+CI_Apertura_SOV62112+CI_Apertura_SOV62114+CI_Apertura_SOV62117+CI_Apertura_SOV62119)); // Flujo al manifold A
    Flujo_SOV62112 = ((CI_Apertura_SOV62112*(Flujo_FCV62107))/(CI_Apertura_SOV62110+CI_Apertura_SOV62112+CI_Apertura_SOV62114+CI_Apertura_SOV62117+CI_Apertura_SOV62119));
    Flujo_SOV62114 = ((CI_Apertura_SOV62114*(Flujo_FCV62107))/(CI_Apertura_SOV62110+CI_Apertura_SOV62112+CI_Apertura_SOV62114+CI_Apertura_SOV62117+CI_Apertura_SOV62119));
    Flujo_SOV62117 = ((CI_Apertura_SOV62117*(Flujo_FCV62107))/(CI_Apertura_SOV62110+CI_Apertura_SOV62112+CI_Apertura_SOV62114+CI_Apertura_SOV62117+CI_Apertura_SOV62119));
    Flujo_SOV62119 = ((CI_Apertura_SOV62119*(Flujo_FCV62107))/(CI_Apertura_SOV62110+CI_Apertura_SOV62112+CI_Apertura_SOV62114+CI_Apertura_SOV62117+CI_Apertura_SOV62119));




    ///////// Sistemasa auxiliares////////////


    if((FallaBomLub == 1&& AutomaticoBomLub == 1)||(FallaBomLub==1&&ManualBomLub==1&&StartManualBomLub==1))
    {
        onoffBomLub = 1;
    }
    else if(FallaBomLub==0 || StopManualBomLub==1)
    {
        onoffBomLub = 0;
    }

    Vel_BombaAceite = VelocidadBomba(CI_VelAceiteceite,Tao_bombaAceite,Vel_maxBombaA,onoffBomLub,FallaBomLub);
    WBombaAceite = (CI_VelAceiteceite*ParInducidoMotorBombaAceite); // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    PresionFinalBombaAceite_kg = (((WBombaAceite*0.25*Densidad_aceite)/Flujo_in_aceite)+PI_Aceite)/kg_kPa; // 0.25 como eficiencia
    Temperatura_in_LubComp = HEX(CILubComp,CI_HEX_LUB,Flujo_in_aceite*CpAceite,Flujo_in_aceite*CpAceite,U_HEX_LUB*Area_HEX_LUB,Tamb,MasaAceite_HEX*CpAceite);
    TempAceiteoutLubComp = LubComp(CI_HEX_LUB,CILubComp,(Flujo_in_aceite*CpAceite),(Flujo_in_aceite*CpAceite),(MasaLubComp*CpAceite),Trabajo_in1*0.1);
    TempAceiteoutLubComp_C = CILubComp - 273;
    TemChum3111A = TempChumaceraEmpujeMotor((k_L_ln),CILubComp, CIT_Chuma_3111A,(Cp_metal*Masa_metal),Trabajo_in1*0.7);
    TemChum3111B = TempChumaceraEmpujeMotor((k_L_ln),CILubComp, CIT_Chuma_3111B,(Cp_metal*Masa_metal),Trabajo_in1*0.72);
    TemChumEmpu_3113 = TempChumaceraEmpujeMotor((k_L_ln),CILubComp, CIT_ChumEmpu_3113,(Cp_metal*Masa_metal),Trabajo_in1);


    Avibra = 133*0.5715*(CI_Vel_Vent_HEX*CI_Vel_Vent_HEX*0.01096) ;         // excentricidad = D/4=(7.5ft*0.3048/4=0.5715)
    Cvibra = 1209083.609;  // valor pedro
    Bvibra = 18358704; // valor pedro
    Dvibra = 3744; // valor pedro
    VelDesplazamiento = Vibraciones (Avibra,Bvibra,Cvibra,Dvibra,&CIDesplazamiento,&CIVelDes,CI_Vel_Vent_HEX*0.1047,Tiempo);  // factor de conversión 1RPM = 0.1047 rad/seg;  0.1047^2=0.01096

//********************************************************************************************************************************//

//Región para reiniciar todas las condiciones inciales de los modelos.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////
	CIPotBomba_AH=PotenciaBomba_AH;
    CINivelTanque_AH=Nivel_Tanque_AH;
    CITempAceiteTanque_AH=TempAceiteTank_AH;
    CIPotVentilador_AH=PotenciaVentilador_AH;
    CITempAceiteInter_AH=TempAceiteIntercambiador_AH;
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
fclose(arc);
return 1;

}

void CARGA_VARIABLES()
{

		///////////////////****************DATOS DE TURBOGRUPO INICIALIZADOS********************////////////

	A52_1 = 0;          //INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
	A52_2 = 0;          //INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
	AREA_1_CB_IGV = 0;  // ÁREA DE IGV DEL COMPRESOR DE BAJA
	AREA_FMENF_CA = 0;  // ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE ALTA
	AREA_FMENF_CB = 0;  // ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE BAJA
	AREA_FMOUT_CA = 0;  // ÁREA DE FLUJO MASICO DE SALIDA  ENFRIAMIENTO COMPRESOR DE ALTA
	CDPA = 0;           // VÁLVULA DE PURGA COMPRESOR DE ALTA  
	CICDPA = 0;         // CONDICIÓN INICIAL DE LA VÁLVULA DE PURGA
	CIST8A = 0;			
	CITCCA = 25;
	CITCCB = 25;
	CITCTA = 25;
	CITCTB = 25;
	CITenf = 25;
	CITRCA = 25;
	CITRCB = 25;
	CITRTA = 25;
	CITRTB = 25;
	CIW_TA = 0;
	CIW_TB = 0;
	CIw1_TA = 0;
	CIw1_TB = 0;
	
	DENSIDAD_FMENF_CA = 0;
	DENSIDAD_FMENF_CB = 0;
	DENSIDAD_FMOUT_CA = 0;
	F_MAX_ENF = 0;
	F_MAX_ENF_U1CCA = 0;
	F_MAX_ENF_U1CCB = 0;
	F_MAX_ENF_U1CTA = 0;
	F_MAX_ENF_U1CTB = 0;
	F_MAX_ENF_U4RTA = 0;
	F_MAX_ENF_U4RTB = 0;
	FCV_68127 = 0;
	FLUJO_MASICO_AIRE = 0;
	FLUJO_MASICO_CA = 0;
	FLUJO_MASICO_CB = 0;
	FLUJO_MASICO_ENF_CA = 0;
	FLUJO_MASICO_ENF_CB = 0;
	FLUJO_MASICO_GAS = 0;
	FLUJO_MASICO_GAS_VIGV = 0;
	FLUJO_MASICO_OUT_CA = 0;
	FLUJO_MASICO_SALIDAVBV = 0;
	FLUJO_MASICO_TA = 0;
	FLUJO_MASICO_TB = 0;
	Frecuencia = 60;

	

	POTENCIA_CA = 0;
	POTENCIA_CB = 0;
	POTENCIA_MEC = 0;
	POTENCIA_TA = 0;
	POTENCIA_TB = 0;
	QA = 0;
	QB = 0;
	QCCA = 0;
	QCCB = 0;
	QCTA = 0;
	QCTB = 0;
	QRCA = 0;
	QRCB = 0;
	QRTA = 0;
	QRTB = 0;

	RADIO_MEDIO_CB = 1;      //ESTE DATO LO TIENE EL BARZA
	
	RADIO_MEDIO_TB = 1;		//ESTE DATO LO TIENE EL BARZA
	
	ST8A = 0;
	T_Giro_TA = 0;
	T_Giro_TB = 0;


	TCCA = 25;
	TCCB = 25;
	Tchiller = 25;
	TCTA = 25;
	TCTB = 25;
	Tenf = 25;
	TgCA = TEMPERATURA_SALIDA_COMPRESOR_ALTA;
	TgCB = TEMPERATURA_SALIDA_COMPRESOR_BAJA;
	Tgenf = TEMPERATURA_SALIDA_COMPRESOR_ALTA;	//CONSIDERANDO QUE SE ENFRIA CON EL AIRE A LA SALIDA DEL COMPRESOR DE ALTA
	
	TgenfA =TEMPERATURA_SALIDA_COMPRESOR_BAJA; //INICIALIZADA 
	Tlub = 25;				// IGUALAR DE COCHI 


	TgTA = T_C * 0.5;		//TEMPERATURA DE FLAMA ADIABATICA MULTIPLICADO POR 0.6 (FALTA HACER EL MODELO DE LA TEMPERATURA DE FLAMA HACIA LA ENTRADA DE LA TURBINA DE ALTA)
	TgTB = TEMPERATURA_SALIDA_TURBINA_ALTA;

	
	Torque_Arracador_TA = 0;
	Torque_Arracador_TB = 0;
	TORQUE_CA = 0;
	TORQUE_CB = 0;
	TORQUE_Exc = 0;
	TORQUE_TA = 0;
	TORQUE_TB = 0;
	TRCA = 25;
	TRCB = 25;
	TRTA = 25;
	TRTB = 25;
	U_CA = 0;
	U_CB = 0;
	U_TA = 0;
	U_TB = 0;
	U1CCA = 0;
	U1CCB = 0;
	U1CTA = 0;
	U1CTB = 0;
	U1enf = 0;
	U1RCA = 0;
	U1RCB = 0;
	U1RTA = 0;
	U1RTB = 0;
	
	U2CCA = 0;
	U2CCB = 0;
	U2CTA = 0;
	U2CTB = 0;
	U2enf = 0;

	
	U3enf = 0;
	U3RCA = 0;
	U3RCB = 0;
	U3RTA = 0;
	U3RTB = 0;
	U4enf = 0;
	U4RTA = 0;
	U4RTB = 0;
	VELOCIDAD_FMENF_CA = 0;
	VELOCIDAD_FMENF_CB = 0;
	VELOCIDAD_FMOUT_CA = 0;
	VN1_CB = 0;
	VT1_CA = 0;
	VT1_CB = 0;
	VT2_CA = 0;
	VT2_CB = 0;
	VT2_TA = 0;
	VT2_TB = 0;
	VT3_TA = 0;
	VT3_TB = 0;
	W_TA = 0;
	W_TB = 0;
	w1_TA = 0;
	w1_TB = 0;

	AFCV_6872 = 0;
	ALFA1_CB = 0;
	Alfa1_cb_control = 0;
	ALFA1_CONTROL_CB = 0;
	ALFA2_CB = 0;
	ALFA3_CB = 0;
	AREA_1_CB = 0;
	AREA_2_CB = 0;
	AREA_3_CB = 0;
	BETA3_CB = 0;
	CIALFA1 = 0;
	CIAREA1IGV = 0;
	CIAREA1VBV = 0;
	
	DELTA_PRESION_CB = 0;
	FCV_6872 = 0;

	 

	PDI64070 = 0;
	PRESION_ENTRADA_COMPRESOR_BAJA = 1;
	PRESION_SALIDA_COMPRESOR_BAJA = 1;
	
	
	TEMPERATURA_ENTRADA_COMPRESOR_BAJA = 25;
	TEMPERATURA_SALIDA_COMPRESOR_BAJA = 25;
	V1_CB = 0;
	V2_CB = 0;
	V3_CB = 0;
	VN2_CB = 0;
	VN3_CB = 0;
	VRB1_CB = 0;
	VRB2_CB = 0;
	VRB3_CB = 0;
	VT3_CB = 0;

	ALFA_1_CA = 0;
	ALFA1_CA = 0;
	Alfa1_ca_control = 0;
	ALFA1_CONTROL_CA = 0;
	ALFA2_CA = 0;
	ALFA3_CA = 0;
	AREA_1_CA = 0;
	AREA_2_CA = 0;
	AREA_3_CA = 0;
	AREA1_CONTROL_CA = 0;
	BETA_3_CA = 0;
	
	
	BETA3_CA = 0;
	CIALFA1_CA = 0;
	CIAREA1_CA = 0;
	CIBETA3CA = 0;
	CONTROL_BETA3_CA_CONTROL = 0;

	DELTA_PRESION_CA = 0;
	FCV_6871 = 0;
	FCV_6873 = 0;
	
	PRESION_SALIDA_COMPRESOR_ALTA = 0;



	K_ADECUACION_CDPA = 1;					//inicializada 
	K_ADECUACION_K1_ROTOR1_TA = 1;			//inicializada
	K_ADECUACION_K1_ROTOR1_TB = 1;			//inicializada
	K_ADECUACION_ST8A = 1;					//inicializada
	mCCA = 1000;							//inicializada 
	mCCB = 1000;							//inicializada
	mCTA = 1000;							//inicializada
	mCTB = 1000;							//inicializada
	menf = 1000;							//inicializada
	mRCA = 1000;							//inicializada
	mRCB = 1000;							//inicializada
	mRTA = 1000;							//inicializada
	mRTB = 1000;							//inicializada
	CPmaterial = 1;							//inicializada
	K_ADECUACION_1_CA = 1;					//inicializada
	K_ADECUACION_BETA3_CA = 1;				//inicializada
	GRAVEDAD = 9.81;						//inicializada 
	K_ADECUACION_1_CB = 1;					//inicializada 
	K_ADECUACION_AREA1_CA = 1;				//inicializada 
	K_ADECUACION_AREA1_CB = 1;				//inicializada
	U2RCA = 1;								//inicializada
	U2RCB = 1;								//inicializada
	U2RTA = 1;								//inicializada
	U2RTB = 1;								//inicializada
	BETA1_CA = .78870538;					//INICIALIZADA
	W_CA = 10200;							//INICIALIZADA
	BETA2_CA = 1.0066;						//INICIALIZADA
	W_CB = 3600;							//INICIALIZADA
	CP_CB = 1;								//INICIALIZADA
	RHO_AREA_2_CB = 1;						//INICIALIZADA
	RHO_AREA_3_CB = 1;						//INICIALIZADA
	RHO_DELTA_PRESION_CB = 1;   			//INICIALIZADA 
	CP_CA = 1;								//INICIALIZADA
	RHO_AREA_1_CA = 1;						//INICIALIZADA
	RHO_AREA_2_CA = 1;						//INICIALIZADA 
	RHO_AREA_3_CA = 1;						//INICIALIZADA
	RHO_DELTA_PRESION_CA = 1;				//INICIALIZADA
	RADIO_MEDIO_TA=.1275;					//INICIALIZADA
	RHO_AREA_1_CB = 1;						//INICIALIZADA 
	RADIO_MEDIO_CA =.43;					//INICIALIZADA
	BETA1_CB =.702244;						//inicializada
	BETA2_CB =.95;							//inicializada
	TAO_ALFA_1_CA = 0.25;						//INICIALIZADA
	TAO_BETA3_CA = 0.25;						//INICIALIZADA
	TAO_CA_A1 = 0.25;							//INICIALIZADA
	K_ADECUACION_FCV68127 = 1;				//INICIALIZADA
	K_ADECUACION_FCV68128 = 1;				//INICIALIZADA
	K_ADECUACION_FCV6871 = 1;  				//INICIALIZADA
	K_ADECUACION_FCV6872 = 1;  				//INICIALIZADA
	K_ADECUACION_FCV6873 = 1;  				//INICIALIZADA					  
	CONSTANTE_AREAS_2_TA = .40;				//INICIALIZADA 
	CONSTANTE_AREAS_1_TA = 2.45;			// INICIALIZADA 
	BETA2_TA = 1.04;						// INICIALIZADA
	BETA1_TA = 1.39;						// INICIALIZADA
	CP_TA = 1.17;							//INICIALIZADA
	TAO_FCV68127 = 0.5;						//INICIALIZADA
	TAO_FCV68128 = 0.5;						// INICIALIZADA 
	TAO_FCV6871 = 0.5;						// INICIALIZADA
	TAO_FCV6872 = 0.5;						// INICIALIZADA
	TAO_FCV6873 = 0.5;						//INICIALIZADA
	TAO_CDPA = 0.5;							//INICIALIZADA
	TAO_ST8A = 0.5;							//INICIALIZADA
	TAO_TA_ROTOR1 = 0.5;						//INICIALIZADA
	TAO_TB_ROTOR1 = 0.5;						//INICIALIZADA
	TAO_ALFA_1_CB = 0.5;						//INICIALIZADA
	TAO_IGV_CB_A1 = 0.5;						//INICIALIZADA
	TAO_VBV_CA_A1 = 0.5;						//INICIALIZADA


/////////////****************AQUI ACABAN LAS INICIALIZACIONES DE TURBO GRUPO*************////////////////
}