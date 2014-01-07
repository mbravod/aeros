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
#include "..\\..\\mmf1.h"
#include "..\\..\\punteros.h"


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
double TempAireCompresor;
   void CARGA_VARIABLES()
   {
	    SetFloat(p_FMaire,0.0f);
	    SetFloat(p_Calentamiento,0.0f);
		SetFloat(p_Enfriamiento,0.0f);
		SetFloat(p_Cp_agua,4.18f);
		SetFloat(p_VolEsp_agua,0.001f);
		SetFloat(p_Densidad_agua,997.0f);
		SetFloat(p_Cv_aire,0.718f);
		SetFloat(p_Cp_aire,1.005f);
		SetFloat(p_TambK,300.0f);
		SetFloat(p_TambC,0.0f);
		SetFloat(p_TambF,0.0f);
		SetFloat(p_Viscosidad_Aire,0.00001825f);
		SetFloat(p_R_aire,0.287061f);
		SetFloat(p_Presion_atm,0.0f);
		SetFloat(p_Densidad_aire,0.0f);
		SetFloat(p_Tem_in_64031K,298.0f);
		SetFloat(p_Tem_in_64031F,0.0f);
		SetFloat(p_Tem_in_64031C,0.0f);
		SetFloat(p_Tem_in_64030K,0.0f);
		SetFloat(p_Tem_in_64030F,0.0f);
		SetFloat(p_Tem_in_64030C,0.0f);
		SetFloat(p_Tem_in_64033K,298.0f);
		SetFloat(p_Tem_in_64033F,0.0f);
		SetFloat(p_Tem_in_64033C,0.0f);
		SetFloat(p_Tem_in_64032K,0.0f);
		SetFloat(p_Tem_in_64032F,0.0f);
		SetFloat(p_Tem_in_64032C,0.0f);
		SetFloat(p_AreafilA,1.0f);
		SetFloat(p_AreafilB,1.0f);
		SetFloat(p_AreafilC,1.0f);
		SetFloat(p_Permeabilidad,1.0f);
		SetFloat(p_Longitud_filtro,0.5f);
		SetFloat(p_PDSH6405,1.0f);
        SetFloat(p_PDSH6405_mmH2O,0.0f);
        SetFloat(p_PDSH6405_inH2O,0.0f);
		SetFloat(p_PDSH64060,0.0f);
		SetFloat(p_PDSH64060_mmH2O,0.0f);
		SetFloat(p_PDSH64060_inH2O,0.0f);
		SetFloat(p_PDSH64018,0.0f);
        SetFloat(p_PDSH64018_mmH2O,0.0f);
        SetFloat(p_PDSH64018_inH2O,0.0f);
		SetFloat(p_TaoHexCarcasa,0.01f);
		SetFloat(p_WBombaA,18.64f);
		SetFloat(p_WBombaB,18.64f);
		SetFloat(p_PI_A,200.0f);
		SetFloat(p_PI_B,200.0f);
		SetFloat(p_PresionFinalBomba,0.0f);
		SetFloat(p_PresionFinalBombaB,0.0f);
		SetFloat(p_Flujo_in_agua,0.0f);
		SetFloat(p_Flujo_in_aguaB,0.0f);
		SetFloat(p_Vel_BombaA,0.0f);
		SetFloat(p_Vel_BombaB,0.0f);
		SetFloat(p_Vel_maxBombaA,1750.0f);
		SetFloat(p_Vel_maxBombaB,1750.0f);
		SetFloat(p_VelI_A,0.0f);
		SetFloat(p_CI_VelA,0.0f);
		SetFloat(p_CI_VelB,0.0f);
		SetFloat(p_Tao_bombaA,1.0f);
		SetFloat(p_ParInducidoMotorBomba,244.14f);
		SetFloat(p_OnOffBombaChiller,0.0f);
		SetFloat(p_AreaCal,10.0f);
		SetFloat(p_UCal,0.1f);
		SetFloat(p_Temperatura_final_Cal,300.0f);
		SetFloat(p_MasaCal,500.0f);
		SetFloat(p_CICale,298.0f);
		SetFloat(p_TemperaturaInicial,300.0f);
		SetFloat(p_Potencia_resistenciaMax,1758.0f);
		SetFloat(p_Potencia_resistencia,0.0f);
		SetFloat(p_CIRes,0.0f);
		SetFloat(p_TaoRes,1.0f);
		SetFloat(p_AreaEvap,10.0f);
		SetFloat(p_UEvap,0.1f);
		SetFloat(p_Temperatura_final_Evap,0.0f);
		SetFloat(p_MasaEvap,1100.0f);
		SetFloat(p_CIEvap,298.0f);
		SetFloat(p_Tempera_Inicial_Evap,298.0f);
		SetFloat(p_Potencia_frigorifica_Max,1758.0f);
		SetFloat(p_CI_Potencia_frigorifica,0.0f);
		SetFloat(p_Tao_Potencia_frigorifica,1.0f);
		SetFloat(p_Potencia_frigorifica,0.0f);
		SetFloat(p_AreaHEX,28.615f);
		SetFloat(p_UHEX,1.3703f);
		SetFloat(p_Temperatura_final_HEX_agua,0.0f);
		SetFloat(p_MasaHEX,40.0f);
		SetFloat(p_CIHEX,298.0f);
		SetFloat(p_TinHexAgua,0.0f);
		SetFloat(p_Tem_fin_6450,0.0f);
		SetFloat(p_Tem_fin_6450_F,0.0f);
		SetFloat(p_Tem_fin_6499,0.0f);
		SetFloat(p_Tem_fin_6499_F,0.0f);
		SetFloat(p_Tem_fin_64072,0.0f);
		SetFloat(p_CIAireVentA,298.0f);
		SetFloat(p_Tem_fin_6402,0.0f);
		SetFloat(p_Tem_fin_6402_F,0.0f);
		SetFloat(p_CITem6402,298.0f);
		SetFloat(p_Tem_fin_64071,298.0f);
		SetFloat(p_CIAireVentB,298.0f);
		SetFloat(p_Tem_fin_64072_F,0.0f);
		SetFloat(p_Tem_fin_64071_F,0.0f);
		SetFloat(p_MasaHEXAire,4.0f);
		SetFloat(p_Flujo_Aire_inTur,0.0f);
		SetFloat(p_Flujo_Aire_inGen,0.0f);
		SetFloat(p_CIAireA,298.0f);
		SetFloat(p_CIAireB,298.0f);
		SetFloat(p_Pow_Res_Electrica,1000.0f);
		SetFloat(p_TgasesTurbina,1150.0f);
		SetFloat(p_Vel_in_Aire,5.0f);
		SetFloat(p_Vel_out_Aire,12.0f);
		SetFloat(p_Uturbina,45.0f);
		SetFloat(p_Aturbina,3.0f);
		SetFloat(p_MasaTurbina,60.0f);
		SetFloat(p_Temperatura_aire_turbina,300.0f);
		SetFloat(p_CIAire_Turbina,298.0f);
		SetFloat(p_CIMasaTurbina,64.0f);
		SetFloat(p_VolCuartoTurb,54.4f);
		SetFloat(p_Dif_PI_VentiTur_mmH2O,0.0f);
		SetFloat(p_Dif_PI_VentiTur_inH2O,0.0f);
		SetFloat(p_WVenti,0.0f);
		SetFloat(p_CI_PI_Venti,0.0f);
		SetFloat(p_Dif_PI_VentiTur,0.0f);
		SetFloat(p_CI_VentiVel,0.0f);
		SetFloat(p_Tao_Ventilador,1.0f);
		SetFloat(p_ParInducidoMotorVentilador,416.05f);
		SetFloat(p_VelMaxVenti,1780.0f);
		SetFloat(p_VelFinalVenti,3.0f);
		SetFloat(p_RadioMedio,0.4675f);
		SetFloat(p_Angulos,6.637f);
		SetFloat(p_VelAireIn,0.0f);
		SetFloat(p_Area_Ventilador,2.159f);
		SetFloat(p_onoffVentTurb,0.0f);
		SetFloat(p_AutomaticoVent,0.0f);
		SetFloat(p_ManualVent,1.0f);
		SetFloat(p_StartManualVent,0.0f);
		SetFloat(p_StopManualVent,0.0f);
		SetFloat(p_FallaVentilador,1.0f);
		SetFloat(p_WVentiB,0.0f);          
		SetFloat(p_CI_PI_VentiB,0.0f);     
		SetFloat(p_CI_VentiVelB,0.0f);     
		SetFloat(p_VelFinalVentiB,3.0f);
		SetFloat(p_VelAireInB,0.0f);       
		SetFloat(p_onoffVentTurbB,0.0f);
		SetFloat(p_AutomaticoVentB,0.0f);
		SetFloat(p_ManualVentB,1.0f);
		SetFloat(p_StartManualVentB,0.0f);
		SetFloat(p_StopManualVentB,0.0f);
		SetFloat(p_FallaVentiladorB,1.0f);
		SetFloat(p_WVentiGen,0.0f);
		SetFloat(p_Dif_PI_VentiGen,101.3f);
		SetFloat(p_CI_VentiVelGen,0.0f);
		SetFloat(p_Tao_VentiGen,1.0f);
		SetFloat(p_ParInducidoMotorVentiGen,395.6061f);
		SetFloat(p_VelMaxVentiGen,1800.0f);
		SetFloat(p_VelFinalVentiGen,3.0f);
		SetFloat(p_RadioMedioGen,0.36175f);
		SetFloat(p_AngulosGen,5.637f);
		SetFloat(p_VelAireInGen,0.0f);
		SetFloat(p_Area_VentiladorGen,1.5f);
		SetFloat(p_onoffVentGen,0.0f);
		SetFloat(p_AutomaticoVentGen,0.0f);
		SetFloat(p_ManualVentGen,1.0f);
		SetFloat(p_StartManualVentGen,0.0f);
		SetFloat(p_StopManualVentGen,0.0f);
		SetFloat(p_FallaVentiGen,1.0f); 
		SetFloat(p_WVentiGenB,0.0f);	
		SetFloat(p_CI_VentiVelGenB,0.0f);	
		SetFloat(p_ParInducidoMotorVentiGenB,395.6061f);
		SetFloat(p_VelMaxVentiGenB,1800.0f);
		SetFloat(p_VelFinalVentiGenB,0.0f);
		SetFloat(p_VelAireInGenB,0.0f);
		SetFloat(p_onoffVentGenB,0.0f);
		SetFloat(p_AutomaticoVentGenB,0.0f);
		SetFloat(p_ManualVentGenB,1.0f);
		SetFloat(p_StartManualVentGenB,0.0f);
		SetFloat(p_StopManualVentGenB,0.0f);
		SetFloat(p_FallaVentiGenB,1.0f);
		SetFloat(p_Temperatura_aire_generador,0.0f);
		SetFloat(p_PDSL6407,0.0f);
		SetFloat(p_FlujoInAgua,0.0f);
		SetFloat(p_FlujoInQuimico,0.0f);
		SetFloat(p_LG6520,0.0f);
		SetInt(p_LS6543,0.0f);
		SetInt(p_TAH1620,0.0f);
		SetFloat(p_FMOT6535,0.0f);
		SetInt(p_SOV6540,0);
		SetFloat(p_PI6538,0);
		SetInt(p_SOV6516,0);
		SetInt(p_SOV6504,0);
		SetInt(p_ValBol1,0);
		SetInt(p_ValBol2,0);
		SetInt(p_ValBol3,0);
		SetInt(p_ValBol4,0);
		SetInt(p_OpSOV6540,0);
		SetInt(p_ClSOV6540,0);
		SetInt(p_OpSOV6516,0);
		SetInt(p_ClSOV6516,0);
		SetInt(p_OpSOV6504,0);
		SetInt(p_ClSOV6504,0);
		SetInt(p_Local_Remoto_WWash,0);
		SetInt(p_StartHS6505,0);
		SetInt(p_StopHS6505,0);
		SetInt(p_StartRemoto,0);
		SetInt(p_StopRemoto,0);
		SetInt(p_FallaMOT6535,1);
		SetInt(p_FallaSOV6516,1);
		SetInt(p_FallaSOV6540,1);
		SetInt(p_FallaSOV6504,1);
		SetFloat(p_CIFMOT6535,0.0f);
		SetFloat(p_NivelTank,0.0f);
		SetFloat(p_CINivelTank,0.0f);
		SetInt(p_OnMOT6535,0);
		SetInt(p_OffMOT6535,0);
		SetFloat(p_qoutTank,0.0f);
		SetFloat(p_FugaTank,0.0f);
		SetFloat(p_qDren,0.0f);
		SetFloat(p_qOverflow,0.0f);
		SetFloat(p_PMOT6535,0.0f);
		SetFloat(p_CIPMOT6535,0.0f);
		SetInt(p_ResetFuga,0);
		SetFloat(p_qAire,0.0f);
		SetInt(p_OnOffCompresor,0);
		SetFloat(p_PotenciaCompresor,0.0f);
		SetFloat(p_PotMaxCompresor,3.73f);
		SetFloat(p_TempAireCompresor,298.15f);
		SetFloat(p_TempAireTanque,TempAireCompresor);
		SetFloat(p_PresionTanque,0.0f);
		SetFloat(p_NivelSecador,0.0f);
		SetFloat(p_FlujoInAire,0.0f);
		SetFloat(p_FlujoOutAire,0.0f);
		SetFloat(p_FlujoCompresor,0.0f);
		SetFloat(p_FlujoOutSecador,0.0f);
		SetFloat(p_Masa_Tanque,1.319371975f);
		SetFloat(p_VolumenTanque,1.11448575f);
		SetFloat(p_HumedadEspecifica,0.f);
		SetFloat(p_EficienciaSecador,0.98f);
		SetFloat(p_DensidadAgua,1000.0f);
		SetFloat(p_DensidadAire,1.22f);
		SetFloat(p_TaoCompresor,0.5f);
		SetFloat(p_CpAire,1.005f);
		SetFloat(p_CvAire,0.718f);
		SetFloat(p_PresionAmbiente,101.3f);
		SetFloat(p_MasaCompresor,0.0f);
		SetFloat(p_VolCompresor,0.00315);
		SetFloat(p_PresionOutComp,0.0f);
		SetFloat(p_CIPotComp,0.0f);
		SetFloat(p_CITempAireComp,298.15f);
		SetFloat(p_CIMasaTanque,1.319371975f);
		SetFloat(p_CIPresionTanque,0.0f);
		SetFloat(p_CIDensidadAire,1.22f);
		SetInt(p_FallaCompresor,1);
		SetFloat(p_TaoGeneradorUnidad,0.08f);
		SetFloat(p_PotenciaGenerador,32000000.0f);
		SetFloat(p_VoltajeGenerador,13800.0);
		SetFloat(p_VFAGeneradorU,0.0f);
		SetFloat(p_VFBGeneradorU,0.0f);
		SetFloat(p_VFCGeneradorU,0.0f);
		SetFloat(p_CFAGeneradorU,0.0f);
		SetFloat(p_CFBGeneradorU,0.0f);
		SetFloat(p_CFCGeneradorU,0.0f);
		SetFloat(p_GeneradorUnidadP,0.0f);
		SetFloat(p_GeneradorAuxiliar,0.0f);
		SetFloat(p_VoltajeGeneradorAuxiliar,4100.0f);
		SetFloat(p_TaoGenAux,0.2f);
		SetFloat(p_CIVGenAux,0.0f);
		SetFloat(p_CIPGenAux,0.0f);
		SetFloat(p_CIGeneradorUnidadP,0.0f);
		SetFloat(p_CIGeneradorUnidadVFA,0.0f);
		SetFloat(p_CIGeneradorUnidadVFB,0.0f);
		SetFloat(p_CIGeneradorUnidadVFC,0.0f);
		SetFloat(p_TaoIsocrono,0.00001f);
		SetFloat(p_SetPointFrecuencia,60.0f);
		SetFloat(p_CIContrIsoc,0.0f);
		SetFloat(p_ControlIsocrono,0.0f);
		SetFloat(p_PotMecanica,0.0f);
		SetFloat(p_PotElectrica,0.0f);
		SetFloat(p_AmortiguamientoAux,0.0f);
		SetFloat(p_RozamientoAux,10.0f);
		SetFloat(p_FrecGeneradorAux,0.0f);
		SetFloat(p_CIFrecAux,0.0f);
		SetFloat(p_CIPotElec,0.0f);
		SetFloat(p_CGeneradorAux,0.0f);
		SetFloat(p_TaoCuchillas,2.0f);
		SetFloat(p_C92BT221A,0.0f);
		SetFloat(p_CIC92BT221A,0.0f);
		SetFloat(p_C92BAT21A,0.0f);
		SetFloat(p_CIC92BAT21A,0.0f);
		SetFloat(p_C92BT221C,0.0f);
		SetFloat(p_CIC92BT221C,0.0f);
		SetFloat(p_C92BCT21A,0.0f);
		SetFloat(p_CIC92BCT21A,0.0f);
		SetFloat(p_C90MC,0.0f);
		SetFloat(p_CIC90MC,0.0f);
		SetFloat(p_VFAT21A,0.0f);
		SetFloat(p_VFBT21A,0.0f);
		SetFloat(p_VFCT21A,0.0f);
		SetFloat(p_CFAT21A,0.0f);
		SetFloat(p_CFBT21A,0.0f);
		SetFloat(p_CFCT21A,0.0f);
		SetFloat(p_VFAT20AuxG1,0.0f);
		SetFloat(p_VFBT20AuxG1,0.0f);
		SetFloat(p_VFCT20AuxG1,0.0f);
		SetFloat(p_CFAT20AuxG1,0.0f);
		SetFloat(p_CFBT20AuxG1,0.0f);
		SetFloat(p_CFCT20AuxG1,0.0f);
		SetFloat(p_VFAT00AuxG1,0.0f);
		SetFloat(p_VFBT00AuxG1,0.0f);
		SetFloat(p_VFCT00AuxG1,0.0f);
		SetFloat(p_CFAT00AuxG1,0.0f);
		SetFloat(p_CFBT00AuxG1,0.0f);
		SetFloat(p_CFCT00AuxG1,0.0f);
		SetFloat(p_VFAT221A,0.0f);
		SetFloat(p_VFBT221A,0.0f);
		SetFloat(p_VFCT221A,0.0f);
		SetFloat(p_CFAT221A,0.0f);
		SetFloat(p_CFBT221A,0.0f);
		SetFloat(p_CFCT221A,0.0f);
		SetFloat(p_VFAT221C,0.0f);
		SetFloat(p_VFBT221C,0.0f);
		SetFloat(p_VFCT221C,0.0f);
		SetFloat(p_CFAT221C,0.0f);
		SetFloat(p_CFBT221C,0.0f);
		SetFloat(p_CFCT221C,0.0f);
		SetFloat(p_TabCCM,57384.366f);
		SetFloat(p_TabChiller,1793475.434f);
		SetFloat(p_TabCompAire,74570.1);
		SetFloat(p_TabBCI,149140.2f);
		SetInt(p_OnOffGenerador,0);
		SetInt(p_OnOffGeneradorAuxiliar,0);
		SetInt(p_OnOffC92BT221A,0);
		SetInt(p_OnOffC92BAT21A,0);
		SetInt(p_OnOffC92BT221C,0);
		SetInt(p_OnOffC92BCT21A,0);
		SetInt(p_OnOffC90MC,0);
		SetInt(p_I521T21A,0);
		SetInt(p_I522T21A,0);
		SetInt(p_I52AuxG1,0);
		SetInt(p_I51G1,0);
		SetInt(p_I501AuxG1,0);
		SetInt(p_I50ANG1,0);
		SetInt(p_I502AuxG1,0);
		SetInt(p_Conexion1T21A,0);
		SetInt(p_Conexion2T21A,0);
		SetInt(p_Conexion1T20AuxG1,0);
		SetInt(p_Conexion2T20AuxG1,0);
		SetInt(p_Conexion1T00AuxG1,0);
		SetInt(p_Conexion2T00AuxG1,0);
		SetInt(p_FGenerador,1);
		SetInt(p_FGeneradorAux,1);
		SetInt(p_FC92BT221A,1);
		SetInt(p_FC92BAT21A,1);
		SetInt(p_FC92BT221C,1);
		SetInt(p_FC92BCT21A,1);
		SetInt(p_FC90MC,1);
		SetInt(p_FI521T21A,1);
		SetInt(p_FI522T21A,1);
		SetInt(p_FI52AuxG1,1);
		SetInt(p_FI51G1,1);
		SetInt(p_FI501AuxG1,1);
		SetInt(p_FI50ANG1,1);
		SetInt(p_FI502AuxG1,1);
		SetInt(p_FTabCCM,1);
		SetInt(p_FTabChiller,1);
		SetInt(p_FTabCompAire,1);
		SetInt(p_FTabBCI,1);
   }

    
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

//Esta aplicación se utilizará para crear todos los equipos auxiliares como son: CHILLER, LAVADO CON AGUA, VIBRACIONES,
// AIRE DE INSTRUMENTOS, SISTEMA ELÉCTRICO, LUBRICACIÓN TURBINA Y LUBRICACIÓN GENERADOR.
//Aqui se declaran todas las variables del programa

////// variables provenientes de otro sistema

   double FLUJO_MASICO_CB;            // FLUJO MASICO DE AIRE EN EL COMPRESOR DE BAJA	 

/////////////////CHILLER//////////////////////////////////////////////////////
    
    double FMaire;   
	double Calentamiento;
	double Enfriamiento;

	


		// Parámetros del los fluidos de trabajo


    double Cp_agua;                       // Calor específico del agua
    double VolEsp_agua;                   // volumen específico del agua
    double Densidad_agua;                 // densidad del agua
    double Cv_aire;                       // Calor epecifico del aire
    double Cp_aire;                       // Calor especifico del aire
    double TambK;                         // Temperatura ambiente K
    double TambC;                         // Temperatura ambiente °C
    double TambF;                         // Temperatura ambiente °F
    double Viscosidad_Aire;               // Viscosidad del aire
    double R_aire;                        // constante del aire
    double Presion_atm;                   // presion atmosferica
    double Densidad_aire;                 // densidad del aire
//	double TempAireCompresor;


		//parametros filtros de aire de entrada 
   double Tem_in_64031K;                     // Temperatura de entrada de aire de ventilación K
   double Tem_in_64031F;                     // °F
   double Tem_in_64031C;                     // °C
   double Tem_in_64030K;                     // K
   double Tem_in_64030F;                     // °F
   double Tem_in_64030C;                     // °C
   double Tem_in_64033K;                     // K
   double Tem_in_64033F;                     // °F
   double Tem_in_64033C;                     // °C
   double Tem_in_64032K;                     // K
   double Tem_in_64032F;                     // °F
   double Tem_in_64032C;                     // °C
   double AreafilA;                          //  m
   double AreafilB;                          //  m
   double AreafilC;                          //  m
   double Permeabilidad;                     // m2
   double Longitud_filtro;                   // m
   double PDSH6405;                          // kPa
   double PDSH6405_mmH2O;                    // mmH20
   double PDSH6405_inH2O;                    // In/wc
   double PDSH64060;                         //kPa
   double PDSH64060_mmH2O;                   // mm H2O
   double PDSH64060_inH2O;                   // in H2O
   double PDSH64018;                         // kPa
   double PDSH64018_mmH2O;
   double PDSH64018_inH2O;
   double TaoHexCarcasa;


			// Parámetros de las bombas de agua

    double WBombaA;                       // Potencia de la bomba de agua P-100A
    double PI_A;                          // Presión de entrada a la bomba P-100A
    double PresionFinalBomba;             // Diferencia de presion en la bomba P-100A.
    double Flujo_in_agua;                 // Flujo másico de agua la entrada
    double Vel_maxBombaA;                 // Velocidad máxima de la bomba de agua P-100A
    double Vel_BombaA;                    // Velocidad de la bomba
    double VelI_A;                        // Velocidad inicial de la bomba P-100A
    double CI_VelA;                       // Condiciones iniciales de la velocidad de bomba P-100A
    double Tao_bombaA;                    // Constante de respuesta de la bomba P-100A
    double ParInducidoMotorBomba;         // Par inducido en el motor del ventilador.
	double OnOffBombaChiller;
	

	double WBombaB;                       // Potencia de la bomba de agua P-100A
    double PI_B;                          // Presión de entrada a la bomba P-100A
    double PresionFinalBombaB;             // Diferencia de presion en la bomba P-100A.
    double Flujo_in_aguaB;                      // Flujo másico de agua la entrada
    double Vel_maxBombaB;                 // Velocidad máxima de la bomba de agua P-100A
    double Vel_BombaB;                    // Velocidad de la bomba
    double VelI_B;                        // Velocidad inicial de la bomba P-100A
    double CI_VelB;                       // Condiciones iniciales de la velocidad de bomba P-100A
    double OnOffBombaBChiller;

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

    double AreaHEX;                  // Area de intercambio de calor del HEX
    double UHEX;                     // Coeficiente global de trasferencia de calor del HEX
    double Temperatura_final_HEX_agua;    // Temperatura de salida del HEX
    double MasaHEX;                  // Masa de agua en el intercambiador
    double CIHEX;                    // Temperatura inicial en el HEX
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

    double WVenti;                        // Potencia del vebtilador
    double CI_PI_Venti;                      // Presión de entrada del ventilador
    double Dif_PI_VentiTur;
    double CI_VentiVel;                      // Condiciones iniciales de presión del ventilador
    double Tao_Ventilador;                // Constante de respuesta del ventilador.
    double ParInducidoMotorVentilador;    // Par inducido en el motor del ventilador.
    double VelMaxVenti;
    double VelFinalVenti;
    double RadioMedio;                    // radio medio del ventilador.
    double Angulos;                       // suma de angulos del triangulo de velocidad.
    double VelAireIn;                     // velocidad  del aire a la salida y entrada del ventilador.
    double Area_Ventilador;               // area efectiva del flujo de aire
    double onoffVentTurb;
    double AutomaticoVent;
    double ManualVent;
    double StartManualVent;
    double StopManualVent;
    double FallaVentilador;

	double WVentiB;                           // Potencia del vebtilador
    double CI_PI_VentiB;                      // Presión de entrada del ventilador
    double CI_VentiVelB;                      // Condiciones iniciales de presión del ventilador    
    double VelFinalVentiB;
    double VelAireInB;                        // velocidad  del aire a la salida y entrada del ventilador.
    double onoffVentTurbB;
    double AutomaticoVentB;
    double ManualVentB;
    double StartManualVentB;
    double StopManualVentB;
    double FallaVentiladorB;


    double WVentiGen;
    double Dif_PI_VentiGen;
    double CI_VentiVelGen;
    double Tao_VentiGen;
    double ParInducidoMotorVentiGen;
    double VelMaxVentiGen;
    double VelFinalVentiGen;
    double RadioMedioGen;
    double AngulosGen;
    double VelAireInGen;
    double Area_VentiladorGen;
    double onoffVentGen;
    double AutomaticoVentGen;
    double ManualVentGen;
    double StartManualVentGen;
    double StopManualVentGen;
    double FallaVentiGen;
///
	double WVentiGenB;
    double CI_VentiVelGenB;   
    double ParInducidoMotorVentiGenB;
    double VelMaxVentiGenB;
    double VelFinalVentiGenB;
    double VelAireInGenB;
    double onoffVentGenB;
    double AutomaticoVentGenB;
    double ManualVentGenB;
    double StartManualVentGenB;
    double StopManualVentGenB;
	double FallaVentiGenB;

    // Parametros generador electrico

    double Temperatura_aire_generador;
    double PDSL6407;

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
    int SOV6516;		//VÁLVULA SOLENOIDE PARA LAVADO EN LÍNEA
    int SOV6504;		//VÁLVULA SOLENOIDE PARA LAVADO FUERA DE LÍNEA
    int ValBol1;		//VÁLVULA DE BOLA PARA LA ENTRADA DEL QUÍMICO
    int ValBol2;		//VÁLVULA DE BOLA PARA LA ENTRADA DE AGUA
    int ValBol3;		//VÁLVULA DE BOLA PARA EL DRENADO DEL TANQUE
    int ValBol4;		//VÁLVULA DE BOLA PARA LA SUCCIÓN DE LA BOMBA
    int OpSOV6540;		//APERTURA DE LA VÁLVULA SOV6540
    int ClSOV6540;		//CIERRE DE LA VÁLVULA SOV6540
    int OpSOV6516;		//APERTURA DE LA VÁLVULA SOV6516
    int ClSOV6516;		//CIERRE DE LA VÁLVULA SOV6516
    int OpSOV6504;		//APERTURA DE LA VÁLVULA SOV6504
    int ClSOV6504;		//CIERRE DE LA VÁLVULA SOV6504
    int Local_Remoto_WWash;	//LOCAL REMOTO DEL ACCIONAMIENTO DEL SISTEMA
    int StartHS6505;            //ARRANQUE LOCAL DEL SISTEMA
    int StopHS6505;		//PARO LOCAL DEL SISTEMA
    int StartRemoto;            //ARRANQUE REMOTO DEL SISTEMA
    int StopRemoto;             //PARO REMOTO DEL SISTEMA
    int FallaMOT6535;           //FALLA BOMBA MOT6535
    int FallaSOV6516;           //FALLA VÁLVULA SOLENOIDE SOV6516
    int FallaSOV6540;           //FALLA VÁLVULA SOLENOIDE SOV6540
    int FallaSOV6504;           //FALLA VÁLVULA SOLENOIDE SOV6504
    double CIFMOT6535;          //CONDICIONES INICIALES FLUJO MOT6535
    double NivelTank;           //NIVEL DEL TANQUE
    double CINivelTank;         //CONDICIONES INICIALES DE NIVEL DEL TANQUE
    int OnMOT6535;		//ARRANQUE DE MOT6535
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
//    double TempAireCompresor;		//TEMPERATURA DEL AIRE A LA SALIDA DEL COMPRESOR
    double TempAireTanque;		//TEMPERATURA DEL AIRE EN EL TANQUE
    double PresionTanque;		//PRESION DEL AIRE EN EL TANQUE
    double NivelSecador;		//NIVEL DE CONDENSADO EN EL SECADOR DE AIRE
    double FlujoInAire;		//FLUJO DE ENTRADA DE AIRE AL TANQUE
    double FlujoOutAire;		//FLUJO DE SALIDA DE AIRE DEL TANQUE
    double FlujoCompresor;		//FLUJO DE AIRE DEL COMPRESOR
    double FlujoOutSecador;		//FLUJO DE AIRE A LA SALIDA DEL SECADOR
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

	void GETS()
   {
	   	FMaire=GetFloat(p_FMaire);
	   	Calentamiento=GetFloat(p_Calentamiento);
	   	Enfriamiento=GetFloat(p_Enfriamiento);
	   	Cp_agua=GetFloat(p_Cp_agua);
	   	VolEsp_agua=GetFloat(p_VolEsp_agua);
	   	Densidad_agua=GetFloat(p_Densidad_agua);
	   	Cv_aire=GetFloat(p_Cv_aire);
	   	Cp_aire=GetFloat(p_Cp_aire);
	   	TambK=GetFloat(p_TambK);
	   	TambC=GetFloat(p_TambC);
	   	TambF=GetFloat(p_TambF);
	   	Viscosidad_Aire=GetFloat(p_Viscosidad_Aire);
	   	R_aire=GetFloat(p_R_aire);
	   	Presion_atm=GetFloat(p_Presion_atm);
	   	Densidad_aire=GetFloat(p_Densidad_aire);
	   	Tem_in_64031K=GetFloat(p_Tem_in_64031K);
	   	Tem_in_64031F=GetFloat(p_Tem_in_64031F);
	   	Tem_in_64031C=GetFloat(p_Tem_in_64031C);
	   	Tem_in_64030K=GetFloat(p_Tem_in_64030K);
	   	Tem_in_64030F=GetFloat(p_Tem_in_64030F);
		Tem_in_64030C=GetFloat(p_Tem_in_64030C);
		Tem_in_64033K=GetFloat(p_Tem_in_64033K);
		Tem_in_64033F=GetFloat(p_Tem_in_64033F);
		Tem_in_64033C=GetFloat(p_Tem_in_64033C);
		Tem_in_64032K=GetFloat(p_Tem_in_64032K);
		Tem_in_64032F=GetFloat(p_Tem_in_64032F);
		Tem_in_64032C=GetFloat(p_Tem_in_64032C);
		AreafilA=GetFloat(p_AreafilA);
		AreafilB=GetFloat(p_AreafilB);
		AreafilC=GetFloat(p_AreafilC);
		Permeabilidad=GetFloat(p_Permeabilidad);
		Longitud_filtro=GetFloat(p_Longitud_filtro);
		PDSH6405=GetFloat(p_PDSH6405);
        PDSH6405_mmH2O=GetFloat(p_PDSH6405_mmH2O);
        PDSH6405_inH2O=GetFloat(p_PDSH6405_inH2O);        
		PDSH64060=GetFloat(p_PDSH64060);
		PDSH64060_mmH2O=GetFloat(p_PDSH64060_mmH2O);
		PDSH64060_inH2O=GetFloat(p_PDSH64060_inH2O);
		PDSH64018=GetFloat(p_PDSH64018);
        PDSH64018_mmH2O=GetFloat(p_PDSH64018_mmH2O);
        PDSH64018_inH2O=GetFloat(p_PDSH64018_inH2O);
		TaoHexCarcasa=GetFloat(p_TaoHexCarcasa);
		WBombaA=GetFloat(p_WBombaA);
		WBombaB=GetFloat(p_WBombaB);
		PI_A=GetFloat(p_PI_A);
		PI_B=GetFloat(p_PI_B);
		PresionFinalBomba=GetFloat(p_PresionFinalBomba);
		PresionFinalBombaB=GetFloat(p_PresionFinalBombaB);
		Flujo_in_agua=GetFloat(p_Flujo_in_agua);
		Flujo_in_aguaB=GetFloat(p_Flujo_in_aguaB);
		Vel_BombaA=GetFloat(p_Vel_BombaA);
		Vel_BombaB=GetFloat(p_Vel_BombaB);
		Vel_maxBombaA=GetFloat(p_Vel_maxBombaA);
		Vel_maxBombaB=GetFloat(p_Vel_maxBombaB);
		VelI_A=GetFloat(p_VelI_A);
		CI_VelA=GetFloat(p_CI_VelA);
		CI_VelB=GetFloat(p_CI_VelB);
		Tao_bombaA=GetFloat(p_Tao_bombaA);
		ParInducidoMotorBomba=GetFloat(p_ParInducidoMotorBomba);
		OnOffBombaChiller=GetFloat(p_OnOffBombaChiller);
		AreaCal=GetFloat(p_AreaCal);
		UCal=GetFloat(p_UCal);
		Temperatura_final_Cal=GetFloat(p_Temperatura_final_Cal);
		MasaCal=GetFloat(p_MasaCal);
		CICale=GetFloat(p_CICale);
		TemperaturaInicial=GetFloat(p_TemperaturaInicial);
		Potencia_resistenciaMax=GetFloat(p_Potencia_resistenciaMax);
		Potencia_resistencia=GetFloat(p_Potencia_resistencia);
		CIRes=GetFloat(p_CIRes);
		TaoRes=GetFloat(p_TaoRes);
		AreaEvap=GetFloat(p_AreaEvap);
		UEvap=GetFloat(p_UEvap);
		Temperatura_final_Evap=GetFloat(p_Temperatura_final_Evap);
		MasaEvap=GetFloat(p_MasaEvap);
		CIEvap=GetFloat(p_CIEvap);
		Tempera_Inicial_Evap=GetFloat(p_Tempera_Inicial_Evap);
		Potencia_frigorifica_Max=GetFloat(p_Potencia_frigorifica_Max);
		CI_Potencia_frigorifica=GetFloat(p_CI_Potencia_frigorifica);
		Tao_Potencia_frigorifica=GetFloat(p_Tao_Potencia_frigorifica);
		Potencia_frigorifica=GetFloat(p_Potencia_frigorifica);
		AreaHEX=GetFloat(p_AreaHEX);
		UHEX=GetFloat(p_UHEX);
		Temperatura_final_HEX_agua=GetFloat(p_Temperatura_final_HEX_agua);
		MasaHEX=GetFloat(p_MasaHEX);
		CIHEX=GetFloat(p_CIHEX);
		TinHexAgua=GetFloat(p_TinHexAgua);
		Tem_fin_6450=GetFloat(p_Tem_fin_6450);
		Tem_fin_6450_F=GetFloat(p_Tem_fin_6450_F);
		Tem_fin_6499=GetFloat(p_Tem_fin_6499);
		Tem_fin_6499_F=GetFloat(p_Tem_fin_6499_F);
		Tem_fin_64072=GetFloat(p_Tem_fin_64072);
		CIAireVentA=GetFloat(p_CIAireVentA);
		Tem_fin_6402=GetFloat(p_Tem_fin_6402);
		Tem_fin_6402_F=GetFloat(p_Tem_fin_6402_F);
		CITem6402=GetFloat(p_CITem6402);
		Tem_fin_64071=GetFloat(p_Tem_fin_64071);
		CIAireVentB=GetFloat(p_CIAireVentB);
		Tem_fin_64072_F=GetFloat(p_Tem_fin_64072_F);
		Tem_fin_64071_F=GetFloat(p_Tem_fin_64071_F);
		MasaHEXAire=GetFloat(p_MasaHEXAire);
		Flujo_Aire_inTur=GetFloat(p_Flujo_Aire_inTur);
		Flujo_Aire_inGen=GetFloat(p_Flujo_Aire_inGen);
		CIAireA=GetFloat(p_CIAireA);
		CIAireB=GetFloat(p_CIAireB);
		Pow_Res_Electrica=GetFloat(p_Pow_Res_Electrica);
		TgasesTurbina=GetFloat(p_TgasesTurbina);
		Vel_in_Aire=GetFloat(p_Vel_in_Aire);
		Vel_out_Aire=GetFloat(p_Vel_out_Aire);
		Uturbina=GetFloat(p_Uturbina);
		Aturbina=GetFloat(p_Aturbina);
		MasaTurbina=GetFloat(p_MasaTurbina);
		Temperatura_aire_turbina=GetFloat(p_Temperatura_aire_turbina);
		CIAire_Turbina=GetFloat(p_CIAire_Turbina);
		CIMasaTurbina=GetFloat(p_CIMasaTurbina);
		VolCuartoTurb=GetFloat(p_VolCuartoTurb);
		Dif_PI_VentiTur_mmH2O=GetFloat(p_Dif_PI_VentiTur_mmH2O);
		Dif_PI_VentiTur_inH2O=GetFloat(p_Dif_PI_VentiTur_inH2O);
		WVenti=GetFloat(p_WVenti);
		CI_PI_Venti=GetFloat(p_CI_PI_Venti);
		Dif_PI_VentiTur=GetFloat(p_Dif_PI_VentiTur);
		CI_VentiVel=GetFloat(p_CI_VentiVel);
		Tao_Ventilador=GetFloat(p_Tao_Ventilador);
		ParInducidoMotorVentilador=GetFloat(p_ParInducidoMotorVentilador);
		VelMaxVenti=GetFloat(p_VelMaxVenti);
		VelFinalVenti=GetFloat(p_VelFinalVenti);
		RadioMedio=GetFloat(p_RadioMedio);
		Angulos=GetFloat(p_Angulos);
		VelAireIn=GetFloat(p_VelAireIn);
		Area_Ventilador=GetFloat(p_Area_Ventilador);
		onoffVentTurb=GetFloat(p_onoffVentTurb);
		AutomaticoVent=GetFloat(p_AutomaticoVent);
		ManualVent=GetFloat(p_ManualVent);
		StartManualVent=GetFloat(p_StartManualVent);
		StopManualVent=GetFloat(p_StopManualVent);
		FallaVentilador=GetFloat(p_FallaVentilador);
		WVentiB=GetFloat(p_WVentiB);          
		CI_PI_VentiB=GetFloat(p_CI_PI_VentiB);     
		CI_VentiVelB=GetFloat(p_CI_VentiVelB);     
		VelFinalVentiB=GetFloat(p_VelFinalVentiB);
		VelAireInB=GetFloat(p_VelAireInB);       
		onoffVentTurbB=GetFloat(p_onoffVentTurbB);
		AutomaticoVentB=GetFloat(p_AutomaticoVentB);
		ManualVentB=GetFloat(p_ManualVentB);
		StartManualVentB=GetFloat(p_StartManualVentB);
		StopManualVentB=GetFloat(p_StopManualVentB);
		FallaVentiladorB=GetFloat(p_FallaVentiladorB);
		WVentiGen=GetFloat(p_WVentiGen);
		Dif_PI_VentiGen=GetFloat(p_Dif_PI_VentiGen);
		CI_VentiVelGen=GetFloat(p_CI_VentiVelGen);
		Tao_VentiGen=GetFloat(p_Tao_VentiGen);
		ParInducidoMotorVentiGen=GetFloat(p_ParInducidoMotorVentiGen);
		VelMaxVentiGen=GetFloat(p_VelMaxVentiGen);
		VelFinalVentiGen=GetFloat(p_VelFinalVentiGen);
		RadioMedioGen=GetFloat(p_RadioMedioGen);
		AngulosGen=GetFloat(p_AngulosGen);
		VelAireInGen=GetFloat(p_VelAireInGen);
		Area_VentiladorGen=GetFloat(p_Area_VentiladorGen);
		onoffVentGen=GetFloat(p_onoffVentGen);
		AutomaticoVentGen=GetFloat(p_AutomaticoVentGen);
		ManualVentGen=GetFloat(p_ManualVentGen);
		StartManualVentGen=GetFloat(p_StartManualVentGen);
		StopManualVentGen=GetFloat(p_StopManualVentGen);
		FallaVentiGen=GetFloat(p_FallaVentiGen); 
		WVentiGenB=GetFloat(p_WVentiGenB);
		CI_VentiVelGenB=GetFloat(p_CI_VentiVelGenB);
		ParInducidoMotorVentiGenB=GetFloat(p_ParInducidoMotorVentiGenB);
		VelMaxVentiGenB=GetFloat(p_VelMaxVentiGenB);
		VelFinalVentiGenB=GetFloat(p_VelFinalVentiGenB);
		VelAireInGenB=GetFloat(p_VelAireInGenB);
		onoffVentGenB=GetFloat(p_onoffVentGenB);
		AutomaticoVentGenB=GetFloat(p_AutomaticoVentGenB);
		ManualVentGenB=GetFloat(p_ManualVentGenB);
		StartManualVentGenB=GetFloat(p_StartManualVentGenB);
		StopManualVentGenB=GetFloat(p_StopManualVentGenB);
		FallaVentiGenB=GetFloat(p_FallaVentiGenB);
		Temperatura_aire_generador=GetFloat(p_Temperatura_aire_generador);
		PDSL6407=GetFloat(p_PDSL6407);
		FlujoInAgua=GetFloat(p_FlujoInAgua);
		FlujoInQuimico=GetFloat(p_FlujoInQuimico);
		LG6520=GetFloat(p_LG6520);
		LS6543=GetInt(p_LS6543);
		TAH1620=GetInt(p_TAH1620);
		FMOT6535=GetFloat(p_FMOT6535);
		SOV6540=GetInt(p_SOV6540);
		PI6538=GetFloat(p_PI6538);
		SOV6516=GetInt(p_SOV6516);
		SOV6504=GetInt(p_SOV6504);
		ValBol1=GetInt(p_ValBol1);
		ValBol2=GetInt(p_ValBol2);
		ValBol3=GetInt(p_ValBol3);
		ValBol4=GetInt(p_ValBol4);
		OpSOV6540=GetInt(p_OpSOV6540);
		ClSOV6540=GetInt(p_ClSOV6540);
		OpSOV6516=GetInt(p_OpSOV6516);
		ClSOV6516=GetInt(p_ClSOV6516);
		OpSOV6504=GetInt(p_OpSOV6504);
		ClSOV6504=GetInt(p_ClSOV6504);
		Local_Remoto_WWash=GetInt(p_Local_Remoto_WWash);
		StartHS6505=GetInt(p_StartHS6505);
		StopHS6505=GetInt(p_StopHS6505);
		StartRemoto=GetInt(p_StartRemoto);
		StopRemoto=GetInt(p_StopRemoto);
		FallaMOT6535=GetInt(p_FallaMOT6535);
		FallaSOV6516=GetInt(p_FallaSOV6516);
		FallaSOV6540=GetInt(p_FallaSOV6540);
		FallaSOV6504=GetInt(p_FallaSOV6504);
		CIFMOT6535=GetFloat(p_CIFMOT6535);
		NivelTank=GetFloat(p_NivelTank);
		CINivelTank=GetFloat(p_CINivelTank);
		OnMOT6535=GetInt(p_OnMOT6535);
		OffMOT6535=GetInt(p_OffMOT6535);
		qoutTank=GetFloat(p_qoutTank);
		FugaTank=GetFloat(p_FugaTank);
		qDren=GetFloat(p_qDren);
		qOverflow=GetFloat(p_qOverflow);
		PMOT6535=GetFloat(p_PMOT6535);
		CIPMOT6535=GetFloat(p_CIPMOT6535);
		ResetFuga=GetInt(p_ResetFuga);
		qAire=GetFloat(p_qAire);
		OnOffCompresor=GetInt(p_OnOffCompresor);
		PotenciaCompresor=GetFloat(p_PotenciaCompresor);
		PotMaxCompresor=GetFloat(p_PotMaxCompresor);
		TempAireCompresor=GetFloat(p_TempAireCompresor);
		TempAireTanque=GetFloat(p_TempAireTanque);
		PresionTanque=GetFloat(p_PresionTanque);
		NivelSecador=GetFloat(p_NivelSecador);
		FlujoInAire=GetFloat(p_FlujoInAire);
		FlujoOutAire=GetFloat(p_FlujoOutAire);
		FlujoCompresor=GetFloat(p_FlujoCompresor);
		FlujoOutSecador=GetFloat(p_FlujoOutSecador);
		Masa_Tanque=GetFloat(p_Masa_Tanque);
		VolumenTanque=GetFloat(p_VolumenTanque);
		HumedadEspecifica=GetFloat(p_HumedadEspecifica);
		EficienciaSecador=GetFloat(p_EficienciaSecador);
		DensidadAgua=GetFloat(p_DensidadAgua);
		DensidadAire=GetFloat(p_DensidadAire);
		TaoCompresor=GetFloat(p_TaoCompresor);
		CpAire=GetFloat(p_CpAire);
		CvAire=GetFloat(p_CvAire);
		PresionAmbiente=GetFloat(p_PresionAmbiente);
		MasaCompresor=GetFloat(p_MasaCompresor);
		VolCompresor=GetFloat(p_VolCompresor);
		PresionOutComp=GetFloat(p_PresionOutComp);
		CIPotComp=GetFloat(p_CIPotComp);
		CITempAireComp=GetFloat(p_CITempAireComp);
		CIMasaTanque=GetFloat(p_CIMasaTanque);
		CIPresionTanque=GetFloat(p_CIPresionTanque);
		CIDensidadAire=GetFloat(p_CIDensidadAire);
		FallaCompresor=GetInt(p_FallaCompresor);
		TaoGeneradorUnidad=GetFloat(p_TaoGeneradorUnidad);
		PotenciaGenerador=GetFloat(p_PotenciaGenerador);
		VoltajeGenerador=GetFloat(p_VoltajeGenerador);
		VFAGeneradorU=GetFloat(p_VFAGeneradorU);
		VFBGeneradorU=GetFloat(p_VFBGeneradorU);
		VFCGeneradorU=GetFloat(p_VFCGeneradorU);
		CFAGeneradorU=GetFloat(p_CFAGeneradorU);
		CFBGeneradorU=GetFloat(p_CFBGeneradorU);
		CFCGeneradorU=GetFloat(p_CFCGeneradorU);
		GeneradorUnidadP=GetFloat(p_GeneradorUnidadP);
		GeneradorAuxiliar=GetFloat(p_GeneradorAuxiliar);
		VoltajeGeneradorAuxiliar=GetFloat(p_VoltajeGeneradorAuxiliar);
		TaoGenAux=GetFloat(p_TaoGenAux);
		CIVGenAux=GetFloat(p_CIVGenAux);
		CIPGenAux=GetFloat(p_CIPGenAux);
		CIGeneradorUnidadP=GetFloat(p_CIGeneradorUnidadP);
		CIGeneradorUnidadVFA=GetFloat(p_CIGeneradorUnidadVFA);
		CIGeneradorUnidadVFB=GetFloat(p_CIGeneradorUnidadVFB);
		CIGeneradorUnidadVFC=GetFloat(p_CIGeneradorUnidadVFC);
		TaoIsocrono=GetFloat(p_TaoIsocrono);
		SetPointFrecuencia=GetFloat(p_SetPointFrecuencia);
		CIContrIsoc=GetFloat(p_CIContrIsoc);
		ControlIsocrono=GetFloat(p_ControlIsocrono);
		PotMecanica=GetFloat(p_PotMecanica);
		PotElectrica=GetFloat(p_PotElectrica);
		AmortiguamientoAux=GetFloat(p_AmortiguamientoAux);
		RozamientoAux=GetFloat(p_RozamientoAux);
		FrecGeneradorAux=GetFloat(p_FrecGeneradorAux);
		CIFrecAux=GetFloat(p_CIFrecAux);
		CIPotElec=GetFloat(p_CIPotElec);
		CGeneradorAux=GetFloat(p_CGeneradorAux);
		TaoCuchillas=GetFloat(p_TaoCuchillas);
		C92BT221A=GetFloat(p_C92BT221A);
		CIC92BT221A=GetFloat(p_CIC92BT221A);
		C92BAT21A=GetFloat(p_C92BAT21A);
		CIC92BAT21A=GetFloat(p_CIC92BAT21A);
		C92BT221C=GetFloat(p_C92BT221C);
		CIC92BT221C=GetFloat(p_CIC92BT221C);
		C92BCT21A=GetFloat(p_C92BCT21A);
		CIC92BCT21A=GetFloat(p_CIC92BCT21A);
		C90MC=GetFloat(p_C90MC);
		CIC90MC=GetFloat(p_CIC90MC);
		VFAT21A=GetFloat(p_VFAT21A);
		VFBT21A=GetFloat(p_VFBT21A);
		VFCT21A=GetFloat(p_VFCT21A);
		CFAT21A=GetFloat(p_CFAT21A);
		CFBT21A=GetFloat(p_CFBT21A);
		CFCT21A=GetFloat(p_CFCT21A);
		VFAT20AuxG1=GetFloat(p_VFAT20AuxG1);
		VFBT20AuxG1=GetFloat(p_VFBT20AuxG1);
		VFCT20AuxG1=GetFloat(p_VFCT20AuxG1);
		CFAT20AuxG1=GetFloat(p_CFAT20AuxG1);
		CFBT20AuxG1=GetFloat(p_CFBT20AuxG1);
		CFCT20AuxG1=GetFloat(p_CFCT20AuxG1);
		VFAT00AuxG1=GetFloat(p_VFAT00AuxG1);
		VFBT00AuxG1=GetFloat(p_VFBT00AuxG1);
		VFCT00AuxG1=GetFloat(p_VFCT00AuxG1);
		CFAT00AuxG1=GetFloat(p_CFAT00AuxG1);
		CFBT00AuxG1=GetFloat(p_CFBT00AuxG1);
		CFCT00AuxG1=GetFloat(p_CFCT00AuxG1);
		VFAT221A=GetFloat(p_VFAT221A);
		VFBT221A=GetFloat(p_VFBT221A);
		VFCT221A=GetFloat(p_VFCT221A);
		CFAT221A=GetFloat(p_CFAT221A);
		CFBT221A=GetFloat(p_CFBT221A);
		CFCT221A=GetFloat(p_CFCT221A);
		VFAT221C=GetFloat(p_VFAT221C);
		VFBT221C=GetFloat(p_VFBT221C);
		VFCT221C=GetFloat(p_VFCT221C);
		CFAT221C=GetFloat(p_CFAT221C);
		CFBT221C=GetFloat(p_CFBT221C);
		CFCT221C=GetFloat(p_CFCT221C);
		TabCCM=GetFloat(p_TabCCM);
		TabChiller=GetFloat(p_TabChiller);
		TabCompAire=GetFloat(p_TabCompAire);
		TabBCI=GetFloat(p_TabBCI);
		OnOffGenerador=GetInt(p_OnOffGenerador);
		OnOffGeneradorAuxiliar=GetInt(p_OnOffGeneradorAuxiliar);
		OnOffC92BT221A=GetInt(p_OnOffC92BT221A);
		OnOffC92BAT21A=GetInt(p_OnOffC92BAT21A);
		OnOffC92BT221C=GetInt(p_OnOffC92BT221C);
		OnOffC92BCT21A=GetInt(p_OnOffC92BCT21A);
		OnOffC90MC=GetInt(p_OnOffC90MC);
		I521T21A=GetInt(p_I521T21A);
		I522T21A=GetInt(p_I522T21A);
		I52AuxG1=GetInt(p_I52AuxG1);
		I51G1=GetInt(p_I51G1);
		I501AuxG1=GetInt(p_I501AuxG1);
		I50ANG1=GetInt(p_I50ANG1);
		I502AuxG1=GetInt(p_I502AuxG1);
		Conexion1T21A=GetInt(p_Conexion1T21A);
		Conexion2T21A=GetInt(p_Conexion2T21A);
		Conexion1T20AuxG1=GetInt(p_Conexion1T20AuxG1);
		Conexion2T20AuxG1=GetInt(p_Conexion2T20AuxG1);
		Conexion1T00AuxG1=GetInt(p_Conexion1T00AuxG1);
		Conexion2T00AuxG1=GetInt(p_Conexion2T00AuxG1);
		FGenerador=GetInt(p_FGenerador);
		FGeneradorAux=GetInt(p_FGeneradorAux);
		FC92BT221A=GetInt(p_FC92BT221A);
		FC92BAT21A=GetInt(p_FC92BAT21A);
		FC92BT221C=GetInt(p_FC92BT221C);
		FC92BCT21A=GetInt(p_FC92BCT21A);
		FC90MC=GetInt(p_FC90MC);
		FI521T21A=GetInt(p_FI521T21A);
		FI522T21A=GetInt(p_FI522T21A);
		FI52AuxG1=GetInt(p_FI52AuxG1);
		FI51G1=GetInt(p_FI51G1);
		FI501AuxG1=GetInt(p_FI501AuxG1);
		FI50ANG1=GetInt(p_FI50ANG1);
		FI502AuxG1=GetInt(p_FI502AuxG1);
		FTabCCM=GetInt(p_FTabCCM);
		FTabChiller=GetInt(p_FTabChiller);
		FTabCompAire=GetInt(p_FTabCompAire);
		FTabBCI=GetInt(p_FTabBCI);

   }

    void SETS()
	{
	    SetFloat(CI_VentiVel ,p_CI_VentiVel );
	    SetFloat(CI_VentiVelB ,p_CI_VentiVelB );
	    SetFloat(CIHEX ,p_CIHEX );
	    SetFloat(CICale ,p_CICale );
	    SetFloat(CI_VelA ,p_CI_VelA );
	    SetFloat(CI_VelB ,p_CI_VelB );
		SetFloat(CIEvap ,p_CIEvap );
		SetFloat(CIAireA ,p_CIAireA );
		SetFloat(CIAireB ,p_CIAireB );
		SetFloat(CIAireVentA ,p_CIAireVentA );
		SetFloat(CIAireVentB ,p_CIAireVentB );
		SetFloat(CITem6402 ,p_CITem6402 );
		SetFloat(CI_VentiVelGen ,p_CI_VentiVelGen );
		SetFloat(CIMasaTurbina ,p_CIMasaTurbina );
		SetFloat(CIRes ,p_CIRes );
		SetFloat(CI_Potencia_frigorifica ,p_CI_Potencia_frigorifica );
		SetFloat(CIPMOT6535 ,p_CIPMOT6535 );
		SetFloat(CIFMOT6535 ,p_CIFMOT6535 );
		SetFloat(PI6538 ,p_PI6538 );
		SetFloat(CINivelTank ,p_CINivelTank );
		SetFloat(CIPotComp,p_CIPotComp);
		SetFloat(CITempAireComp,p_CITempAireComp);
		SetFloat(CIDensidadAire,p_CIDensidadAire);
		SetFloat(CIMasaTanque,p_CIMasaTanque);
		SetFloat(CIPresionTanque,p_CIPresionTanque);
		SetFloat(CIGeneradorUnidadP,p_CIGeneradorUnidadP);
		SetFloat(CIGeneradorUnidadVFA,p_CIGeneradorUnidadVFA);
		SetFloat(CIGeneradorUnidadVFB,p_CIGeneradorUnidadVFB);
		SetFloat(CIGeneradorUnidadVFC,p_CIGeneradorUnidadVFC);
		SetFloat(CIVGenAux,p_CIVGenAux);
		SetFloat(CIPGenAux,p_CIPGenAux);
		SetFloat(CIC92BT221A,p_CIC92BT221A);
		SetFloat(CIC92BAT21A,p_CIC92BAT21A);
		SetFloat(CIC92BT221C,p_CIC92BT221C);
		SetFloat(CIC92BCT21A,p_CIC92BCT21A);
		SetFloat(CIC90MC,p_CIC90MC);

   }


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN TURBINA///////////////////////////////////////////////

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

    x[0]=*CIDesplazamiento;
    x1[0]=*CIVelDes;

    for(j=1;j<25;j++)
    {

        k1=h*x1[j-1];
        l1=h*(((A*cos(Tiempo*VelAngular))-(B*x[j-1])-(C*x1[j-1]))/D);

        k2=h*(x1[j-1]+(0.5*l1));
        l2=h*((A*cos((Tiempo+(h/2))*VelAngular)-(B*(x[j-1]+(0.5*k1)))-(C*(x1[j-1]+(0.5*l1))))/D);

        k3=h*(x1[j-1]+(0.5*l2));
        l3=h*(((A*cos((Tiempo+(h/2))*VelAngular))-(B*(x[j-1]+(0.5*k2)))-(C*(x1[j-1]+(0.5*l2))))/D);

        k4=h*(x1[j-1]+l3);
        l4=h*(((A*cos((Tiempo+h)*VelAngular))-(B*(x[j-1]+k3))-(C*(x1[j-1]+l3)))/D);


        x1[j]=x1[j-1]+((l1+(2*l2)+(2*l3)+(l4))/6);
        x[j]=x[j-1]+((k1+(2*k2)+(2*k3)+(k4))/6);

    }

    *CIDesplazamiento = x[j-1];
    *CIVelDes = x1[j-1];

    return x1[j-1];
}
//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////LUBRICACIÓN GENERADOR/////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////


//Aqui se declaran todas las funciones del programa

/////////////////CHILLER//////////////////////////////////////////////////////

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

double resistencia(double CIResistencia, double TaoResistencia, double PotenciResMax, int Onn_Off_Res)
{
    int j;
    double x[26];
    double h = 0.05/25;
    double k1,k2,k3,k4;

    x[0]= CIResistencia;

    for (j=1;j<25;j++)
    {
        k1=((PotenciResMax*Onn_Off_Res)-(x[j-1]))/TaoResistencia;
        k2=((PotenciResMax*Onn_Off_Res)-(x[j-1]+(h*k1/2)))/TaoResistencia;
        k3=((PotenciResMax*Onn_Off_Res)-(x[j-1]+(h*k2/2)))/TaoResistencia;
        k4=((PotenciResMax*Onn_Off_Res)-(x[j-1]+(h*k3)))/TaoResistencia;

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
	GETS();

//Región para llamar todas las funciones de los programas.

/////////////////CHILLER//////////////////////////////////////////////////////

	// Sistema del chiller

	Densidad_aire = Presion_atm/(R_aire*TambK);
    Vel_BombaA = VelocidadBomba(CI_VelA,Tao_bombaA,Vel_maxBombaA)*OnOffBombaChiller;
	Vel_BombaB = VelocidadBomba(CI_VelB,Tao_bombaA,Vel_maxBombaB)*OnOffBombaBChiller;
    WBombaA = (1.341*CI_VelA*ParInducidoMotorBomba*2*3.1416)/60000; // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    WBombaB = (1.341*CI_VelB*ParInducidoMotorBomba*2*3.1416)/60000; // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    Flujo_in_agua=(CI_VelA/Vel_maxBombaA)*30;//flujo maximo 30 kg/s
	Flujo_in_aguaB=(CI_VelB/Vel_maxBombaB)*30;//flujo maximo 30 kg/s


    if(Flujo_in_agua==0 )
    {
        PresionFinalBomba=0;
		   
	}
	else if(Flujo_in_aguaB==0)
	{
		PresionFinalBombaB=0;
	}
    else
    {
        PresionFinalBomba = (((WBombaA*Densidad_agua)/Flujo_in_agua)+PI_A)*0.145;
		PresionFinalBombaB = (((WBombaB*Densidad_agua)/Flujo_in_aguaB)+PI_B)*0.145;
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
    VelAireIn = (RadioMedio*(CI_VentiVel*0.1047))/Angulos;            // 0.1047 factor de conversion de RPM a Rad/seg
    WVenti =(2*3.1416*CI_VentiVel*ParInducidoMotorVentilador)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    

	if((FallaVentiladorB == 1&& AutomaticoVentB == 1)||(FallaVentiladorB == 1 && ManualVentB == 1 && StartManualVentB == 1))
    {
        onoffVentTurbB = 1;
    }
    else if(FallaVentiladorB==0||StopManualVentB==1 )
    {
        onoffVentTurbB = 0;
    }

	VelFinalVentiB = VelocidadVenti(CI_VentiVelB,Tao_Ventilador,VelMaxVenti,onoffVentTurbB)*FallaVentiladorB;
    VelAireInB = (RadioMedio*(CI_VentiVelB*0.1047))/Angulos;            // 0.1047 factor de conversion de RPM a Rad/seg
    WVentiB =(2*3.1416*CI_VentiVelB*ParInducidoMotorVentilador)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.
    
	Flujo_Aire_inTur = (Densidad_aire*Area_Ventilador)*(VelAireIn+VelAireInB);

    PDSH64060 = (Flujo_Aire_inTur*Viscosidad_Aire*Longitud_filtro)/(Densidad_aire*AreafilB*Permeabilidad);
    PDSH64060_mmH2O = PDSH64060*101.97;           // 101.97 facto de conversion a mmH2O
    PDSH64060_inH2O = PDSH64060*4.014;            // 4.014 factor de conversion a inH2O
    CI_PI_Venti = (CIMasaTurbina*R_aire*Tem_fin_64071/VolCuartoTurb);
	Dif_PI_VentiTur = ((WVenti+WVentiB)*Densidad_aire)/(Flujo_Aire_inTur);
   	Dif_PI_VentiTur_mmH2O = Dif_PI_VentiTur*101.9;
    Dif_PI_VentiTur_inH2O = Dif_PI_VentiTur*4.014;
    FMaire = Flujo_Aire_inTur ;//[kg/s]

    if((FallaVentiGen == 1 && AutomaticoVentGen == 1)||FallaVentiGen==1&&ManualVentGen==1&&StartManualVentGen==1)
    {
        onoffVentGen = 1;
    }
    else if(FallaVentilador==0||StopManualVent==1 )
    {
        onoffVentGen = 0;
    }

    VelFinalVentiGen = VelocidadVenti(CI_VentiVelGen,Tao_VentiGen,VelMaxVentiGen,onoffVentGen)*FallaVentiGen;
    WVentiGen =(2*3.1416*CI_VentiVelGen*ParInducidoMotorVentiGen)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.*/
    VelAireInGen = Flujo_Aire_inGen/Densidad_aire* Area_VentiladorGen;

	/////////////
	if((FallaVentiGenB == 1 && AutomaticoVentGenB == 1)||FallaVentiGenB==1&&ManualVentGenB==1&&StartManualVentGenB==1)
    {
        onoffVentGenB = 1;
    }
    else if(FallaVentiladorB==0||StopManualVentB==1 )
    {
        onoffVentGenB = 0;
    }

    VelFinalVentiGenB = VelocidadVenti(CI_VentiVelGenB,Tao_VentiGen,VelMaxVentiGenB,onoffVentGenB)*FallaVentiGenB;
    WVentiGenB =(2*3.1416*CI_VentiVelGenB*ParInducidoMotorVentiGen)/60000;  // 1.341 factor de conversion de kW a HP,2*3.1416 RPM a rad/min, 60*1000 min a seg y w a kW.*/
    Flujo_Aire_inGen = ((Densidad_aire*RadioMedioGen*(CI_VentiVelGenB+CI_VentiVelGen)*0.1047*Area_VentiladorGen)/AngulosGen);  // 0.1047 factor de conversion de RPM a Rad/seg

	////////////////
	if(Calentamiento == 1)
    {
       if(Flujo_in_agua>0)
       {
           Potencia_resistencia = resistencia(CIRes,TaoRes,Potencia_resistenciaMax,1);
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
    //Densidad_aire = Presion_atm/(R_aire*TambK);
    PDSH6405 = (FLUJO_MASICO_CB*Viscosidad_Aire*Longitud_filtro)/(Permeabilidad*AreafilA*Densidad_aire);
	PDSH6405_mmH2O = PDSH6405*101.97;           // 101.97 facto de conversion a mmH2O
    PDSH6405_inH2O = PDSH6405*4.014;            // 4.014 factor de conversion a inH2O

    PDSH64018 = (FLUJO_MASICO_CB*Viscosidad_Aire*Longitud_filtro)/(Permeabilidad*Densidad_aire*AreafilC);
    PDSH64018_mmH2O = PDSH64018*101.97;           // 101.97 facto de conversion a mmH2O
    PDSH64018_inH2O = PDSH64018*4.014;            // 4.014 factor de conversion a inH2O


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

////////////////////////////VIBRACIONES////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////AIRE DE INTRUMENTOS///////////////////////////////////////////////

	PotenciaCompresor=PotCompresor(OnOffCompresor,PotMaxCompresor,CIPotComp,TaoCompresor,FallaCompresor);
    FlujoCompresor=(0.0645/PotMaxCompresor)*CIPotComp;
    MasaCompresor=(PresionAmbiente*VolCompresor)/(R_aire*TempAmbiente);
    TempAireCompresor=TempOutAire(CIPotComp,(FlujoCompresor*CpAire),TempAmbiente,(MasaCompresor*CvAire*TaoCompresor),CITempAireComp,FallaCompresor);
    TempAireTanque=CITempAireComp;
    PresionOutComp=((PresionAmbiente*(pow(((TempAireTanque)/(TempAmbiente)),(3.5*0.48))))/PotMaxCompresor)*CIPotComp;
    FlujoOutSecador=FlujoCompresor-(FlujoCompresor*HumedadEspecifica*EficienciaSecador)/(DensidadAgua*0.78);
    
    DensidadAire=(CIPresionTanque)/(R_aire*CITempAireComp);

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

    PresionTanque=(CIMasaTanque*R_aire*TempAireTanque)/(VolumenTanque);

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

   CI_VentiVel = VelFinalVenti;
   CI_VentiVelB = VelFinalVentiB;
   CIHEX = Temperatura_final_HEX_agua;
   CICale = Temperatura_final_Cal;
   CI_VelA = Vel_BombaA;   
   CI_VelB = Vel_BombaB;   
   CIEvap = Temperatura_final_Evap;
   CIAireA = Tem_fin_6450;
   CIAireB = Tem_fin_6499;
   CIAireVentA = Tem_fin_64072;
   CIAireVentB = Tem_fin_64071;
   CITem6402 = Tem_fin_6402;
   CI_VentiVelGen = VelFinalVentiGen;
   CIMasaTurbina = MasaTurbina;

   //CIAire_Turbina = Temperatura_aire_turbina;
   CIRes = Potencia_resistencia;
   CI_Potencia_frigorifica = Potencia_frigorifica;

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

	SETS();
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
