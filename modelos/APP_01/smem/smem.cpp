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

//void CARGA_VARIABLES();

//double K_ADECUACION_BETA3_CB = 0, BETA3_CONTROL_CB = 0, TAO_BETA3_CB = 0;

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
double CITemCoalV082_2;
double TEMPERATURA_SALIDA_COMPRESOR_ALTA;
   void CARGA_VARIABLES()
   {
	    SetFloat(p_XvalControl1max,1.0f);
		SetFloat(p_CIXvalControl1,0.0f);
		SetFloat(p_TaoXvalControl1,1.0f);
		SetFloat(p_XvalControl1,0.5f); 
		SetFloat(p_XvalControlv1max,1.0f); 
		SetFloat(p_CIXvalControl_1_v1,0.0f);
		SetFloat(p_TaoXvalControl_1_v1,0.5f);
		SetFloat(p_XvalControl_1_v1,0.0f);
		SetFloat(p_CIXvalControl_2_v1,0.0f);
		SetFloat(p_TaoXvalControl_2_v1,0.9f);
		SetFloat(p_XvalControl_2_v1,0.0f);
		SetFloat(p_ki,0.033f);
		SetFloat(p_kp,0.034f);
		SetFloat(p_LInf,0.0f);
		SetFloat(p_LSup,1.0f); 
		SetFloat(p_SPP_v1,686.47f);
		SetFloat(p_errorPI,0.0f); 
		SetFloat(p_Acc_P,0.0f); 
		SetFloat(p_Acc_I,0.0f);  
		SetFloat(p_Acc_PI,0.0f); 
		SetFloat(p_Ap_valvula,0.0f);
		SetFloat(p_CI_I,0.0f); 
		SetFloat(p_satu,0.0f);
		SetFloat(p_Valvula_control,0.0f);
		SetFloat(p_Cp,2.25f);                   
		SetFloat(p_Cv,1.7354f);                 
		SetFloat(p_DensidadAgua,1000.0f);           
		SetFloat(p_Temperatura_in,300.0f);        
		SetFloat(p_Tiempo,0.0f);                 
		SetFloat(p_Flujo_in,0.0f);                
		SetFloat(p_FlujoMax,2.7f);              
		SetFloat(p_Humedadgasin,0.1f);           
		SetFloat(p_R_gas,0.4871f);              
		SetFloat(p_Tamb,298.0f);                  
		SetFloat(p_ViscosiGas,0.00005f);        
		SetFloat(p_DensidadGas,0.73f);          
		SetFloat(p_PresionSum,686.4656f);       
		SetFloat(p_PresionSum_kg,7.0f);           
		SetFloat(p_VelocidadGasin,58.34f);      
		SetFloat(p_VelocidadGasin2,0.0f);         
		SetFloat(p_AreaTub,0.01824f);           
		SetFloat(p_On_off_Valvula_YX106,0.0f);          
		SetFloat(p_VolTanqueDepu1,1.6012f);            
		SetFloat(p_AreaTanqueDepu1,4.12f);            
		SetFloat(p_UTanqueDepu1,1.11f);               
		SetFloat(p_TemperaturaOutTanqueDepu1,0.0f);    
		SetFloat(p_TemperaturaOutTanqueDepu1_C,0.0f);    
		SetFloat(p_MasaTanqueDepu1,0.0f);           
		SetFloat(p_CIMasaTanqDepu1,1.19f);              
		SetFloat(p_CITanqDepu1,Tambf);              
		SetFloat(p_CI_PresionTanqueDepu1,101.325f);       
		SetFloat(p_PresionTanqueDepu1_kg,0.0f);       
		SetFloat(p_Eta_Fil1,0.0001f);              
		SetFloat(p_AreaFilTanqueDepu1,0.246f);       
		SetFloat(p_CIFIL1,0.0001f);                    
		SetFloat(p_NivelTanqueDepu1,0.000001f);             
		SetFloat(p_NivelTanqueDepu1mm,0.0f);           
		SetFloat(p_TaoTanqueDepu1,1.0f);
		SetFloat(p_Flujo_outDepu1,0.0f);                   
		SetFloat(p_Flujo_purgaTanDepu1,0.0f);
		SetFloat(p_Temperatura_final_TanSuc1,0.0f);        
		SetFloat(p_MasaTanqueSuc1,1.0334f);                 
		SetFloat(p_VolTanqueSuc1,0.21f);                  
		SetFloat(p_UTanqueSuc1,1.0f);                       
		SetFloat(p_AreaTanqueSuc1,1.75f);                  
		SetFloat(p_CIPresionOutTanSuc1,0.0f);                   
		SetFloat(p_CITanqueSuc1,Tambf);
		SetFloat(p_Flujo_OutTanSuc1,5.0f);                  
		SetFloat(p_CIMasaTanSuc1,0.1465f);                
		SetFloat(p_PresionIn1ra,766.0f);               
		SetFloat(p_VelMaximaMotorCompresor,1200.0f);   
		SetFloat(p_VelMotorCompresor,0.0f);              
		SetFloat(p_TaoMotorCompresor,1.0f);
		SetFloat(p_CIVelocidad,0.0f);                   
		SetFloat(p_ParInducidoMotorComp1,5952.4f);    
		SetFloat(p_DiamFlechaMotor,0.127f);          
		SetFloat(p_Trabajo_in1,0.0f);                  
		SetFloat(p_CI1ra,Tambf);                     
		SetFloat(p_Temperatura_final_1ra,0.0f);        
		SetFloat(p_Temperatura_final_1ra_C,0.0f);      
		SetFloat(p_Masa1,0.0613f);                   
		SetFloat(p_PresionOut1ra,101.235f);          
		SetFloat(p_CIMotorCompresor,0.0f);               
		SetFloat(p_TaoComp1ra,1.0f);
		SetFloat(p_onoffComp1ra,0.0f);
		SetFloat(p_LocalRemoto1ra,0.0f);
		SetFloat(p_Automatico1ra,0.0f);
		SetFloat(p_Manual1ra,1.0f);
		SetFloat(p_StartManual1ra,0.0f);
		SetFloat(p_StopManual1ra,0.0f);
		SetFloat(p_FallaCompresor,1.0f);
		SetFloat(p_Eta_CIC ,0.85f);
		SetFloat(p_Temperatura_final_TanExp,0.0f);     
		SetFloat(p_MasaTanqueExp,0.91f);                 
		SetFloat(p_CIMasaTanqueExp,0.1516f);
		SetFloat(p_VolTanqueExp,0.2174f);               
		SetFloat(p_UTanqueExp,0.01f);                   
		SetFloat(p_AreaTanqueExp,2.52f);                
		SetFloat(p_CIPresionOutTanExp,101.325f);              
		SetFloat(p_PresionOutTanExp_kg,0.0f);            
		SetFloat(p_CITanqueExp,Tambf);                
		SetFloat(p_Temperatura_final_TanExp_C,0.0f);  
		SetFloat(p_Temperatura_final_HEX,0.0f);    
		SetFloat(p_Temperatura_final_HEX_C,0.0f); 
		SetFloat(p_MasaHEX,1.493f);                 
		SetFloat(p_AreaHEX,28.615f);              
		SetFloat(p_UHEX,0.0f);                  
		SetFloat(p_CIHEX1,Tambf); 
		SetFloat(p_PresionOutHEX,1.0f);                
		SetFloat(p_VolTanqueDepu2,0.66f);          
		SetFloat(p_AreaTanqueDepu2,3.14f);       
		SetFloat(p_UTanqueDepu2,1.0f);            
		SetFloat(p_TemperaturaOutTanqueDepu2,0.0f); 
		SetFloat(p_TemperaturaOutTanqueDepu2_C,0.0f);
		SetFloat(p_MasaTanqueDepu2,0.0f);      
		SetFloat(p_CIMasaTanqueDepu2,0.46029f);       
		SetFloat(p_CITanqDepu2,Tambf);             
		SetFloat(p_CIPresionTanqueDepu2,101.235f);        
		SetFloat(p_NivelTanqueDepu2,0.05f);       
		SetFloat(p_NivelTanqueDepu2mm,0.0f);           
		SetFloat(p_AreaFilTanqueDepu2,0.20f);     
		SetFloat(p_CIFIL2,0.0001f);                 
		SetFloat(p_Eta_Fil2,0.01f);              
		SetFloat(p_Temperatura_final_TanSuc2,300.0f);     
		SetFloat(p_MasaTanqueSuc2,1.0f);                
		SetFloat(p_VolTanqueSuc2,0.0991f);          
		SetFloat(p_UTanqueSuc2,1.0f);                 
		SetFloat(p_AreaTanqueSuc2,2.52f);            
		SetFloat(p_PresionOutTanSuc2,1500.0f);             
		SetFloat(p_CITanqueSuc2,Tambf);                
		SetFloat(p_PresionOutTanSuc2,0.0f);           
		SetFloat(p_Temperatura_final_2da,0.0f);       
		SetFloat(p_Temperatura_final_2da_C,0.0f);        
		SetFloat(p_Trabajo_in2,314.0f);              
		SetFloat(p_Masa2,0.144f);                   
		SetFloat(p_TaoComp2da,1.0f);                
		SetFloat(p_ParInducidoMotorComp2,6600.4f);  
		SetFloat(p_PresionOut2da,0.0f);              
		SetFloat(p_CI2da,Tambf);                  
		SetFloat(p_eficom2,0.985f);
		SetFloat(p_PresionOut2da_kg,0.0f);
		SetFloat(p_Temperatura_final_TanExp2,Tambf);     
		SetFloat(p_CIMasaTanqueExp2,0.069f);              
		SetFloat(p_MasaTanqueExp2,0.0f);
		SetFloat(p_VolTanqueExp2,0.099f);           
		SetFloat(p_UTanqueExp2,0.08f);                 
		SetFloat(p_AreaTanqueExp2,2.52f);            
		SetFloat(p_CIPresionOutTanExp2,101.235f);             
		SetFloat(p_CITanqueExp2,Tambf);                  
		SetFloat(p_PresionOutTanExp2_kg,0.0f);           
		SetFloat(p_AreaTub2,0.008f);                   
		SetFloat(p_VelocidadGasin3,0.0f);                
		SetFloat(p_Temperatura_final_HEX2,298.0f);       
		SetFloat(p_Temperatura_final_HEX2_C,0.0f);       
		SetFloat(p_MasaHEX2,1.493f);                 
		SetFloat(p_AreaHEX2,18.615f);              
		SetFloat(p_UHEX2,0.0f);                  
		SetFloat(p_CIHEX2,Tambf); 
		SetFloat(p_PresionOutHEX2,1.0f);                
		SetFloat(p_PresionOutHEX2_kg,0.0f);           
		SetFloat(p_CI_Vel_Vent_HEX,0.0f);
		SetFloat(p_Tao_Vent_HEX,1.0f);
		SetFloat(p_Vel_MAX_Vent_HEX,424.0f); 
		SetFloat(p_OnOff_Vent_HEX,1.0f);
		SetFloat(p_Falla_Vent_HEX,1.0f);
		SetFloat(p_Velocidad_Ventilador_HEX,0.0f);
		SetFloat(p_AreaFilTanqCoal_V3,0.246f);          
		SetFloat(p_VolTanqueCoal_V3,0.235f);            
		SetFloat(p_AreaTanqCoal_V3,2.72f);             
		SetFloat(p_UFilCoal_V3,0.011f);                
		SetFloat(p_TempOutCoal_V3,300.0f);                
		SetFloat(p_TempOutCoal_V3_C,0.0f);               
		SetFloat(p_PresionTanqueCoal_V3_kg,0.0f);       
		SetFloat(p_CIMasaTanqueCoal_V3,0.1639f);     
		SetFloat(p_MasaTanqueCoal_V3,0.0f);             
		SetFloat(p_CITemCoal_V3,Tambf);               
		SetFloat(p_CIPresionTanqueCoal_V3,101.325f);    
		SetFloat(p_CICoal_V3,0.004f);                 
		SetFloat(p_NivelCoal_V3,0.0f);                  
		SetFloat(p_NivelCoal_V3mm,0.0f);                 
		SetFloat(p_Eta_Coal_V3,0.50f);
		SetFloat(p_Eta_VANE,0.2f);                    
		SetFloat(p_NivelCoal_V3B,0.0f);                 
		SetFloat(p_NivelCoal_V3Bmm,0.0f);                
		SetFloat(p_CICoal_V3B,0.0f);                    
		SetFloat(p_DifPresCoal_V3,4.0f);
		SetFloat(p_VelocidadGasout4,0.0f);              
		SetFloat(p_AreaFilTanqCoal_V082_1,0.246f);    
		SetFloat(p_CICoal_FV082_1A,0.0f);           
		SetFloat(p_CICoal_FV082_1B,0.0f);           
		SetFloat(p_VolCoalV082_1,0.28f);              
		SetFloat(p_CIMasaCoalV082_1,0.1952f);         
		SetFloat(p_CITemCoalV082_1,Tambf);            
		SetFloat(p_TempOutCoalFV082_1,0.0f);            
		SetFloat(p_TempOutCoalFV082_1_C,0.0f);          
		SetFloat(p_MasaCoalFV082_1,0.0f);               
		SetFloat(p_NivelCoalFV082_1A,0.0f);              
		SetFloat(p_NivelCoalFV082_1Amm,0.0f);            
		SetFloat(p_NivelCoalFV082_1B,0.0f);              
		SetFloat(p_NivelCoalFV082_1Bmm,0.0f);            
		SetFloat(p_Eta_Coal_FV082_1A,0.99f);
		SetFloat(p_Eta_Coal_FV082_1B,0.99f);         
		SetFloat(p_CIPre_Fil_FV082_1,101.3f);
		SetFloat(p_On_off_Filtro_FV082_1,0.0f);
		SetFloat(p_AreaTub3,0.0047f);                 
		SetFloat(p_TaoCoal1,1.0f);
		SetFloat(p_PermeabCoal1,0.00001f);            
		SetFloat(p_Longi_Filto_FV082,0.5f);            
		SetFloat(p_AreaFilTanqCoal_V082_2,0.246f);        
		SetFloat(p_CICoal_FV082_2A,0.0f);           
		SetFloat(p_CICoal_FV082_2B,0.0f);           
		SetFloat(p_VolCoalV082_2,0.28f);              
		SetFloat(p_CIMasaCoalV082_2,0.1952f);         
		SetFloat(p_CITemCoalV082_2,Tambf);            
		SetFloat(p_TempOutCoalFV082_2,0.0f);            
		SetFloat(p_TempOutCoalFV082_2_C,0.0f);          
		SetFloat(p_MasaCoalFV082_2,0.0f);               
		SetFloat(p_NivelCoalFV082_2A,0.0f);              
		SetFloat(p_NivelCoalFV082_2Amm,0.0f);            
		SetFloat(p_NivelCoalFV082_2B,0.0f);              
		SetFloat(p_NivelCoalFV082_2Bmm,0.0f);            
		SetFloat(p_Eta_Coal_FV082_2A,0.99f);
		SetFloat(p_Eta_Coal_FV082_2B,0.99f);
		SetFloat(p_CIPre_Fil_FV082_2,101.3f);
		SetFloat(p_On_off_Filtro_FV082_2,1.0f);
		SetFloat(p_PDIS_082,0.0f);
		SetFloat(p_Avibra,1.0f);
		SetFloat(p_Bvibra,1.0f);
		SetFloat(p_Cvibra,1.0f);
		SetFloat(p_CIDesplazamiento,1.0f);
		SetFloat(p_CIVelDes,5.0f);
		SetFloat(p_Desplazamiento,0.0f);
		SetFloat(p_VelDesplazamiento,0.0f);
		SetFloat(p_Densidad_aceite,900.0f);      
		SetFloat(p_CI_HEX_LUB,Tambf);
		SetFloat(p_U_HEX_LUB,6.0f);
		SetFloat(p_Area_HEX_LUB,0.36f);        
		SetFloat(p_Flujo_in_aceite,1.26f);     
		SetFloat(p_CpAceite,2.2f);             
		SetFloat(p_MasaAceite_HEX,5.0f);         
		SetFloat(p_CI_VelAceiteceite,0.0f);      
		SetFloat(p_Tao_bombaAceite,1.0f);        
		SetFloat(p_Vel_maxBombaA,1750.0f);       
		SetFloat(p_WBombaAceite,0.0f);           
		SetFloat(p_ParInducidoMotorBombaAceite,0.001278f);
		SetFloat(p_PresionFinalBombaAceite_kg,0.0f);
		SetFloat(p_PI_Aceite,1.78f);           
		SetFloat(p_LocalRemotoLub,0.0f);
		SetFloat(p_AutomaticoBomLub ,0.0f);
		SetFloat(p_ManualBomLub,1.0f);
		SetFloat(p_onoffBomLub,0.0f);
		SetFloat(p_AreaChumaComp,0.028f);    
		SetFloat(p_EspesorAceite,0.00039f);  
		SetFloat(p_MasaLubComp,0.01f);       
		SetFloat(p_UChuma,0.1f);             
		SetFloat(p_TemChum3111A,0.0f);         
		SetFloat(p_TemChum3111B,0.0f);         
		SetFloat(p_TemChumEmpu_3113,0.0f);     
		SetFloat(p_CIT_Chuma_3111A,Tambf);     
		SetFloat(p_CIT_Chuma_3111B,Tambf);     
		SetFloat(p_CIT_ChumEmpu_3113,Tambf); 
		SetFloat(p_CILubComp,Tambf);         
		SetFloat(p_TempAceiteoutLubComp,0.0f); 
		SetFloat(p_TempAceiteoutLubComp_C,0.0f); 
		SetFloat(p_Temperatura_in_LubComp,320.0f); 
		SetFloat(p_k_L_ln,43.9f);              
		SetFloat(p_Visco_Aceite,0.135f);          
		SetFloat(p_Area_Contacto,0.028f);         
		SetFloat(p_Cp_metal,4.87f);               
		SetFloat(p_Masa_metal,10.0f);
		SetFloat(p_FallaVenti_Hex,1.0f);
		SetFloat(p_FallaBomLub,1.0f);
		SetFloat(p_PI6214,0.0f);
		SetFloat(p_FlujoSOV6208,0.0f);
		SetFloat(p_Apertura_Max_SOV6208,1.0f);
		SetFloat(p_CI_Apertura_SOV6208,0.0f);
		SetFloat(p_Tao_Valvula_SOV6208,1.0f);
		SetFloat(p_X_SOV6208,0.0f);
		SetFloat(p_Segnal_SOV6208,1.0f);
		SetFloat(p_Onn_Off_SOV6208,0.0f);
		SetFloat(p_Flujo_FSV6204,0.0f);
		SetFloat(p_WF36DMD_SUM,0.0f);
		SetFloat(p_Apertura_Max_FSV6204,1.0f);
		SetFloat(p_CI_Apertura_FSV6204,0.0f);
		SetFloat(p_Tao_Valvula_FSV6204,1.0f);
		SetFloat(p_X_FSV6204,0.0f);
		SetFloat(p_Segnal_FSV6204,1.0f);
		SetFloat(p_Onn_Off_FSV6204,0.0f);
		SetFloat(p_Flujo_FSV6249,0.0f);
		SetFloat(p_Apertura_Max_FSV6249,1.0f);
		SetFloat(p_CI_Apertura_FSV6249,0.0f);
		SetFloat(p_Tao_Valvula_FSV6249,1.0f);
		SetFloat(p_X_FSV6249,0.0f);
		SetFloat(p_Segnal_FSV6249,1.0f);
		SetFloat(p_Onn_Off_FSV6249,0.0f);
		SetFloat(p_Flujo62109,0.0f);
		SetFloat(p_Apertura_Max_FCV62109,0.5f);
		SetFloat(p_CI_Apertura_FCV62109,0.0f);
		SetFloat(p_Tao_Valvula_FCV62109,1.0f);
		SetFloat(p_X_FCV62109,0.0f);
		SetFloat(p_Flujo_FCV62109,0.0f);
		SetFloat(p_Segnal_FCV62109,1.0f);  
		SetFloat(p_Onn_Off_FCV62109,0.0f);
		SetFloat(p_LSS2,0.0f);               
		SetFloat(p_Apertura_Max_FCV62107,0.5f);
		SetFloat(p_CI_Apertura_FCV62107,0.0f);
		SetFloat(p_Tao_Valvula_FCV62107,1.0f);
		SetFloat(p_X_FCV62107,0.5f);
		SetFloat(p_Flujo_FCV62107,0.0f);
		SetFloat(p_Segnal_FCV62107,1.0f);
		SetFloat(p_Onn_Off_FCV62107,0.0f);
		SetFloat(p_Apertura_Max_FCV62108,0.5f);
		SetFloat(p_CI_Apertura_FCV62108,0.0f);
		SetFloat(p_Tao_Valvula_FCV62108,1.0f);
		SetFloat(p_X_FCV62108,0.5f);
		SetFloat(p_Flujo_FCV62108,0.0f);
		SetFloat(p_Segnal_FCV62108,1.0f);
		SetFloat(p_Onn_Off_FCV62108,0.0f);
		SetFloat(p_On_Off_SOV62110,1.0f);
		SetFloat(p_On_Off_SOV62111,1.0f);
		SetFloat(p_On_Off_SOV62112,1.0f);
		SetFloat(p_On_Off_SOV62113,1.0f);
		SetFloat(p_On_Off_SOV62114,1.0f);
		SetFloat(p_On_Off_SOV62115,1.0f);
		SetFloat(p_On_Off_SOV62116,1.0f);
		SetFloat(p_On_Off_SOV62117,1.0f);
		SetFloat(p_On_Off_SOV62118,1.0f);
		SetFloat(p_On_Off_SOV62119,1.0f);
		SetFloat(p_On_Off_SOV62120,1.0f);
		SetFloat(p_CI_Apertura_SOV62110,0.0f);
		SetFloat(p_CI_Apertura_SOV62111,0.0f);
		SetFloat(p_CI_Apertura_SOV62112,0.0f);
		SetFloat(p_CI_Apertura_SOV62113,0.0f);
		SetFloat(p_CI_Apertura_SOV62114,0.0f);
		SetFloat(p_CI_Apertura_SOV62115,0.0f);
		SetFloat(p_CI_Apertura_SOV62116,0.0f);
		SetFloat(p_CI_Apertura_SOV62117,0.0f);
		SetFloat(p_CI_Apertura_SOV62118,0.0f);
		SetFloat(p_CI_Apertura_SOV62119,0.0f);
		SetFloat(p_CI_Apertura_SOV62120,0.0f);
		SetFloat(p_SOV62110,0.0f);
		SetFloat(p_SOV62111,0.0f);
		SetFloat(p_SOV62112,0.0f);
		SetFloat(p_SOV62113,0.0f);
		SetFloat(p_SOV62114,0.0f);
		SetFloat(p_SOV62115,0.0f);
		SetFloat(p_SOV62116,0.0f);
		SetFloat(p_SOV62117,0.0f);
		SetFloat(p_SOV62118,0.0f);
		SetFloat(p_SOV62119,0.0f);
		SetFloat(p_SOV62120,0.0f);
		SetFloat(p_PI62139A,0.0f);
		SetFloat(p_PI62140A,0.0f);
		SetFloat(p_PI62141A,0.0f);
		SetFloat(p_PI62139B,0.0f);
		SetFloat(p_PI62140B,0.0f);
		SetFloat(p_PI62141B,0.0f);
		SetFloat(p_TE6232_F,0.0f);
		SetFloat(p_TE6232,0.0f);
		SetFloat(p_Flujo_toberas,0.0f);
		SetFloat(p_Tao_Valvula_SOV,1.0f);
		SetFloat(p_Apertura_Max_SOV,1.0f);
		SetFloat(p_K_Val_FCV621,0.98f);
		SetFloat(p_kg_kPa,98.0662582f);
		SetFloat(p_tcontrol1 ,0.0f);
		SetFloat(p_tcontrol2 ,0.0f);
		SetFloat(p_tcontrol3 ,0.0f);
		SetFloat(p_tcontrol4 ,0.0f);
		SetFloat(p_tcontrol5 ,0.0f);
		SetFloat(p_tcontrol6 ,0.0f);
		SetFloat(p_tcontrol7 ,0.0f);
		SetFloat(p_tcontrol8 ,0.0f);
		SetFloat(p_tcontrol9 ,0.0f);
		SetFloat(p_tcontrol10 ,0.0f);
		SetFloat(p_tcontrol11 ,0.0f);
		SetFloat(p_tcontrol13 ,0.0f);
		SetFloat(p_tcontrol14 ,0.0f);
		SetFloat(p_tcontrol15 ,0.0f);
		SetFloat(p_tcontrol16 ,0.0f);
		SetFloat(p_tcontrol17 ,0.0f);
		SetFloat(p_tcontrol18 ,0.0f);
		SetFloat(p_tcontrol19 ,0.0f);
		SetFloat(p_tcontrol20 ,0.0f);
		SetFloat(p_tcontrol21 ,0.0f);
		SetFloat(p_tcontrol22 ,0.0f);
		SetFloat(p_tcontrol23 ,0.0f);
		SetFloat(p_tcontrol24 ,0.0f);
		SetFloat(p_tcontrol25 ,0.0f);
		SetFloat(p_FLUJO_MASICO_TB ,0.0f);
		SetFloat(p_FLUJO_MASICO_CB ,0.0f);
		SetFloat(p_FLUJO_MASICO_TA ,0.0f);
		SetFloat(p_FLUJO_MASICO_CA ,0.0f);
		SetFloat(p_F_MAX_ENF ,0.0f);
		SetFloat(p_F_MAX_ENF_U4RTB ,0.0f);
		SetFloat(p_F_MAX_ENF_U1CTB ,0.0f);
		SetFloat(p_F_MAX_ENF_U1CCB ,0.0f);
		SetFloat(p_F_MAX_ENF_U4RTA ,0.0f);
		SetFloat(p_F_MAX_ENF_U1CTA ,0.0f);
		SetFloat(p_F_MAX_ENF_U1CCA ,0.0f);
		SetFloat(p_Tem_fin_64072 , 1.0f);
		SetFloat(p_Tem_fin_64071 , 1.0f);
		SetFloat(p_TgCB , 112.2f);
		SetFloat(p_U1RCB ,0.0f);
		SetFloat(p_TCCB , 25.0f);
		SetFloat(p_U2RCB , 1.0f);
		SetFloat(p_TRTB , 25.0f);
		SetFloat(p_U3RCB ,0.0f);
		SetFloat(p_Tlub , 81.0f); 
		SetFloat(p_mRCB , 250.0f); 
		SetFloat(p_CPmaterial , 1.0f);
		SetFloat(p_CITRCB , 25.0f);
		SetFloat(p_U1CCB ,0.0f); 
		SetFloat(p_Tenf , 25.0f); 
		SetFloat(p_U2CCB ,1.0f);
		SetFloat(p_mCCB , 100.0f);
		SetFloat(p_CITCCB , 25.0f);
		SetFloat(p_TgCA , 25.0f);
		SetFloat(p_U1RCA ,0.0f);
		SetFloat(p_U2RCA ,0.0f); 
		SetFloat(p_TRTA , 25.0f);
		SetFloat(p_U3RCA ,0.0f);
		SetFloat(p_mRCA , 250.0f);
		SetFloat(p_CITRCA , 25.0f);
		SetFloat(p_U1CCA ,0.0f);
		SetFloat(p_U2CCA ,0.0f);
		SetFloat(p_mCCA , 100.0f);
		SetFloat(p_CITCCA , 25.0f);
		SetFloat(p_U1RTA ,0.0f);
		SetFloat(p_TgTA , 25.0f);
		SetFloat(p_U2RTA ,0.0f);
		SetFloat(p_TRCA, 25.0f);
		SetFloat(p_U3RTA ,0.0f);
		SetFloat(p_U4RTA ,0.0f);
		SetFloat(p_Tgenf , 25.0f);
		SetFloat(p_mRTA , 250.0f);
		SetFloat(p_CITRTA , 25.0f);
		SetFloat(p_U1CTA ,0.0f);
		SetFloat(p_U2CTA ,0.0f);
		SetFloat(p_mCTA , 100.0f);
		SetFloat(p_CITCTA , 25.0f);
		SetFloat(p_U1RTB ,0.0f);
		SetFloat(p_TgTB , 25.0f);
		SetFloat(p_U2RTB ,0.0f);
		SetFloat(p_U3RTB ,0.0f);
		SetFloat(p_U4RTB ,0.0f);
		SetFloat(p_mRTB , 250.0f);
		SetFloat(p_CITRTB , 25.0f);
		SetFloat(p_U1CTB ,0.0f);
		SetFloat(p_U2CTB ,0.0f);
		SetFloat(p_mCTB , 100.0f);
		SetFloat(p_CITCTB , 25.0f);
		SetFloat(p_U1enf,1.0f);
		SetFloat(p_Pow_He6888,0.0f);
		SetFloat(p_TCTB, 200.0f);
		SetFloat(p_U2enf,1.0f);
		SetFloat(p_FMaire,1.0f);
		SetFloat(p_Tchiller, 30.0f);
		SetFloat(p_U3enf,1.0f);
		SetFloat(p_TCTA, 400.0f);
		SetFloat(p_U4enf,1.0f);
		SetFloat(p_TCCA, 250.0f);
		SetFloat(p_menf, 25.0f); 
		SetFloat(p_CPaire,1.0f); 
		SetFloat(p_CITenf, 25.0f);
		SetFloat(p_K_ADECUACION_K1_ROTOR1_TA , 4700.0f);
		SetFloat(p_K_ADECUACION_K1_ROTOR1_TB , 3600.0f);
		SetFloat(p_TAO_TA_ROTOR_1 , 5.0f); 
		SetFloat(p_TAO_TB_ROTOR_1 , 6.0f);
		SetFloat(p_CONTROL_TA_TORQUE_1 ,1.0f);
		SetFloat(p_CITORQUE_TA ,1.0f);
		SetFloat(p_w1_TA ,0.0f);        
		SetFloat(p_T_Giro_TA,0.0f); 
		SetFloat(p_CIw1_TA,0.0f); 
		SetFloat(p_Torque_Arracador_TA,1.0f);
		SetFloat(p_Torque_Arracador_TB,1.0f);
		SetFloat(p_RHO_AREA_1_CB ,1.0f);
		SetFloat(p_RHO_AREA_2_CB ,1.0f);                       
		SetFloat(p_RHO_AREA_3_CB ,1.0f);                       
		SetFloat(p_RHO_DELTA_PRESION_CB ,1.0f); 
		SetFloat(p_W_CB ,0.0f);            
		SetFloat(p_GRAVEDAD , 9.81f);
		SetFloat(p_Presion_atm ,1.0f);
		SetFloat(p_PDSH6405 ,1.0f);
		SetFloat(p_PDI64070 ,1.0f);
		SetFloat(p_Tem_fin_6499 , 25.0f);
		SetFloat(p_Tem_fin_6450 , 25.0f);
		SetFloat(p_CP_CB ,1.0f);
		SetFloat(p_V1_CB ,0.0f);
		SetFloat(p_V2_CB ,0.0f);
		SetFloat(p_V3_CB ,0.0f);
		SetFloat(p_VN2_CB ,0.0f);
		SetFloat(p_VN3_CB ,0.0f);
		SetFloat(p_VRB1_CB ,0.0f);
		SetFloat(p_VRB2_CB ,0.0f);
		SetFloat(p_VRB3_CB ,0.0f);
		SetFloat(p_VT3_CB ,0.0f);          
		SetFloat(p_PRESION_ENTRADA_COMPRESOR_BAJA ,1.0f);
		SetFloat(p_PRESION_SALIDA_COMPRESOR_BAJA ,1.0f);
		SetFloat(p_TEMPERATURA_ENTRADA_COMPRESOR_BAJA , 25.0f);
		SetFloat(p_TEMPERATURA_SALIDA_COMPRESOR_BAJA , 25.0f);
		SetFloat(p_DELTA_PRESION_CB ,0.0f);
		SetFloat(p_RADIO_MEDIO_CB, 0.0128f);
		SetFloat(p_ALFA2_CB ,1.0f);
		SetFloat(p_ALFA3_CB ,1.0f);
		SetFloat(p_AREA_1_CB , 0.30f);
		SetFloat(p_AREA_2_CB , 1.0072f);
		SetFloat(p_AREA_3_CB , 2.2160f);
		SetFloat(p_BETA2_CB , 0.95f);
		SetFloat(p_BETA3_CB , /*0.43*/0.28987f);
		SetFloat(p_VT2_TB ,0.0f);
		SetFloat(p_w1_TB ,0.0f);
		SetFloat(p_VT3_TB ,0.0f);
		SetFloat(p_VT2_TB ,0.0f);
		SetFloat(p_VT1_CB ,0.0f);  
		SetFloat(p_VN1_CB ,0.0f);
		SetFloat(p_U_CB ,0.0f);
		SetFloat(p_TORQUE_CB ,0.0f);
		SetFloat(p_FLUJO_MASICO_CB ,0.0f);
		SetFloat(p_BETA1_CB, 0.702244f);
		SetFloat(p_ALFA1_CB, 0.5f);
		SetFloat(p_TORQUE_CA ,0.0f);
		SetFloat(p_TORQUE_TA ,0.0f);
		SetFloat(p_RADIO_MEDIO_CA , 0.0193f);
		SetFloat(p_W_CA ,0.0f);             
		SetFloat(p_ALFA1_CA , 0.5f);
		SetFloat(p_BETA1_CA , 0.78870538f);
		SetFloat(p_ALFA_1_CA ,1.0f);
		SetFloat(p_AREA_2_CA , 0.6626f);
		SetFloat(p_AREA_1_CA , 0.7363f);
		SetFloat(p_RHO_AREA_1_CA ,1.0f);
		SetFloat(p_RHO_AREA_2_CA ,1.0f);
		SetFloat(p_ALFA2_CA , 0.64537f);
		SetFloat(p_BETA2_CA , 1.0066f);
		SetFloat(p_AREA_3_CA , 3.31f);
		SetFloat(p_RHO_AREA_3_CA ,1.0f);
		SetFloat(p_BETA_3_CA , 0.14749f);
		SetFloat(p_RHO_DELTA_PRESION_CA ,1.0f);
		SetFloat(p_CP_CA ,1.0f);
		SetFloat(p_RADIO_MEDIO_TA , 0.005068448f);
		SetFloat(p_ALFA1_TA , 0.4039f);
		SetFloat(p_BETA1_TA , 1.39f);
		SetFloat(p_CONSTANTE_AREAS_1_TA , 2.41f);
		SetFloat(p_BETA2_TA , 1.041f);
		SetFloat(p_CONSTANTE_AREAS_2_TA , 0.40f);
		SetFloat(p_BETA3_TA , 0.56f);
		SetFloat(p_RHO_DELTA_PRESION_TA ,1.0f);
		SetFloat(p_TEMPERATURA_ENTRADA_TURBINA_ALTA , 25.0f);
		SetFloat(p_CP_TA , 1.17f);
		SetFloat(p_RADIO_MEDIO_TB , 0.0133f);
		SetFloat(p_ALFA1_TB , 0.444f);
		SetFloat(p_BETA1_TB , 1.39f);
		SetFloat(p_ALFA_1_TB ,1.0f);
		SetFloat(p_CONSTANTE_AREAS_1_TB , 2.41f); 
		SetFloat(p_BETA2_TB , 1.04f); 
		SetFloat(p_CONSTANTE_AREAS_2_TB , 0.421f); 
		SetFloat(p_BETA3_TB , 0.57f); 
		SetFloat(p_RHO_DELTA_PRESION_TB ,1.0f); 
		SetFloat(p_TEMPERATURA_SALIDA_TURBINA_ALTA , 25.0f); 
		SetFloat(p_CP_TB , 2.2f);
		SetFloat(p_K_ADECUACION_1_CA ,1.0f);
		SetFloat(p_ALFA1_CONTROL_CA ,1.0f);
		SetFloat(p_TAO_ALFA_1_CA , 0.05f);
		SetFloat(p_CIALFA1_CA ,0.0f);
		SetFloat(p_Alfa1_ca_control ,0.0f);
		SetFloat(p_K_ADECUACION_BETA3_CB , 0.28987f);
		SetFloat(p_BETA3_CONTROL_CB , 0.43f);
		SetFloat(p_TAO_BETA3_CB , 0.05f);
		SetFloat(p_CIBETA3CB , 0.43*0.28987f);
		SetFloat(p_K_ADECUACION_1_CB,1.0f);
		SetFloat(p_ALFA1_CONTROL_CB,0.0f);
		SetFloat(p_TAO_ALFA_1_CB, 0.05f);
		SetFloat(p_CIALFA1,1.0f);
		SetFloat(p_K_ADECUACION_AREA1_CA ,1.0f);
		SetFloat(p_FCV_6872 , 0.3f);
		SetFloat(p_TAO_VBV_CA_A1 , 0.05f);
		SetFloat(p_CIAREA1VBV , 0.3f);
		SetFloat(p_K_ADECUACION_ST8A ,1.0f);
		SetFloat(p_FCV_68127 ,0.0f);
		SetFloat(p_TAO_ST8A , 0.05f);
		SetFloat(p_CIST8A ,0.0f);
		SetFloat(p_K_ADECUACION_AREA1_CB , 1.062f);
		SetFloat(p_AFCV_6872 , 0.3f);
		SetFloat(p_IGV_CONTROL_CB_A1 ,1.0f);
		SetFloat(p_TAO_IGV_CB_A1 , 0.05f);
		SetFloat(p_CIAREA1IGV , 0.3*1.062f);
		SetFloat(p_K_ADECUACION_AREA1_CA ,1.0f);
		SetFloat(p_AREA1_CONTROL_CA ,0.0f);
		SetFloat(p_FCV_6871 ,0.0f);
		SetFloat(p_TAO_CA_A1 , 0.05f);
		SetFloat(p_CIAREA1_CA ,0.0f);
		SetFloat(p_K_ADECUACION_BETA3_CA ,1.0f);
		SetFloat(p_CONTROL_BETA3_CA_CONTROL ,0.0f);
		SetFloat(p_FCV_6873 ,0.0f);
		SetFloat(p_TAO_BETA3_CA , 0.05f);
		SetFloat(p_CIBETA3CA ,0.0f);
		SetFloat(p_K_ADECUACION_CDPA ,1.0f);
		SetFloat(p_FCV_68128 , 5.0f);
		SetFloat(p_TAO_CDPA , 0.5f);
		SetFloat(p_CICDPA ,1.0f);
		SetFloat(p_K_ADECUACION_FCV6871 ,0.0f);
		SetFloat(p_CONTROL_FCV6871 ,0.0f);
		SetFloat(p_TAO_FCV6871 , 0.05f);
		SetFloat(p_CIFCV6871 ,0.0f);
		SetFloat(p_K_ADECUACION_FCV6872 ,1.0f);
		SetFloat(p_CONTROL_FCV6872 , 0.3f);
		SetFloat(p_TAO_FCV6872 , 0.05f);
		SetFloat(p_CIFCV6872 , 0.3f);
		SetFloat(p_K_ADECUACION_FCV6873 ,1.0f);
		SetFloat(p_CONTROL_FCV6873 ,0.0f);
		SetFloat(p_TAO_FCV6873 , 0.05f);
		SetFloat(p_CIFCV6873 ,0.0f);
		SetFloat(p_K_ADECUACION_FCV68127 ,1.0f);
		SetFloat(p_CONTROL_FCV68127 ,0.0f);
		SetFloat(p_TAO_FCV68127 , 0.05f);
		SetFloat(p_CIFCV68127 ,0.0f);
		SetFloat(p_K_ADECUACION_FCV68128 ,1.0f);
		SetFloat(p_CONTROL_FCV68128 ,0.0f);
		SetFloat(p_TAO_FCV68128 , 0.05f);
		SetFloat(p_CIFCV68128 ,0.0f);
		SetFloat(p_FLUJO_COMBUSTIBLE,0.0f);
		SetFloat(p_arrancador,1.0f);
		SetFloat(p_CONSENOBETA1TA, 0.9837f);
		SetFloat(p_CONSENOBETA2TA, 0.8629f);
		SetFloat(p_CONSTANBETA2TA, 0.8629f);
		SetFloat(p_CONSENOBETA3TA, 0.5611f);
		SetFloat(p_CONSTANBETA3TA, 0.5611f);
		SetFloat(p_CONSENOBETA1TB, 0.9837f);
		SetFloat(p_CONSENOBETA2TB, 0.8624f);
		SetFloat(p_CONSTANBETA2TB, 0.8624f);
		SetFloat(p_CONSENOBETA3TB, 0.5396f);
		SetFloat(p_CONSTANBETA3TB, 0.5396f);
		SetFloat(p_HumedadGas,3.3f);
		SetFloat(p_AcidoSulf,74.6f); 
		SetFloat(p_X_Nhexano,0.0002);
		SetFloat(p_X_Propano,0.0018);
		SetFloat(p_X_Ibutano,0.0002);
		SetFloat(p_X_Nbutano,0.0002);
		SetFloat(p_X_Neopentano,0);
		SetFloat(p_X_Ipentano,0.0001);
		SetFloat(p_X_Npentano,0);
		SetFloat(p_X_nitrogenoR,0.0176);
		SetFloat(p_X_metano,0.9491);
		SetFloat(p_X_bioxidoR,0.0035);
		SetFloat(p_X_etano,0.0404);
		SetFloat(p_X_Oxigeno,2.0165);
		SetFloat(p_TemGas , 336.15f);    
		SetFloat(p_TemGasF ,0.0f);      
		SetFloat(p_TemGasC ,0.0f);     
		SetFloat(p_TemAmb , 298.0f);    
		SetFloat(p_TRef , 380.0f);    
		SetFloat(p_TemRefCROMA , 84.0f);    
		SetFloat(p_hhv,0.0f);        
		SetFloat(p_PCIp,0.0f); 
		SetFloat(p_AE62326_AI,0.0f);
		SetFloat(p_Rhoideal ,0.0f);    
		SetFloat(p_Rho_rel ,0.0f);     
		SetFloat(p_Rhoreal ,0.0f);     
		SetFloat(p_Pres_in , 135.3213f);
		SetFloat(p_Ru , 8.314f);      
		SetFloat(p_PreSatAgua , 7.25f);
		SetFloat(p_PreRef , 14.696f); 
		SetFloat(p_Rgas ,0.0f);
		SetFloat(p_k_gas ,0.0f);
		SetFloat(p_HF_Nhexano , -166.92f);
		SetFloat(p_HF_Propano , -104.68f);
		SetFloat(p_HF_Ibutano , -131.775f);
		SetFloat(p_HF_Nbutano , -125.79f);
		SetFloat(p_HF_Neopentano , -166.21f);
		SetFloat(p_HF_Ipentano , -154.69f);
		SetFloat(p_HF_Npentano , -146.76f);
		SetFloat(p_HF_nitrogenoR ,0.0f);
		SetFloat(p_HF_metano , -74.52f);
		SetFloat(p_HF_bioxido , -393.509f);
		SetFloat(p_HF_etano ,  -83.82f);
		SetFloat(p_HF_Oxigeno ,0.0f);
		SetFloat(p_HF_Agua_L , -285.83f);
		SetFloat(p_HF_Agua_V , -241.818f);
		SetFloat(p_X_Agua_L ,0.0f);
		SetFloat(p_X_Agua_V ,0.0f);
		SetFloat(p_X_Agua_Sat ,0.0f);
		SetFloat(p_X_Agua_Corregida ,0.0f);
		SetFloat(p_X_nitrogenoP ,0.0f);
		SetFloat(p_X_bioxidoP ,0.0f);
		SetFloat(p_X_NhexanoX ,0.0f);
		SetFloat(p_X_PropanoX ,0.0f);
		SetFloat(p_X_IbutanoX ,0.0f);
		SetFloat(p_X_NbutanoX ,0.0f);
		SetFloat(p_X_NeopentanoX ,0.0f);
		SetFloat(p_X_IpentanoX ,0.0f);
		SetFloat(p_X_NpentanoX ,0.0f);
		SetFloat(p_X_nitrogenoRX ,0.0f);
		SetFloat(p_X_metanoX ,0.0f);
		SetFloat(p_X_bioxidoRX ,0.0f);
		SetFloat(p_X_etanoX ,0.0f);
		SetFloat(p_DH_Nhexano ,0.0f);
		SetFloat(p_DH_Propano ,0.0f);
		SetFloat(p_DH_Ibutano ,0.0f);
		SetFloat(p_DH_Nbutano ,0.0f);
		SetFloat(p_DH_Neopentano ,0.0f);
		SetFloat(p_DH_Ipentano ,0.0f);
		SetFloat(p_DH_Npentano ,0.0f);
		SetFloat(p_DH_metano ,0.0f);
		SetFloat(p_DH_bioxido ,0.0f);
		SetFloat(p_DH_etano ,0.0f);
		SetFloat(p_DH_Oxigeno ,0.0f);
		SetFloat(p_DH_Agua_V ,0.0f);
		SetFloat(p_DH_nitrogeno ,0.0f);
		SetFloat(p_HNhexanoSY ,0.0f);
		SetFloat(p_HPropanoSY ,0.0f);
		SetFloat(p_HIbutanoSY ,0.0f);
		SetFloat(p_HNbutanoSY ,0.0f);
		SetFloat(p_HNeopentanoSY ,0.0f);
		SetFloat(p_HIpentanoSY ,0.0f);
		SetFloat(p_HNpentanoSY ,0.0f);
		SetFloat(p_HmetanoSY ,0.0f);
		SetFloat(p_HbioxidoSY ,0.0f);
		SetFloat(p_HetanoSY ,0.0f);
		SetFloat(p_HOxigenoSY ,0.0f);
		SetFloat(p_HnitrogenoSY ,0.0f);
		SetFloat(p_HAgua_L ,0.0f);
		SetFloat(p_Cp_Nhexano ,0.0f);
		SetFloat(p_Cp_Propano ,0.0f);
		SetFloat(p_Cp_Ibutano ,0.0f);
		SetFloat(p_Cp_Nbutano ,0.0f);
		SetFloat(p_Cp_Neopentano ,0.0f);
		SetFloat(p_Cp_Ipentano ,0.0f);
		SetFloat(p_Cp_Npentano ,0.0f);
		SetFloat(p_Cp_metano ,0.0f);
		SetFloat(p_Cp_bioxido ,0.0f);
		SetFloat(p_Cp_etano ,0.0f);
		SetFloat(p_Cp_nitrogeno ,0.0f);
		SetFloat(p_Cp_gas ,0.0f);
		SetFloat(p_Cv_gas ,0.0f);
		SetFloat(p_M_Nhexano , 86.177f);
		SetFloat(p_M_Propano , 44.097f);
		SetFloat(p_M_Ibutano , 58.123f);
		SetFloat(p_M_Nbutano , 58.123f);
		SetFloat(p_M_Neopentano , 72.15f);
		SetFloat(p_M_Ipentano , 72.15f);
		SetFloat(p_M_Npentano , 72.15f);
		SetFloat(p_M_nitrogeno , 28.0134f);
		SetFloat(p_M_metano , 16.043f);
		SetFloat(p_M_bioxido , 44.01f);
		SetFloat(p_M_etano , 30.07f);
		SetFloat(p_M_Oxigeno , 31.99f);
		SetFloat(p_M_Agua , 18.053f);
		SetFloat(p_M_gas ,0.0f);
		SetFloat(p_M_aire , 28.97f);
		SetFloat(p_B_Nhexano , 0.0802f);
		SetFloat(p_B_Propano , 0.0344f);
		SetFloat(p_B_Ibutano , 0.0458f);
		SetFloat(p_B_Nbutano , 0.0478f);
		SetFloat(p_B_Neopentano ,0.0f);
		SetFloat(p_B_Ipentano , 0.0581f);
		SetFloat(p_B_Npentano , 0.0631f);
		SetFloat(p_B_nitrogeno , 0.0044f);
		SetFloat(p_B_metano , 0.0116f);
		SetFloat(p_B_bioxido , 0.0197f);
		SetFloat(p_B_etano , 0.0239f);
		SetFloat(p_B_Oxigeno , 0.0073f);
		SetFloat(p_B_Agua , 0.0623f);
		SetFloat(p_B_aire , 0.005f);
		SetFloat(p_Z_Gas_seco ,0.0f);
		SetFloat(p_Z_Gas_humedo ,0.0f);
		SetFloat(p_Z_Aire_seco ,0.0f);
		SetFloat(p_Z_Aire_humedo ,0.0f);
		SetFloat(p_kJkg_Btulb , 2.326f);
		SetFloat(p_kJ_kCal , 4.19f);
		SetFloat(p_M_aire_kg_kmol,28.9625f);
		SetFloat(p_num_hidrogeno,0.0f);
		SetFloat(p_num_hidrogeno2,0.0f);
		SetFloat(p_AG,0.0f);
		SetFloat(p_suma,0.0f);
		SetFloat(p_suma2,0.0f);
		SetFloat(p_AC_mol,0.0f);
		SetFloat(p_AC_masa,0.0f);
		SetFloat(p_num_oxigeno,0.0f);
		SetFloat(p_num_nitrogeno,0.0f);
		SetFloat(p_n_hexano_kj_mol,0.0f);
		SetFloat(p_propano_kj_mol,0.0f);
		SetFloat(p_i_butano_kj_mol,0.0f);
		SetFloat(p_n_butano_kj_mol,0.0f);
		SetFloat(p_neopentano_kj_mol,0.0f);
		SetFloat(p_i_pentano_kj_mol,0.0f);
		SetFloat(p_nitrogeno_kj_mol,0.0f);
		SetFloat(p_metano_kj_mol,0.0f);
		SetFloat(p_bioxido_kj_mol,0.0f);
		SetFloat(p_etano_kj_mol,0.0f);
		SetFloat(p_n_pentano_kj_mol,0.0f);
		SetFloat(p_Nitro_comb,0.0f);
		SetFloat(p_CO2_comb,0.0f);
		SetFloat(p_nitrogeno2_kj_mol,0.0f);
		SetFloat(p_Nitro_aire,0.0f);
		SetFloat(p_Hreactivos,0.0f);
		SetFloat(p_oxigeno_kj_mol,0.0f);
		SetFloat(p_O2_aire,0.0f);
		SetFloat(p_suma_productos,0.0f);
		SetFloat(p_constante1,0.0f);
		SetFloat(p_Tx_Newton,0.0f);
		SetFloat(p_Ti_Newton,0.0f);
		SetFloat(p_poli1suma,0.0f);
		SetFloat(p_poli2suma,0.0f);
		SetFloat(p_error,0.0f);
		SetFloat(p_Ni,0.0f);
		SetFloat(p_Ta_Newton,0.0f);
		SetFloat(p_C_1,0.0f);
		SetFloat(p_H_1,0.0f);
		SetFloat(p_O_1,0.0f);
		SetFloat(p_N_1,0.0f);
		SetFloat(p_num_carbon,0.0f);
		SetFloat(p_Temperatura,0.0f);
		SetFloat(p_T_nueva,0.0f);
		SetFloat(p_Tref_h,0.0f);
		SetFloat(p_Tref_flama,0.0f);   
		SetFloat(p_TGSSEL,0.0f);    
		SetFloat(p_aire_comb ,1.0f);
		SetFloat(p_Temperatura_F,0.0f);
		SetFloat(p_Temperatura_C,0.0f);
		SetFloat(p_h0_href_O2,0.0f);
		SetFloat(p_Hproductos,0.0f);
		SetFloat(p_M_aire_kg_kmol,0.0f);
		SetFloat(p_M_gas_kg_kmol,0.0f);
		SetFloat(p_mairemax_kg_s,0.0f);
		SetFloat(p_mairemax_kmol_s,0.0f);
		SetFloat(p_mgas_kg_s,0.0f);
		SetFloat(p_mgas_kmol_s,0.0f);
		SetFloat(p_RACreal_masa,0.0f);
		SetFloat(p_RAC_ideal_masa,0.0f);
		SetFloat(p_RACreal_mol,0.0f);
		SetFloat(p_RAC_ideal_mol,0.0f);
		SetFloat(p_RCAreal_masa,0.0f);
		SetFloat(p_RCA_ideal_masa,0.0f);
		SetFloat(p_RCAreal_mol,0.0f);
		SetFloat(p_RCA_ideal_mol,0.0f);
		SetFloat(p_Exceso_MOLAR_porciento,0.0f);
		SetFloat(p_f_molar,0.0f);
		SetFloat(p_Exceso_MASICO_porciento,0.0f);
		SetFloat(p_fMASICO,0.0f);
		SetFloat(p_n_C6H14_g,0.0f);
		SetFloat(p_C3H8_g,0.0f);
		SetFloat(p_i_C4H10_g,0.0f);
		SetFloat(p_n_C4H10_g,0.0f);
		SetFloat(p_neo_C5H12_g,0.0f);
		SetFloat(p_i_C5H12_g,0.0f);
		SetFloat(p_n_C5H12_g,0.0f);
		SetFloat(p_N2,0.0f);
		SetFloat(p_CH4,0.0f);
		SetFloat(p_CO2,0.0f);
		SetFloat(p_C2H6_g,0.0f);
		SetFloat(p_O2,0.0f);
		SetFloat(p_rcomb_1,0.0f);
		SetFloat(p_rcomb_2,0.0f);
		SetFloat(p_rcomb_3,0.0f);
		SetFloat(p_rcomb_4,0.0f);
		SetFloat(p_H2_inicial,0.0f);
		SetFloat(p_H2O_inicial,0.0f);
		SetFloat(p_CO2_inicial,0.0f);
		SetFloat(p_N2_inicial,0.0f);
		SetFloat(p_Presion_comb_bar,0.0f);
		SetFloat(p_CO_prod,0.0f);
		SetFloat(p_C_prod,0.0f);
		SetFloat(p_CH4_prod,0.0f);
		SetFloat(p_HCN_prod,0.0f);
		SetFloat(p_O2_prod,0.0f);
		SetFloat(p_OH_prod,0.0f);
		SetFloat(p_H_prod,0.0f);
		SetFloat(p_O3_prod,0.0f);
		SetFloat(p_O_prod,0.0f);
		SetFloat(p_N_prod,0.0f);
		SetFloat(p_NO_prod,0.0f);
		SetFloat(p_NO2_prod,0.0f);
		SetFloat(p_NH3_prod,0.0f);
		SetFloat(p_HNO3_prod,0.0f);
		SetFloat(p_R_CO,0.0f);
		SetFloat(p_R_HO,0.0f);
		SetFloat(p_R_NO,0.0f);
		SetFloat(p_CO_H2,0.0f);
		SetFloat(p_C_H2,0.0f);
		SetFloat(p_CH4_H2,0.0f);
		SetFloat(p_HCN_H2,0.0f);
		SetFloat(p_O2_H2,0.0f);
		SetFloat(p_OH_H2,0.0f);
		SetFloat(p_H_H2,0.0f);
		SetFloat(p_O_H2,0.0f);
		SetFloat(p_O3_H2,0.0f);
		SetFloat(p_NO_H2,0.0f);
		SetFloat(p_NO2_H2,0.0f);
		SetFloat(p_NH3_H2,0.0f);
		SetFloat(p_N_H2,0.0f);
		SetFloat(p_CO_B,0.0f);
		SetFloat(p_C_B,0.0f);
		SetFloat(p_CH4_B,0.0f);
		SetFloat(p_HCN_B,0.0f);
		SetFloat(p_O2_B,0.0f);
		SetFloat(p_O_B,0.0f);
		SetFloat(p_O3_B,0.0f);
		SetFloat(p_NO_B,0.0f);
		SetFloat(p_NO2_B,0.0f);
		SetFloat(p_NH3_B,0.0f);
		SetFloat(p_OH_B,0.0f);
		SetFloat(p_CO_C,0.0f);
		SetFloat(p_C_C,0.0f);
		SetFloat(p_CH4_C,0.0f);
		SetFloat(p_HCN_C,0.0f);
		SetFloat(p_HCN_D,0.0f);
		SetFloat(p_N_D,0.0f);
		SetFloat(p_NO_D,0.0f);
		SetFloat(p_NO2_D,0.0f);
		SetFloat(p_NH3_D,0.0f);
		SetFloat(p_F_com,0.0f);
		SetFloat(p_FA_comb,0.0f);
		SetFloat(p_FB_comb,0.0f);
		SetFloat(p_FC_comb,0.0f);
		SetFloat(p_FD_comb,0.0f);
		SetFloat(p_G_comb,0.0f);
		SetFloat(p_GA_comb,0.0f);
		SetFloat(p_GB_comb,0.0f);
		SetFloat(p_GC_comb,0.0f);
		SetFloat(p_GD_comb,0.0f);
		SetFloat(p_H_comb,0.0f);
		SetFloat(p_HA_comb,0.0f);
		SetFloat(p_HB_comb,0.0f);
		SetFloat(p_HC_comb,0.0f);
		SetFloat(p_HD_comb,0.0f);
		SetFloat(p_J_comb,0.0f);
		SetFloat(p_JA_comb,0.0f);
		SetFloat(p_JB_comb,0.0f);
		SetFloat(p_JC_comb,0.0f);
		SetFloat(p_JD_comb,0.0f);
		SetFloat(p_i,0.0f);
		SetFloat(p_j,0.0f);
		SetFloat(p_iteracion,0.0f);
		SetFloat(p_num1,0.0f);
		SetFloat(p_num2,0.0f);
		SetFloat(p_x_res,0.0f);    
		SetFloat(p_d_gauss,0.0f);
		SetFloat(p_aux2,0.0f);   
		SetFloat(p_T_ref,0.0f);
		SetFloat(p_Hreactivos,0.0f);
		SetFloat(p_error1,0.0f);
		SetFloat(p_error2,0.0f);
		SetFloat(p_error3,0.0f);
		SetFloat(p_error4,0.0f);
		SetFloat(p_error5,0.0f);
		SetFloat(p_error6,0.0f);
		SetFloat(p_Q_a,0.0f);
		SetFloat(p_F_a,0.0f);
		SetFloat(p_C_a,0.0f);
		SetFloat(p_U_a,0.0f);
		SetFloat(p_V_a,0.0f);
		SetFloat(p_NOx,0.0f);
		SetFloat(p_Tref_h,0.298f);            
		SetFloat(p_Tref_flama,2.0f);
		SetFloat(p_TGSSEL,(CITemCoalV082_2*0.001f)); 
		SetFloat(p_T_aire_comb , (TEMPERATURA_SALIDA_COMPRESOR_ALTA*0.001f));
		SetFloat(p_n_C6H14_g,86.177f);
		SetFloat(p_C3H8_g,44.097f);
		SetFloat(p_i_C4H10_g,58.123f);
		SetFloat(p_n_C4H10_g,58.123f);
		SetFloat(p_neo_C5H12_g,72.15f);
		SetFloat(p_i_C5H12_g,72.15f);
		SetFloat(p_n_C5H12_g,72.15f);
		SetFloat(p_N2,28.0134f);
		SetFloat(p_CH4,16.043f);
		SetFloat(p_CO2,44.01f);
		SetFloat(p_C2H6_g,30.07f);
		SetFloat(p_O2,0.0f);
		SetFloat(p_R_CO,0.17606865f);
		SetFloat(p_R_HO,0.69038126f);
		SetFloat(p_R_NO,3.76324869f);
		SetFloat(p_T_ref,298.0f);
		SetFloat(pa_coef_esq+0, 0.0002f);
		SetFloat(pa_coef_esq+1, 0.0018f);
		SetFloat(pa_coef_esq+2, 0.0002f);
		SetFloat(pa_coef_esq+3, 0.0002f);
		SetFloat(pa_coef_esq+4, 0.0f);
		SetFloat(pa_coef_esq+5, 0.0001f);
		SetFloat(pa_coef_esq+6, 0.0f);
		SetFloat(pa_coef_esq+7, 0.0176f);
		SetFloat(pa_coef_esq+8, 0.9361f);
		SetFloat(pa_coef_esq+9, 0.0035f);
		SetFloat(pa_coef_esq+10, 0.0404f);
		SetFloat(pa_XCombustible+0, 86.177f);
		SetFloat(pa_XCombustible+1, 44.097f);
		SetFloat(pa_XCombustible+2, 58.123f);
		SetFloat(pa_XCombustible+3, 58.123f);
		SetFloat(pa_XCombustible+4, 72.15f);
		SetFloat(pa_XCombustible+5, 72.15f);
		SetFloat(pa_XCombustible+6, 72.15f);
		SetFloat(pa_XCombustible+7, 28.0134f);
		SetFloat(pa_XCombustible+8, 16.043f);
		SetFloat(pa_XCombustible+9, 44.01f);
		SetFloat(pa_XCombustible+10, 30.07f);
		SetFloat(pa_XCombustible+11, 0.0f);
		SetFloat(pa_logk+0, 0.0f);
		SetFloat(pa_logk+1, 0.0f);
		SetFloat(pa_logk+2, 0.0f);
		SetFloat(pa_logk+3, 0.0f);
		SetFloat(pa_logk+4, 0.0f);
		SetFloat(pa_logk+5, 0.0f);
		SetFloat(pa_logk+6, 0.0f);
		SetFloat(pa_logk+7, 0.0f);
		SetFloat(pa_logk+8, 0.0f);
		SetFloat(pa_logk+9, 0.0f);
		SetFloat(pa_logk+10, 0.0f);
		SetFloat(pa_logk+11, 0.0f);
		SetFloat(pa_logk+12, 0.0f);
		SetFloat(pa_logk+13, 0.0f);
		SetFloat(pa_k+0, 0.0f);
		SetFloat(pa_k+1, 0.0f);
		SetFloat(pa_k+2, 0.0f);
		SetFloat(pa_k+3, 0.0f);
		SetFloat(pa_k+4, 0.0f);
		SetFloat(pa_k+5, 0.0f);
		SetFloat(pa_k+6, 0.0f);
		SetFloat(pa_k+7, 0.0f);
		SetFloat(pa_k+8, 0.0f);
		SetFloat(pa_k+9, 0.0f);
		SetFloat(pa_k+10, 0.0f);
		SetFloat(pa_k+11, 0.0f);
		SetFloat(pa_k+12, 0.0f);
		SetFloat(pa_k+13, 0.0f);
		SetFloat(pa_kj_mol+0, -166.92f);
		SetFloat(pa_kj_mol+1, -104.68f);
		SetFloat(pa_kj_mol+2, -131.775f);
		SetFloat(pa_kj_mol+3, -125.79f);
		SetFloat(pa_kj_mol+4, -166.21f);
		SetFloat(pa_kj_mol+5, -154.69f);
		SetFloat(pa_kj_mol+6, -146.76f);
		SetFloat(pa_kj_mol+7, 0.0f);
		SetFloat(pa_kj_mol+8, -74.52f);
		SetFloat(pa_kj_mol+9, -393.509f);
		SetFloat(pa_kj_mol+10, -83.82f);
		SetFloat(pa_kj_mol+11, 0.0f);
		SetFloat(pa_kj_mol+12, 0.0f);
		SetFloat(pa_kj_mol+13, 0.0f);
		SetFloat(pa_cal_mol+0, 0.0f);
		SetFloat(pa_cal_mol+1, 0.0f);
		SetFloat(pa_cal_mol+2, 0.0f);
		SetFloat(pa_cal_mol+3, 0.0f);
		SetFloat(pa_cal_mol+4, 0.0f);
		SetFloat(pa_cal_mol+5, 0.0f);
		SetFloat(pa_cal_mol+6, 0.0f);
		SetFloat(pa_cal_mol+7, 0.0f);
		SetFloat(pa_cal_mol+8, 0.0f);
		SetFloat(pa_cal_mol+9, 0.0f);
		SetFloat(pa_cal_mol+10, 0.0f);
		SetFloat(pa_cal_mol+11, 0.0f);
		SetFloat(pa_cal_mol+12, 0.0f);
		SetFloat(pa_cal_mol+13, 0.0f);
		SetFloat(pa_cal_mol+14, 0.0f);
		SetFloat(pa_cal_mol+15, 0.0f);
		SetFloat(pa_cal_mol+16, 0.0f);
		SetFloat(pa_a1_Hcal+0, 6.183042f);
		SetFloat(pa_a1_Hcal+1, 4.968f);
		SetFloat(pa_a1_Hcal+2, 7.361141f);
		SetFloat(pa_a1_Hcal+3, 5.974134f);
		SetFloat(pa_a1_Hcal+4, 7.709928f);
		SetFloat(pa_a1_Hcal+5, 4.966526f);
		SetFloat(pa_a1_Hcal+6, 7.6151f);
		SetFloat(pa_a1_Hcal+7, 7.988869f);
		SetFloat(pa_a1_Hcal+8, 7.0405f);
		SetFloat(pa_a1_Hcal+9, 8.462334f);
		SetFloat(pa_a1_Hcal+10, 6.61007f);
		SetFloat(pa_a1_Hcal+11, 5.028273f);
		SetFloat(pa_a1_Hcal+12, 7.812249f);
		SetFloat(pa_a1_Hcal+13, 4.324933f);
		SetFloat(pa_a1_Hcal+14, 7.918404f);
		SetFloat(pa_a1_Hcal+15, 4.4494f);
		SetFloat(pa_a1_Hcal+16, 3.854035f);
		SetFloat(pa_a2_Hcal+0, 4.710657f);
		SetFloat(pa_a2_Hcal+1, 0.0f);
		SetFloat(pa_a2_Hcal+2, -5.369589f);
		SetFloat(pa_a2_Hcal+3, -4.241883f);
		SetFloat(pa_a2_Hcal+4, -5.503897f);
		SetFloat(pa_a2_Hcal+5, 0.01150479f);
		SetFloat(pa_a2_Hcal+6, -1.936f);
		SetFloat(pa_a2_Hcal+7, -1.506271f);
		SetFloat(pa_a2_Hcal+8, 1.2091f);
		SetFloat(pa_a2_Hcal+9, -10.40669f);
		SetFloat(pa_a2_Hcal+10, 5.431315f);
		SetFloat(pa_a2_Hcal+11, -0.282092f);
		SetFloat(pa_a2_Hcal+12, -6.668293f);
		SetFloat(pa_a2_Hcal+13, 20.80895f);
		SetFloat(pa_a2_Hcal+14, -11.41722f);
		SetFloat(pa_a2_Hcal+15, 20.895f);
		SetFloat(pa_a2_Hcal+16, 26.00085f);
		SetFloat(pa_a3_Hcal+0, -10.92135f);
		SetFloat(pa_a3_Hcal+1, 0.0f);
		SetFloat(pa_a3_Hcal+2, 20.54179f);
		SetFloat(pa_a3_Hcal+3, 7.931254f);
		SetFloat(pa_a3_Hcal+4, 13.12136f);
		SetFloat(pa_a3_Hcal+5, -0.03333487f);
		SetFloat(pa_a3_Hcal+6, 0.877f);
		SetFloat(pa_a3_Hcal+7, 6.661376f);
		SetFloat(pa_a3_Hcal+8, 18.33f);
		SetFloat(pa_a3_Hcal+9, 27.54876f);
		SetFloat(pa_a3_Hcal+10, 12.7251f);
		SetFloat(pa_a3_Hcal+11, 0.5583757f);
		SetFloat(pa_a3_Hcal+12, 17.28296f);
		SetFloat(pa_a3_Hcal+13, -22.9459f);
		SetFloat(pa_a3_Hcal+14, 63.73457f);
		SetFloat(pa_a3_Hcal+15, -31.376f);
		SetFloat(pa_a3_Hcal+16, -30.2568f);
		SetFloat(pa_a4_Hcal+0, 12.54086f);
		SetFloat(pa_a4_Hcal+1, 0.0f);
		SetFloat(pa_a4_Hcal+2, -25.86526f);
		SetFloat(pa_a4_Hcal+3, -7.94423f);
		SetFloat(pa_a4_Hcal+4, -11.67955f);
		SetFloat(pa_a4_Hcal+5, 0.04616989f);
		SetFloat(pa_a4_Hcal+6, 2.6153f);
		SetFloat(pa_a4_Hcal+7, -4.65597f);
		SetFloat(pa_a4_Hcal+8, -23.991f);
		SetFloat(pa_a4_Hcal+9, -30.28119f);
		SetFloat(pa_a4_Hcal+10, -24.93998f);
		SetFloat(pa_a4_Hcal+11, -0.5661932f);
		SetFloat(pa_a4_Hcal+12, -17.28709f);
		SetFloat(pa_a4_Hcal+13, 16.84483f);
		SetFloat(pa_a4_Hcal+14, -75.25691f);
		SetFloat(pa_a4_Hcal+15, 31.911f);
		SetFloat(pa_a4_Hcal+16, 18.9052f);
		SetFloat(pa_a5_Hcal+0, -7.016263f);
		SetFloat(pa_a5_Hcal+1, 0.0f);
		SetFloat(pa_a5_Hcal+2, 15.94566f);
		SetFloat(pa_a5_Hcal+3, 4.403357f);
		SetFloat(pa_a5_Hcal+4, 5.233997f);
		SetFloat(pa_a5_Hcal+5, -0.03242073f);
		SetFloat(pa_a5_Hcal+6, -2.6909f);
		SetFloat(pa_a5_Hcal+7, 1.696464f);
		SetFloat(pa_a5_Hcal+8, 15.183f);
		SetFloat(pa_a5_Hcal+9, 17.18511f);
		SetFloat(pa_a5_Hcal+10, 17.73495f);
		SetFloat(pa_a5_Hcal+11, 0.3002187f);
		SetFloat(pa_a5_Hcal+12, 8.860125f);
		SetFloat(pa_a5_Hcal+13, -7.935665f);
		SetFloat(pa_a5_Hcal+14, 43.29269f);
		SetFloat(pa_a5_Hcal+15, -18.674f);
		SetFloat(pa_a5_Hcal+16, -6.266041f);
		SetFloat(pa_a6_Hcal+0, 1.923395f);
		SetFloat(pa_a6_Hcal+1, 0.0f);
		SetFloat(pa_a6_Hcal+2, -4.85889f);
		SetFloat(pa_a6_Hcal+3, -1.271341f);
		SetFloat(pa_a6_Hcal+4, -1.173185f);
		SetFloat(pa_a6_Hcal+5, 0.01094605f);
		SetFloat(pa_a6_Hcal+6, 0.97789f);
		SetFloat(pa_a6_Hcal+7, -0.3706212f);
		SetFloat(pa_a6_Hcal+8, -4.9496f);
		SetFloat(pa_a6_Hcal+9, -4.95726f);
		SetFloat(pa_a6_Hcal+10, -5.820404f);
		SetFloat(pa_a6_Hcal+11, -0.7697892f);
		SetFloat(pa_a6_Hcal+12, -2.314819f);
		SetFloat(pa_a6_Hcal+13, 2.121672f);
		SetFloat(pa_a6_Hcal+14, -12.56723f);
		SetFloat(pa_a6_Hcal+15, 5.6581f);
		SetFloat(pa_a6_Hcal+16, 0.9571012f);
		SetFloat(pa_a7_Hcal+0, -0.2084091f);
		SetFloat(pa_a7_Hcal+1, 0.0f);
		SetFloat(pa_a7_Hcal+2, 0.5861501f);
		SetFloat(pa_a7_Hcal+3, 0.1491408f);
		SetFloat(pa_a7_Hcal+4, 0.103883f);
		SetFloat(pa_a7_Hcal+5, -0.001373727f);
		SetFloat(pa_a7_Hcal+6, -0.12695f);
		SetFloat(pa_a7_Hcal+7, 0.03992444f);
		SetFloat(pa_a7_Hcal+8, 0.65337f);
		SetFloat(pa_a7_Hcal+9, 0.5755281f);
		SetFloat(pa_a7_Hcal+10, 0.7363536f);
		SetFloat(pa_a7_Hcal+11, 0.007805842f);
		SetFloat(pa_a7_Hcal+12, 0.2447785f);
		SetFloat(pa_a7_Hcal+13, -0.2408713f);
		SetFloat(pa_a7_Hcal+14, 1.469695f);
		SetFloat(pa_a7_Hcal+15, -0.68821f);
		SetFloat(pa_a7_Hcal+16, -0.03938305f);
		SetFloat(pa_a1_Hen+0, 0.0f);
		SetFloat(pa_a1_Hen+1, 0.0f);
		SetFloat(pa_a1_Hen+2, 0.0f);
		SetFloat(pa_a1_Hen+3, 0.0f);
		SetFloat(pa_a1_Hen+4, 0.0f);
		SetFloat(pa_a1_Hen+5, 0.0f);
		SetFloat(pa_a1_Hen+6, 0.0f);
		SetFloat(pa_a1_Hen+7, 0.0f);
		SetFloat(pa_a1_Hen+8, 0.0f);
		SetFloat(pa_a1_Hen+9, 0.0f);
		SetFloat(pa_a1_Hen+10, 0.0f);
		SetFloat(pa_a1_Hen+11, 0.0f);
		SetFloat(pa_a1_Hen+12, 0.0f);
		SetFloat(pa_a1_Hen+13, 0.0f);
		SetFloat(pa_a1_Hen+14, 0.0f);
		SetFloat(pa_a1_Hen+15, 0.0f);
		SetFloat(pa_a1_Hen+16, 0.0f);
		SetFloat(pa_a2_Hen+0, 0.0f);
		SetFloat(pa_a2_Hen+1, 0.0f);
		SetFloat(pa_a2_Hen+2, 0.0f);
		SetFloat(pa_a2_Hen+3, 0.0f);
		SetFloat(pa_a2_Hen+4, 0.0f);
		SetFloat(pa_a2_Hen+5, 0.0f);
		SetFloat(pa_a2_Hen+6, 0.0f);
		SetFloat(pa_a2_Hen+7, 0.0f);
		SetFloat(pa_a2_Hen+8, 0.0f);
		SetFloat(pa_a2_Hen+9, 0.0f);
		SetFloat(pa_a2_Hen+10, 0.0f);
		SetFloat(pa_a2_Hen+11, 0.0f);
		SetFloat(pa_a2_Hen+12, 0.0f);
		SetFloat(pa_a2_Hen+13, 0.0f);
		SetFloat(pa_a2_Hen+14, 0.0f);
		SetFloat(pa_a2_Hen+15, 0.0f);
		SetFloat(pa_a2_Hen+16, 0.0f);
		SetFloat(pa_a3_Hen+0, 0.0f);
		SetFloat(pa_a3_Hen+1, 0.0f);
		SetFloat(pa_a3_Hen+2, 0.0f);
		SetFloat(pa_a3_Hen+3, 0.0f);
		SetFloat(pa_a3_Hen+4, 0.0f);
		SetFloat(pa_a3_Hen+5, 0.0f);
		SetFloat(pa_a3_Hen+6, 0.0f);
		SetFloat(pa_a3_Hen+7, 0.0f);
		SetFloat(pa_a3_Hen+8, 0.0f);
		SetFloat(pa_a3_Hen+9, 0.0f);
		SetFloat(pa_a3_Hen+10, 0.0f);
		SetFloat(pa_a3_Hen+11, 0.0f);
		SetFloat(pa_a3_Hen+12, 0.0f);
		SetFloat(pa_a3_Hen+13, 0.0f);
		SetFloat(pa_a3_Hen+14, 0.0f);
		SetFloat(pa_a3_Hen+15, 0.0f);
		SetFloat(pa_a3_Hen+16, 0.0f);
		SetFloat(pa_a4_Hen+0, 0.0f);
		SetFloat(pa_a4_Hen+1, 0.0f);
		SetFloat(pa_a4_Hen+2, 0.0f);
		SetFloat(pa_a4_Hen+3, 0.0f);
		SetFloat(pa_a4_Hen+4, 0.0f);
		SetFloat(pa_a4_Hen+5, 0.0f);
		SetFloat(pa_a4_Hen+6, 0.0f);
		SetFloat(pa_a4_Hen+7, 0.0f);
		SetFloat(pa_a4_Hen+8, 0.0f);
		SetFloat(pa_a4_Hen+9, 0.0f);
		SetFloat(pa_a4_Hen+10, 0.0f);
		SetFloat(pa_a4_Hen+11, 0.0f);
		SetFloat(pa_a4_Hen+12, 0.0f);
		SetFloat(pa_a4_Hen+13, 0.0f);
		SetFloat(pa_a4_Hen+14, 0.0f);
		SetFloat(pa_a4_Hen+15, 0.0f);
		SetFloat(pa_a4_Hen+16, 0.0f);
		SetFloat(pa_a5_Hen+0, 0.0f);
		SetFloat(pa_a5_Hen+1, 0.0f);
		SetFloat(pa_a5_Hen+2, 0.0f);
		SetFloat(pa_a5_Hen+3, 0.0f);
		SetFloat(pa_a5_Hen+4, 0.0f);
		SetFloat(pa_a5_Hen+5, 0.0f);
		SetFloat(pa_a5_Hen+6, 0.0f);
		SetFloat(pa_a5_Hen+7, 0.0f);
		SetFloat(pa_a5_Hen+8, 0.0f);
		SetFloat(pa_a5_Hen+9, 0.0f);
		SetFloat(pa_a5_Hen+10, 0.0f);
		SetFloat(pa_a5_Hen+11, 0.0f);
		SetFloat(pa_a5_Hen+12, 0.0f);
		SetFloat(pa_a5_Hen+13, 0.0f);
		SetFloat(pa_a5_Hen+14, 0.0f);
		SetFloat(pa_a5_Hen+15, 0.0f);
		SetFloat(pa_a5_Hen+16, 0.0f);
		SetFloat(pa_a6_Hen+0, 0.0f);
		SetFloat(pa_a6_Hen+1, 0.0f);
		SetFloat(pa_a6_Hen+2, 0.0f);
		SetFloat(pa_a6_Hen+3, 0.0f);
		SetFloat(pa_a6_Hen+4, 0.0f);
		SetFloat(pa_a6_Hen+5, 0.0f);
		SetFloat(pa_a6_Hen+6, 0.0f);
		SetFloat(pa_a6_Hen+7, 0.0f);
		SetFloat(pa_a6_Hen+8, 0.0f);
		SetFloat(pa_a6_Hen+9, 0.0f);
		SetFloat(pa_a6_Hen+10, 0.0f);
		SetFloat(pa_a6_Hen+11, 0.0f);
		SetFloat(pa_a6_Hen+12, 0.0f);
		SetFloat(pa_a6_Hen+13, 0.0f);
		SetFloat(pa_a6_Hen+14, 0.0f);
		SetFloat(pa_a6_Hen+15, 0.0f);
		SetFloat(pa_a6_Hen+16, 0.0f);
		SetFloat(pa_a7_Hen+0, 0.0f);
		SetFloat(pa_a7_Hen+1, 0.0f);
		SetFloat(pa_a7_Hen+2, 0.0f);
		SetFloat(pa_a7_Hen+3, 0.0f);
		SetFloat(pa_a7_Hen+4, 0.0f);
		SetFloat(pa_a7_Hen+5, 0.0f);
		SetFloat(pa_a7_Hen+6, 0.0f);
		SetFloat(pa_a7_Hen+7, 0.0f);
		SetFloat(pa_a7_Hen+8, 0.0f);
		SetFloat(pa_a7_Hen+9, 0.0f);
		SetFloat(pa_a7_Hen+10, 0.0f);
		SetFloat(pa_a7_Hen+11, 0.0f);
		SetFloat(pa_a7_Hen+12, 0.0f);
		SetFloat(pa_a7_Hen+13, 0.0f);
		SetFloat(pa_a7_Hen+14, 0.0f);
		SetFloat(pa_a7_Hen+15, 0.0f);
		SetFloat(pa_a7_Hen+16, 0.0f);
		SetFloat(pa_A1_KA+0, -4.706f);
		SetFloat(pa_A1_KA+1, -23.3871f);
		SetFloat(pa_A1_KA+2, -12.3506f);
		SetFloat(pa_A1_KA+3, -12.6282f);
		SetFloat(pa_A1_KA+4, -5.1798f);
		SetFloat(pa_A1_KA+5, -5.6771f);
		SetFloat(pa_A1_KA+6, -4.2669f);
		SetFloat(pa_A1_KA+7, -4.8419f);
		SetFloat(pa_A1_KA+8, -8.23556f);
		SetFloat(pa_A1_KA+9, -12.1749f);
		SetFloat(pa_A1_KA+10, -2.2991f);
		SetFloat(pa_A1_KA+11, 2.0772f);
		SetFloat(pa_A1_KA+12, 4.3247f);
		SetFloat(pa_A1_KA+13, 7.6818f);
		SetFloat(pa_A1_KA+14, 0.0f);
		SetFloat(pa_A1_KA+15, 0.0f);
		SetFloat(pa_A1_KA+16, 0.0f);
		SetFloat(pa_A2_KA+0, 4.5548f);
		SetFloat(pa_A2_KA+1, 13.5989f);
		SetFloat(pa_A2_KA+2, 13.1975f);
		SetFloat(pa_A2_KA+3, 9.5942f);
		SetFloat(pa_A2_KA+4, 4.0998f);
		SetFloat(pa_A2_KA+5, 4.71f);
		SetFloat(pa_A2_KA+6, 3.6898f);
		SetFloat(pa_A2_KA+7, 4.16f);
		SetFloat(pa_A2_KA+8, 2.373f);
		SetFloat(pa_A2_KA+9, 7.8225f);
		SetFloat(pa_A2_KA+10, 1.4798f);
		SetFloat(pa_A2_KA+11, 0.9404f);
		SetFloat(pa_A2_KA+12, 0.9087f);
		SetFloat(pa_A2_KA+13, 0.5958f);
		SetFloat(pa_A2_KA+14, 0.0f);
		SetFloat(pa_A2_KA+15, 0.0f);
		SetFloat(pa_A2_KA+16, 0.0f);
		SetFloat(pa_A3_KA+0, -1.9275f);
		SetFloat(pa_A3_KA+1, -5.6463f);
		SetFloat(pa_A3_KA+2, -5.5245f);
		SetFloat(pa_A3_KA+3, -4.0164f);
		SetFloat(pa_A3_KA+4, -1.6966f);
		SetFloat(pa_A3_KA+5, -1.9572f);
		SetFloat(pa_A3_KA+6, -1.515f);
		SetFloat(pa_A3_KA+7, -1.7225f);
		SetFloat(pa_A3_KA+8, -0.98f);
		SetFloat(pa_A3_KA+9, -3.2406f);
		SetFloat(pa_A3_KA+10, -0.6119f);
		SetFloat(pa_A3_KA+11, -0.3968f);
		SetFloat(pa_A3_KA+12, -0.3926f);
		SetFloat(pa_A3_KA+13, -0.2475f);
		SetFloat(pa_A3_KA+14, 0.0f);
		SetFloat(pa_A3_KA+15, 0.0f);
		SetFloat(pa_A3_KA+16, 0.0f);
		SetFloat(pa_A4_KA+0, 0.6914f);
		SetFloat(pa_A4_KA+1, 2.0147f);
		SetFloat(pa_A4_KA+2, 1.9729f);
		SetFloat(pa_A4_KA+3, 1.4348f);
		SetFloat(pa_A4_KA+4, 0.6008f);
		SetFloat(pa_A4_KA+5, 0.6958f);
		SetFloat(pa_A4_KA+6, 0.5328f);
		SetFloat(pa_A4_KA+7, 0.6135f);
		SetFloat(pa_A4_KA+8, 0.3462f);
		SetFloat(pa_A4_KA+9, 1.151f);
		SetFloat(pa_A4_KA+10, 0.2102f);
		SetFloat(pa_A4_KA+11, 0.1434f);
		SetFloat(pa_A4_KA+12, 0.1381f);
		SetFloat(pa_A4_KA+13, 0.1101f);
		SetFloat(pa_A4_KA+14, 0.0f);
		SetFloat(pa_A4_KA+15, 0.0f);
		SetFloat(pa_A4_KA+16, 0.0f);
		SetFloat(pa_A5_KA+0, -0.2143f);
		SetFloat(pa_A5_KA+1, -0.629f);
		SetFloat(pa_A5_KA+2, -0.6151f);
		SetFloat(pa_A5_KA+3, -0.4479f);
		SetFloat(pa_A5_KA+4, -0.1828f);
		SetFloat(pa_A5_KA+5, -0.2168f);
		SetFloat(pa_A5_KA+6, -0.1618f);
		SetFloat(pa_A5_KA+7, -0.194f);
		SetFloat(pa_A5_KA+8, -0.1077f);
		SetFloat(pa_A5_KA+9, -0.3568f);
		SetFloat(pa_A5_KA+10, -0.0593f);
		SetFloat(pa_A5_KA+11, -0.045f);
		SetFloat(pa_A5_KA+12, -0.0427f);
		SetFloat(pa_A5_KA+13, -0.0781f);
		SetFloat(pa_A5_KA+14, 0.0f);
		SetFloat(pa_A5_KA+15, 0.0f);
		SetFloat(pa_A5_KA+16, 0.0f);
		SetFloat(pa_A6_KA+0, 0.0568f);
		SetFloat(pa_A6_KA+1, 0.1745f);
		SetFloat(pa_A6_KA+2, 0.1704f);
		SetFloat(pa_A6_KA+3, 0.1243f);
		SetFloat(pa_A6_KA+4, 0.0461f);
		SetFloat(pa_A6_KA+5, 0.051f);
		SetFloat(pa_A6_KA+6, 0.0418f);
		SetFloat(pa_A6_KA+7, 0.057f);
		SetFloat(pa_A6_KA+8, 0.0299f);
		SetFloat(pa_A6_KA+9, 0.0984f);
		SetFloat(pa_A6_KA+10, 0.0126f);
		SetFloat(pa_A6_KA+11, 0.0125f);
		SetFloat(pa_A6_KA+12, 0.0119f);
		SetFloat(pa_A6_KA+13, 0.0699f);
		SetFloat(pa_A6_KA+14, 0.0f);
		SetFloat(pa_A6_KA+15, 0.0f);
		SetFloat(pa_A6_KA+16, 0.0f);
		SetFloat(pa_A7_KA+0, -0.0118f);
		SetFloat(pa_A7_KA+1, -0.0436f);
		SetFloat(pa_A7_KA+2, -0.0425f);
		SetFloat(pa_A7_KA+3, -0.031f);
		SetFloat(pa_A7_KA+4, -0.0081f);
		SetFloat(pa_A7_KA+5, -0.0143f);
		SetFloat(pa_A7_KA+6, -0.0086f);
		SetFloat(pa_A7_KA+7, -0.0163f);
		SetFloat(pa_A7_KA+8, -0.0075f);
		SetFloat(pa_A7_KA+9, -0.0249f);
		SetFloat(pa_A7_KA+10, -0.0015f);
		SetFloat(pa_A7_KA+11, -0.0031f);
		SetFloat(pa_A7_KA+12, -0.003f);
		SetFloat(pa_A7_KA+13, -0.0526f);
		SetFloat(pa_A7_KA+14, 0.0f);
		SetFloat(pa_A7_KA+15, 0.001f);
		SetFloat(pa_A7_KA+16, 0.001f);
		SetFloat(pa_h0_href_R+0, 0.001f);
		SetFloat(pa_h0_href_R+1, 0.001f);
		SetFloat(pa_h0_href_R+2, 0.001f);
		SetFloat(pa_h0_href_R+3, 0.001f);
		SetFloat(pa_h0_href_R+4, 0.001f);
		SetFloat(pa_h0_href_R+5, 0.001f);
		SetFloat(pa_h0_href_R+6, 0.001f);
		SetFloat(pa_h0_href_R+7, 0.001f);
		SetFloat(pa_h0_href_R+8, 0.001f);
		SetFloat(pa_h0_href+0, 0.001f);
		SetFloat(pa_h0_href+1, 0.001f);
		SetFloat(pa_h0_href+2, 0.001f);
		SetFloat(pa_h0_href+3, 0.001f);
		SetFloat(pa_h0_href+4, 0.001f);
		SetFloat(pa_h0_href+5, 0.001f);
		SetFloat(pa_h0_href+6, 0.001f);
		SetFloat(pa_h0_href+7, 0.001f);
		SetFloat(pa_h0_href+8, 0.001f);
		SetFloat(pa_A_Cp+0, 3.025f);
		SetFloat(pa_A_Cp+1, 1.213f);
		SetFloat(pa_A_Cp+2, 1.702f);
		SetFloat(pa_A_Cp+3, 1.935f);
		SetFloat(pa_A_Cp+4, 1.677f);
		SetFloat(pa_A_Cp+5, 2.464f);
		SetFloat(pa_A_Cp+6, 2.464f);
		SetFloat(pa_A_Cp+7, 2.464f);
		SetFloat(pa_A_Cp+8, 1.131f);
		SetFloat(pa_B_Cp+0, 0.053722f);
		SetFloat(pa_B_Cp+1, 0.028785f);
		SetFloat(pa_B_Cp+2, 0.009081f);
		SetFloat(pa_B_Cp+3, 0.036915f);
		SetFloat(pa_B_Cp+4, 0.037853f);
		SetFloat(pa_B_Cp+5, 0.045351f);
		SetFloat(pa_B_Cp+6, 0.045351f);
		SetFloat(pa_B_Cp+7, 0.045351f);
		SetFloat(pa_B_Cp+8, 0.019225f);
		SetFloat(pa_C_Cp+0, -0.000016662f);
		SetFloat(pa_C_Cp+1, -0.000008824f);
		SetFloat(pa_C_Cp+2, -0.000002164f);
		SetFloat(pa_C_Cp+3, -0.000011402f);
		SetFloat(pa_C_Cp+4, -0.000011945f);
		SetFloat(pa_C_Cp+5, -0.000014111f);
		SetFloat(pa_C_Cp+6, -0.000014111f);
		SetFloat(pa_C_Cp+7, -0.000014111f);
		SetFloat(pa_C_Cp+8, -0.000005561f);
		SetFloat(pa_M_Gauss+0, 0.0f);
		SetFloat(pa_M_Gauss+1, 0.0f);
		SetFloat(pa_M_Gauss+2, 0.0f);
		SetFloat(pa_M_Gauss+3, 0.0f);
		SetFloat(pa_M_Gauss+4, 0.0f);
		SetFloat(pa_M_Gauss+5, 0.0f);
		SetFloat(pa_M_Gauss+6, 0.0f);
		SetFloat(pa_M_Gauss+7, 0.0f);
		SetFloat(pa_M_Gauss+8, 0.0f);
		SetFloat(pa_M_Gauss+9, 0.0f);
		SetFloat(pa_M_Gauss+10, 0.0f);
		SetFloat(pa_M_Gauss+11, 0.0f);
		SetFloat(pa_M_Gauss+12, 0.0f);
		SetFloat(pa_M_Gauss+13, 0.0f);
		SetFloat(pa_M_Gauss+14, 0.0f);
		SetFloat(pa_M_Gauss+15, 0.0f);
		SetFloat(pa_M_Gauss+16, 0.0f);
		SetFloat(pa_M_Gauss+17, 0.0f);
		SetFloat(pa_M_Gauss+18, 0.0f);
		SetFloat(pa_M_Gauss+19, 0.0f);
		SetFloat(pa_hc+0, 0.0f);
		SetFloat(pa_hc+1, 0.0f);
		SetFloat(pa_hc+2, 0.0f);
		SetFloat(pa_hc+3, 0.0f);
		SetFloat(pa_hc+4, 0.0f);
		SetFloat(pa_hc+5, 0.0f);
		SetFloat(pa_hc+6, 0.0f);
		SetFloat(pa_hc+7, 0.0f);
		SetFloat(pa_hc+8, 0.0f);
		SetFloat(pa_hc+9, 0.0f);
		SetFloat(pa_hc+10, 0.0f);
		SetFloat(pa_hc+11, 0.0f);
		SetFloat(pa_hc+12, 0.0f);
		SetFloat(pa_hc+13, 0.0f);
		SetFloat(pa_hc+14, 0.0f);
		SetFloat(pa_hc+15, 0.0f);
		SetFloat(pa_hc+16, 0.0f);
		SetFloat(pa_H_k+0, 0.0f);
		SetFloat(pa_H_k+1, 0.0f);
		SetFloat(pa_H_k+2, 0.0f);
		SetFloat(pa_H_k+3, 218.1427f);
		SetFloat(pa_H_k+4, 0.0f);
		SetFloat(pa_H_k+5, 249.373533f);
		SetFloat(pa_H_k+6, 0.0f);
		SetFloat(pa_H_k+7, 472.984455f);
		SetFloat(pa_H_k+8, 39.491784f);
		SetFloat(pa_H_k+9, -242.000226f);
		SetFloat(pa_H_k+10, -45.93139f);
		SetFloat(pa_H_k+11, 90.35546f);
		SetFloat(pa_H_k+12, 33.11917f);
		SetFloat(pa_H_k+13, 715.499682f);
		SetFloat(pa_H_k+14, -110.607979f);
		SetFloat(pa_H_k+15, -393.804098f);
		SetFloat(pa_H_k+16, -74.926365f);
		SetFloat(pa_poli1+0, 130.6344f);
		SetFloat(pa_poli1+1, 142.7767f);
		SetFloat(pa_poli1+2, 0.0f);
		SetFloat(pa_poli1+3, 0.0f);
		SetFloat(pa_poli1+4, 0.0f);
		SetFloat(pa_poli1+5, 0.0f);
		SetFloat(pa_poli1+6, 0.0f);
		SetFloat(pa_poli1+7, 0.0f);
		SetFloat(pa_poli1+8, 0.0f);
		SetFloat(pa_poli1+9, 0.0f);
		SetFloat(pa_poli1+10, 0.0f);
		SetFloat(pa_poli1+11, 0.0f);
		SetFloat(pa_poli1+12, 0.0f);
		SetFloat(pa_poli1+13, 0.0f);
		SetFloat(pa_poli1+14, 0.0f);
		SetFloat(pa_poli1+15, 0.0f);
		SetFloat(pa_poli1+16, 0.0f);
		SetFloat(pa_poli2+0, 0.0f);
		SetFloat(pa_poli2+1, 0.0f);
		SetFloat(pa_poli2+2, 0.0f);
		SetFloat(pa_poli2+3, 0.0f);
		SetFloat(pa_poli2+4, 0.0f);
		SetFloat(pa_poli2+5, 0.0f);
		SetFloat(pa_poli2+6, 0.0f);
		SetFloat(pa_poli2+7, 0.0f);
		SetFloat(pa_poli2+8, 0.0f);
		SetFloat(pa_poli2+9, 0.0f);
		SetFloat(pa_poli2+10, 0.0f);
		SetFloat(pa_poli2+11, 0.0f);
		SetFloat(pa_poli2+12, 0.0f);
		SetFloat(pa_poli2+13, 0.0f);
		SetFloat(pa_poli2+14, 0.0f);
		SetFloat(pa_poli2+15, 0.0f);
		SetFloat(pa_poli2+16, 0.0f);
		SetFloat(p_PoW_max,4.0f);                 // este  valor lo considere como si fuera igual al del generador 3.96 kW
	    SetFloat(p_Tao_Res_HE6888,1.0f);
	    SetFloat(p_CI_Res_HE6888,0.0f);
	    SetInt(p_On_Off_HE6888,0.0f);
		SetFloat(p_FlujoOutTanque_AH,0.0f);
		SetFloat(p_LargoTanque_AH,0.78f);
		SetFloat(p_AnchoTanque_AH,0.4f);
		SetFloat(p_CINivelTanque_AH,0.4853f);
		SetFloat(p_TempAceiteTank_AH,308.15f);
		SetFloat(p_WElec_AH,0.0f);
		SetFloat(p_UTanque_AH,0.05f);
		SetFloat(p_TempAmbiente,298.15f);
		SetFloat(p_CpAceite_AH,1.98f);
		SetFloat(p_MasaAceite_AH,0.0f);
		SetFloat(p_CITempAceiteTanque_AH,308.15f);
		SetFloat(p_UInter_AH,0.0f);
		SetFloat(p_MasaAceiteInter_AH,0.0f);
		SetFloat(p_CITempAceiteInter_AH,298.15f);
		SetFloat(p_PotMaxVentilador_AH,2237.103f);
		SetFloat(p_TaoVentilador_AH,0.05f);
		SetFloat(p_CIPotVentilador_AH,0.0f);
		SetFloat(p_PotMaxBomba_AH,149140.2f);
		SetFloat(p_TaoBomba_AH,1.0f);
		SetFloat(p_CIPotBomba_AH,0.0f);
		SetFloat(p_VelocidadArranHidra,0.0f);
		SetFloat(p_VelocidadMaxAH,104.7197551f);
		SetFloat(p_TaoAH,2.0f);
		SetFloat(p_CIVelArranHidra,0.0f);
		SetFloat(p_TempMetalAH,298.15f);
		SetFloat(p_hMetal_AH,250.0f);
		SetFloat(p_Mmetal_AH,150.0f);
		SetFloat(p_CpMetal_AH,0.47625f);
		SetFloat(p_ViscosidadAceite_AH,0.00001408f);
		SetFloat(p_eLub_AH,0.00000043f);
		SetFloat(p_AContac_AH,0.03f);
		SetFloat(p_Diametro_AH,0.3f);
		SetFloat(p_CITempMetalAH,298.15f);
		SetFloat(p_TempAceiteAH,298.15f);
		SetFloat(p_MAceiteAH,2.8870072f);
		SetFloat(p_CITempAceiteAH,298.15f);
		SetFloat(p_Integral_AH,0.0f);
		SetFloat(p_CIInt_AH,0.0f);
		SetFloat(p_Proporional_AH,0.0f);
		SetFloat(p_IntPro_AH,0.0f);
		SetFloat(p_errorPI_AH,0.0f);
		SetFloat(p_Sat_AH,0.0f);
		SetFloat(p_Variador_AH,1.0f);
		SetFloat(p_CPI_AH,0.0f);
		SetFloat(p_LInf_AH,0.0f);
		SetFloat(p_LSup_AH,200.0f);
		SetFloat(p_SetPoint_AH,308.15f);
		SetFloat(p_ki_AH,0.5f);
		SetFloat(p_kp_AH,10.0f);
		SetFloat(p_Nivel_Tanque_AH,0.4853f);
		SetFloat(p_PotenciaBomba_AH,0.0f);
		SetFloat(p_PotenciaVentilador_AH,0.0f);
		SetFloat(p_PresionBombS_AH,0.0f);
		SetFloat(p_FlujoBombS_AH,0.0f);
		SetFloat(p_PresionBombP_AH,0.0f);
		SetFloat(p_FlujoBombP_AH,0.0f);
		SetFloat(p_TempAceiteIntercambiador_AH,0.0f);
		SetFloat(p_TempAceiteInTank_AH,0.0f);
		SetFloat(p_FlujoOutInter_AH,0.0f);
		SetFloat(p_VelocidadVentilador_AH,0.0f);
		SetFloat(p_Proporcional_AH,0.0f);
		SetFloat(p_TorqueAH,0.0f);
		SetFloat(p_DensidadAceite_AH,880.0f);
		SetFloat(p_Patm,101300.0f);
		SetInt(p_FallaVent_AH,1);
		SetInt(p_FallaBomb_AH,1);
		SetInt(p_OnOffVentilador_AH,0);
		SetInt(p_OnOffBomba_AH,0);
		SetInt(p_OnOffCalentador_AH,0);
		SetInt(p_PreCal,0);
		SetInt(p_Int_Ex,0);
		SetInt(p_FallaVent_AH,0);
		SetInt(p_FallaBomb_AH,0);
		SetInt(p_OnOffVentilador_AH,0);
		SetInt(p_OnOffBomba_AH,0);
		SetInt(p_OnOffCalentador_AH,0);
		SetInt(p_OnOffBombaChiller,0);
		SetInt(p_AutomaticoVent,0);
		SetInt(p_ManualVent,0);
		SetInt(p_FallaVentilador,0);
		SetInt(p_onoffVentTurb,0);
		SetInt(p_StartManualVent,0);
		SetInt(p_StopManualVent,0);
		SetInt(p_FallaVentiGen,0);
		SetInt(p_AutomaticoVentGen,0);
		SetInt(p_ManualVentGen,0);
		SetInt(p_onoffVentGen,0);
		SetInt(p_StartManualVentGen,0);
		SetInt(p_StopManualVentGen,0);
		SetInt(p_Calentamiento,0);
		SetInt(p_Enfriamiento,0);
		SetInt(p_On_off_Valvula_YX106,0);
		SetInt(p_onoffComp1ra,0);
		SetInt(p_StartManual1ra,0);
		SetInt(p_StopManual1ra,0);
		SetInt(p_LocalRemoto1ra,0);
		SetInt(p_Automatico1ra,0);
		SetInt(p_Manual1ra,0);
		SetInt(p_FallaCompresor,0);
		SetInt(p_OnOff_Vent_HEX,0);
		SetInt(p_Falla_Vent_HEX,0);
		SetInt(p_LocalRemotoLub,0);
		SetInt(p_AutomaticoBomLub,0);
		SetInt(p_ManualBomLub,0);
		SetInt(p_FallaBomLub,0);
		SetInt(p_onoffBomLub,0);
		SetInt(p_StartManualBomLub,0);
		SetInt(p_StopManualBomLub,0);
		SetInt(p_i,0);
		SetInt(p_z,0);
		SetInt(p_j,0);
		SetInt(p_LS6543,0);
		SetInt(p_TAH1620,0);
		SetInt(p_SOV6540,0);
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
		SetInt(p_FallaMOT6535,0);
		SetInt(p_FallaSOV6516,0);
		SetInt(p_FallaSOV6540,0);
		SetInt(p_FallaSOV6504,0);
		SetInt(p_OnMOT6535,0);
		SetInt(p_OffMOT6535,0);
		SetInt(p_ResetFuga,0);
		SetInt(p_OnOffCompresor,0);
		SetInt(p_FallaCompresor,0);
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
		SetInt(p_FGenerador,0);
		SetInt(p_FGeneradorAux,0);
		SetInt(p_FC92BT221A,0);
		SetInt(p_FC92BAT21A,0);
		SetInt(p_FC92BT221C,0);
		SetInt(p_FC92BCT21A,0);
		SetInt(p_FC90MC,0);
		SetInt(p_FI521T21A,0);
		SetInt(p_FI522T21A,0);
		SetInt(p_FI52AuxG1,0);
		SetInt(p_FI51G1,0);
		SetInt(p_FI501AuxG1,0);
		SetInt(p_FI50ANG1,0);
		SetInt(p_FI502AuxG1,0);
		SetInt(p_FTabCCM,0);
		SetInt(p_FTabChiller,0);
		SetInt(p_FTabCompAire,0);
		SetInt(p_FTabBCI,0);
   }
   


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
// SETFLOAT(P_VAR,0.15F);
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

///////////////////////////TURBOGRUPO//////////////////////////////////////////
double A52_1;            //INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
double A52_2;     //INTERUPTORES DE MAQUINA VARIABLES DE CONTROL PARA SINCRONIZACIÓN
double AREA_1_CB_IGV; // ÁREA DE IGV DEL COMPRESOR DE BAJA
double AREA_FMENF_CA; // ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE ALTA
double AREA_FMENF_CB; // ÁREA DE FLUJO MASICO DE ENTRADA ENFRIAMIENTO COMPRESOR DE BAJA
double AREA_FMOUT_CA; // ÁREA DE FLUJO MASICO DE SALIDA  ENFRIAMIENTO COMPRESOR DE ALTA
double CDPA;        // VÁLVULA DE PURGA COMPRESOR DE ALTA  
double CICDPA;      // CONDICIÓN INICIAL DE LA VÁLVULA DE PURGA         
double CIST8A;           // CONDICIÓN INICIAL DE LA VÁLVULA DE PURGA
double CITCCA;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE COMPRESOR DE ALTA
double CITCCB;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE COMPRESOR DE BAJA
double CITCTA;           // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE TURBINA DE ALTA
double CITCTB;      // CONDICIÓN INICIAL DE TEMPERATURA DE CARCASA DE TURBINA DE BAJA
double CITenf;           // CONDICIÓN INICIAL DE TEMPERATURA DE ENTRADA EN EL HABITACULO DE LA TURBINA
double CITRCA;      // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR COMPRESOR ALTA
double CITRCB;           // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR COMPRESOR BAJA
double CITRTA;      // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR TURBINA ALTA
double CITRTB;           // CONDICIÓN INICIAL DE TEMPERATURA DE ROTOR TURBINA BAJA
double CIW_TA;           // CONDICIÓN INICIAL DE VELOCIDAD ANGULAR TURBINA ALTA ECUACIÓN 1ER ORDEN
double CIW_TB;      // CONDICIÓN INICIAL DE TELOCIDAD ANGULAR TURBINA  BAJA ECUACIÓN 1ER ORDEN
double CIw1_TA;     // CONDICIÓN INICIAL DE VELOCIDAD ANGULAR TURBINA ALTA ECUACIÓN 2DO ORDEN 
double CIw1_TB;     // CONDICIÓN INICIAL DE TELOCIDAD ANGULAR TURBINA  BAJA ECUACIÓN 2DO ORDEN 
double CPmaterial;        // CALOR ESPECIFICO DEL METAL 
double DENSIDAD_FMENF_CA; // DENSDIAD DEL AIRE EN EL COMPRESOR DE ALTA 
double DENSIDAD_FMENF_CB; // DENSDIAD DEL AIRE EN EL COMPRESOR DE BAJA
double DENSIDAD_FMOUT_CA; // DENSDIAD DEL AIRE EN EL COMPRESOR DE ALTA
double F_MAX_ENF;         // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CCA;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CCB;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CTA;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U1CTB;  // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U4RTA;  // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double F_MAX_ENF_U4RTB;   // FLUJO MAXIMO DE AIRE DE ENFRIAMIENTO
double FCV_68127;    // VÁLVULA DE PURGA EN EL COMPRESOR
double FLUJO_MASICO_AIRE; // FLUJO MASICO DE AIRE
double FLUJO_MASICO_CA;            // FLUJO MASICO DE AIRE
double FLUJO_MASICO_CB;            // FLUJO MASICO DE AIRE EN EL COMPRESOR DE BAJA
double FLUJO_MASICO_ENF_CA;        // FLUJO MASICO DE AIRE DE ENFRIAMIENTO EN EL COMPRESOR DE ALTA 
double FLUJO_MASICO_ENF_CB;     // FLUJO MASICO DE AIRE DE ENFRIAMIENTO EN EL COMPRESOR DE BAJA
double FLUJO_MASICO_GAS;        // FLUJO MASICO DE GAS 
double FLUJO_MASICO_GAS_VIGV;   // FLUJO MASICO DE GAS A LA ENTRADA DE LOS VIGV
double FLUJO_MASICO_OUT_CA;     // FLUJO MASICO DE SALIDA DEL COMORESOR DE ALTA
double FLUJO_MASICO_SALIDAVBV;    // FLUJO MASICO DE SALIDA DE LOS ALAVES VBV
double FLUJO_MASICO_TA;       // FLUJO MASICO EN LA TURBINA DE ALTA
double FLUJO_MASICO_TB;       // FLUJO MASICO EN LA TURBINA DE BAJA 
double Frecuencia;          // FRECUENCOA DE GENERADOR 
double K_ADECUACION_CDPA;     // CONSTANTE DE ADECUACION DE LA VÁLVULA DE PURGA PARA CONTROL 
double K_ADECUACION_K1_ROTOR1_TA;  // CONSTANTE DE ADECUACION PARA ROTOR DE TURBINA DE ALTA
double K_ADECUACION_K1_ROTOR1_TB;  // CONSTANTE DE ADECUACION PARA ROTOR DE TURBINA DE BAJA
double K_ADECUACION_ST8A;     // CONSTANTE DE ADECIACION PARA VALVULA DE PURGA
double mCCA;              // MASA DE LA CARCASA DE COMPRESOR DE ALTA
double mCCB;              // MASA DE LA CARCASA DE COMPRESOR DE BAJA          
double mCTA;              // MASA DE LA CARCASA DE TURBINA DE ALTA
double mCTB;              // MASA DE LA CARCASA DE TURBINA DE BAJA
double menf;              //MASA DE AIRE EN EL HABITACULO
double mRCA;              //MASA DE ROTOR DE COMPRESOR DE ALTA
double mRCB;              //MASA DE ROTOR DE COMPRESOR DE BAJA
double mRTA;              //MASA DE ROTOR DE TURBINA DE ALTA
double mRTB;              //MASA DE ROTOR DE TURBINA DE BAJA
double POTENCIA_CA;         //POTENCIA GENERADA POR EL COMPRESOR DE ALTA PRESION 
double POTENCIA_CB;         //POTENCIA GENERADA POR EL COMPRESOR DE BAJA PRESION  
double POTENCIA_MEC;            //POTENCIA MECANICA 
double POTENCIA_TA;                //POTENCIA GENERADA POR TURBINA DE ALTA PRESION 
double POTENCIA_TB;                //POTENCIA GENERADA POR TURBINA DE BAJA PRESION 
double QA;
double QB;
double QCCA;            //CALOR DE LA CARCASA DE COMPRESOR DE ALTA
double QCCB;            //CALOR DE LA CARCASA DE COMPRESOR DE BAJA
double QCTA;            //CALOR DE LA CARCASA DE LA TURBINA DE ALTA
double QCTB;            //CALOR DE LA CARCASA DE LA TURBINA DE BAJA
double QRCA;            //CALOR DEL ROTOR DE COMPRESOR DE ALTA
double QRCB;            //CALOR DEL ROTOR DE COMPRESOR DE BAJA
double QRTA;            //CALOR DEL ROTOR DE TURBINA DE ALTA
double QRTB;            //CALOR DEL ROTOR DE TURBINA DE BAJA
double RADIO_MEDIO_CA;      //RADIO MEDIO DE COMPRESOR DE ALTA 
double RADIO_MEDIO_CB;      //RADIO MEDIO DE COMPRESOR DE BAJA 
double RADIO_MEDIO_TA;      //RADIO MEDIO DE TURBINA DE ALTA 
double RADIO_MEDIO_TB;      //RADIO MEDIO DE TURBINA DE BAJA
double RHO_AREA_1_CB;     //DENSIDAD DE FLUIDO QUE PASA POR AREA 1 COMPRESOR DE BAJA
double ST8A;            //VALVULA DE PURGA
double T_Giro_TA;       //TORQUE DE GITO ROTOR TURBINA DE ALTA
double T_Giro_TB;       //TORQUE DE GIRO ROTOR DE TURBINA DE BAJA 
double TAO_CDPA;          //CONSTANTE TAO DE ADECUACION DE CONTROL PARA VALVULA DE PURGA
double TAO_ST8A;          //CONSTANTE TAO DE ADECUACION DE CONTROL PARA VALVULA DE PURGA
double TAO_TA_ROTOR1;     //TAO DE ADECUACION DE CONTROL ROTOR TURBINA DE ALTA
double TAO_TB_ROTOR1;     //TAO DE ADECUACION DE CONTROL ROTOR TURBINA DE BAJA 
double TCCA;            //TEMPERATURA CARCASA COMPRESOR DE ALTA
double TCCB;            //TEMPERATURA CARCASA COMPRESOR DE BAJA
double Tchiller;          //TEMPERATURA DEL CHILLER
double TCTA;            //TEMPERATURA CARCASA TURBINA DE ALTA
double TCTB;            //TEMPERATURA CARCASA TURBINA DE BAJA
double Tenf;            //TEMPERATURA DE ENFRIAMIENTO
double PoW_max;         // este  valor lo considere como si fuera igual al del generador 3.96 kW
double Tao_Res_HE6888;
double Res_HE6888;
double CI_Res_HE6888;
double On_Off_HE6888;
double TgCA;            //TEMPERATURA DE AIRE A LA SALIDA DEL COMPRESOR DE ALTA
double TgCB;            //TEMPERATURA DE AIRE A LA SALIDA DEL COMPRESOR DE BAJA
double Tgenf;           //TEMPERATURA DE AIRE A LA ENTRADA EN LOS ALABES PARA ENFRIAMIENTO
double TgenfA;          //TEMPERATURA DE AIRE A LA ENTRADA EN LOS ALABES PARA ENFRIAMIENTO
double TgTA;            //TEMPERATURA DE AIRE A LA ENTRADA DE LA TURBINA DE ALTA
double TgTB;            //TEMPERATURA DE AIRE A LA ENTRADA DE LA TURBINA DE BAJA
double Tlub;            //TEMPERATURA DEL LUBRICANTE
double Torque_Arracador_TA;   //TORQUE GENERADO POR TURBINA DE ALTA PRESION //CHECAR DE DONDE PROVIENE EL TORQUE SI ES DE MARTIN 
double Torque_Arracador_TB;   //TORQUE GENERADO POR TURBINA DE BAJA PRESION //CHECAR DE DONDE PROVIENE EL TORQUE SI ES DE MARTIN
double TORQUE_CA;       //TORQUE GENERADO POR COMPRESOR DE ALTA PRESION
double TORQUE_CB;       //TORQUE GENERADO POR COMPRESOR DE BAJA PRESION 
double TORQUE_Exc;        
double TORQUE_TA;       //TORQUE GENERADO POR TURBINA DE ALTA PRESION
double TORQUE_TB;       //TORQUE GENERADA POR TURBINA DE BAJA PRESION
double TRCA;            //TEMPERATURA DEL ROTOR DEL COMPRESOR DE ALTA
double TRCB;            //TEMPERATURA DEL ROTOR DEL COMPRESOR DE BAJA
double TRTA;            //TEMPERATURA DEL ROTOR DE TURBINA DE ALTA
double TRTB;            //TEMPERATURA DEL ROTOR DE TURBINA DE BAJA
double U_CA;            //COEFICIENTE DE TRANSFERENCIA DE CALOR COMPRESOR DE ALTA
double U_CB;            //COEFICIENTE DE TRANSFERENCIA DE CALOR COMPRESOR DE BAJA
double U_TA;            //COEFICIENTE DE TRANSFERENCIA DE CALOR TURBINA DE ALTA
double U_TB;            //COEFICIENTE DE TRANSFERENCIA DE CALOR TURBINA DE BAJA
double U1CCA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE ALTA
double U1CCB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE BAJA
double U1CTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE ALTA
double U1CTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE BAJA
double Pow_He6888;    // potencia de resistencia del habitáculo de turbina
double U1enf;         //COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U1RCA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U1RCB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U1RTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U1RTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U2CCA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE ALTA         
double U2CCB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA COMPRESOR DE BAJA
double U2CTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE ALTA
double U2CTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR CARCASA TURBINA DE BAJA
double U2enf;         //COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U2RCA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U2RCB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U2RTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U2RTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U3enf;         //COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U3RCA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE ALTA
double U3RCB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR COMPRESOR DE BAJA
double U3RTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U3RTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double U4enf;         //COEFICIENTE DE TRANSFERENCIA DE CALOR AIRE EN EL HABITACULO
double U4RTA;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE ALTA
double U4RTB;         //COEFICIENTE DE TRANSFERENCIA DE CALOR ROTOR TURBINA DE BAJA
double FMaire;		  // FLUJO MASICO DE AIRE 
double CPaire;		  // CONSTANTE DE CALOR ESPECIFICO DE AIRE
double VELOCIDAD_FMENF_CA;    //VELOCIDAD DEL FLUJO MASICO DE ENFRIAMIENTO COMPRESOR DE ALTA
double VELOCIDAD_FMENF_CB;    //VELOCIDAD DEL FLUJO MASICO DE ENFRIAMIENTO COMPRESOR DE BAJA
double VELOCIDAD_FMOUT_CA;    //VELOCIDAD DEL FLUJO MASICO DE SALIDA COMPRESOR DE ALTA
double VN1_CB;          //Componente de velocidad normal al área de entrada de alabe rotor DE COMPRESOR DE BAJA 
double VT1_CA;          //componente auxiliar en entrada de alabe rotor en compresor de alta
double VT1_CB;          //componente auxiliar en entrada de alabe rotor en compresor de baja
double VT2_CA;          //componente auxiliar en salida de alabe rotor en compresor de alta 
double VT2_CB;          //componente auxiliar en salida de alabe rotor en compresor de baja
double VT2_TA;          //componente auxiliar en salida de alabe rotor turbina de alta
double VT2_TB;          //componente auxiliar en salida de alabe rotor turbina de baja
double VT3_TA;          //componente auxiliar en salida de alabe estator turbina de baja
double VT3_TB;          //componente auxiliar en salida de alabe estator turbina de baja
double W_CA;            // velocidad angular compresor de alta
double W_CB;            // velocidad angular compresor de baja
double W_TA;            // velocidad angular turbina de alta
double W_TB;            // velocidad angular turbina de baja
double w1_TA;         // velocidad angular turbina de alta control
double w1_TB;         // velocidad angular turbina de baja control
double AFCV_6872;
double ALFA1_CB;          //Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA
double Alfa1_cb_control;      //angulo de entrada de de alaves de COMPRESOR DE BAJA de control
double ALFA1_CONTROL_CB;      //ANGULO DE FLUJO ABSOLUTO COMPRESOR DE BAJA
double ALFA2_CB;          //Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA          
double ALFA3_CB;          // Angulo de flujo absoluto a la salida del alabe estator.COMPRESOR DE BAJA
double AREA_1_CB;       //AREA 1 DE ENTRADA COMPRESOR BAJA sistema de primer orden        
double AREA_2_CB;       //AREA 2 DE ENTRADA COMPRESOR BAJA sistema de primer orden
double AREA_3_CB;       //AREA 1 DE ENTRADA COMPRESOR BAJA sistema de primer orden
double BETA1_CB;          //Angulo de entrada de alabe, propiedad física del alabe 
double BETA2_CB;          //Angulo de salida de alabe, propiedad física del alabe COMPRESOR DE BAJA
double BETA3_CB;          //Angulo de salida de alabe, propiedad física del alabe, estator.COMPRESOR DE BAJA
double CIALFA1;         //Condiciones iniciales de angulo alfa de alabes para control
double CIAREA1IGV;        // CONDICION DE INICIO AREA1 IGV
double CIAREA1VBV;        //CONDICIONES INICIALES DE AREA 1 VBV 
double CP_CB;         //CONSTANTE DE CALOR ESPECIFICO TURBINA BAJA
double DELTA_PRESION_CB;      //CAMBIO DE PRESION A SALIDA DE COMPRESOR DE BAJA 
double FCV_6872;          //VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB 
double GRAVEDAD;          //acelelracion de la gravedad
double K_ADECUACION_1_CB;   //CONSTANTE DE ADECUACION ALFA CONTROL COMPRESOR BAJA para control
double K_ADECUACION_AREA1_CA; //CONSTANTE DE ADECACION AREA 1 COMPRESOR DE ALTA para control
double K_ADECUACION_AREA1_CB; // CONTANTE DE ADECUACION DE AREA 1 COMPRESOR DE BAJA para control
double PDI64070;
double PRESION_ENTRADA_COMPRESOR_BAJA;// PRESION ENTRADA COMPRESOR BAJA AMBIENTE
double PRESION_SALIDA_COMPRESOR_BAJA; //PRESION_SALIDA_COMPRESOR_BAJA; 
double RHO_AREA_2_CB;         // DENSIDAD PARA AREA 2 EN COMPRESOSR DE BAJA 
double RHO_AREA_3_CB;       // DENSIDAD PARA AREA 3 EN COMPRESOSR DE BAJA
double RHO_DELTA_PRESION_CB;      // DENSIDAD PARA CALCULO DE DELTA DE PRESION DE ETAPA COMPRESOR DE BAJA
double TAO_ALFA_1_CB;       // TAO ALFA CONTROL COMPRESOR BAJA 
double TAO_IGV_CB_A1;       // TAO DE IGV EN AREA1 COMPRESOR DE BAJA 
double TAO_VBV_CA_A1;       // TAO VBV AREA 1 COMPRESOR DE ALTA
double TEMPERATURA_ENTRADA_COMPRESOR_BAJA;  //TEMPERATURA ENTRADA COMPRESOR BAJA AMBIENTE
double TEMPERATURA_SALIDA_COMPRESOR_BAJA; //TEMPERATURA DE SALIDA COMPRESOR DE BAJA 
double V1_CB;               //velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE BAJA
double V2_CB;               //velocidad absoluta del fluido en sentido del ángulo alfa 2 COMPRESOR DE BAJA
double V3_CB;               //velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE BAJA
double VN2_CB;                //Componente de velocidad normal al área de salida alabe rotor.COMPRESOR DE BAJA
double VN3_CB;                //Componente de velocidad normal al área de salida alabe rotor.COMPRESOR DE BAJA
double VRB1_CB;               //Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE BAJA
double VRB2_CB;               //Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2. COMPRESOR DE BAJA
double VRB3_CB;               //Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE BAJA
double VT3_CB;                //componente auxiliar en salida de alabe estator.COMPRESOR DE BAJA
double ALFA_1_CA;             //Angulo de flujo absoluto a la salida del alabe rotor DE CONTROL COMPRESOR DE BAJA       
double ALFA1_CA;                //ANGULO ALFA DONDE SE GUARDA LA VARIABLE DE CONTROL DE PRIMER ORDEN
double Alfa1_ca_control;            //angulo de entrada de de alaves de COMPRESOR DE ALTA
double ALFA1_CONTROL_CA;            //ANGULO DE FLUJO ABSOLUTO COMPRESOR DE ALTA
double ALFA2_CA;                //Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE ALTA
double ALFA3_CA;                //Angulo de flujo absoluto a la salida del alabe estator COMPRESOR DE ALTA.
double AREA_1_CA;             // AREA 1 DE ENTRADA COMPRESOR ALTA
double AREA_2_CA;             // AREA 2 DE ENTRADA COMPRESOR ALTA
double AREA_3_CA;             // AREA 3 DE ENTRADA COMPRESOR ALTA
double AREA1_CONTROL_CA;            // AREA 1 CONTROL PARA SISTEMA DE PRIMER ORDEN COMPRESOR DE ALTA
double BETA_3_CA;             // BETA 3 AL COMPRESOR DE ALTA PRESION 
double BETA1_CA;                //Angulo de entrada de alabe, propiedad física del alabe COMPRESOR DE ALTA
double BETA2_CA;                //Angulo de salida de alabe, propiedad física del alabe COMPRESOR DE ALTA
double BETA3_CA;                //Angulo de salida de alabe, propiedad física del alabe, estator COMPRESOR DE ALTA.
double CIALFA1_CA;              // CONDICIONES INICIALES DE ALFA CONTROL COMPRESOR DE ALTA
double CIAREA1_CA;              // CONDICIONES INICIALES AREA 1 COMPRESOR DE ALTA 
double CIBETA3CA;             // CONDICIONES INICIALES BETA 3 COMPRESOR DE ALTA 
double CONTROL_BETA3_CA_CONTROL;        // VARIABLE DE CONTROL PARA ACTIVAR O DESACTIVAR EL PROCESO DE CALCULO DE BETA 3
double CP_CA;               //CONSTANTE DE CALOR ESPECIFICO COMPRESOR DE ALTA
double DELTA_PRESION_CA;            // DELTA DE PRESION A SALIDA DE COMPRESOR DE BAJA
double FCV_6871;                // VALVULA DE CONTROL DE FLUJO PARA EL SANGRADO VBV
double FCV_6873;                // VALULA DE CONTROL DE FLUJO DEL ACCTUADOR PARA EL TORQUEMOTOR 
double K_ADECUACION_1_CA;         // CONSTANTE DE ADECUACION DE ALFA CONTROL COMPRESOR ALTA
double K_ADECUACION_BETA3_CA;       // CONTANTE DE ADECUACION DE BETA 3 COMPRESOR DE ALTA
double PRESION_SALIDA_COMPRESOR_ALTA;   //PRESION DE SALIDA DE COMPRESOR DE ALTA 
double RHO_AREA_1_CA;           // DENSIDAD PARA AREA 1 EN COMPRESOSR DE ALTA
double RHO_AREA_2_CA;           // DENSIDAD PARA AREA 2 EN COMPRESOSR DE ALTA
double RHO_AREA_3_CA;           // DENSIDAD PARA AREA 3 EN COMPRESOSR DE ALTA
double RHO_DELTA_PRESION_CA;          // DENSIDAD PARA CALCULO DE DELTA DE PRESION DE ETAPA COMPRESOR DE ALTA
double TAO_ALFA_1_CA;           // TAO ALFA CONTROL COMPRESOR ALTA 
double TAO_BETA3_CA;              // TAO DE ADECUACION BETA 3 DE COMPRESOR DE ALTA 
double TAO_CA_A1;             // CONSTANTE TAO DE ADECUACION DE AREA 1 EN COMPRESOR DE BAJA PARA SISTEMA DE PRIMER ORDEN 
//double TEMPERATURA_SALIDA_COMPRESOR_ALTA; // TEMPERATURA DE SALIDA DE COMPRESOR DE ALTA
double V1_CA;               // velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE ALTA
double V2_CA;               //VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE ALTA 
double V3_CA;               // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE ALTA
double VN1_CA;                // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE ALTA
double VN2_CA;                // Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
double VN3_CA;                //Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE ALTA
double VRB1_CA;               // Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
double VRB2_CA;               // componente auxiliar en salida de alabe rotor COMPRESOR DE ALTA
double VRB3_CA;               // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE ALTA
double VT3_CA;                // componente auxiliar en salida de alabe estator.COMPRESOR DE ALTA



double ALFA_1_TA;           // ANGULO DE FLUJO ABSOLUTO TURBINA DE ALTA DE CONTROL 
double ALFA_1_TB;           // ANGULO DE FLUJO ABSOLUTO TURBINA DE BAJA DE CONTROL 
double ALFA1_TA;              // ANGULO DE FLUJO ABSOLUTO TURBINA DE ALTA
double ALFA1_TB;              // ANGULO DE FLUJO ABSOLUTO TURBINA DE BAJA
double ALFA2_TA;              // Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
double ALFA2_TB;              // Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
double ALFA3_TA;              // Angulo de flujo absoluto a la salida del alabe estator TURBINA DE ALTA.
double ALFA3_TB;              //Angulo de flujo absoluto a la salida del alabe estator TURBINA BAJA.
double BETA1_TA;              //Angulo de entrada de alabe, propiedad física del alabe TURBINA DE ALTA
double BETA1_TB;              //Angulo de entrada de alabe, propiedad física del alabe TURBINA DE BAJA
double BETA2_TA;              //Angulo de salida de alabe, propiedad física del alabe TURBINA DE ALTA
double BETA2_TB;              //Angulo de salida de alabe, propiedad física del alabe TURBINA DE BAJA
double BETA3_TA;              //Angulo de salida de alabe, propiedad física del alabe, estator TURBINA DE ALTA.
double BETA3_TB;              //Angulo de salida de alabe, propiedad física del alabe, estator TURBINA DE BAJA.
double CONSTANTE_AREAS_1_TA;        //AREA DE ENTRADA A ETAPA DE TURBINA DE ALTA
double CONSTANTE_AREAS_1_TB;        // AREA 1 DE ENTRADA TURBINAR BAJA
double CONSTANTE_AREAS_2_TA;        // AREA 2 DE ENTRADA TURBINA ALTA
double CONSTANTE_AREAS_2_TB;        // AREA 2 DE ENTRADA TURBINA BAJA
double AREA_1_TB;
double BETA_1_CB;

double K_ADECUACION_BETA3_CB;
double BETA3_CONTROL_CB;
double TAO_BETA3_CB;
double CP_TA;             //CONSTANTE DE CALOR ESECIFICO TURBINA ALTA
double CP_TB;             //CONSTANTE DE CALOR ESECIFICO TURBINA BAJA
double DELTA_PRESION_TA;          //DELTA DE PRESION A SALIDA DE TURBINA DE ALTA
double DELTA_PRESION_TB;          //DELTA DE PRESION A SALIDA DE TURBINA DE BAJA 
double PRESION_SALIDA_TURBINA_ALTA;   //TEMPERATURA DE SALIDA TURBINA DE ALTA 
double PRESION_SALIDA_TURBINA_BAJA;   //PRESION DE SALIDA DE TURBINA DE BAJA 
double RHO_DELTA_PRESION_TA;        //DENSIDAD DEL DELTA DE PRESION EN TURBINA DE ALTA 
double RHO_DELTA_PRESION_TB;        //DENSIDAD DEL DELTA DE PRESION EN TURBINA DE BAJA
double TEMPERATURA_ENTRADA_TURBINA_ALTA;  //TEMPERATURA A LA ENTRADA DE TURBINA DE ALTA PRESION PROVENIENTE DE MANUEL
double TEMPERATURA_SALIDA_TURBINA_ALTA; //TEMPERATURA DE SALIDA TURBINA DE ALTA 
double TEMPERATURA_SALIDA_TURBINA_BAJA; //TEMPERATURA DE SALIDA TURBINA DE BAJA 
double V1_TA;             // velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE ALTA
double V1_TB;             // velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE BAJA
double V2_TA;             // velocidad absoluta del fluido en sentido del ángulo alfa 2 TURBINA DE ALTA
double V2_TB;             //VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA BAJA
double V3_TA;             //velocidad absoluta del fluido en sentido del ángulo alfa 3, estator TURBINA DE ALTA.            
double V3_TB;             //velocidad absoluta del fluido en sentido del ángulo alfa 3, estator TURBINA DE BAJA.
double VN1_TA;              // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE ALTA
double VN1_TB;              // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE BAJA
double VN2_TA;              // Componente de velocidad normal al área de salida alabe rotor TURBINA DE ALTA
double VN2_TB;              // Componente de velocidad normal al área de salida alabe rotor TURBINA DE BAJA
double VN3_TA;              //Componente de velocidad normal al área de salida alabe rotor.TURBINA DE BAJA
double VN3_TB;              //Componente de velocidad normal al área de salida alabe rotor.TURBINA DE BAJA
double VRB1_TA;             //Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA            
double VRB1_TB;             //Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE BAJA
double VRB2_TA;             // Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2 TURBINA DE ALTA.
double VRB2_TB;             // Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta2 TURBINA DE BAJA.
double VRB3_TA;             // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator TURBINA DE ALTA.
double VRB3_TB;             // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator TURBINA DE BAJA.
double VT1_TA;              // componente auxiliar en entrada de alabe rotor TURBINA DE ALTA
double VT1_TB;              // componente auxiliar en entrada de alabe rotor TURBINA DE BAJA




double BETA_3_CB;
double CI2TORQUE_TA;              //CONDICIONES INICIALES DE TORQUE EN TURBINA DE BAJA EN CONTROL
double CIBETA3CB;             // CPONDICIONES INICIALES DE BETA 3 COMPRESOR DE BAJA
double CIFCV68127;              // CONDICIONES INICIALES DE VALVULA DE PRUGA ST8 DE PRIMER ORDEN
double CIFCV68128;              //VALVULA DE CONTROL ETAPA DE SANGRADO 
double CONTROL_FCV68128;            // variable de control de etapa de sangrado de primer orden 
double CIFCV6871;             //condiciones iniciales de la valvula de purga para sistema de primer orden
double CIFCV6872;             // condiciones iniciales de la valvula de alaves guias primer orden         
double CIFCV6873;             // condiciones iniciales de actuador para torque motor de primer orden 
double CITORQUE_TA;             //CONDICIONES INICIALES PARA TAORQUE 2 TURBINA DE ALTA DE PRIMER ORDEN
double CONTROL_FCV68127;            //VARIABLE DE CONTROL DE VALVULA DE PRUGA ST8 PARA PRIMER ORDEN
double CONTROL_FCV6871;           //variable de control de VALVULA DE PURGA VBV de primer orden
double CONTROL_FCV6872;           //variable de control PARA ALAVES GUIAA IGVB de primer orden
double CONTROL_FCV6873;           //varaiable de control ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR de primer orden
double FCV_68128;             //VALVULA DE CONTROL DE FLUJO EN LA ETAPA DE SANGRADO 
double K_ADECUACION_FCV68127;       // CONSTANTE DE ADECUACION DE VALVULA DE PRUGA ST8 de primer orden
double K_ADECUACION_FCV68128;       // CONSTANTE DE ADECUACION VALVULA DE CONTROL ETAPA DE SANGRADO de primer orden
double K_ADECUACION_FCV6871;          //CONSTANTE DE ADECUACION PARA LA VALVULA DE PURGA VBV de primer orden
double K_ADECUACION_FCV6872;          // CONSTANTE DE ADECUACION PARA ALAVES GUIAA IGVB de primer orden
double K_ADECUACION_FCV6873;          // CONSTANTE DE ADECIACION DEL ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR 
double PRESION_ENTRADA_TURBINA_ALTA;      // TEMPERATURA A LA ENTRADA DE TURBINA DE ALTA PRESION PROVENIENTE DE MANUEL
double PT_6804;               // PS3B PRESION DE DESCARGA COMPRESOR DE ALTA 
double PT_6814;               // PS3B PRESION DE DESCARGA COMPRESOR DE ALTA 
double PT_6859A;                // PRESION DE ENTRAD ADE COMPRESOR DE ALTA 
double PT_6859B;                // PRESION DE ENTRAD ADE COMPRESOR DE ALTA 
double PT_6860;               // PRESION DE ENTRADA A TURBINA DE BAJA 
double SE_6800A;                //VELOCIDAD DE COMPRESOR DE ALTA XN25A
double SE_6800B;                //VELOCIDAD DE COMPRESOR DE ALTA XN25B
double SE_6812;               // VELOCIDAD DE LA TURBINA DE BAJA XNSD_A
double SE_6813;               // VELOCIDAD DE LA TURBINA DE BAJA XNSD_B
double TAO_FCV68127;              // tao de adeciacion VARIABLE DE CONTROL DE VALVULA DE PRUGA ST8 PARA PRIMER ORDEN
double TAO_FCV68128;              // tao de adecuacion de VALVULA DE CONTROL ETAPA DE SANGRADO primer orden
double TAO_FCV6871;             //tao de adecuacion de la valvula de purga para sistema de primer orden
double TAO_FCV6872;             //tao de adecuacion PARA ALAVES GUIAA IGVB de primer orden
double TAO_FCV6873;             //tao de adecuacion DEL ACCTUADOR PARA EL ACCTUADOR PARA EL TORQUE MOTOR 
double TE_6821A;                //RTD TEMPERATURA DE ENTRADA DEL AIRE AL COMPRESOR DE BAJA T2
double TE_6821B;                //RTD TEMPERATURA DE ENTRADA DEL AIRE AL COMPRESOR DE BAJA T2
double TE_6837A;                // TC TIPO K TEMPERATURA DE ENTRADA DE AIRE DEL COMPRESOR DE ALTA 
double TE_6837B;                // TC TIPO K TEMPERATURA DE ENTRADA DE AIRE DEL COMPRESOR DE ALTA
double TE_6838A1;             // TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6838A2;             // TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6838B1;             // TEMPERATURA DE COMPRESOR DE ALTA
double TE_6838B2;             // TEMPERATURA DE COMPRESOR DE ALTA 
double TE_6843;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48A (SUPERIOR)
double TE_6844;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48B (SUPERIOR)
double TE_6845;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48C (INFERIOR)
double TE_6846;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48D (INFERIOR)
double TE_6847;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48E (INFERIOR)
double TE_6848;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48F (INFERIOR)
double TE_6849;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48G (SUPERIOR)
double TE_6850;               // TEMPERATURA DE GAS A LA ENTRADA TURBINA DE BAJA T48H (SUPERIOR)
double TORQUE_TA2;              // Calculo de torque 2 turbina de alta presion 
double ZT_68127A;             //SEÑAL DE POSICION DE LA VALVULA FCV_68127A
double ZT_68127B;             //SEÑAL DE POSICION DE LA VALVULA FCV_68127B
double ZT_68128A;             //POSICION DE LA VALVULA CDPB FCV68128
double ZT_68128B;             //POSICION DE LA VALVULA CDPB FCV68129
double ZT_6871A;                // POSICION DE LA VALVULA VBV FCB6871
double ZT_6871B;                // POSICION DE LA VALVULA VBV FCB6872
double ZT_6872A;                //POSICION DE LA VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB FCV6872
double ZT_6872B;                //POSICION DE LA VALVULA DE FLUJO PARA LOS ALAVES VARIABLES IGVB FCV6872
double ZT_6873A;                //SEÑAL DE RETORNO DE LA POSICION DE LA VALVULA FCV6873
double ZT_6873B;
double ALFA_2;
double TAO_TA_ROTOR_1;
double TAO_TB_ROTOR_1;
double CONTROL_TA_TORQUE_1;
double IGV_CONTROL_CB_A1;     

//No estaban las declaraciones ne la prueba
double Presion_atm_PSI;
double DSH6405 ;
double RESULTADO;
double FLUJO_COMBUSTIBLE;
double arrancador;
 double tcontrol1;
    double tcontrol2;
    double tcontrol3;
    double tcontrol4;
    double tcontrol5;
    double tcontrol6;
    double tcontrol7;
    double tcontrol8;
    double tcontrol9;
    double tcontrol10;
    double tcontrol11;
	double tcontrol12;
    double tcontrol13;
    double tcontrol14;
    double tcontrol15;
    double tcontrol16;
    double tcontrol17;
    double tcontrol18;
    double tcontrol19;
    double tcontrol20;
    double tcontrol21;
    double tcontrol22;
    double tcontrol23;
    double tcontrol24;
    double tcontrol25;

    //DECLARACION DE VARIABLES DE CONTROL PARA PRUEBAS

    double posicionVSV;
    double posicionFC62109;
    double posicionFC62108;
    double posicionFC62107;
    double posicionTBV;
	double posicionFC6298;
    double posicionIGV;
    double posicionVBV;
    double posicionPTB;
    double posicionST8;
    double VOLTAJE_SALIDA;

// VARIABLES CONSTANTES DE BETAS  PARA TURBINAS 

	double CONSENOBETA1TA;
	double CONSENOBETA2TA;
	double CONSTANBETA2TA;
	double CONSENOBETA3TA;
	double CONSTANBETA3TA;

	double CONSENOBETA1TB;
	double CONSENOBETA2TB;
	double CONSTANBETA2TB;
	double CONSENOBETA3TB;
	double CONSTANBETA3TB;

	double AreaTB;
	double AreaTA;
	int PreCal;
	int Int_Ex;
	double valvulaA;
	double valvulaB;
	double valvulaC;
	double ControlCarga;
	double ConsignaCarga;
	double SenalCarga;
	double CISenalCarga;
	double taoSenalCarga;
	double CONSAREA1;
	double CONSAREA2_TA;
	double CONSAREA1_TB;
	double CONSAREA2_TB;
	double AREA1_CB;
	double AREA2_CB;
	double AREA3_CB;
	double AREA1_CA;
	double AREA2_CA;
	double AREA3_CA;



////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////

	double CIIEx_GE; 
    double CIVFaseA_GE; 
    double CIVFaseB_GE; 
    double CIVFaseC_GE; 
    double Consigna_VinTranEx_GE; 
    double delta;
    double IEx_GE;
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

    double IntServAux;
    double IntServProp;

    double VServAux;
    double VServProp;
	double IEx_IMagA;
	double IEx_IMagB;
	double IEx_IMagC;



////////////////////////////////////////////////////////////////////////////

/////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////
	double FlujoInTanque_AH;
	double FlujoOutTanque_AH;
    double LargoTanque_AH;
    double AnchoTanque_AH;
    double CINivelTanque_AH;
    double TempAceiteTank_AH;
    double WElec_AH;
    double UTanque_AH;
    double TempAmbiente;
    double CpAceite_AH;
	double CpMetal_AH;
    double MasaAceite_AH;
    double CITempAceiteTanque_AH;
    double UInter_AH;
    double MasaAceiteInter_AH;
    double CITempAceiteInter_AH;
    double PotMaxVentilador_AH;
    double TaoVentilador_AH;
    double CIPotVentilador_AH;
    double PotMaxBomba_AH;
    double TaoBomba_AH;
    double CIPotBomba_AH;
    double VelocidadArranHidra;
    double VelocidadMaxAH;
    double TaoAH;
    double CIVelArranHidra;
    double TempMetalAH;
    double hMetal_AH;
    double Mmetal_AH;
    double CpMetal_AH476;
    double ViscosidadAceite_AH;
    double eLub_AH;
    double AContac_AH;
    double Diametro_AH;
    double CITempMetalAH;
    double TempAceiteAH;
    double MAceiteAH;
    double CITempAceiteAH;
    double Integral_AH;
    double CIInt_AH;
    double Proporional_AH;
    double IntPro_AH;
    double errorPI_AH;
    double Sat_AH;
    double Variador_AH;
    double CPI_AH;
    double LInf_AH;
    double LSup_AH;
    double SetPoint_AH;
    double ki_AH;
    double kp_AH;
    double Nivel_Tanque_AH;
    double PotenciaBomba_AH;
    double PotenciaVentilador_AH;
    double PresionBombS_AH;
    double FlujoBombS_AH;
    double PresionBombP_AH;
    double FlujoBombP_AH;
    double TempAceiteIntercambiador_AH;
    double TempAceiteInTank_AH;
    double FlujoOutInter_AH;
    double VelocidadVentilador_AH;
    double Proporcional_AH;
    double TorqueAH;
    double DensidadAceite_AH;
	double Patm;
    int FallaVent_AH;
    int FallaBomb_AH;
    int OnOffVentilador_AH;
    int OnOffBomba_AH;
    int OnOffCalentador_AH;
////////////////////////////////////////////////////////////////////////////

////////////////////////SISTEMA DE COMBUSTIBLE//////////////////////////////

double Cp_agua;                       // Calor específico del agua
double VolEsp_agua;                   // volumen específico del agua							//NO SE USA EN NINGUN LADO CHECAR TATA
double Densidad_agua;                 // densidad del agua
double CI_I;
double Acc_I;
double Ap_valvula;
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
double Flujo_Aire_inTur_B;				//flujo de aire de entrada a la turbina de baja

// Verificar tipo
double CI_VentiVelGen;					//condiciones iniciales de la veocidad del ventilador del generador
double Tao_VentiGen;						//constante tao del ventilador del generador
double VelAireInGen;						//velocidad de aire a la entrada del generador
double VelMaxVentiGen;					//velocidad maxima del ventilador en el generador
double VelFinalVentiGen;					//velocidad final del ventilador en el generador 
double PDSL6407;							//


//Sospecho que estas son enteras
int OnOffBombaChiller;							
int AutomaticoVent;
int ManualVent;
int FallaVentilador;
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
    int OnOff_Vent_HEX;
    int Falla_Vent_HEX;
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
//    double CITemCoalV082_2;
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

	double Apertura_Max_FSV62571;
    double Segnal_FSV62571;
    double CI_Apertura_FSV62571;
    double Tao_Valvula_FSV62571;
    double X_FSV62571;
    double Onn_Off_FSV62571;
	double Flujo_FSV62571;

	double Apertura_Max_FSV62570;
    double Segnal_FSV62570;
    double CI_Apertura_FSV62570;
    double Tao_Valvula_FSV62570;
    double X_FSV62570;
    double Onn_Off_FSV62570;
	double Flujo_FSV62570;

    double FlujoSOV6208 ;
    double Apertura_Max_SOV6208;
    double CI_Apertura_SOV6208 ;
    double Tao_Valvula_SOV6208 ;
    double X_SOV6208 ;
    double Segnal_SOV6208;
    double Onn_Off_SOV6208 ;

    double Flujo_FSV6204;
	double WF36DMD_SUM;
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

	double TE6232;
	double TE6232_F;

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

	double Apertura_Max_FCV64217;
    double Segnal_FCV64217;
    double CI_Apertura_FCV64217;
    double Tao_Valvula_FCV64217;
    double X_FCV64217;
    double Onn_Off_FCV64217;


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////

    double HumedadGas;           // %
	double AcidoSulf;            // ppm
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
	double TemAmb;                      // verificar si no se repite con tamb    unidaes en K
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
	double AE62326_AI;
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

	double coef_esq[11];
	double XCombustible[12];
	double logk[14];
	double k[14];
	double kj_mol[14];
	double cal_mol[17];
	double a1_Hcal[17];
	double a2_Hcal[17];
	double a3_Hcal[17];
	double a4_Hcal[17];
	double a5_Hcal[17];
	double a6_Hcal[17];
	double a7_Hcal[17];
	double a1_Hen[17];
	double a2_Hen[17];
	double a3_Hen[17];
	double a4_Hen[17];
	double a5_Hen[17];
	double a6_Hen[17];
	double a7_Hen[17];
	double A1_KA[17];
	double A2_KA[17];
	double A3_KA[17];
	double A4_KA[17];
	double A5_KA[17];
	double A6_KA[17];
	double A7_KA[17];
	double h0_href_R[9];
	double h0_href[9];
	double A_Cp[9];
	double B_Cp[9];
	double C_Cp[9];
	double M_Gauss[4][5];
	double hc[17];
	double H_k[17];
	double poli1[17];
	double poli2[17];
	int i, z, j;


	double CO2_comb;
	double bioxido_kj_mol;
	double etano_kj_mol;
	double Hreactivos;
	double i_butano_kj_mol;
	double i_pentano_kj_mol;
	double metano_kj_mol;
	double n_butano_kj_mol;
	double n_hexano_kj_mol;
	double n_pentano_kj_mol;
	double neopentano_kj_mol;
	double Nitro_comb;
	double Nitro_aire;
	double nitrogeno_kj_mol;
	double nitrogeno2_kj_mol;
	double O2_aire;
	double oxigeno_kj_mol;
	double propano_kj_mol;

	double T_ref;
	double Tref_h;
	double Tref_flama;
	double TGSSEL;
	double T_aire_comb;
	double H2_inicial;     // VALORES INICIALES ESTIMADOS A PARTIR DEL BALANCE ESTEQUEOETRICO          
	double H2O_inicial;    // VALORES INICIALES ESTIMADOS A PARTIR DEL BALANCE ESTEQUEOETRICO            
	double CO2_inicial;    // VALORES INICIALES ESTIMADOS A PARTIR DEL BALANCE ESTEQUEOETRICO            
	double N2_inicial;     // VALORES INICIALES ESTIMADOS A PARTIR DEL BALANCE ESTEQUEOETRICO            
	double error1;
	double error2;
	double error3;
	double error4;
	double O2_prod;
	double Presion_comb_bar;
	double CO_prod;
	double C_prod;
	double rcomb_1;
	double rcomb_2;
	double rcomb_3;
	double rcomb_4;
	double CH4_prod;
	double x_res;
	double HCN_prod;



	double C_B;
	double C_C;
	double C_H2;
	double CH4_B;
	double CH4_C;
	double CH4_H2;
	double CO_B;
	double CO_C;
	double CO_H2;
	double O_prod;
	double F_com;
	double FA_comb;
	double FB_comb;
	double G_comb;
	double O3_prod;
	double HC_comb;
	double H_H2;
	double H_prod;
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
	double OH_prod;
	double R_CO;
	double R_HO;
	double R_NO;
	double NO_prod;
	double NO2_prod;
	double NH3_prod;
	double HNO3_prod;
	double N_prod;

	double aux2;
	double constante1;
	double d_gauss;
	double error5;
	double FC_comb;
	double FD_comb;
	double GA_comb;
	double GB_comb;
	double GC_comb;
	double GD_comb;
	double HA_comb;
	double HB_comb;
	double H_comb;
	double HD_comb;
	double J_comb;
	double JA_comb;
	double JB_comb;
	double JC_comb;
	double JD_comb;
	double N_H2;
	double Ni;
	double Ta_Newton;
	double Ti_Newton;

	double Tx_Newton;

	double C_a;
	double F_a;
	double NOx;
	double Q_a;
	double Temperatura_C;
	double Temperatura_F;
	double U_a;
	double V_a;

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
	double X_OxigenoX;
	double M_Oxigeno;
	double M_Agua;
	double B_Oxigeno;
	double B_aire;
	double Z_Aire_seco;
	double Z_Aire_humedo;

	double suma_productos;
	double error;
	double C_1;     
	double H_1;       
	double O_1;       
	double N_1;
	double T_nueva; 



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

	double TP_HYD_STRT_AUXCONTDLY=5;
	int HYD_STRT_PDSHH1600D;
	double TP_HYD_STRT_PDSHH1600D=5;
	int HYD_STRT_MOT1615DLY;
	double TP_HYD_STRT_MOT1615DLY=13;
	int HYD_STRT_STRTORCRNK;

   void GETS()
   { 		
		A52_1=GetFloat(p_A52_1);
		A52_2=GetFloat(p_A52_2);
		AREA_1_CB_IGV=GetFloat(p_AREA_1_CB_IGV);
		AREA_FMENF_CA=GetFloat(p_AREA_FMENF_CA);
		AREA_FMENF_CB=GetFloat(p_AREA_FMENF_CB);
		AREA_FMOUT_CA=GetFloat(p_AREA_FMOUT_CA);
		CDPA=GetFloat(p_CDPA);
		CICDPA=GetFloat(p_CICDPA);
		CIST8A=GetFloat(p_CIST8A);
		CITCCA=GetFloat(p_CITCCA);
		CITCCB=GetFloat(p_CITCCB);
		CITCTA=GetFloat(p_CITCTA);
		CITCTB=GetFloat(p_CITCTB);
		CITenf=GetFloat(p_CITenf);
		CITRCA=GetFloat(p_CITRCA);
		CITRCB=GetFloat(p_CITRCB);
		CITRTA=GetFloat(p_CITRTA);
		CITRTB=GetFloat(p_CITRTB);
		CIW_TA=GetFloat(p_CIW_TA);
		CIW_TB=GetFloat(p_CIW_TB);
		CIw1_TA=GetFloat(p_CIw1_TA);
		CIw1_TB=GetFloat(p_CIw1_TB);
		CPmaterial=GetFloat(p_CPmaterial);
		DENSIDAD_FMENF_CA=GetFloat(p_DENSIDAD_FMENF_CA);
		DENSIDAD_FMENF_CB=GetFloat(p_DENSIDAD_FMENF_CB);
		DENSIDAD_FMOUT_CA=GetFloat(p_DENSIDAD_FMOUT_CA);
		F_MAX_ENF=GetFloat(p_F_MAX_ENF);
		F_MAX_ENF_U1CCA=GetFloat(p_F_MAX_ENF_U1CCA);
		F_MAX_ENF_U1CCB=GetFloat(p_F_MAX_ENF_U1CCB);
		F_MAX_ENF_U1CTA=GetFloat(p_F_MAX_ENF_U1CTA);
		F_MAX_ENF_U1CTB=GetFloat(p_F_MAX_ENF_U1CTB);
		F_MAX_ENF_U4RTA=GetFloat(p_F_MAX_ENF_U4RTA);
		F_MAX_ENF_U4RTB=GetFloat(p_F_MAX_ENF_U4RTB);
		FCV_68127=GetFloat(p_FCV_68127);
		FLUJO_MASICO_AIRE=GetFloat(p_FLUJO_MASICO_AIRE);
		FLUJO_MASICO_CA=GetFloat(p_FLUJO_MASICO_CA);
		FLUJO_MASICO_CB=GetFloat(p_FLUJO_MASICO_CB);
		FLUJO_MASICO_ENF_CA=GetFloat(p_FLUJO_MASICO_ENF_CA);
		FLUJO_MASICO_ENF_CB=GetFloat(p_FLUJO_MASICO_ENF_CB);
		FLUJO_MASICO_GAS=GetFloat(p_FLUJO_MASICO_GAS);
		FLUJO_MASICO_GAS_VIGV=GetFloat(p_FLUJO_MASICO_GAS_VIGV);
		FLUJO_MASICO_OUT_CA=GetFloat(p_FLUJO_MASICO_OUT_CA);
		FLUJO_MASICO_SALIDAVBV=GetFloat(p_FLUJO_MASICO_SALIDAVBV);
		FLUJO_MASICO_TA=GetFloat(p_FLUJO_MASICO_TA);
		FLUJO_MASICO_TB=GetFloat(p_FLUJO_MASICO_TB);
		Frecuencia=GetFloat(p_Frecuencia);
		K_ADECUACION_CDPA=GetFloat(p_K_ADECUACION_CDPA);
		K_ADECUACION_K1_ROTOR1_TA=GetFloat(p_K_ADECUACION_K1_ROTOR1_TA);
		K_ADECUACION_K1_ROTOR1_TB=GetFloat(p_K_ADECUACION_K1_ROTOR1_TB);
		K_ADECUACION_ST8A=GetFloat(p_K_ADECUACION_ST8A);
		mCCA=GetFloat(p_mCCA);
		mCCB=GetFloat(p_mCCB);
		mCTA=GetFloat(p_mCTA);
		mCTB=GetFloat(p_mCTB);
		menf=GetFloat(p_menf);
		mRCA=GetFloat(p_mRCA);
		mRCB=GetFloat(p_mRCB);
		mRTA=GetFloat(p_mRTA);
		mRTB=GetFloat(p_mRTB);
		POTENCIA_CA=GetFloat(p_POTENCIA_CA);
		POTENCIA_CB=GetFloat(p_POTENCIA_CB);
		POTENCIA_MEC=GetFloat(p_POTENCIA_MEC);
		POTENCIA_TA=GetFloat(p_POTENCIA_TA);
		POTENCIA_TB=GetFloat(p_POTENCIA_TB);
		QA=GetFloat(p_QA);
		QB=GetFloat(p_QB);
		QCCA=GetFloat(p_QCCA);
		QCCB=GetFloat(p_QCCB);
		QCTA=GetFloat(p_QCTA);
		QCTB=GetFloat(p_QCTB);
		QRCA=GetFloat(p_QRCA);
		QRCB=GetFloat(p_QRCB);
		QRTA=GetFloat(p_QRTA);
		QRTB=GetFloat(p_QRTB);
		RADIO_MEDIO_CA=GetFloat(p_RADIO_MEDIO_CA);
		RADIO_MEDIO_CB=GetFloat(p_RADIO_MEDIO_CB);
		RADIO_MEDIO_TA=GetFloat(p_RADIO_MEDIO_TA);
		RADIO_MEDIO_TB=GetFloat(p_RADIO_MEDIO_TB);
		RHO_AREA_1_CB=GetFloat(p_RHO_AREA_1_CB);
		ST8A=GetFloat(p_ST8A);
		T_Giro_TA=GetFloat(p_T_Giro_TA);
		T_Giro_TB=GetFloat(p_T_Giro_TB);
		TAO_CDPA=GetFloat(p_TAO_CDPA);
		TAO_ST8A=GetFloat(p_TAO_ST8A);
		TAO_TA_ROTOR1=GetFloat(p_TAO_TA_ROTOR1);
		TAO_TB_ROTOR1=GetFloat(p_TAO_TB_ROTOR1);
		TCCA=GetFloat(p_TCCA);
		TCCB=GetFloat(p_TCCB);
		Tchiller=GetFloat(p_Tchiller);
		TCTA=GetFloat(p_TCTA);
		TCTB=GetFloat(p_TCTB);
		Tenf=GetFloat(p_Tenf);
		PoW_max=GetFloat(p_PoW_max);
		Tao_Res_HE6888=GetFloat(p_Tao_Res_HE6888);
		Res_HE6888=GetFloat(p_Res_HE6888);
		CI_Res_HE6888=GetFloat(p_CI_Res_HE6888);
		On_Off_HE6888=GetFloat(p_On_Off_HE6888);
		TgCA=GetFloat(p_TgCA);
		TgCB=GetFloat(p_TgCB);
		Tgenf=GetFloat(p_Tgenf);
		TgenfA=GetFloat(p_TgenfA);
		TgTA=GetFloat(p_TgTA);
		TgTB=GetFloat(p_TgTB);
		Tlub=GetFloat(p_Tlub);
		Torque_Arracador_TA=GetFloat(p_Torque_Arracador_TA);
		Torque_Arracador_TB=GetFloat(p_Torque_Arracador_TB);
		TORQUE_CA=GetFloat(p_TORQUE_CA);
		TORQUE_CB=GetFloat(p_TORQUE_CB);
		TORQUE_Exc=GetFloat(p_TORQUE_Exc);
		TORQUE_TA=GetFloat(p_TORQUE_TA);
		TORQUE_TB=GetFloat(p_TORQUE_TB);
		TRCA=GetFloat(p_TRCA);
		TRCB=GetFloat(p_TRCB);
		TRTA=GetFloat(p_TRTA);
		TRTB=GetFloat(p_TRTB);
		U_CA=GetFloat(p_U_CA);
		U_CB=GetFloat(p_U_CB);
		U_TA=GetFloat(p_U_TA);
		U_TB=GetFloat(p_U_TB);
		U1CCA=GetFloat(p_U1CCA);
		U1CCB=GetFloat(p_U1CCB);
		U1CTA=GetFloat(p_U1CTA);
		U1CTB=GetFloat(p_U1CTB);
		Pow_He6888=GetFloat(p_Pow_He6888);
		U1enf=GetFloat(p_U1enf);
		U1RCA=GetFloat(p_U1RCA);
		U1RCB=GetFloat(p_U1RCB);
		U1RTA=GetFloat(p_U1RTA);
		U1RTB=GetFloat(p_U1RTB);
		U2CCA=GetFloat(p_U2CCA);
		U2CCB=GetFloat(p_U2CCB);
		U2CTA=GetFloat(p_U2CTA);
		U2CTB=GetFloat(p_U2CTB);
		U2enf=GetFloat(p_U2enf);
		U2RCA=GetFloat(p_U2RCA);
		U2RCB=GetFloat(p_U2RCB);
		U2RTA=GetFloat(p_U2RTA);
		U2RTB=GetFloat(p_U2RTB);
		U3enf=GetFloat(p_U3enf);
		U3RCA=GetFloat(p_U3RCA);
		U3RCB=GetFloat(p_U3RCB);
		U3RTA=GetFloat(p_U3RTA);
		U3RTB=GetFloat(p_U3RTB);
		U4enf=GetFloat(p_U4enf);
		U4RTA=GetFloat(p_U4RTA);
		U4RTB=GetFloat(p_U4RTB);
		FMaire=GetFloat(p_FMaire);
		CPaire=GetFloat(p_CPaire);
		VELOCIDAD_FMENF_CA=GetFloat(p_VELOCIDAD_FMENF_CA);
		VELOCIDAD_FMENF_CB=GetFloat(p_VELOCIDAD_FMENF_CB);
		VELOCIDAD_FMOUT_CA=GetFloat(p_VELOCIDAD_FMOUT_CA);
		VN1_CB=GetFloat(p_VN1_CB);
		VT1_CA=GetFloat(p_VT1_CA);
		VT1_CB=GetFloat(p_VT1_CB);
		VT2_CA=GetFloat(p_VT2_CA);
		VT2_CB=GetFloat(p_VT2_CB);
		VT2_TA=GetFloat(p_VT2_TA);
		VT2_TB=GetFloat(p_VT2_TB);
		VT3_TA=GetFloat(p_VT3_TA);
		VT3_TB=GetFloat(p_VT3_TB);
		W_CA=GetFloat(p_W_CA);
		W_CB=GetFloat(p_W_CB);
		W_TA=GetFloat(p_W_TA);
		W_TB=GetFloat(p_W_TB);
		w1_TA=GetFloat(p_w1_TA);
		w1_TB=GetFloat(p_w1_TB);
		AFCV_6872=GetFloat(p_AFCV_6872);
		ALFA1_CB=GetFloat(p_ALFA1_CB);
		Alfa1_cb_control=GetFloat(p_Alfa1_cb_control);
		ALFA1_CONTROL_CB=GetFloat(p_ALFA1_CONTROL_CB);
		ALFA2_CB=GetFloat(p_ALFA2_CB);
		ALFA3_CB=GetFloat(p_ALFA3_CB);
		AREA_1_CB=GetFloat(p_AREA_1_CB);
		AREA_2_CB=GetFloat(p_AREA_2_CB);
		AREA_3_CB=GetFloat(p_AREA_3_CB);
		BETA1_CB=GetFloat(p_BETA1_CB);
		BETA2_CB=GetFloat(p_BETA2_CB);
		BETA3_CB=GetFloat(p_BETA3_CB);
		CIALFA1=GetFloat(p_CIALFA1);
		CIAREA1IGV=GetFloat(p_CIAREA1IGV);
		CIAREA1VBV=GetFloat(p_CIAREA1VBV);
		CP_CB=GetFloat(p_CP_CB);
		DELTA_PRESION_CB=GetFloat(p_DELTA_PRESION_CB);
		FCV_6872=GetFloat(p_FCV_6872);
		GRAVEDAD=GetFloat(p_GRAVEDAD);
		K_ADECUACION_1_CB=GetFloat(p_K_ADECUACION_1_CB);
		K_ADECUACION_AREA1_CA=GetFloat(p_K_ADECUACION_AREA1_CA);
		K_ADECUACION_AREA1_CB=GetFloat(p_K_ADECUACION_AREA1_CB);
		PDI64070=GetFloat(p_PDI64070);
		PRESION_ENTRADA_COMPRESOR_BAJA=GetFloat(p_PRESION_ENTRADA_COMPRESOR_BAJA);
		PRESION_SALIDA_COMPRESOR_BAJA=GetFloat(p_PRESION_SALIDA_COMPRESOR_BAJA);
		RHO_AREA_2_CB=GetFloat(p_RHO_AREA_2_CB);
		RHO_AREA_3_CB=GetFloat(p_RHO_AREA_3_CB);
		RHO_DELTA_PRESION_CB=GetFloat(p_RHO_DELTA_PRESION_CB);
		TAO_ALFA_1_CB=GetFloat(p_TAO_ALFA_1_CB);
		TAO_IGV_CB_A1=GetFloat(p_TAO_IGV_CB_A1);
		TAO_VBV_CA_A1=GetFloat(p_TAO_VBV_CA_A1);
		TEMPERATURA_ENTRADA_COMPRESOR_BAJA=GetFloat(p_TEMPERATURA_ENTRADA_COMPRESOR_BAJA);
		TEMPERATURA_SALIDA_COMPRESOR_BAJA=GetFloat(p_TEMPERATURA_SALIDA_COMPRESOR_BAJA);
		V1_CB=GetFloat(p_V1_CB);
		V2_CB=GetFloat(p_V2_CB);
		V3_CB=GetFloat(p_V3_CB);
		VN2_CB=GetFloat(p_VN2_CB);
		VN3_CB=GetFloat(p_VN3_CB);
		VRB1_CB=GetFloat(p_VRB1_CB);
		VRB2_CB=GetFloat(p_VRB2_CB);
		VRB3_CB=GetFloat(p_VRB3_CB);
		VT3_CB=GetFloat(p_VT3_CB);
		ALFA_1_CA=GetFloat(p_ALFA_1_CA);
		ALFA1_CA=GetFloat(p_ALFA1_CA);
		Alfa1_ca_control=GetFloat(p_Alfa1_ca_control);
		ALFA1_CONTROL_CA=GetFloat(p_ALFA1_CONTROL_CA);
		ALFA2_CA=GetFloat(p_ALFA2_CA);
		ALFA3_CA=GetFloat(p_ALFA3_CA);
		AREA_1_CA=GetFloat(p_AREA_1_CA);
		AREA_2_CA=GetFloat(p_AREA_2_CA);
		AREA_3_CA=GetFloat(p_AREA_3_CA);
		AREA1_CONTROL_CA=GetFloat(p_AREA1_CONTROL_CA);
		BETA_3_CA=GetFloat(p_BETA_3_CA);
		BETA1_CA=GetFloat(p_BETA1_CA);
		BETA2_CA=GetFloat(p_BETA2_CA);
		BETA3_CA=GetFloat(p_BETA3_CA);
		CIALFA1_CA=GetFloat(p_CIALFA1_CA);
		CIAREA1_CA=GetFloat(p_CIAREA1_CA);
		CIBETA3CA=GetFloat(p_CIBETA3CA);
		CONTROL_BETA3_CA_CONTROL=GetFloat(p_CONTROL_BETA3_CA_CONTROL);
		CP_CA=GetFloat(p_CP_CA);
		DELTA_PRESION_CA=GetFloat(p_DELTA_PRESION_CA);
		FCV_6871=GetFloat(p_FCV_6871);
		FCV_6873=GetFloat(p_FCV_6873);
		K_ADECUACION_1_CA=GetFloat(p_K_ADECUACION_1_CA);
		K_ADECUACION_BETA3_CA=GetFloat(p_K_ADECUACION_BETA3_CA);
		PRESION_SALIDA_COMPRESOR_ALTA=GetFloat(p_PRESION_SALIDA_COMPRESOR_ALTA);
		RHO_AREA_1_CA=GetFloat(p_RHO_AREA_1_CA);
		RHO_AREA_2_CA=GetFloat(p_RHO_AREA_2_CA);
		RHO_AREA_3_CA=GetFloat(p_RHO_AREA_3_CA);
		RHO_DELTA_PRESION_CA=GetFloat(p_RHO_DELTA_PRESION_CA);
		TAO_ALFA_1_CA=GetFloat(p_TAO_ALFA_1_CA);
		TAO_BETA3_CA=GetFloat(p_TAO_BETA3_CA);
		TAO_CA_A1=GetFloat(p_TAO_CA_A1);
		TEMPERATURA_SALIDA_COMPRESOR_ALTA=GetFloat(p_TEMPERATURA_SALIDA_COMPRESOR_ALTA);
		V1_CA=GetFloat(p_V1_CA);
		V2_CA=GetFloat(p_V2_CA);
		V3_CA=GetFloat(p_V3_CA);
		VN1_CA=GetFloat(p_VN1_CA);
		VN2_CA=GetFloat(p_VN2_CA);
		VN3_CA=GetFloat(p_VN3_CA);
		VRB1_CA=GetFloat(p_VRB1_CA);
		VRB2_CA=GetFloat(p_VRB2_CA);
		VRB3_CA=GetFloat(p_VRB3_CA);
		VT3_CA=GetFloat(p_VT3_CA);
		ALFA_1_TA=GetFloat(p_ALFA_1_TA);
		ALFA_1_TB=GetFloat(p_ALFA_1_TB);
		ALFA1_TA=GetFloat(p_ALFA1_TA);
		ALFA1_TB=GetFloat(p_ALFA1_TB);
		ALFA2_TA=GetFloat(p_ALFA2_TA);
		ALFA2_TB=GetFloat(p_ALFA2_TB);
		ALFA3_TA=GetFloat(p_ALFA3_TA);
		ALFA3_TB=GetFloat(p_ALFA3_TB);
		BETA1_TA=GetFloat(p_BETA1_TA);
		BETA1_TB=GetFloat(p_BETA1_TB);
		BETA2_TA=GetFloat(p_BETA2_TA);
		BETA2_TB=GetFloat(p_BETA2_TB);
		BETA3_TA=GetFloat(p_BETA3_TA);
		BETA3_TB=GetFloat(p_BETA3_TB);
		CONSTANTE_AREAS_1_TA=GetFloat(p_CONSTANTE_AREAS_1_TA);
		CONSTANTE_AREAS_1_TB=GetFloat(p_CONSTANTE_AREAS_1_TB);
		CONSTANTE_AREAS_2_TA=GetFloat(p_CONSTANTE_AREAS_2_TA);
		CONSTANTE_AREAS_2_TB=GetFloat(p_CONSTANTE_AREAS_2_TB);
		AREA_1_TB=GetFloat(p_AREA_1_TB);
		BETA_1_CB=GetFloat(p_BETA_1_CB);
		K_ADECUACION_BETA3_CB=GetFloat(p_K_ADECUACION_BETA3_CB);
		BETA3_CONTROL_CB=GetFloat(p_BETA3_CONTROL_CB);
		TAO_BETA3_CB=GetFloat(p_TAO_BETA3_CB);
		CP_TA=GetFloat(p_CP_TA);
		CP_TB=GetFloat(p_CP_TB);
		DELTA_PRESION_TA=GetFloat(p_DELTA_PRESION_TA);
		DELTA_PRESION_TB=GetFloat(p_DELTA_PRESION_TB);
		PRESION_SALIDA_TURBINA_ALTA=GetFloat(p_PRESION_SALIDA_TURBINA_ALTA);
		PRESION_SALIDA_TURBINA_BAJA=GetFloat(p_PRESION_SALIDA_TURBINA_BAJA);
		RHO_DELTA_PRESION_TA=GetFloat(p_RHO_DELTA_PRESION_TA);
		RHO_DELTA_PRESION_TB=GetFloat(p_RHO_DELTA_PRESION_TB);
		TEMPERATURA_ENTRADA_TURBINA_ALTA=GetFloat(p_TEMPERATURA_ENTRADA_TURBINA_ALTA);
		TEMPERATURA_SALIDA_TURBINA_ALTA=GetFloat(p_TEMPERATURA_SALIDA_TURBINA_ALTA);
		TEMPERATURA_SALIDA_TURBINA_BAJA=GetFloat(p_TEMPERATURA_SALIDA_TURBINA_BAJA);
		V1_TA=GetFloat(p_V1_TA);
		V1_TB=GetFloat(p_V1_TB);
		V2_TA=GetFloat(p_V2_TA);
		V2_TB=GetFloat(p_V2_TB);
		V3_TA=GetFloat(p_V3_TA);
		V3_TB=GetFloat(p_V3_TB);
		VN1_TA=GetFloat(p_VN1_TA);
		VN1_TB=GetFloat(p_VN1_TB);
		VN2_TA=GetFloat(p_VN2_TA);
		VN2_TB=GetFloat(p_VN2_TB);
		VN3_TA=GetFloat(p_VN3_TA);
		VN3_TB=GetFloat(p_VN3_TB);
		VRB1_TA=GetFloat(p_VRB1_TA);
		VRB1_TB=GetFloat(p_VRB1_TB);
		VRB2_TA=GetFloat(p_VRB2_TA);
		VRB2_TB=GetFloat(p_VRB2_TB);
		VRB3_TA=GetFloat(p_VRB3_TA);
		VRB3_TB=GetFloat(p_VRB3_TB);
		VT1_TA=GetFloat(p_VT1_TA);
		VT1_TB=GetFloat(p_VT1_TB);
		BETA_3_CB=GetFloat(p_BETA_3_CB);
		CI2TORQUE_TA=GetFloat(p_CI2TORQUE_TA);
		CIBETA3CB=GetFloat(p_CIBETA3CB);
		CIFCV68127=GetFloat(p_CIFCV68127);
		CIFCV68128=GetFloat(p_CIFCV68128);
		CONTROL_FCV68128=GetFloat(p_CONTROL_FCV68128);
		CIFCV6871=GetFloat(p_CIFCV6871);
		CIFCV6872=GetFloat(p_CIFCV6872);
		CIFCV6873=GetFloat(p_CIFCV6873);
		CITORQUE_TA=GetFloat(p_CITORQUE_TA);
		CONTROL_FCV68127=GetFloat(p_CONTROL_FCV68127);
		CONTROL_FCV6871=GetFloat(p_CONTROL_FCV6871);
		CONTROL_FCV6872=GetFloat(p_CONTROL_FCV6872);
		CONTROL_FCV6873=GetFloat(p_CONTROL_FCV6873);
		FCV_68128=GetFloat(p_FCV_68128);
		K_ADECUACION_FCV68127=GetFloat(p_K_ADECUACION_FCV68127);
		K_ADECUACION_FCV68128=GetFloat(p_K_ADECUACION_FCV68128);
		K_ADECUACION_FCV6871=GetFloat(p_K_ADECUACION_FCV6871);
		K_ADECUACION_FCV6872=GetFloat(p_K_ADECUACION_FCV6872);
		K_ADECUACION_FCV6873=GetFloat(p_K_ADECUACION_FCV6873);
		PRESION_ENTRADA_TURBINA_ALTA=GetFloat(p_PRESION_ENTRADA_TURBINA_ALTA);
		PT_6804=GetFloat(p_PT_6804);
		PT_6814=GetFloat(p_PT_6814);
		PT_6859A=GetFloat(p_PT_6859A);
		PT_6859B=GetFloat(p_PT_6859B);
		PT_6860=GetFloat(p_PT_6860);
		SE_6800A=GetFloat(p_SE_6800A);
		SE_6800B=GetFloat(p_SE_6800B);
		SE_6812=GetFloat(p_SE_6812);
		SE_6813=GetFloat(p_SE_6813);
		TAO_FCV68127=GetFloat(p_TAO_FCV68127);
		TAO_FCV68128=GetFloat(p_TAO_FCV68128);
		TAO_FCV6871=GetFloat(p_TAO_FCV6871);
		TAO_FCV6872=GetFloat(p_TAO_FCV6872);
		TAO_FCV6873=GetFloat(p_TAO_FCV6873);
		TE_6821A=GetFloat(p_TE_6821A);
		TE_6821B=GetFloat(p_TE_6821B);
		TE_6837A=GetFloat(p_TE_6837A);
		TE_6837B=GetFloat(p_TE_6837B);
		TE_6838A1=GetFloat(p_TE_6838A1);
		TE_6838A2=GetFloat(p_TE_6838A2);
		TE_6838B1=GetFloat(p_TE_6838B1);
		TE_6838B2=GetFloat(p_TE_6838B2);
		TE_6843=GetFloat(p_TE_6843);
		TE_6844=GetFloat(p_TE_6844);
		TE_6845=GetFloat(p_TE_6845);
		TE_6846=GetFloat(p_TE_6846);
		TE_6847=GetFloat(p_TE_6847);
		TE_6848=GetFloat(p_TE_6848);
		TE_6849=GetFloat(p_TE_6849);
		TE_6850=GetFloat(p_TE_6850);
		TORQUE_TA2=GetFloat(p_TORQUE_TA2);
		ZT_68127A=GetFloat(p_ZT_68127A);
		ZT_68127B=GetFloat(p_ZT_68127B);
		ZT_68128A=GetFloat(p_ZT_68128A);
		ZT_68128B=GetFloat(p_ZT_68128B);
		ZT_6871A=GetFloat(p_ZT_6871A);
		ZT_6871B=GetFloat(p_ZT_6871B);
		ZT_6872A=GetFloat(p_ZT_6872A);
		ZT_6872B=GetFloat(p_ZT_6872B);
		ZT_6873A=GetFloat(p_ZT_6873A);
		ZT_6873B=GetFloat(p_ZT_6873B);
		ALFA_2=GetFloat(p_ALFA_2);
		TAO_TA_ROTOR_1=GetFloat(p_TAO_TA_ROTOR_1);
		TAO_TB_ROTOR_1=GetFloat(p_TAO_TB_ROTOR_1);
		CONTROL_TA_TORQUE_1=GetFloat(p_CONTROL_TA_TORQUE_1);
		IGV_CONTROL_CB_A1=GetFloat(p_IGV_CONTROL_CB_A1);
		Presion_atm_PSI=GetFloat(p_Presion_atm_PSI);
		DSH6405 =GetFloat(p_DSH6405 );
		RESULTADO=GetFloat(p_RESULTADO);
		FLUJO_COMBUSTIBLE=GetFloat(p_FLUJO_COMBUSTIBLE);
		arrancador=GetFloat(p_arrancador);
		tcontrol1=GetFloat(p_tcontrol1);
		tcontrol2=GetFloat(p_tcontrol2);
		tcontrol3=GetFloat(p_tcontrol3);
		tcontrol4=GetFloat(p_tcontrol4);
		tcontrol5=GetFloat(p_tcontrol5);
		tcontrol6=GetFloat(p_tcontrol6);
		tcontrol7=GetFloat(p_tcontrol7);
		tcontrol8=GetFloat(p_tcontrol8);
		tcontrol9=GetFloat(p_tcontrol9);
		tcontrol10=GetFloat(p_tcontrol10);
		tcontrol11=GetFloat(p_tcontrol11);
		tcontrol12=GetFloat(p_tcontrol12);
		tcontrol13=GetFloat(p_tcontrol13);
		tcontrol14=GetFloat(p_tcontrol14);
		tcontrol15=GetFloat(p_tcontrol15);
		tcontrol16=GetFloat(p_tcontrol16);
		tcontrol17=GetFloat(p_tcontrol17);
		tcontrol18=GetFloat(p_tcontrol18);
		tcontrol19=GetFloat(p_tcontrol19);
		tcontrol20=GetFloat(p_tcontrol20);
		tcontrol21=GetFloat(p_tcontrol21);
		tcontrol22=GetFloat(p_tcontrol22);
		tcontrol23=GetFloat(p_tcontrol23);
		tcontrol24=GetFloat(p_tcontrol24);
		tcontrol25=GetFloat(p_tcontrol25);
		posicionVSV=GetFloat(p_posicionVSV);
		posicionFC62109=GetFloat(p_posicionFC62109);
		posicionFC62108=GetFloat(p_posicionFC62108);
		posicionFC62107=GetFloat(p_posicionFC62107);
		posicionTBV=GetFloat(p_posicionTBV);
		posicionFC6298=GetFloat(p_posicionFC6298);
		posicionIGV=GetFloat(p_posicionIGV);
		posicionVBV=GetFloat(p_posicionVBV);
		posicionPTB=GetFloat(p_posicionPTB);
		posicionST8=GetFloat(p_posicionST8);
		VOLTAJE_SALIDA=GetFloat(p_VOLTAJE_SALIDA);
		CONSENOBETA1TA=GetFloat(p_CONSENOBETA1TA);
		CONSENOBETA2TA=GetFloat(p_CONSENOBETA2TA);
		CONSTANBETA2TA=GetFloat(p_CONSTANBETA2TA);
		CONSENOBETA3TA=GetFloat(p_CONSENOBETA3TA);
		CONSTANBETA3TA=GetFloat(p_CONSTANBETA3TA);
		CONSENOBETA1TB=GetFloat(p_CONSENOBETA1TB);
		CONSENOBETA2TB=GetFloat(p_CONSENOBETA2TB);
		CONSTANBETA2TB=GetFloat(p_CONSTANBETA2TB);
		CONSENOBETA3TB=GetFloat(p_CONSENOBETA3TB);
		CONSTANBETA3TB=GetFloat(p_CONSTANBETA3TB);
		AreaTB=GetFloat(p_AreaTB);
		AreaTA=GetFloat(p_AreaTA);
		valvulaA=GetFloat(p_valvulaA);
		valvulaB=GetFloat(p_valvulaB);
		valvulaC=GetFloat(p_valvulaC);
		ControlCarga=GetFloat(p_ControlCarga);
		ConsignaCarga=GetFloat(p_ConsignaCarga);
		SenalCarga=GetFloat(p_SenalCarga);
		CISenalCarga=GetFloat(p_CISenalCarga);
		taoSenalCarga=GetFloat(p_taoSenalCarga);
		CONSAREA1=GetFloat(p_CONSAREA1);
		CONSAREA2_TA=GetFloat(p_CONSAREA2_TA);
		CONSAREA1_TB=GetFloat(p_CONSAREA1_TB);
		CONSAREA2_TB=GetFloat(p_CONSAREA2_TB);
		AREA1_CB=GetFloat(p_AREA1_CB);
		AREA2_CB=GetFloat(p_AREA2_CB);
		AREA3_CB=GetFloat(p_AREA3_CB);
		AREA1_CA=GetFloat(p_AREA1_CA);
		AREA2_CA=GetFloat(p_AREA2_CA);
		AREA3_CA=GetFloat(p_AREA3_CA);
		CIIEx_GE=GetFloat(p_CIIEx_GE);
		CIVFaseA_GE=GetFloat(p_CIVFaseA_GE);
		CIVFaseB_GE=GetFloat(p_CIVFaseB_GE);
		CIVFaseC_GE=GetFloat(p_CIVFaseC_GE);
		Consigna_VinTranEx_GE=GetFloat(p_Consigna_VinTranEx_GE);
		delta=GetFloat(p_delta);
		IEx_GE=GetFloat(p_IEx_GE);
		IFaseA_GE=GetFloat(p_IFaseA_GE);
		IFaseB_GE=GetFloat(p_IFaseB_GE);
		IFaseC_GE=GetFloat(p_IFaseC_GE);
		IntCarga_GE=GetFloat(p_IntCarga_GE);
		IntCrow_Bar=GetFloat(p_IntCrow_Bar);
		IntEx_GE=GetFloat(p_IntEx_GE);
		KEx_GE=GetFloat(p_KEx_GE);
		KGen_GE_A=GetFloat(p_KGen_GE_A);
		KGen_GE_B=GetFloat(p_KGen_GE_B);
		KGen_GE_C=GetFloat(p_KGen_GE_C);
		KTranEx_GE=GetFloat(p_KTranEx_GE);
		Por_FA=GetFloat(p_Por_FA);
		Por_FB=GetFloat(p_Por_FB);
		Por_FC=GetFloat(p_Por_FC);
		SatIEx=GetFloat(p_SatIEx);
		TaoEx_GE=GetFloat(p_TaoEx_GE);
		TaoGen_GE=GetFloat(p_TaoGen_GE);
		VAB_GE=GetFloat(p_VAB_GE);
		VAC_GE=GetFloat(p_VAC_GE);
		VBC_GE=GetFloat(p_VBC_GE);
		VEx_GE=GetFloat(p_VEx_GE);
		VFaseA_GE=GetFloat(p_VFaseA_GE);
		VFaseB_GE=GetFloat(p_VFaseB_GE);
		VFaseC_GE=GetFloat(p_VFaseC_GE);
		VinTranEx_GE=GetFloat(p_VinTranEx_GE);
		KcapaReac=GetFloat(p_KcapaReac);
		PActiva=GetFloat(p_PActiva);
		PReacFaseA_GE=GetFloat(p_PReacFaseA_GE);
		PReacFaseB_GE=GetFloat(p_PReacFaseB_GE);
		PReacFaseC_GE=GetFloat(p_PReacFaseC_GE);
		PReactiva=GetFloat(p_PReactiva);
		PTotal=GetFloat(p_PTotal);
		Vred_GE=GetFloat(p_Vred_GE);
		IntServAux=GetFloat(p_IntServAux);
		IntServProp=GetFloat(p_IntServProp);
		VServAux=GetFloat(p_VServAux);
		VServProp=GetFloat(p_VServProp);
		IEx_IMagA=GetFloat(p_IEx_IMagA);
		IEx_IMagB=GetFloat(p_IEx_IMagB);
		//IEx_IMagC=GetFloat(p_IEx_IMagC);
		FlujoInTanque_AH=GetFloat(p_FlujoInTanque_AH);
		FlujoOutTanque_AH=GetFloat(p_FlujoOutTanque_AH);
		LargoTanque_AH=GetFloat(p_LargoTanque_AH);
		AnchoTanque_AH=GetFloat(p_AnchoTanque_AH);
		CINivelTanque_AH=GetFloat(p_CINivelTanque_AH);
		TempAceiteTank_AH=GetFloat(p_TempAceiteTank_AH);
		WElec_AH=GetFloat(p_WElec_AH);
		UTanque_AH=GetFloat(p_UTanque_AH);
		TempAmbiente=GetFloat(p_TempAmbiente);
		CpAceite_AH=GetFloat(p_CpAceite_AH);
		CpMetal_AH=GetFloat(p_CpMetal_AH);
		MasaAceite_AH=GetFloat(p_MasaAceite_AH);
		CITempAceiteTanque_AH=GetFloat(p_CITempAceiteTanque_AH);
		UInter_AH=GetFloat(p_UInter_AH);
		MasaAceiteInter_AH=GetFloat(p_MasaAceiteInter_AH);
		CITempAceiteInter_AH=GetFloat(p_CITempAceiteInter_AH);
		PotMaxVentilador_AH=GetFloat(p_PotMaxVentilador_AH);
		TaoVentilador_AH=GetFloat(p_TaoVentilador_AH);
		CIPotVentilador_AH=GetFloat(p_CIPotVentilador_AH);
		PotMaxBomba_AH=GetFloat(p_PotMaxBomba_AH);
		TaoBomba_AH=GetFloat(p_TaoBomba_AH);
		CIPotBomba_AH=GetFloat(p_CIPotBomba_AH);
		VelocidadArranHidra=GetFloat(p_VelocidadArranHidra);
		VelocidadMaxAH=GetFloat(p_VelocidadMaxAH);
		TaoAH=GetFloat(p_TaoAH);
		CIVelArranHidra=GetFloat(p_CIVelArranHidra);
		TempMetalAH=GetFloat(p_TempMetalAH);
		hMetal_AH=GetFloat(p_hMetal_AH);
		Mmetal_AH=GetFloat(p_Mmetal_AH);
		CpMetal_AH476=GetFloat(p_CpMetal_AH476);
		ViscosidadAceite_AH=GetFloat(p_ViscosidadAceite_AH);
		eLub_AH=GetFloat(p_eLub_AH);
		AContac_AH=GetFloat(p_AContac_AH);
		Diametro_AH=GetFloat(p_Diametro_AH);
		CITempMetalAH=GetFloat(p_CITempMetalAH);
		TempAceiteAH=GetFloat(p_TempAceiteAH);
		MAceiteAH=GetFloat(p_MAceiteAH);
		CITempAceiteAH=GetFloat(p_CITempAceiteAH);
		Integral_AH=GetFloat(p_Integral_AH);
		CIInt_AH=GetFloat(p_CIInt_AH);
		Proporional_AH=GetFloat(p_Proporional_AH);
		IntPro_AH=GetFloat(p_IntPro_AH);
		errorPI_AH=GetFloat(p_errorPI_AH);
		Sat_AH=GetFloat(p_Sat_AH);
		Variador_AH=GetFloat(p_Variador_AH);
		CPI_AH=GetFloat(p_CPI_AH);
		LInf_AH=GetFloat(p_LInf_AH);
		LSup_AH=GetFloat(p_LSup_AH);
		SetPoint_AH=GetFloat(p_SetPoint_AH);
		ki_AH=GetFloat(p_ki_AH);
		kp_AH=GetFloat(p_kp_AH);
		Nivel_Tanque_AH=GetFloat(p_Nivel_Tanque_AH);
		PotenciaBomba_AH=GetFloat(p_PotenciaBomba_AH);
		PotenciaVentilador_AH=GetFloat(p_PotenciaVentilador_AH);
		PresionBombS_AH=GetFloat(p_PresionBombS_AH);
		FlujoBombS_AH=GetFloat(p_FlujoBombS_AH);
		PresionBombP_AH=GetFloat(p_PresionBombP_AH);
		FlujoBombP_AH=GetFloat(p_FlujoBombP_AH);
		TempAceiteIntercambiador_AH=GetFloat(p_TempAceiteIntercambiador_AH);
		TempAceiteInTank_AH=GetFloat(p_TempAceiteInTank_AH);
		FlujoOutInter_AH=GetFloat(p_FlujoOutInter_AH);
		VelocidadVentilador_AH=GetFloat(p_VelocidadVentilador_AH);
		Proporcional_AH=GetFloat(p_Proporcional_AH);
		TorqueAH=GetFloat(p_TorqueAH);
		DensidadAceite_AH=GetFloat(p_DensidadAceite_AH);
		Patm=GetFloat(p_Patm);
		Cp_agua=GetFloat(p_Cp_agua);
		VolEsp_agua=GetFloat(p_VolEsp_agua);
		Densidad_agua=GetFloat(p_Densidad_agua);
		CI_I=GetFloat(p_CI_I);
		Acc_I=GetFloat(p_Acc_I);
		Ap_valvula=GetFloat(p_Ap_valvula);
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
		PDSH64060=GetFloat(p_PDSH64060);
		PDSH64060_mmH2O=GetFloat(p_PDSH64060_mmH2O);
		PDSH64060_inH2O=GetFloat(p_PDSH64060_inH2O);
		PDSH64018=GetFloat(p_PDSH64018);
		TaoHexCarcasa=GetFloat(p_TaoHexCarcasa);
		WBombaA=GetFloat(p_WBombaA);
		PI_A=GetFloat(p_PI_A);
		CI_PA=GetFloat(p_CI_PA);
		PresionFinalBomba=GetFloat(p_PresionFinalBomba);
		Flujo_in_agua=GetFloat(p_Flujo_in_agua);
	
		Vel_maxBombaA=GetFloat(p_Vel_maxBombaA);
		Vel_BombaA=GetFloat(p_Vel_BombaA);
		VelI_A=GetFloat(p_VelI_A);
		CI_VelA=GetFloat(p_CI_VelA);
		Tao_bombaA=GetFloat(p_Tao_bombaA);
		ParInducidoMotorBomba=GetFloat(p_ParInducidoMotorBomba);
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
		TinHexAgua=GetFloat(p_TinHexAgua);
		Tem_fin_6450=GetFloat(p_Tem_fin_6450);
		//Tem_fin_6450p=GetFloat(p_Tem_fin_6450p);
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
		PresionFinalVenti=GetFloat(p_PresionFinalVenti);
		Tao_Ventilador=GetFloat(p_Tao_Ventilador);
		ParInducidoMotorVentilador=GetFloat(p_ParInducidoMotorVentilador);
		VelMaxVenti=GetFloat(p_VelMaxVenti);
		VelFinalVenti=GetFloat(p_VelFinalVenti);
		RadioMedio=GetFloat(p_RadioMedio);
		Angulos=GetFloat(p_Angulos);
		VelAireIn=GetFloat(p_VelAireIn);
		Area_Ventilador=GetFloat(p_Area_Ventilador);
		WVentiGen=GetFloat(p_WVentiGen);
		Dif_PI_VentiGen=GetFloat(p_Dif_PI_VentiGen);
		ParInducidoMotorVentiGen=GetFloat(p_ParInducidoMotorVentiGen);
		RadioMedioGen=GetFloat(p_RadioMedioGen);
		AngulosGen=GetFloat(p_AngulosGen);
		Area_VentiladorGen=GetFloat(p_Area_VentiladorGen);
		Flujo_Aire_inTur_B=GetFloat(p_Flujo_Aire_inTur_B);
		CI_VentiVelGen=GetFloat(p_CI_VentiVelGen);
		Tao_VentiGen=GetFloat(p_Tao_VentiGen);
		VelAireInGen=GetFloat(p_VelAireInGen);
		VelMaxVentiGen=GetFloat(p_VelMaxVentiGen);
		VelFinalVentiGen=GetFloat(p_VelFinalVentiGen);
		PDSL6407=GetFloat(p_PDSL6407);
		Cv=GetFloat(p_Cv);
		Cp=GetFloat(p_Cp);
		R_gas=GetFloat(p_R_gas);
		Tiempo=GetFloat(p_Tiempo);
		Flujo_in=GetFloat(p_Flujo_in);
		Tamb=GetFloat(p_Tamb);
		Humedadgasin=GetFloat(p_Humedadgasin);
		DensidadAgua=GetFloat(p_DensidadAgua);
		DensidadGas=GetFloat(p_DensidadGas);
		PresionSum=GetFloat(p_PresionSum);
		PresionSum_kg=GetFloat(p_PresionSum_kg);
		ViscosiGas=GetFloat(p_ViscosiGas);
		VelocidadGasin=GetFloat(p_VelocidadGasin);
		VelocidadGasin2=GetFloat(p_VelocidadGasin2);
		XvalControl1max=GetFloat(p_XvalControl1max);
		CIXvalControl1=GetFloat(p_CIXvalControl1);
		TaoXvalControl1=GetFloat(p_TaoXvalControl1);
		FlujoMax=GetFloat(p_FlujoMax);
		XvalControl1=GetFloat(p_XvalControl1);
		XvalControlv1max=GetFloat(p_XvalControlv1max);
		CIXvalControl_1_v1=GetFloat(p_CIXvalControl_1_v1);
		TaoXvalControl_1_v1=GetFloat(p_TaoXvalControl_1_v1);
		XvalControl_1_v1=GetFloat(p_XvalControl_1_v1);
		CIXvalControl_2_v1=GetFloat(p_CIXvalControl_2_v1);
		TaoXvalControl_2_v1=GetFloat(p_TaoXvalControl_2_v1);
		XvalControl_2_v1=GetFloat(p_XvalControl_2_v1);
		ki_CG=GetFloat(p_ki_CG);
		kp_CG=GetFloat(p_kp_CG);
		LInf_CG=GetFloat(p_LInf_CG);
		LSup_CG=GetFloat(p_LSup_CG);
		SPP_v1=GetFloat(p_SPP_v1);
		errorPI_CG=GetFloat(p_errorPI_CG);
		Acc_P_CG=GetFloat(p_Acc_P_CG);
		Acc_I_CG=GetFloat(p_Acc_I_CG);
		Acc_PI_CG=GetFloat(p_Acc_PI_CG);
		Ap_valvula_CG=GetFloat(p_Ap_valvula_CG);
		CI_I_CG=GetFloat(p_CI_I_CG);
		satu_CG=GetFloat(p_satu_CG);
		Valvula_control_CG=GetFloat(p_Valvula_control_CG);
		AreaTub=GetFloat(p_AreaTub);
		VolTanqueDepu1=GetFloat(p_VolTanqueDepu1);
		AreaTanqueDepu1=GetFloat(p_AreaTanqueDepu1);
		UTanqueDepu1=GetFloat(p_UTanqueDepu1);
		TemperaturaOutTanqueDepu1=GetFloat(p_TemperaturaOutTanqueDepu1);
		TemperaturaOutTanqueDepu1_C=GetFloat(p_TemperaturaOutTanqueDepu1_C);
		MasaTanqueDepu1=GetFloat(p_MasaTanqueDepu1);
		CIMasaTanqDepu1=GetFloat(p_CIMasaTanqDepu1);
		CITanqDepu1=GetFloat(p_CITanqDepu1);
		CI_PresionTanqueDepu1=GetFloat(p_CI_PresionTanqueDepu1);
		PresionTanqueDepu1_kg=GetFloat(p_PresionTanqueDepu1_kg);
		Eta_Fil1=GetFloat(p_Eta_Fil1);
		AreaFilTanqueDepu1=GetFloat(p_AreaFilTanqueDepu1);
		CIFIL1=GetFloat(p_CIFIL1);
		NivelTanqueDepu1=GetFloat(p_NivelTanqueDepu1);
		NivelTanqueDepu1mm=GetFloat(p_NivelTanqueDepu1mm);
		TaoTanqueDepu1=GetFloat(p_TaoTanqueDepu1);
		Flujo_outDepu1=GetFloat(p_Flujo_outDepu1);
		Flujo_purgaTanDepu1=GetFloat(p_Flujo_purgaTanDepu1);
		P_in=GetFloat(p_P_in);
		P_out=GetFloat(p_P_out);
		Temperatura_inTanqueDepu1=GetFloat(p_Temperatura_inTanqueDepu1);
		Temperatura_final_TanSuc1=GetFloat(p_Temperatura_final_TanSuc1);
		MasaTanqueSuc1=GetFloat(p_MasaTanqueSuc1);
		VolTanqueSuc1=GetFloat(p_VolTanqueSuc1);
		UTanqueSuc1=GetFloat(p_UTanqueSuc1);
		AreaTanqueSuc1=GetFloat(p_AreaTanqueSuc1);
		CIPresionOutTanSuc1=GetFloat(p_CIPresionOutTanSuc1);
		CITanqueSuc1=GetFloat(p_CITanqueSuc1);
		Flujo_OutTanSuc1=GetFloat(p_Flujo_OutTanSuc1);
		CIMasaTanSuc1=GetFloat(p_CIMasaTanSuc1);
		Temperatura_in=GetFloat(p_Temperatura_in);
		Masa1=GetFloat(p_Masa1);
		VelMaximaMotorCompresor=GetFloat(p_VelMaximaMotorCompresor);
		TaoMotorCompresor=GetFloat(p_TaoMotorCompresor);
		CIVelocidad=GetFloat(p_CIVelocidad);
		DiamFlechaMotor=GetFloat(p_DiamFlechaMotor);
		Temperatura_final_1ra=GetFloat(p_Temperatura_final_1ra);
		Temperatura_final_1ra_C=GetFloat(p_Temperatura_final_1ra_C);
		Trabajo_in1=GetFloat(p_Trabajo_in1);
		ParInducidoMotorComp1=GetFloat(p_ParInducidoMotorComp1);
		CIMotorCompresor=GetFloat(p_CIMotorCompresor);
		VelMotorCompresor=GetFloat(p_VelMotorCompresor);
		PresionIn1ra=GetFloat(p_PresionIn1ra);
		PresionOut1ra =GetFloat(p_PresionOut1ra );
		CI1ra=GetFloat(p_CI1ra);
		TaoComp1ra=GetFloat(p_TaoComp1ra);
		Eta_CIC=GetFloat(p_Eta_CIC);
		UTanqueExp=GetFloat(p_UTanqueExp);
		CITanqueExp=GetFloat(p_CITanqueExp);
		MasaTanqueExp=GetFloat(p_MasaTanqueExp);
		VolTanqueExp=GetFloat(p_VolTanqueExp);
		UTanqueDeExpa=GetFloat(p_UTanqueDeExpa);
		Temperatura_final_TanExp=GetFloat(p_Temperatura_final_TanExp);
		AreaTanqueExp=GetFloat(p_AreaTanqueExp);
		CIPresionOutTanExp=GetFloat(p_CIPresionOutTanExp);
		PresionOutTanExp_kg=GetFloat(p_PresionOutTanExp_kg);
		Temperatura_final_TanExp_C=GetFloat(p_Temperatura_final_TanExp_C);
		CIMasaTanqueExp=GetFloat(p_CIMasaTanqueExp);
		AreaHEX=GetFloat(p_AreaHEX);
		UHEX=GetFloat(p_UHEX);
		Temperatura_final_HEX=GetFloat(p_Temperatura_final_HEX);
		Temperatura_final_HEX_C=GetFloat(p_Temperatura_final_HEX_C);
		MasaHEX=GetFloat(p_MasaHEX);
		CIHEX1=GetFloat(p_CIHEX1);
		PresionOutHEX=GetFloat(p_PresionOutHEX);
		CI_Vel_Vent_HEX=GetFloat(p_CI_Vel_Vent_HEX);
		Tao_Vent_HEX=GetFloat(p_Tao_Vent_HEX);
		Vel_MAX_Vent_HEX=GetFloat(p_Vel_MAX_Vent_HEX);
		Velocidad_Ventilador_HEX=GetFloat(p_Velocidad_Ventilador_HEX);
		VolTanqueDepu2=GetFloat(p_VolTanqueDepu2);
		AreaTanqueDepu2=GetFloat(p_AreaTanqueDepu2);
		UTanqueDepu2=GetFloat(p_UTanqueDepu2);
		TemperaturaOutTanqueDepu2=GetFloat(p_TemperaturaOutTanqueDepu2);
		TemperaturaOutTanqueDepu2_C=GetFloat(p_TemperaturaOutTanqueDepu2_C);
		CIMasaTanqueDepu2=GetFloat(p_CIMasaTanqueDepu2);
		MasaTanqueDepu2=GetFloat(p_MasaTanqueDepu2);
		CITanqDepu2=GetFloat(p_CITanqDepu2);
		CIPresionTanqueDepu2=GetFloat(p_CIPresionTanqueDepu2);
		NivelTanqueDepu2=GetFloat(p_NivelTanqueDepu2);
		NivelTanqueDepu2mm=GetFloat(p_NivelTanqueDepu2mm);
		Eta_Fil2=GetFloat(p_Eta_Fil2);
		AreaFilTanqueDepu2=GetFloat(p_AreaFilTanqueDepu2);
		CIFIL2=GetFloat(p_CIFIL2);
		Temperatura_final_TanSuc2=GetFloat(p_Temperatura_final_TanSuc2);
		MasaTanqueSuc2=GetFloat(p_MasaTanqueSuc2);
		VolTanqueSuc2=GetFloat(p_VolTanqueSuc2);
		UTanqueSuc2=GetFloat(p_UTanqueSuc2);
		AreaTanqueSuc2=GetFloat(p_AreaTanqueSuc2);
		PresionOutTanSuc2=GetFloat(p_PresionOutTanSuc2);
		CITanqueSuc2=GetFloat(p_CITanqueSuc2);
		Masa2=GetFloat(p_Masa2);
		Temperatura_final_2da=GetFloat(p_Temperatura_final_2da);
		Temperatura_final_2da_C=GetFloat(p_Temperatura_final_2da_C);
		ParInducidoMotorComp2=GetFloat(p_ParInducidoMotorComp2);
		PresionIn2da=GetFloat(p_PresionIn2da);
		TaoComp2da=GetFloat(p_TaoComp2da);
		Trabajo_in2=GetFloat(p_Trabajo_in2);
		PresionOut2da =GetFloat(p_PresionOut2da );
		PresionOut2da_kg =GetFloat(p_PresionOut2da_kg );
		CI2da=GetFloat(p_CI2da);
		eficom2=GetFloat(p_eficom2);
		UTanqueExp2=GetFloat(p_UTanqueExp2);
		CITanqueExp2=GetFloat(p_CITanqueExp2);
		MasaTanqueExp2=GetFloat(p_MasaTanqueExp2);
		CIMasaTanqueExp2=GetFloat(p_CIMasaTanqueExp2);
		VolTanqueExp2=GetFloat(p_VolTanqueExp2);
		UTanqueDeExpa2=GetFloat(p_UTanqueDeExpa2);
		Temperatura_final_TanExp2=GetFloat(p_Temperatura_final_TanExp2);
		AreaTanqueExp2=GetFloat(p_AreaTanqueExp2);
		CIPresionOutTanExp2=GetFloat(p_CIPresionOutTanExp2);
		PresionOutTanExp2_kg=GetFloat(p_PresionOutTanExp2_kg);
		AreaTub2=GetFloat(p_AreaTub2);
		VelocidadGasin3=GetFloat(p_VelocidadGasin3);
		AreaHEX2=GetFloat(p_AreaHEX2);
		UHEX2=GetFloat(p_UHEX2);
		Temperatura_final_HEX2=GetFloat(p_Temperatura_final_HEX2);
		Temperatura_final_HEX2_C=GetFloat(p_Temperatura_final_HEX2_C);
		MasaHEX2=GetFloat(p_MasaHEX2);
		CIHEX2=GetFloat(p_CIHEX2);
		PresionOutHEX2=GetFloat(p_PresionOutHEX2);
		PresionOutHEX2_kg=GetFloat(p_PresionOutHEX2_kg);
		VolTanqueCoal_V3=GetFloat(p_VolTanqueCoal_V3);
		AreaTanqCoal_V3=GetFloat(p_AreaTanqCoal_V3);
		UFilCoal_V3=GetFloat(p_UFilCoal_V3);
		TempOutCoal_V3=GetFloat(p_TempOutCoal_V3);
		TempOutCoal_V3_C=GetFloat(p_TempOutCoal_V3_C);
		CIMasaTanqueCoal_V3=GetFloat(p_CIMasaTanqueCoal_V3);
		MasaTanqueCoal_V3=GetFloat(p_MasaTanqueCoal_V3);
		Eta_Coal_V3=GetFloat(p_Eta_Coal_V3);
		Eta_VANE=GetFloat(p_Eta_VANE);
		CITemCoal_V3=GetFloat(p_CITemCoal_V3);
		PresionTanqueCoal_V3_kg=GetFloat(p_PresionTanqueCoal_V3_kg);
		CIPresionTanqueCoal_V3=GetFloat(p_CIPresionTanqueCoal_V3);
		NivelCoal_V3=GetFloat(p_NivelCoal_V3);
		NivelCoal_V3mm=GetFloat(p_NivelCoal_V3mm);
		AreaFilTanqCoal_V3=GetFloat(p_AreaFilTanqCoal_V3);
		CICoal_V3=GetFloat(p_CICoal_V3);
		CICoal_V3B=GetFloat(p_CICoal_V3B);
		NivelCoal_V3B=GetFloat(p_NivelCoal_V3B);
		NivelCoal_V3Bmm=GetFloat(p_NivelCoal_V3Bmm);
		DifPresCoal_V3=GetFloat(p_DifPresCoal_V3);
		AreaFilTanqCoal_V082_1=GetFloat(p_AreaFilTanqCoal_V082_1);
		CICoal_FV082_1A=GetFloat(p_CICoal_FV082_1A);
		CICoal_FV082_1B=GetFloat(p_CICoal_FV082_1B);
		TempOutCoalFV082_1=GetFloat(p_TempOutCoalFV082_1);
		TempOutCoalFV082_1_C=GetFloat(p_TempOutCoalFV082_1_C);
		CITemCoalV082_1=GetFloat(p_CITemCoalV082_1);
		CIPre_Fil_FV082_1=GetFloat(p_CIPre_Fil_FV082_1);
		NivelCoalFV082_1A=GetFloat(p_NivelCoalFV082_1A);
		NivelCoalFV082_1Amm=GetFloat(p_NivelCoalFV082_1Amm);
		NivelCoalFV082_1B=GetFloat(p_NivelCoalFV082_1B);
		NivelCoalFV082_1Bmm=GetFloat(p_NivelCoalFV082_1Bmm);
		VolCoalV082_1=GetFloat(p_VolCoalV082_1);
		CIMasaCoalV082_1=GetFloat(p_CIMasaCoalV082_1);
		MasaCoalFV082_1=GetFloat(p_MasaCoalFV082_1);
		Eta_Coal_FV082_1A=GetFloat(p_Eta_Coal_FV082_1A);
		Eta_Coal_FV082_1B=GetFloat(p_Eta_Coal_FV082_1B);
		On_off_Filtro_FV082_1=GetFloat(p_On_off_Filtro_FV082_1);
		AreaTub3=GetFloat(p_AreaTub3);
		Longi_Filto_FV082=GetFloat(p_Longi_Filto_FV082);
		AreaFilTanqCoal_V082_2=GetFloat(p_AreaFilTanqCoal_V082_2);
		CICoal_FV082_2A=GetFloat(p_CICoal_FV082_2A);
		CICoal_FV082_2B=GetFloat(p_CICoal_FV082_2B);
		TempOutCoalFV082_2=GetFloat(p_TempOutCoalFV082_2);
		TempOutCoalFV082_2_C=GetFloat(p_TempOutCoalFV082_2_C);
		CITemCoalV082_2=GetFloat(p_CITemCoalV082_2);
		CIPre_Fil_FV082_2=GetFloat(p_CIPre_Fil_FV082_2);
		NivelCoalFV082_2A=GetFloat(p_NivelCoalFV082_2A);
		NivelCoalFV082_2Amm=GetFloat(p_NivelCoalFV082_2Amm);
		NivelCoalFV082_2B=GetFloat(p_NivelCoalFV082_2B);
		NivelCoalFV082_2Bmm=GetFloat(p_NivelCoalFV082_2Bmm);
		VolCoalV082_2=GetFloat(p_VolCoalV082_2);
		CIMasaCoalV082_2=GetFloat(p_CIMasaCoalV082_2);
		MasaCoalFV082_2=GetFloat(p_MasaCoalFV082_2);
		Eta_Coal_FV082_2A=GetFloat(p_Eta_Coal_FV082_2A);
		Eta_Coal_FV082_2B=GetFloat(p_Eta_Coal_FV082_2B);
		On_off_Filtro_FV082_2=GetFloat(p_On_off_Filtro_FV082_2);
		VelocidadGasout4=GetFloat(p_VelocidadGasout4);
		TaoCoal1=GetFloat(p_TaoCoal1);
		PermeabCoal1=GetFloat(p_PermeabCoal1);
		PDIS_082=GetFloat(p_PDIS_082);
		PDIS_082_psi=GetFloat(p_PDIS_082_psi);
		CI_HEX_LUB=GetFloat(p_CI_HEX_LUB);
		U_HEX_LUB=GetFloat(p_U_HEX_LUB);
		Area_HEX_LUB=GetFloat(p_Area_HEX_LUB);
		MasaAceite_HEX=GetFloat(p_MasaAceite_HEX);
		Vel_BombaAceite=GetFloat(p_Vel_BombaAceite);
		CI_VelAceiteceite=GetFloat(p_CI_VelAceiteceite);
		Tao_bombaAceite=GetFloat(p_Tao_bombaAceite);
		Vel_maxBombaA=GetFloat(p_Vel_maxBombaA);
		WBombaAceite=GetFloat(p_WBombaAceite);
		ParInducidoMotorBombaAceite=GetFloat(p_ParInducidoMotorBombaAceite);
		Flujo_in_aceite=GetFloat(p_Flujo_in_aceite);
		PresionFinalBombaAceite_kg=GetFloat(p_PresionFinalBombaAceite_kg);
		Densidad_aceite=GetFloat(p_Densidad_aceite);
		PI_Aceite=GetFloat(p_PI_Aceite);
		AreaChumaComp=GetFloat(p_AreaChumaComp);
		EspesorAceite=GetFloat(p_EspesorAceite);
		UChuma=GetFloat(p_UChuma);
		TempAceiteoutLubComp=GetFloat(p_TempAceiteoutLubComp);
		TempAceiteoutLubComp_C=GetFloat(p_TempAceiteoutLubComp_C);
		Temperatura_in_LubComp=GetFloat(p_Temperatura_in_LubComp);
		MasaLubComp=GetFloat(p_MasaLubComp);
		CILubComp=GetFloat(p_CILubComp);
		CpAceite=GetFloat(p_CpAceite);
		kg_kPa=GetFloat(p_kg_kPa);
		k_L_ln=GetFloat(p_k_L_ln);
		CIT_Chuma_3111A=GetFloat(p_CIT_Chuma_3111A);
		CIT_Chuma_3111B=GetFloat(p_CIT_Chuma_3111B);
		CIT_ChumEmpu_3113=GetFloat(p_CIT_ChumEmpu_3113);
		TemChum3111A=GetFloat(p_TemChum3111A);
		TemChum3111B=GetFloat(p_TemChum3111B);
		TemChumEmpu_3113=GetFloat(p_TemChumEmpu_3113);
		Visco_Aceite=GetFloat(p_Visco_Aceite);
		Area_Contacto=GetFloat(p_Area_Contacto);
		Diam_eje=GetFloat(p_Diam_eje);
		Espesor_Lub=GetFloat(p_Espesor_Lub);
		Cp_metal=GetFloat(p_Cp_metal);
		Masa_metal=GetFloat(p_Masa_metal);
		Avibra=GetFloat(p_Avibra);
		Bvibra=GetFloat(p_Bvibra);
		Cvibra=GetFloat(p_Cvibra);
		Dvibra=GetFloat(p_Dvibra);
		CIDesplazamiento=GetFloat(p_CIDesplazamiento);
		CIVelDes=GetFloat(p_CIVelDes);
		Desplazamiento=GetFloat(p_Desplazamiento);
		VelDesplazamiento=GetFloat(p_VelDesplazamiento);
		Apertura_Max_FCV62109=GetFloat(p_Apertura_Max_FCV62109);
		Segnal_FCV62109=GetFloat(p_Segnal_FCV62109);
		CI_Apertura_FCV62109=GetFloat(p_CI_Apertura_FCV62109);
		Tao_Valvula_FCV62109=GetFloat(p_Tao_Valvula_FCV62109);
		X_FCV62109=GetFloat(p_X_FCV62109);
		Falla_FCV62109=GetFloat(p_Falla_FCV62109);
		Onn_Off_FCV62109=GetFloat(p_Onn_Off_FCV62109);
		LSS2=GetFloat(p_LSS2);
		Apertura_Max_FCV62108=GetFloat(p_Apertura_Max_FCV62108);
		Segnal_FCV62108=GetFloat(p_Segnal_FCV62108);
		CI_Apertura_FCV62108=GetFloat(p_CI_Apertura_FCV62108);
		Tao_Valvula_FCV62108=GetFloat(p_Tao_Valvula_FCV62108);
		X_FCV62108=GetFloat(p_X_FCV62108);
		Onn_Off_FCV62108=GetFloat(p_Onn_Off_FCV62108);
		Apertura_Max_FCV62107=GetFloat(p_Apertura_Max_FCV62107);
		Segnal_FCV62107=GetFloat(p_Segnal_FCV62107);
		CI_Apertura_FCV62107=GetFloat(p_CI_Apertura_FCV62107);
		Tao_Valvula_FCV62107=GetFloat(p_Tao_Valvula_FCV62107);
		X_FCV62107=GetFloat(p_X_FCV62107);
		Onn_Off_FCV62107=GetFloat(p_Onn_Off_FCV62107);
		Flujo62109=GetFloat(p_Flujo62109);
		Apertura_Max_FSV62571=GetFloat(p_Apertura_Max_FSV62571);
		Segnal_FSV62571=GetFloat(p_Segnal_FSV62571);
		CI_Apertura_FSV62571=GetFloat(p_CI_Apertura_FSV62571);
		Tao_Valvula_FSV62571=GetFloat(p_Tao_Valvula_FSV62571);
		X_FSV62571=GetFloat(p_X_FSV62571);
		Onn_Off_FSV62571=GetFloat(p_Onn_Off_FSV62571);
		Flujo_FSV62571=GetFloat(p_Flujo_FSV62571);
		Apertura_Max_FSV62570=GetFloat(p_Apertura_Max_FSV62570);
		Segnal_FSV62570=GetFloat(p_Segnal_FSV62570);
		CI_Apertura_FSV62570=GetFloat(p_CI_Apertura_FSV62570);
		Tao_Valvula_FSV62570=GetFloat(p_Tao_Valvula_FSV62570);
		X_FSV62570=GetFloat(p_X_FSV62570);
		Onn_Off_FSV62570=GetFloat(p_Onn_Off_FSV62570);
		Flujo_FSV62570=GetFloat(p_Flujo_FSV62570);
		FlujoSOV6208 =GetFloat(p_FlujoSOV6208 );
		Apertura_Max_SOV6208=GetFloat(p_Apertura_Max_SOV6208);
		CI_Apertura_SOV6208 =GetFloat(p_CI_Apertura_SOV6208 );
		Tao_Valvula_SOV6208 =GetFloat(p_Tao_Valvula_SOV6208 );
		X_SOV6208 =GetFloat(p_X_SOV6208 );
		Segnal_SOV6208=GetFloat(p_Segnal_SOV6208);
		Onn_Off_SOV6208 =GetFloat(p_Onn_Off_SOV6208 );
		Flujo_FSV6204=GetFloat(p_Flujo_FSV6204);
		WF36DMD_SUM=GetFloat(p_WF36DMD_SUM);
		Apertura_Max_FSV6204=GetFloat(p_Apertura_Max_FSV6204);
		CI_Apertura_FSV6204=GetFloat(p_CI_Apertura_FSV6204);
		Tao_Valvula_FSV6204 =GetFloat(p_Tao_Valvula_FSV6204 );
		X_FSV6204=GetFloat(p_X_FSV6204);
		Segnal_FSV6204=GetFloat(p_Segnal_FSV6204);
		Onn_Off_FSV6204=GetFloat(p_Onn_Off_FSV6204);
		Flujo_FSV6249=GetFloat(p_Flujo_FSV6249);
		Apertura_Max_FSV6249 =GetFloat(p_Apertura_Max_FSV6249 );
		CI_Apertura_FSV6249 =GetFloat(p_CI_Apertura_FSV6249 );
		Tao_Valvula_FSV6249 =GetFloat(p_Tao_Valvula_FSV6249 );
		X_FSV6249 =GetFloat(p_X_FSV6249 );
		Segnal_FSV6249=GetFloat(p_Segnal_FSV6249);
		Onn_Off_FSV6249=GetFloat(p_Onn_Off_FSV6249);
		TE6232=GetFloat(p_TE6232);
		TE6232_F=GetFloat(p_TE6232_F);
		PI6214=GetFloat(p_PI6214);
		PI62139A=GetFloat(p_PI62139A);
		PI62140A=GetFloat(p_PI62140A);
		PI62141A=GetFloat(p_PI62141A);
		PI62139B=GetFloat(p_PI62139B);
		PI62140B=GetFloat(p_PI62140B);
		PI62141B=GetFloat(p_PI62141B);
		PI62136A=GetFloat(p_PI62136A);
		PI62137A=GetFloat(p_PI62137A);
		PI62138A=GetFloat(p_PI62138A);
		PI62136B=GetFloat(p_PI62136B);
		PI62137B=GetFloat(p_PI62137B);
		PI62138B=GetFloat(p_PI62138B);
		SOV62110=GetFloat(p_SOV62110);
		SOV62111=GetFloat(p_SOV62111);
		SOV62112=GetFloat(p_SOV62112);
		SOV62113=GetFloat(p_SOV62113);
		SOV62114=GetFloat(p_SOV62114);
		SOV62115=GetFloat(p_SOV62115);
		SOV62116=GetFloat(p_SOV62116);
		SOV62117=GetFloat(p_SOV62117);
		SOV62118=GetFloat(p_SOV62118);
		SOV62119=GetFloat(p_SOV62119);
		SOV62120=GetFloat(p_SOV62120);
		On_Off_SOV62110=GetFloat(p_On_Off_SOV62110);
		On_Off_SOV62111=GetFloat(p_On_Off_SOV62111);
		On_Off_SOV62112=GetFloat(p_On_Off_SOV62112);
		On_Off_SOV62113=GetFloat(p_On_Off_SOV62113);
		On_Off_SOV62114=GetFloat(p_On_Off_SOV62114);
		On_Off_SOV62115=GetFloat(p_On_Off_SOV62115);
		On_Off_SOV62116=GetFloat(p_On_Off_SOV62116);
		On_Off_SOV62117=GetFloat(p_On_Off_SOV62117);
		On_Off_SOV62118=GetFloat(p_On_Off_SOV62118);
		On_Off_SOV62119=GetFloat(p_On_Off_SOV62119);
		On_Off_SOV62120=GetFloat(p_On_Off_SOV62120);
		CI_Apertura_SOV62110=GetFloat(p_CI_Apertura_SOV62110);
		CI_Apertura_SOV62111=GetFloat(p_CI_Apertura_SOV62111);
		CI_Apertura_SOV62112=GetFloat(p_CI_Apertura_SOV62112);
		CI_Apertura_SOV62113=GetFloat(p_CI_Apertura_SOV62113);
		CI_Apertura_SOV62114=GetFloat(p_CI_Apertura_SOV62114);
		CI_Apertura_SOV62115=GetFloat(p_CI_Apertura_SOV62115);
		CI_Apertura_SOV62116=GetFloat(p_CI_Apertura_SOV62116);
		CI_Apertura_SOV62117=GetFloat(p_CI_Apertura_SOV62117);
		CI_Apertura_SOV62118=GetFloat(p_CI_Apertura_SOV62118);
		CI_Apertura_SOV62119=GetFloat(p_CI_Apertura_SOV62119);
		CI_Apertura_SOV62120=GetFloat(p_CI_Apertura_SOV62120);
		Tao_Valvula_SOV=GetFloat(p_Tao_Valvula_SOV);
		Apertura_Max_SOV=GetFloat(p_Apertura_Max_SOV);
		K_Val_FCV621=GetFloat(p_K_Val_FCV621);
		Flujo_FCV62107=GetFloat(p_Flujo_FCV62107);
		Flujo_FCV62109=GetFloat(p_Flujo_FCV62109);
		Flujo_FCV62108=GetFloat(p_Flujo_FCV62108);
		Flujo_SOV62111=GetFloat(p_Flujo_SOV62111);
		Flujo_SOV62113=GetFloat(p_Flujo_SOV62113);
		Flujo_SOV62116=GetFloat(p_Flujo_SOV62116);
		Flujo_SOV62118=GetFloat(p_Flujo_SOV62118);
		Flujo_SOV62120=GetFloat(p_Flujo_SOV62120);
		Flujo_SOV62115=GetFloat(p_Flujo_SOV62115);
		Flujo_toberas=GetFloat(p_Flujo_toberas);
		Flujo_SOV62110=GetFloat(p_Flujo_SOV62110);
		Flujo_SOV62112=GetFloat(p_Flujo_SOV62112);
		Flujo_SOV62114=GetFloat(p_Flujo_SOV62114);
		Flujo_SOV62117=GetFloat(p_Flujo_SOV62117);
		Flujo_SOV62119=GetFloat(p_Flujo_SOV62119);
		FallaVenti=GetFloat(p_FallaVenti);
		FallaComp=GetFloat(p_FallaComp);
		Apertura_Max_FCV64217=GetFloat(p_Apertura_Max_FCV64217);
		Segnal_FCV64217=GetFloat(p_Segnal_FCV64217);
		CI_Apertura_FCV64217=GetFloat(p_CI_Apertura_FCV64217);
		Tao_Valvula_FCV64217=GetFloat(p_Tao_Valvula_FCV64217);
		X_FCV64217=GetFloat(p_X_FCV64217);
		Onn_Off_FCV64217=GetFloat(p_Onn_Off_FCV64217);
		X_bioxidoR=GetFloat(p_X_bioxidoR);
		X_etano=GetFloat(p_X_etano);
		X_Ibutano=GetFloat(p_X_Ibutano);
		X_Ipentano=GetFloat(p_X_Ipentano);
		X_metano=GetFloat(p_X_metano);
		X_Nbutano=GetFloat(p_X_Nbutano);
		X_Neopentano=GetFloat(p_X_Neopentano);
		X_Nhexano=GetFloat(p_X_Nhexano);
		X_nitrogenoR=GetFloat(p_X_nitrogenoR);
		X_Npentano=GetFloat(p_X_Npentano);
		X_Propano=GetFloat(p_X_Propano);
		X_Oxigeno=GetFloat(p_X_Oxigeno);
		DH_Agua_V=GetFloat(p_DH_Agua_V);
		DH_bioxido=GetFloat(p_DH_bioxido);
		DH_Ibutano=GetFloat(p_DH_Ibutano);
		DH_metano=GetFloat(p_DH_metano);
		DH_Nbutano=GetFloat(p_DH_Nbutano);
		DH_Nhexano=GetFloat(p_DH_Nhexano);
		DH_nitrogeno=GetFloat(p_DH_nitrogeno);
		DH_Oxigeno=GetFloat(p_DH_Oxigeno);
		DH_Propano=GetFloat(p_DH_Propano);
		TemAmb=GetFloat(p_TemAmb);
		TemGas=GetFloat(p_TemGas);
		DH_Neopentano=GetFloat(p_DH_Neopentano);
		DH_Ipentano=GetFloat(p_DH_Ipentano);
		DH_Npentano=GetFloat(p_DH_Npentano);
		DH_etano=GetFloat(p_DH_etano);
		B_Agua=GetFloat(p_B_Agua);
		B_bioxido=GetFloat(p_B_bioxido);
		B_etano=GetFloat(p_B_etano);
		B_Ibutano=GetFloat(p_B_Ibutano);
		B_Ipentano=GetFloat(p_B_Ipentano);
		B_metano=GetFloat(p_B_metano);
		B_Nbutano=GetFloat(p_B_Nbutano);
		B_Neopentano=GetFloat(p_B_Neopentano);
		B_Nhexano=GetFloat(p_B_Nhexano);
		B_nitrogeno=GetFloat(p_B_nitrogeno);
		B_Npentano=GetFloat(p_B_Npentano);
		B_Propano=GetFloat(p_B_Propano);
		Cp_bioxido=GetFloat(p_Cp_bioxido);
		Cp_etano=GetFloat(p_Cp_etano);
		Cp_gas=GetFloat(p_Cp_gas);
		Cp_Ibutano=GetFloat(p_Cp_Ibutano);
		Cp_Ipentano=GetFloat(p_Cp_Ipentano);
		Cp_metano=GetFloat(p_Cp_metano);
		Cp_Nbutano=GetFloat(p_Cp_Nbutano);
		Cp_Neopentano=GetFloat(p_Cp_Neopentano);
		Cp_Nhexano=GetFloat(p_Cp_Nhexano);
		Cp_nitrogeno=GetFloat(p_Cp_nitrogeno);
		Cp_Npentano=GetFloat(p_Cp_Npentano);
		Cp_Propano=GetFloat(p_Cp_Propano);
		HF_Agua_V=GetFloat(p_HF_Agua_V);
		HF_bioxido=GetFloat(p_HF_bioxido);
		HF_etano=GetFloat(p_HF_etano);
		HF_Ibutano=GetFloat(p_HF_Ibutano);
		HF_Ipentano=GetFloat(p_HF_Ipentano);
		HF_metano=GetFloat(p_HF_metano);
		HF_Nbutano=GetFloat(p_HF_Nbutano);
		HF_Neopentano=GetFloat(p_HF_Neopentano);
		HF_Nhexano=GetFloat(p_HF_Nhexano);
		HF_Npentano=GetFloat(p_HF_Npentano);
		HF_Oxigeno=GetFloat(p_HF_Oxigeno);
		HF_Propano=GetFloat(p_HF_Propano);
		kJkg_Btulb=GetFloat(p_kJkg_Btulb);
		M_aire=GetFloat(p_M_aire);
		M_bioxido=GetFloat(p_M_bioxido);
		M_etano=GetFloat(p_M_etano);
		M_gas=GetFloat(p_M_gas);
		M_Ibutano=GetFloat(p_M_Ibutano);
		M_Ipentano=GetFloat(p_M_Ipentano);
		M_metano=GetFloat(p_M_metano);
		M_Nbutano=GetFloat(p_M_Nbutano);
		M_Neopentano=GetFloat(p_M_Neopentano);
		M_Nhexano=GetFloat(p_M_Nhexano);
		M_nitrogeno=GetFloat(p_M_nitrogeno);
		M_Npentano=GetFloat(p_M_Npentano);
		M_Propano=GetFloat(p_M_Propano);
		PCIp=GetFloat(p_PCIp);
		PreRef=GetFloat(p_PreRef);
		Pres_in=GetFloat(p_Pres_in);
		PreSatAgua=GetFloat(p_PreSatAgua);
		Rho_rel=GetFloat(p_Rho_rel);
		Rhoideal=GetFloat(p_Rhoideal);
		Ru=GetFloat(p_Ru);
		TRef=GetFloat(p_TRef);
		X_Agua_L=GetFloat(p_X_Agua_L);
		X_Agua_Sat=GetFloat(p_X_Agua_Sat);
		X_bioxidoP=GetFloat(p_X_bioxidoP);
		X_nitrogenoP=GetFloat(p_X_nitrogenoP);
		Z_Gas_humedo=GetFloat(p_Z_Gas_humedo);
		Z_Gas_seco=GetFloat(p_Z_Gas_seco);
		Cv_gas=GetFloat(p_Cv_gas);
		k_gas=GetFloat(p_k_gas);
		Rgas=GetFloat(p_Rgas);
		Rhoreal=GetFloat(p_Rhoreal);
		TemGasC=GetFloat(p_TemGasC);
		TemGasF=GetFloat(p_TemGasF);
		HOxigenoSY=GetFloat(p_HOxigenoSY);
		HnitrogenoSY=GetFloat(p_HnitrogenoSY);
		HbioxidoSY=GetFloat(p_HbioxidoSY);
		HNhexanoSY=GetFloat(p_HNhexanoSY);
		HPropanoSY=GetFloat(p_HPropanoSY);
		HmetanoSY=GetFloat(p_HmetanoSY);
		HNbutanoSY=GetFloat(p_HNbutanoSY);
		HIbutanoSY=GetFloat(p_HIbutanoSY);
		HNeopentanoSY=GetFloat(p_HNeopentanoSY);
		HIpentanoSY=GetFloat(p_HIpentanoSY);
		HNpentanoSY=GetFloat(p_HNpentanoSY);
		HetanoSY=GetFloat(p_HetanoSY);
		HAgua_L=GetFloat(p_HAgua_L);
		hhv=GetFloat(p_hhv);
		kJ_kCal=GetFloat(p_kJ_kCal);
		HF_Agua_L=GetFloat(p_HF_Agua_L);
		AC_masa=GetFloat(p_AC_masa);
		AC_mol=GetFloat(p_AC_mol);
		AG=GetFloat(p_AG);
		error6=GetFloat(p_error6);
		Exceso_MASICO_porciento=GetFloat(p_Exceso_MASICO_porciento);
		Exceso_MOLAR_porciento=GetFloat(p_Exceso_MOLAR_porciento);
		f_molar=GetFloat(p_f_molar);
		fMASICO=GetFloat(p_fMASICO);
		Hproductos=GetFloat(p_Hproductos);
		M_aire_kg_kmol=GetFloat(p_M_aire_kg_kmol);
		M_gas_kg_kmol=GetFloat(p_M_gas_kg_kmol);
		mairemax_kg_s=GetFloat(p_mairemax_kg_s);
		mairemax_kmol_s=GetFloat(p_mairemax_kmol_s);
		mgas_kg_s=GetFloat(p_mgas_kg_s);
		mgas_kmol_s=GetFloat(p_mgas_kmol_s);
		num_carbon=GetFloat(p_num_carbon);
		num_hidrogeno=GetFloat(p_num_hidrogeno);
		num_hidrogeno2=GetFloat(p_num_hidrogeno2);
		num_nitrogeno=GetFloat(p_num_nitrogeno);
		num_oxigeno=GetFloat(p_num_oxigeno);
		poli1suma=GetFloat(p_poli1suma);
		poli2suma=GetFloat(p_poli2suma);
		RAC_ideal_masa=GetFloat(p_RAC_ideal_masa);
		RAC_ideal_mol=GetFloat(p_RAC_ideal_mol);
		RACreal_masa=GetFloat(p_RACreal_masa);
		RACreal_mol=GetFloat(p_RACreal_mol);
		RCA_ideal_masa=GetFloat(p_RCA_ideal_masa);
		RCA_ideal_mol=GetFloat(p_RCA_ideal_mol);
		RCAreal_masa=GetFloat(p_RCAreal_masa);
		RCAreal_mol=GetFloat(p_RCAreal_mol);
		suma=GetFloat(p_suma);
		suma2=GetFloat(p_suma2);
		Temperatura=GetFloat(p_Temperatura);
		coef_esq[0]=GetFloat(pa_coef_esq);
		coef_esq[1]=GetFloat(pa_coef_esq +1);
		coef_esq[2]=GetFloat(pa_coef_esq +2);
		coef_esq[3]=GetFloat(pa_coef_esq +3);
		coef_esq[4]=GetFloat(pa_coef_esq +4);
		coef_esq[5]=GetFloat(pa_coef_esq +5);
		coef_esq[6]=GetFloat(pa_coef_esq +6);
		coef_esq[7]=GetFloat(pa_coef_esq +7);
		coef_esq[8]=GetFloat(pa_coef_esq +8);
		coef_esq[9]=GetFloat(pa_coef_esq +9);
		coef_esq[10]=GetFloat(pa_coef_esq +10);
		XCombustible[0]=GetFloat(pa_XCombustible +0);
		XCombustible[1]=GetFloat(pa_XCombustible +1);
		XCombustible[2]=GetFloat(pa_XCombustible +2);
		XCombustible[3]=GetFloat(pa_XCombustible +3);
		XCombustible[4]=GetFloat(pa_XCombustible +4);
		XCombustible[5]=GetFloat(pa_XCombustible +5);
		XCombustible[6]=GetFloat(pa_XCombustible +6);
		XCombustible[7]=GetFloat(pa_XCombustible +7);
		XCombustible[8]=GetFloat(pa_XCombustible +8);
		XCombustible[9]=GetFloat(pa_XCombustible +9);
		XCombustible[10]=GetFloat(pa_XCombustible +10);
		XCombustible[11]=GetFloat(pa_XCombustible +11);
		logk[0]=GetFloat(pa_logk +0);
		logk[1]=GetFloat(pa_logk +1);
		logk[2]=GetFloat(pa_logk +2);
		logk[3]=GetFloat(pa_logk +3);
		logk[4]=GetFloat(pa_logk +4);
		logk[5]=GetFloat(pa_logk +5);
		logk[6]=GetFloat(pa_logk +6);
		logk[7]=GetFloat(pa_logk +7);
		logk[8]=GetFloat(pa_logk +8);
		logk[9]=GetFloat(pa_logk +9);
		logk[10]=GetFloat(pa_logk +10);
		logk[11]=GetFloat(pa_logk +11);
		logk[12]=GetFloat(pa_logk +12);
		logk[13]=GetFloat(pa_logk +13);
		k[0]=GetFloat(pa_k+0);
		k[1]=GetFloat(pa_k+1);
		k[2]=GetFloat(pa_k+2);
		k[3]=GetFloat(pa_k+3);
		k[4]=GetFloat(pa_k+4);
		k[5]=GetFloat(pa_k+5);
		k[6]=GetFloat(pa_k+6);
		k[7]=GetFloat(pa_k+7);
		k[8]=GetFloat(pa_k+8);
		k[9]=GetFloat(pa_k+9);
		k[10]=GetFloat(pa_k+10);
		k[11]=GetFloat(pa_k+11);
		k[12]=GetFloat(pa_k+12);
		k[13]=GetFloat(pa_k+13);
		kj_mol[0]=GetFloat(pa_kj_mol+0);
		kj_mol[1]=GetFloat(pa_kj_mol+1);
		kj_mol[2]=GetFloat(pa_kj_mol+2);
		kj_mol[3]=GetFloat(pa_kj_mol+3);
		kj_mol[4]=GetFloat(pa_kj_mol+4);
		kj_mol[5]=GetFloat(pa_kj_mol+5);
		kj_mol[6]=GetFloat(pa_kj_mol+6);
		kj_mol[7]=GetFloat(pa_kj_mol+7);
		kj_mol[8]=GetFloat(pa_kj_mol+8);
		kj_mol[9]=GetFloat(pa_kj_mol+9);
		kj_mol[10]=GetFloat(pa_kj_mol+10);
		kj_mol[11]=GetFloat(pa_kj_mol+11);
		kj_mol[12]=GetFloat(pa_kj_mol+12);
		kj_mol[13]=GetFloat(pa_kj_mol+13);
		cal_mol[0]=GetFloat(pa_cal_mol+0);
		cal_mol[1]=GetFloat(pa_cal_mol+1);
		cal_mol[2]=GetFloat(pa_cal_mol+2);
		cal_mol[3]=GetFloat(pa_cal_mol+3);
		cal_mol[4]=GetFloat(pa_cal_mol+4);
		cal_mol[5]=GetFloat(pa_cal_mol+5);
		cal_mol[6]=GetFloat(pa_cal_mol+6);
		cal_mol[7]=GetFloat(pa_cal_mol+7);
		cal_mol[8]=GetFloat(pa_cal_mol+8);
		cal_mol[9]=GetFloat(pa_cal_mol+9);
		cal_mol[10]=GetFloat(pa_cal_mol+10);
		cal_mol[11]=GetFloat(pa_cal_mol+11);
		cal_mol[12]=GetFloat(pa_cal_mol+12);
		cal_mol[13]=GetFloat(pa_cal_mol+13);
		cal_mol[14]=GetFloat(pa_cal_mol+14);
		cal_mol[15]=GetFloat(pa_cal_mol+15);
		cal_mol[16]=GetFloat(pa_cal_mol+16);
		a1_Hcal[0]=GetFloat(pa_a1_Hcal+0);
		a1_Hcal[1]=GetFloat(pa_a1_Hcal+1);
		a1_Hcal[2]=GetFloat(pa_a1_Hcal+2);
		a1_Hcal[3]=GetFloat(pa_a1_Hcal+3);
		a1_Hcal[4]=GetFloat(pa_a1_Hcal+4);
		a1_Hcal[5]=GetFloat(pa_a1_Hcal+5);
		a1_Hcal[6]=GetFloat(pa_a1_Hcal+6);
		a1_Hcal[7]=GetFloat(pa_a1_Hcal+7);
		a1_Hcal[8]=GetFloat(pa_a1_Hcal+8);
		a1_Hcal[9]=GetFloat(pa_a1_Hcal+9);
		a1_Hcal[10]=GetFloat(pa_a1_Hcal+10);
		a1_Hcal[11]=GetFloat(pa_a1_Hcal+11);
		a1_Hcal[12]=GetFloat(pa_a1_Hcal+12);
		a1_Hcal[13]=GetFloat(pa_a1_Hcal+13);
		a1_Hcal[14]=GetFloat(pa_a1_Hcal+14);
		a1_Hcal[15]=GetFloat(pa_a1_Hcal+15);
		a1_Hcal[16]=GetFloat(pa_a1_Hcal+16);
		a2_Hcal[0]=GetFloat(pa_a2_Hcal+0);
		a2_Hcal[1]=GetFloat(pa_a2_Hcal+1);
		a2_Hcal[2]=GetFloat(pa_a2_Hcal+2);
		a2_Hcal[3]=GetFloat(pa_a2_Hcal+3);
		a2_Hcal[4]=GetFloat(pa_a2_Hcal+4);
		a2_Hcal[5]=GetFloat(pa_a2_Hcal+5);
		a2_Hcal[6]=GetFloat(pa_a2_Hcal+6);
		a2_Hcal[7]=GetFloat(pa_a2_Hcal+7);
		a2_Hcal[8]=GetFloat(pa_a2_Hcal+8);
		a2_Hcal[9]=GetFloat(pa_a2_Hcal+9);
		a2_Hcal[10]=GetFloat(pa_a2_Hcal+10);
		a2_Hcal[11]=GetFloat(pa_a2_Hcal+11);
		a2_Hcal[12]=GetFloat(pa_a2_Hcal+12);
		a2_Hcal[13]=GetFloat(pa_a2_Hcal+13);
		a2_Hcal[14]=GetFloat(pa_a2_Hcal+14);
		a2_Hcal[15]=GetFloat(pa_a2_Hcal+15);
		a2_Hcal[16]=GetFloat(pa_a2_Hcal+16);
		a3_Hcal[0]=GetFloat(pa_a3_Hcal+0);
		a3_Hcal[1]=GetFloat(pa_a3_Hcal+1);
		a3_Hcal[2]=GetFloat(pa_a3_Hcal+2);
		a3_Hcal[3]=GetFloat(pa_a3_Hcal+3);
		a3_Hcal[4]=GetFloat(pa_a3_Hcal+4);
		a3_Hcal[5]=GetFloat(pa_a3_Hcal+5);
		a3_Hcal[6]=GetFloat(pa_a3_Hcal+6);
		a3_Hcal[7]=GetFloat(pa_a3_Hcal+7);
		a3_Hcal[8]=GetFloat(pa_a3_Hcal+8);
		a3_Hcal[9]=GetFloat(pa_a3_Hcal+9);
		a3_Hcal[10]=GetFloat(pa_a3_Hcal+10);
		a3_Hcal[11]=GetFloat(pa_a3_Hcal+11);
		a3_Hcal[12]=GetFloat(pa_a3_Hcal+12);
		a3_Hcal[13]=GetFloat(pa_a3_Hcal+13);
		a3_Hcal[14]=GetFloat(pa_a3_Hcal+14);
		a3_Hcal[15]=GetFloat(pa_a3_Hcal+15);
		a3_Hcal[16]=GetFloat(pa_a3_Hcal+16);
		a4_Hcal[0]=GetFloat(pa_a4_Hcal+0);
		a4_Hcal[1]=GetFloat(pa_a4_Hcal+1);
		a4_Hcal[2]=GetFloat(pa_a4_Hcal+2);
		a4_Hcal[3]=GetFloat(pa_a4_Hcal+3);
		a4_Hcal[4]=GetFloat(pa_a4_Hcal+4);
		a4_Hcal[5]=GetFloat(pa_a4_Hcal+5);
		a4_Hcal[6]=GetFloat(pa_a4_Hcal+6);
		a4_Hcal[7]=GetFloat(pa_a4_Hcal+7);
		a4_Hcal[8]=GetFloat(pa_a4_Hcal+8);
		a4_Hcal[9]=GetFloat(pa_a4_Hcal+9);
		a4_Hcal[10]=GetFloat(pa_a4_Hcal+10);
		a4_Hcal[11]=GetFloat(pa_a4_Hcal+11);
		a4_Hcal[12]=GetFloat(pa_a4_Hcal+12);
		a4_Hcal[13]=GetFloat(pa_a4_Hcal+13);
		a4_Hcal[14]=GetFloat(pa_a4_Hcal+14);
		a4_Hcal[15]=GetFloat(pa_a4_Hcal+15);
		a4_Hcal[16]=GetFloat(pa_a4_Hcal+16);
		a5_Hcal[0]=GetFloat(pa_a5_Hcal+0);
		a5_Hcal[1]=GetFloat(pa_a5_Hcal+1);
		a5_Hcal[2]=GetFloat(pa_a5_Hcal+2);
		a5_Hcal[3]=GetFloat(pa_a5_Hcal+3);
		a5_Hcal[4]=GetFloat(pa_a5_Hcal+4);
		a5_Hcal[5]=GetFloat(pa_a5_Hcal+5);
		a5_Hcal[6]=GetFloat(pa_a5_Hcal+6);
		a5_Hcal[7]=GetFloat(pa_a5_Hcal+7);
		a5_Hcal[8]=GetFloat(pa_a5_Hcal+8);
		a5_Hcal[9]=GetFloat(pa_a5_Hcal+9);
		a5_Hcal[10]=GetFloat(pa_a5_Hcal+10);
		a5_Hcal[11]=GetFloat(pa_a5_Hcal+11);
		a5_Hcal[12]=GetFloat(pa_a5_Hcal+12);
		a5_Hcal[13]=GetFloat(pa_a5_Hcal+13);
		a5_Hcal[14]=GetFloat(pa_a5_Hcal+14);
		a5_Hcal[15]=GetFloat(pa_a5_Hcal+15);
		a5_Hcal[16]=GetFloat(pa_a5_Hcal+16);
		a6_Hcal[0]=GetFloat(pa_a6_Hcal+0);
		a6_Hcal[1]=GetFloat(pa_a6_Hcal+1);
		a6_Hcal[2]=GetFloat(pa_a6_Hcal+2);
		a6_Hcal[3]=GetFloat(pa_a6_Hcal+3);
		a6_Hcal[4]=GetFloat(pa_a6_Hcal+4);
		a6_Hcal[5]=GetFloat(pa_a6_Hcal+5);
		a6_Hcal[6]=GetFloat(pa_a6_Hcal+6);
		a6_Hcal[7]=GetFloat(pa_a6_Hcal+7);
		a6_Hcal[8]=GetFloat(pa_a6_Hcal+8);
		a6_Hcal[9]=GetFloat(pa_a6_Hcal+9);
		a6_Hcal[10]=GetFloat(pa_a6_Hcal+10);
		a6_Hcal[11]=GetFloat(pa_a6_Hcal+11);
		a6_Hcal[12]=GetFloat(pa_a6_Hcal+12);
		a6_Hcal[13]=GetFloat(pa_a6_Hcal+13);
		a6_Hcal[14]=GetFloat(pa_a6_Hcal+14);
		a6_Hcal[15]=GetFloat(pa_a6_Hcal+15);
		a6_Hcal[16]=GetFloat(pa_a6_Hcal+16);
		a7_Hcal[0]=GetFloat(pa_a7_Hcal+0);
		a7_Hcal[1]=GetFloat(pa_a7_Hcal+1);
		a7_Hcal[2]=GetFloat(pa_a7_Hcal+2);
		a7_Hcal[3]=GetFloat(pa_a7_Hcal+3);
		a7_Hcal[4]=GetFloat(pa_a7_Hcal+4);
		a7_Hcal[5]=GetFloat(pa_a7_Hcal+5);
		a7_Hcal[6]=GetFloat(pa_a7_Hcal+6);
		a7_Hcal[7]=GetFloat(pa_a7_Hcal+7);
		a7_Hcal[8]=GetFloat(pa_a7_Hcal+8);
		a7_Hcal[9]=GetFloat(pa_a7_Hcal+9);
		a7_Hcal[10]=GetFloat(pa_a7_Hcal+10);
		a7_Hcal[11]=GetFloat(pa_a7_Hcal+11);
		a7_Hcal[12]=GetFloat(pa_a7_Hcal+12);
		a7_Hcal[13]=GetFloat(pa_a7_Hcal+13);
		a7_Hcal[14]=GetFloat(pa_a7_Hcal+14);
		a7_Hcal[15]=GetFloat(pa_a7_Hcal+15);
		a7_Hcal[16]=GetFloat(pa_a7_Hcal+16);
		a1_Hen[0]=GetFloat(pa_a1_Hen+0);
		a1_Hen[1]=GetFloat(pa_a1_Hen+1);
		a1_Hen[2]=GetFloat(pa_a1_Hen+2);
		a1_Hen[3]=GetFloat(pa_a1_Hen+3);
		a1_Hen[4]=GetFloat(pa_a1_Hen+4);
		a1_Hen[5]=GetFloat(pa_a1_Hen+5);
		a1_Hen[6]=GetFloat(pa_a1_Hen+6);
		a1_Hen[7]=GetFloat(pa_a1_Hen+7);
		a1_Hen[8]=GetFloat(pa_a1_Hen+8);
		a1_Hen[9]=GetFloat(pa_a1_Hen+9);
		a1_Hen[10]=GetFloat(pa_a1_Hen+10);
		a1_Hen[11]=GetFloat(pa_a1_Hen+11);
		a1_Hen[12]=GetFloat(pa_a1_Hen+12);
		a1_Hen[13]=GetFloat(pa_a1_Hen+13);
		a1_Hen[14]=GetFloat(pa_a1_Hen+14);
		a1_Hen[15]=GetFloat(pa_a1_Hen+15);
		a1_Hen[16]=GetFloat(pa_a1_Hen+16);
		a2_Hen[0]=GetFloat(pa_a2_Hen+0);
		a2_Hen[1]=GetFloat(pa_a2_Hen+1);
		a2_Hen[2]=GetFloat(pa_a2_Hen+2);
		a2_Hen[3]=GetFloat(pa_a2_Hen+3);
		a2_Hen[4]=GetFloat(pa_a2_Hen+4);
		a2_Hen[5]=GetFloat(pa_a2_Hen+5);
		a2_Hen[6]=GetFloat(pa_a2_Hen+6);
		a2_Hen[7]=GetFloat(pa_a2_Hen+7);
		a2_Hen[8]=GetFloat(pa_a2_Hen+8);
		a2_Hen[9]=GetFloat(pa_a2_Hen+9);
		a2_Hen[10]=GetFloat(pa_a2_Hen+10);
		a2_Hen[11]=GetFloat(pa_a2_Hen+11);
		a2_Hen[12]=GetFloat(pa_a2_Hen+12);
		a2_Hen[13]=GetFloat(pa_a2_Hen+13);
		a2_Hen[14]=GetFloat(pa_a2_Hen+14);
		a2_Hen[15]=GetFloat(pa_a2_Hen+15);
		a2_Hen[16]=GetFloat(pa_a2_Hen+16);
		a3_Hen[0]=GetFloat(pa_a3_Hen+0);
		a3_Hen[1]=GetFloat(pa_a3_Hen+1);
		a3_Hen[2]=GetFloat(pa_a3_Hen+2);
		a3_Hen[3]=GetFloat(pa_a3_Hen+3);
		a3_Hen[4]=GetFloat(pa_a3_Hen+4);
		a3_Hen[5]=GetFloat(pa_a3_Hen+5);
		a3_Hen[6]=GetFloat(pa_a3_Hen+6);
		a3_Hen[7]=GetFloat(pa_a3_Hen+7);
		a3_Hen[8]=GetFloat(pa_a3_Hen+8);
		a3_Hen[9]=GetFloat(pa_a3_Hen+9);
		a3_Hen[10]=GetFloat(pa_a3_Hen+10);
		a3_Hen[11]=GetFloat(pa_a3_Hen+11);
		a3_Hen[12]=GetFloat(pa_a3_Hen+12);
		a3_Hen[13]=GetFloat(pa_a3_Hen+13);
		a3_Hen[14]=GetFloat(pa_a3_Hen+14);
		a3_Hen[15]=GetFloat(pa_a3_Hen+15);
		a3_Hen[16]=GetFloat(pa_a3_Hen+16);
		a4_Hen[0]=GetFloat(pa_a4_Hen+0);
		a4_Hen[1]=GetFloat(pa_a4_Hen+1);
		a4_Hen[2]=GetFloat(pa_a4_Hen+2);
		a4_Hen[3]=GetFloat(pa_a4_Hen+3);
		a4_Hen[4]=GetFloat(pa_a4_Hen+4);
		a4_Hen[5]=GetFloat(pa_a4_Hen+5);
		a4_Hen[6]=GetFloat(pa_a4_Hen+6);
		a4_Hen[7]=GetFloat(pa_a4_Hen+7);
		a4_Hen[8]=GetFloat(pa_a4_Hen+8);
		a4_Hen[9]=GetFloat(pa_a4_Hen+9);
		a4_Hen[10]=GetFloat(pa_a4_Hen+10);
		a4_Hen[11]=GetFloat(pa_a4_Hen+11);
		a4_Hen[12]=GetFloat(pa_a4_Hen+12);
		a4_Hen[13]=GetFloat(pa_a4_Hen+13);
		a4_Hen[14]=GetFloat(pa_a4_Hen+14);
		a4_Hen[15]=GetFloat(pa_a4_Hen+15);
		a4_Hen[16]=GetFloat(pa_a4_Hen+16);
		a5_Hen[0]=GetFloat(pa_a5_Hen+0);
		a5_Hen[1]=GetFloat(pa_a5_Hen+1);
		a5_Hen[2]=GetFloat(pa_a5_Hen+2);
		a5_Hen[3]=GetFloat(pa_a5_Hen+3);
		a5_Hen[4]=GetFloat(pa_a5_Hen+4);
		a5_Hen[5]=GetFloat(pa_a5_Hen+5);
		a5_Hen[6]=GetFloat(pa_a5_Hen+6);
		a5_Hen[7]=GetFloat(pa_a5_Hen+7);
		a5_Hen[8]=GetFloat(pa_a5_Hen+8);
		a5_Hen[9]=GetFloat(pa_a5_Hen+9);
		a5_Hen[10]=GetFloat(pa_a5_Hen+10);
		a5_Hen[11]=GetFloat(pa_a5_Hen+11);
		a5_Hen[12]=GetFloat(pa_a5_Hen+12);
		a5_Hen[13]=GetFloat(pa_a5_Hen+13);
		a5_Hen[14]=GetFloat(pa_a5_Hen+14);
		a5_Hen[15]=GetFloat(pa_a5_Hen+15);
		a5_Hen[16]=GetFloat(pa_a5_Hen+16);
		a6_Hen[0]=GetFloat(pa_a6_Hen+0);
		a6_Hen[1]=GetFloat(pa_a6_Hen+1);
		a6_Hen[2]=GetFloat(pa_a6_Hen+2);
		a6_Hen[3]=GetFloat(pa_a6_Hen+3);
		a6_Hen[4]=GetFloat(pa_a6_Hen+4);
		a6_Hen[5]=GetFloat(pa_a6_Hen+5);
		a6_Hen[6]=GetFloat(pa_a6_Hen+6);
		a6_Hen[7]=GetFloat(pa_a6_Hen+7);
		a6_Hen[8]=GetFloat(pa_a6_Hen+8);
		a6_Hen[9]=GetFloat(pa_a6_Hen+9);
		a6_Hen[10]=GetFloat(pa_a6_Hen+10);
		a6_Hen[11]=GetFloat(pa_a6_Hen+11);
		a6_Hen[12]=GetFloat(pa_a6_Hen+12);
		a6_Hen[13]=GetFloat(pa_a6_Hen+13);
		a6_Hen[14]=GetFloat(pa_a6_Hen+14);
		a6_Hen[15]=GetFloat(pa_a6_Hen+15);
		a6_Hen[16]=GetFloat(pa_a6_Hen+16);
		a7_Hen[0]=GetFloat(pa_a7_Hen+0);
		a7_Hen[1]=GetFloat(pa_a7_Hen+1);
		a7_Hen[2]=GetFloat(pa_a7_Hen+2);
		a7_Hen[3]=GetFloat(pa_a7_Hen+3);
		a7_Hen[4]=GetFloat(pa_a7_Hen+4);
		a7_Hen[5]=GetFloat(pa_a7_Hen+5);
		a7_Hen[6]=GetFloat(pa_a7_Hen+6);
		a7_Hen[7]=GetFloat(pa_a7_Hen+7);
		a7_Hen[8]=GetFloat(pa_a7_Hen+8);
		a7_Hen[9]=GetFloat(pa_a7_Hen+9);
		a7_Hen[10]=GetFloat(pa_a7_Hen+10);
		a7_Hen[11]=GetFloat(pa_a7_Hen+11);
		a7_Hen[12]=GetFloat(pa_a7_Hen+12);
		a7_Hen[13]=GetFloat(pa_a7_Hen+13);
		a7_Hen[14]=GetFloat(pa_a7_Hen+14);
		a7_Hen[15]=GetFloat(pa_a7_Hen+15);
		a7_Hen[16]=GetFloat(pa_a7_Hen+16);
		A1_KA[0]=GetFloat(pa_A1_KA+0);
		A1_KA[1]=GetFloat(pa_A1_KA+1);
		A1_KA[2]=GetFloat(pa_A1_KA+2);
		A1_KA[3]=GetFloat(pa_A1_KA+3);
		A1_KA[4]=GetFloat(pa_A1_KA+4);
		A1_KA[5]=GetFloat(pa_A1_KA+5);
		A1_KA[6]=GetFloat(pa_A1_KA+6);
		A1_KA[7]=GetFloat(pa_A1_KA+7);
		A1_KA[8]=GetFloat(pa_A1_KA+8);
		A1_KA[9]=GetFloat(pa_A1_KA+9);
		A1_KA[10]=GetFloat(pa_A1_KA+10);
		A1_KA[11]=GetFloat(pa_A1_KA+11);
		A1_KA[12]=GetFloat(pa_A1_KA+12);
		A1_KA[13]=GetFloat(pa_A1_KA+13);
		A1_KA[14]=GetFloat(pa_A1_KA+14);
		A1_KA[15]=GetFloat(pa_A1_KA+15);
		A1_KA[16]=GetFloat(pa_A1_KA+16);
		A2_KA[0]=GetFloat(pa_A2_KA+0);
		A2_KA[1]=GetFloat(pa_A2_KA+1);
		A2_KA[2]=GetFloat(pa_A2_KA+2);
		A2_KA[3]=GetFloat(pa_A2_KA+3);
		A2_KA[4]=GetFloat(pa_A2_KA+4);
		A2_KA[5]=GetFloat(pa_A2_KA+5);
		A2_KA[6]=GetFloat(pa_A2_KA+6);
		A2_KA[7]=GetFloat(pa_A2_KA+7);
		A2_KA[8]=GetFloat(pa_A2_KA+8);
		A2_KA[9]=GetFloat(pa_A2_KA+9);
		A2_KA[10]=GetFloat(pa_A2_KA+10);
		A2_KA[11]=GetFloat(pa_A2_KA+11);
		A2_KA[12]=GetFloat(pa_A2_KA+12);
		A2_KA[13]=GetFloat(pa_A2_KA+13);
		A2_KA[14]=GetFloat(pa_A2_KA+14);
		A2_KA[15]=GetFloat(pa_A2_KA+15);
		A2_KA[16]=GetFloat(pa_A2_KA+16);

		poli2[0]=GetFloat(pa_poli2+0);		
		poli2[1]=GetFloat(pa_poli2+1);		
		poli2[2]=GetFloat(pa_poli2+2);		
		poli2[3]=GetFloat(pa_poli2+3);		
		poli2[4]=GetFloat(pa_poli2+4);		
		poli2[5]=GetFloat(pa_poli2+5);		
		poli2[6]=GetFloat(pa_poli2+6);		
		poli2[7]=GetFloat(pa_poli2+7);		
		poli2[8]=GetFloat(pa_poli2+8);		
		poli2[9]=GetFloat(pa_poli2+9);		
		poli2[10]=GetFloat(pa_poli2+10);		
		poli2[11]=GetFloat(pa_poli2+11);		
		poli2[12]=GetFloat(pa_poli2+12);		
		poli2[13]=GetFloat(pa_poli2+13);		
		poli2[14]=GetFloat(pa_poli2+14);		
		poli2[15]=GetFloat(pa_poli2+15);		
		poli2[16]=GetFloat(pa_poli2+16);		


		poli1[0]=GetFloat(pa_poli1+0);		
		poli1[1]=GetFloat(pa_poli1+1);		
		poli1[2]=GetFloat(pa_poli1+2);		
		poli1[3]=GetFloat(pa_poli1+3);		
		poli1[4]=GetFloat(pa_poli1+4);		
		poli1[5]=GetFloat(pa_poli1+5);		
		poli1[6]=GetFloat(pa_poli1+6);		
		poli1[7]=GetFloat(pa_poli1+7);		
		poli1[8]=GetFloat(pa_poli1+8);		
		poli1[9]=GetFloat(pa_poli1+9);		
		poli1[10]=GetFloat(pa_poli1+10);		
		poli1[11]=GetFloat(pa_poli1+11);		
		poli1[12]=GetFloat(pa_poli1+12);		
		poli1[13]=GetFloat(pa_poli1+13);		
		poli1[14]=GetFloat(pa_poli1+14);		
		poli1[15]=GetFloat(pa_poli1+15);		
		poli1[16]=GetFloat(pa_poli1+16);	
		H_k[0]=GetFloat(pa_H_k+0);
		H_k[1]=GetFloat(pa_H_k+1);
		H_k[2]=GetFloat(pa_H_k+2);
		H_k[3]=GetFloat(pa_H_k+3);
		H_k[4]=GetFloat(pa_H_k+4);
		H_k[5]=GetFloat(pa_H_k+5);
		H_k[6]=GetFloat(pa_H_k+6);
		H_k[7]=GetFloat(pa_H_k+7);
		H_k[8]=GetFloat(pa_H_k+8);
		H_k[9]=GetFloat(pa_H_k+9);
		H_k[10]=GetFloat(pa_H_k+10);
		H_k[11]=GetFloat(pa_H_k+11);
		H_k[12]=GetFloat(pa_H_k+12);
		H_k[13]=GetFloat(pa_H_k+13);
		H_k[14]=GetFloat(pa_H_k+14);
		H_k[15]=GetFloat(pa_H_k+15);
		H_k[16]=GetFloat(pa_H_k+16);


		

		hc[0]=GetFloat(pa_hc+0);		
		hc[1]=GetFloat(pa_hc+1);		
		hc[2]=GetFloat(pa_hc+2);		
		hc[3]=GetFloat(pa_hc+3);		
		hc[4]=GetFloat(pa_hc+4);		
		hc[5]=GetFloat(pa_hc+5);		
		hc[6]=GetFloat(pa_hc+6);		
		hc[7]=GetFloat(pa_hc+7);		
		hc[8]=GetFloat(pa_hc+8);		
		hc[9]=GetFloat(pa_hc+9);		
		hc[10]=GetFloat(pa_hc+10);		
		hc[11]=GetFloat(pa_hc+11);		
		hc[12]=GetFloat(pa_hc+12);		
		hc[13]=GetFloat(pa_hc+13);		
		hc[14]=GetFloat(pa_hc+14);		
		hc[15]=GetFloat(pa_hc+15);		
		hc[16]=GetFloat(pa_hc+16);		

		C_Cp[0]=GetFloat(pa_C_Cp+0);
		C_Cp[1]=GetFloat(pa_C_Cp+1);
		C_Cp[2]=GetFloat(pa_C_Cp+2);
		C_Cp[3]=GetFloat(pa_C_Cp+3);
		C_Cp[4]=GetFloat(pa_C_Cp+4);
		C_Cp[5]=GetFloat(pa_C_Cp+5);
		C_Cp[6]=GetFloat(pa_C_Cp+6);
		C_Cp[7]=GetFloat(pa_C_Cp+7);
		C_Cp[8]=GetFloat(pa_C_Cp+8);

		A_Cp[0]=GetFloat(pa_A_Cp+0);
		A_Cp[1]=GetFloat(pa_A_Cp+1);
		A_Cp[2]=GetFloat(pa_A_Cp+2);
		A_Cp[3]=GetFloat(pa_A_Cp+3);
		A_Cp[4]=GetFloat(pa_A_Cp+4);
		A_Cp[5]=GetFloat(pa_A_Cp+5);
		A_Cp[6]=GetFloat(pa_A_Cp+6);
		A_Cp[7]=GetFloat(pa_A_Cp+7);
		A_Cp[8]=GetFloat(pa_A_Cp+8);

		B_Cp[0]=GetFloat(pa_B_Cp+0);
		B_Cp[1]=GetFloat(pa_B_Cp+1);
		B_Cp[2]=GetFloat(pa_B_Cp+2);
		B_Cp[3]=GetFloat(pa_B_Cp+3);
		B_Cp[4]=GetFloat(pa_B_Cp+4);
		B_Cp[5]=GetFloat(pa_B_Cp+5);
		B_Cp[6]=GetFloat(pa_B_Cp+6);
		B_Cp[7]=GetFloat(pa_B_Cp+7);
		B_Cp[8]=GetFloat(pa_B_Cp+8);

		h0_href[0]=GetFloat(pa_h0_href+0);
		h0_href[1]=GetFloat(pa_h0_href+1);
		h0_href[2]=GetFloat(pa_h0_href+2);
		h0_href[3]=GetFloat(pa_h0_href+3);
		h0_href[4]=GetFloat(pa_h0_href+4);
		h0_href[5]=GetFloat(pa_h0_href+5);
		h0_href[6]=GetFloat(pa_h0_href+6);
		h0_href[7]=GetFloat(pa_h0_href+7);
		h0_href[8]=GetFloat(pa_h0_href+8);

		h0_href_R[0]=GetFloat(pa_h0_href_R+0);
		h0_href_R[1]=GetFloat(pa_h0_href_R+1);
		h0_href_R[2]=GetFloat(pa_h0_href_R+2);
		h0_href_R[3]=GetFloat(pa_h0_href_R+3);
		h0_href_R[4]=GetFloat(pa_h0_href_R+4);
		h0_href_R[5]=GetFloat(pa_h0_href_R+5);
		h0_href_R[6]=GetFloat(pa_h0_href_R+6);
		h0_href_R[7]=GetFloat(pa_h0_href_R+7);
		h0_href_R[8]=GetFloat(pa_h0_href_R+8);

		A7_KA[0]=GetFloat(pa_A7_KA+0);
		A7_KA[1]=GetFloat(pa_A7_KA+1);
		A7_KA[2]=GetFloat(pa_A7_KA+2);
		A7_KA[3]=GetFloat(pa_A7_KA+3);
		A7_KA[4]=GetFloat(pa_A7_KA+4);
		A7_KA[5]=GetFloat(pa_A7_KA+5);
		A7_KA[6]=GetFloat(pa_A7_KA+6);
		A7_KA[7]=GetFloat(pa_A7_KA+7);
		A7_KA[8]=GetFloat(pa_A7_KA+8);
		A7_KA[9]=GetFloat(pa_A7_KA+9);
		A7_KA[10]=GetFloat(pa_A7_KA+10);
		A7_KA[11]=GetFloat(pa_A7_KA+11);
		A7_KA[12]=GetFloat(pa_A7_KA+12);
		A7_KA[13]=GetFloat(pa_A7_KA+13);
		A7_KA[14]=GetFloat(pa_A7_KA+14);
		A7_KA[15]=GetFloat(pa_A7_KA+15);
		A7_KA[16]=GetFloat(pa_A7_KA+16);

		A6_KA[0]=GetFloat(pa_A6_KA+0);
		A6_KA[1]=GetFloat(pa_A6_KA+1);
		A6_KA[2]=GetFloat(pa_A6_KA+2);
		A6_KA[3]=GetFloat(pa_A6_KA+3);
		A6_KA[4]=GetFloat(pa_A6_KA+4);
		A6_KA[5]=GetFloat(pa_A6_KA+5);
		A6_KA[6]=GetFloat(pa_A6_KA+6);
		A6_KA[7]=GetFloat(pa_A6_KA+7);
		A6_KA[8]=GetFloat(pa_A6_KA+8);
		A6_KA[9]=GetFloat(pa_A6_KA+9);
		A6_KA[10]=GetFloat(pa_A6_KA+10);
		A6_KA[11]=GetFloat(pa_A6_KA+11);
		A6_KA[12]=GetFloat(pa_A6_KA+12);
		A6_KA[13]=GetFloat(pa_A6_KA+13);
		A6_KA[14]=GetFloat(pa_A6_KA+14);
		A6_KA[15]=GetFloat(pa_A6_KA+15);
		A6_KA[16]=GetFloat(pa_A6_KA+16);


		A5_KA[0]=GetFloat(pa_A5_KA+0);
		A5_KA[1]=GetFloat(pa_A5_KA+1);
		A5_KA[2]=GetFloat(pa_A5_KA+2);
		A5_KA[3]=GetFloat(pa_A5_KA+3);
		A5_KA[4]=GetFloat(pa_A5_KA+4);
		A5_KA[5]=GetFloat(pa_A5_KA+5);
		A5_KA[6]=GetFloat(pa_A5_KA+6);
		A5_KA[7]=GetFloat(pa_A5_KA+7);
		A5_KA[8]=GetFloat(pa_A5_KA+8);
		A5_KA[9]=GetFloat(pa_A5_KA+9);
		A5_KA[10]=GetFloat(pa_A5_KA+10);
		A5_KA[11]=GetFloat(pa_A5_KA+11);
		A5_KA[12]=GetFloat(pa_A5_KA+12);
		A5_KA[13]=GetFloat(pa_A5_KA+13);
		A5_KA[14]=GetFloat(pa_A5_KA+14);
		A5_KA[15]=GetFloat(pa_A5_KA+15);
		A5_KA[16]=GetFloat(pa_A5_KA+16);

		A4_KA[0]=GetFloat(pa_A4_KA+0);
		A4_KA[1]=GetFloat(pa_A4_KA+1);
		A4_KA[2]=GetFloat(pa_A4_KA+2);
		A4_KA[3]=GetFloat(pa_A4_KA+3);
		A4_KA[4]=GetFloat(pa_A4_KA+4);
		A4_KA[5]=GetFloat(pa_A4_KA+5);
		A4_KA[6]=GetFloat(pa_A4_KA+6);
		A4_KA[7]=GetFloat(pa_A4_KA+7);
		A4_KA[8]=GetFloat(pa_A4_KA+8);
		A4_KA[9]=GetFloat(pa_A4_KA+9);
		A4_KA[10]=GetFloat(pa_A4_KA+10);
		A4_KA[11]=GetFloat(pa_A4_KA+11);
		A4_KA[12]=GetFloat(pa_A4_KA+12);
		A4_KA[13]=GetFloat(pa_A4_KA+13);
		A4_KA[14]=GetFloat(pa_A4_KA+14);
		A4_KA[15]=GetFloat(pa_A4_KA+15);
		A4_KA[16]=GetFloat(pa_A4_KA+16);

		A3_KA[0]=GetFloat(pa_A3_KA+0);
		A3_KA[1]=GetFloat(pa_A3_KA+1);
		A3_KA[2]=GetFloat(pa_A3_KA+2);
		A3_KA[3]=GetFloat(pa_A3_KA+3);
		A3_KA[4]=GetFloat(pa_A3_KA+4);
		A3_KA[5]=GetFloat(pa_A3_KA+5);
		A3_KA[6]=GetFloat(pa_A3_KA+6);
		A3_KA[7]=GetFloat(pa_A3_KA+7);
		A3_KA[8]=GetFloat(pa_A3_KA+8);
		A3_KA[9]=GetFloat(pa_A3_KA+9);
		A3_KA[10]=GetFloat(pa_A3_KA+10);
		A3_KA[11]=GetFloat(pa_A3_KA+11);
		A3_KA[12]=GetFloat(pa_A3_KA+12);
		A3_KA[13]=GetFloat(pa_A3_KA+13);
		A3_KA[14]=GetFloat(pa_A3_KA+14);
		A3_KA[15]=GetFloat(pa_A3_KA+15);
		A3_KA[16]=GetFloat(pa_A3_KA+16);

		CO2_comb=GetFloat(p_CO2_comb);
		bioxido_kj_mol=GetFloat(p_bioxido_kj_mol);
		etano_kj_mol=GetFloat(p_etano_kj_mol);
		Hreactivos=GetFloat(p_Hreactivos);
		i_butano_kj_mol=GetFloat(p_i_butano_kj_mol);
		i_pentano_kj_mol=GetFloat(p_i_pentano_kj_mol);
		metano_kj_mol=GetFloat(p_metano_kj_mol);
		n_butano_kj_mol=GetFloat(p_n_butano_kj_mol);
		n_hexano_kj_mol=GetFloat(p_n_hexano_kj_mol);
		n_pentano_kj_mol=GetFloat(p_n_pentano_kj_mol);
		neopentano_kj_mol=GetFloat(p_neopentano_kj_mol);
		Nitro_comb=GetFloat(p_Nitro_comb);
		Nitro_aire=GetFloat(p_Nitro_aire);
		nitrogeno_kj_mol=GetFloat(p_nitrogeno_kj_mol);
		nitrogeno2_kj_mol=GetFloat(p_nitrogeno2_kj_mol);
		O2_aire=GetFloat(p_O2_aire);
		oxigeno_kj_mol=GetFloat(p_oxigeno_kj_mol);
		propano_kj_mol=GetFloat(p_propano_kj_mol);
		T_ref=GetFloat(p_T_ref);
		Tref_h=GetFloat(p_Tref_h);
		Tref_flama=GetFloat(p_Tref_flama);
		TGSSEL=GetFloat(p_TGSSEL);
		T_aire_comb=GetFloat(p_T_aire_comb);
		H2_inicial=GetFloat(p_H2_inicial);
		H2O_inicial=GetFloat(p_H2O_inicial);
		CO2_inicial=GetFloat(p_CO2_inicial);
		N2_inicial=GetFloat(p_N2_inicial);
		error1=GetFloat(p_error1);
		error2=GetFloat(p_error2);
		error3=GetFloat(p_error3);
		error4=GetFloat(p_error4);
		O2_prod=GetFloat(p_O2_prod);
		Presion_comb_bar=GetFloat(p_Presion_comb_bar);
		CO_prod=GetFloat(p_CO_prod);
		C_prod=GetFloat(p_C_prod);
		rcomb_1=GetFloat(p_rcomb_1);
		rcomb_2=GetFloat(p_rcomb_2);
		rcomb_3=GetFloat(p_rcomb_3);
		rcomb_4=GetFloat(p_rcomb_4);
		CH4_prod=GetFloat(p_CH4_prod);
		x_res=GetFloat(p_x_res);
		HCN_prod=GetFloat(p_HCN_prod);
		C_B=GetFloat(p_C_B);
		C_C=GetFloat(p_C_C);
		C_H2=GetFloat(p_C_H2);
		CH4_B=GetFloat(p_CH4_B);
		CH4_C=GetFloat(p_CH4_C);
		CH4_H2=GetFloat(p_CH4_H2);
		CO_B=GetFloat(p_CO_B);
		CO_C=GetFloat(p_CO_C);
		CO_H2=GetFloat(p_CO_H2);
		O_prod=GetFloat(p_O_prod);
		F_com=GetFloat(p_F_com);
		FA_comb=GetFloat(p_FA_comb);
		FB_comb=GetFloat(p_FB_comb);
		G_comb=GetFloat(p_G_comb);
		O3_prod=GetFloat(p_O3_prod);
		HC_comb=GetFloat(p_HC_comb);
		H_H2=GetFloat(p_H_H2);
		H_prod=GetFloat(p_H_prod);
		HCN_B=GetFloat(p_HCN_B);
		HCN_C=GetFloat(p_HCN_C);
		HCN_D=GetFloat(p_HCN_D);
		HCN_H2=GetFloat(p_HCN_H2);
		J=GetFloat(p_J);
		N_D=GetFloat(p_N_D);
		NH3_D=GetFloat(p_NH3_D);
		NH3_H2=GetFloat(p_NH3_H2);
		NO_B=GetFloat(p_NO_B);
		NO_D=GetFloat(p_NO_D);
		NO_H2=GetFloat(p_NO_H2);
		NO2_B=GetFloat(p_NO2_B);
		NO2_D=GetFloat(p_NO2_D);
		NO2_H2=GetFloat(p_NO2_H2);
		O_B=GetFloat(p_O_B);
		O_H2=GetFloat(p_O_H2);
		O2_B=GetFloat(p_O2_B);
		O2_H2=GetFloat(p_O2_H2);
		O3_B=GetFloat(p_O3_B);
		O3_H2=GetFloat(p_O3_H2);
		OH_B=GetFloat(p_OH_B);
		OH_H2=GetFloat(p_OH_H2);
		OH_prod=GetFloat(p_OH_prod);
		R_CO=GetFloat(p_R_CO);
		R_HO=GetFloat(p_R_HO);
		R_NO=GetFloat(p_R_NO);
		NO_prod=GetFloat(p_NO_prod);
		NO2_prod=GetFloat(p_NO2_prod);
		NH3_prod=GetFloat(p_NH3_prod);
		HNO3_prod=GetFloat(p_HNO3_prod);
		N_prod=GetFloat(p_N_prod);
		aux2=GetFloat(p_aux2);
		constante1=GetFloat(p_constante1);
		d_gauss=GetFloat(p_d_gauss);
		error5=GetFloat(p_error5);
		FC_comb=GetFloat(p_FC_comb);
		FD_comb=GetFloat(p_FD_comb);
		GA_comb=GetFloat(p_GA_comb);
		GB_comb=GetFloat(p_GB_comb);
		GC_comb=GetFloat(p_GC_comb);
		GD_comb=GetFloat(p_GD_comb);
		HA_comb=GetFloat(p_HA_comb);
		HB_comb=GetFloat(p_HB_comb);
		H_comb=GetFloat(p_H_comb);
		HD_comb=GetFloat(p_HD_comb);
		J_comb=GetFloat(p_J_comb);
		JA_comb=GetFloat(p_JA_comb);
		JB_comb=GetFloat(p_JB_comb);
		JC_comb=GetFloat(p_JC_comb);
		JD_comb=GetFloat(p_JD_comb);
		N_H2=GetFloat(p_N_H2);
		Ni=GetFloat(p_Ni);
		Ta_Newton=GetFloat(p_Ta_Newton);
		Ti_Newton=GetFloat(p_Ti_Newton);
		Tx_Newton=GetFloat(p_Tx_Newton);
		C_a=GetFloat(p_C_a);
		F_a=GetFloat(p_F_a);
		NOx=GetFloat(p_NOx);
		Q_a=GetFloat(p_Q_a);
		Temperatura_C=GetFloat(p_Temperatura_C);
		Temperatura_F=GetFloat(p_Temperatura_F);
		U_a=GetFloat(p_U_a);
		V_a=GetFloat(p_V_a);
		TemRefCROMA=GetFloat(p_TemRefCROMA);
		HF_nitrogenoR=GetFloat(p_HF_nitrogenoR);
		X_Agua_V=GetFloat(p_X_Agua_V);
		X_Agua_Corregida=GetFloat(p_X_Agua_Corregida);
		X_NhexanoX=GetFloat(p_X_NhexanoX);
		X_PropanoX=GetFloat(p_X_PropanoX);
		X_IbutanoX=GetFloat(p_X_IbutanoX);
		X_NbutanoX=GetFloat(p_X_NbutanoX);
		X_NeopentanoX=GetFloat(p_X_NeopentanoX);
		X_IpentanoX=GetFloat(p_X_IpentanoX);
		X_NpentanoX=GetFloat(p_X_NpentanoX);
		X_nitrogenoRX=GetFloat(p_X_nitrogenoRX);
		X_metanoX=GetFloat(p_X_metanoX);
		X_bioxidoRX=GetFloat(p_X_bioxidoRX);
		X_etanoX=GetFloat(p_X_etanoX);
		X_OxigenoX=GetFloat(p_X_OxigenoX);
		M_Oxigeno=GetFloat(p_M_Oxigeno);
		M_Agua=GetFloat(p_M_Agua);
		B_Oxigeno=GetFloat(p_B_Oxigeno);
		B_aire=GetFloat(p_B_aire);
		Z_Aire_seco=GetFloat(p_Z_Aire_seco);
		Z_Aire_humedo=GetFloat(p_Z_Aire_humedo);
		suma_productos=GetFloat(p_suma_productos);
		error=GetFloat(p_error);
		C_1=GetFloat(p_C_1);
		H_1=GetFloat(p_H_1);
		O_1=GetFloat(p_O_1);
		N_1=GetFloat(p_N_1);
		T_nueva=GetFloat(p_T_nueva);
		h0_href_O2=GetFloat(p_h0_href_O2);
		n_C6H14_g=GetFloat(p_n_C6H14_g);
		C3H8_g=GetFloat(p_C3H8_g);
		i_C4H10_g=GetFloat(p_i_C4H10_g);
		n_C4H10_g=GetFloat(p_n_C4H10_g);
		neo_C5H12_g=GetFloat(p_neo_C5H12_g);
		i_C5H12_g=GetFloat(p_i_C5H12_g);
		n_C5H12_g=GetFloat(p_n_C5H12_g);
		N2=GetFloat(p_N2);
		CH4=GetFloat(p_CH4);
		CO2=GetFloat(p_CO2);
		C2H6_g=GetFloat(p_C2H6_g);
		O2=GetFloat(p_O2);
		NH3_B=GetFloat(p_NH3_B);
		iteracion=GetFloat(p_iteracion);
		num1=GetFloat(p_num1);
		num2=GetFloat(p_num2);
		TP_out_AND_STRT_MASK_PMP=GetFloat(p_TP_out_AND_STRT_MASK_PMP=10);
		TP_SFC_STEP_AUXFAN_DLY=GetFloat(p_TP_SFC_STEP_AUXFAN_DLY=10);
		TP_HYD_STRT_DLY_SD=GetFloat(p_TP_HYD_STRT_DLY_SD=10);
		TP_HYD_STRT_MOT1615=GetFloat(p_TP_HYD_STRT_MOT1615=12);
		NC_OFFSPDSEL=GetFloat(p_NC_OFFSPDSEL);
		NO_OFFSPDSEL=GetFloat(p_NO_OFFSPDSEL);
		OUT_OFFSPDSEL=GetFloat(p_OUT_OFFSPDSEL);
		NC_CSTSPD_SW=GetFloat(p_NC_CSTSPD_SW);
		NO_CSTSPD_SW=GetFloat(p_NO_CSTSPD_SW);
		OUT_CSTSPD_SW=GetFloat(p_OUT_CSTSPD_SW);
		CORE_ANALOG_N25SEL=GetFloat(p_CORE_ANALOG_N25SEL);
		NO_LIQ_GAS_2=GetFloat(p_NO_LIQ_GAS_2);
		NC_LIQ_GAS_2=GetFloat(p_NC_LIQ_GAS_2);
		OUT_LIQ_GAS_2=GetFloat(p_OUT_LIQ_GAS_2);
		TP_FL_DEL_TMR=GetFloat(p_TP_FL_DEL_TMR=20);
		TP_CRANK_TMR=GetFloat(p_TP_CRANK_TMR=30);
		TP_HYD_STRT_AUXCONTDLY=GetFloat(p_TP_HYD_STRT_AUXCONTDLY=5);
		TP_HYD_STRT_PDSHH1600D=GetFloat(p_TP_HYD_STRT_PDSHH1600D=5);
		TP_HYD_STRT_MOT1615DLY=GetFloat(p_TP_HYD_STRT_MOT1615DLY=13);

		Int_Ex=GetInt(p_Int_Ex);
		FallaVent_AH=GetInt(p_FallaVent_AH);
		FallaBomb_AH=GetInt(p_FallaBomb_AH);
		OnOffVentilador_AH=GetInt(p_OnOffVentilador_AH);
		OnOffBomba_AH=GetInt(p_OnOffBomba_AH);
		OnOffCalentador_AH=GetInt(p_OnOffCalentador_AH);
		OnOffBombaChiller=GetInt(p_OnOffBombaChiller);
		AutomaticoVent=GetInt(p_AutomaticoVent);
		ManualVent=GetInt(p_ManualVent);
		FallaVentilador=GetInt(p_FallaVentilador);
		onoffVentTurb=GetInt(p_onoffVentTurb);
		StartManualVent=GetInt(p_StartManualVent);
		StopManualVent=GetInt(p_StopManualVent);
		FallaVentiGen=GetInt(p_FallaVentiGen);
		AutomaticoVentGen=GetInt(p_AutomaticoVentGen);
		ManualVentGen=GetInt(p_ManualVentGen);
		onoffVentGen=GetInt(p_onoffVentGen);
		StartManualVentGen=GetInt(p_StartManualVentGen);
		StopManualVentGen=GetInt(p_StopManualVentGen);
		Calentamiento=GetInt(p_Calentamiento);
		Enfriamiento=GetInt(p_Enfriamiento);
		On_off_Valvula_YX106=GetInt(p_On_off_Valvula_YX106);
		onoffComp1ra=GetInt(p_onoffComp1ra);
		StartManual1ra=GetInt(p_StartManual1ra);
		StopManual1ra=GetInt(p_StopManual1ra);
		LocalRemoto1ra=GetInt(p_LocalRemoto1ra);
		Automatico1ra=GetInt(p_Automatico1ra);
		Manual1ra=GetInt(p_Manual1ra);
		FallaCompresor=GetInt(p_FallaCompresor);
		OnOff_Vent_HEX=GetInt(p_OnOff_Vent_HEX);
		Falla_Vent_HEX=GetInt(p_Falla_Vent_HEX);
		LocalRemotoLub=GetInt(p_LocalRemotoLub);
		AutomaticoBomLub=GetInt(p_AutomaticoBomLub);
		ManualBomLub=GetInt(p_ManualBomLub);
		FallaBomLub=GetInt(p_FallaBomLub);
		onoffBomLub=GetInt(p_onoffBomLub);
		StartManualBomLub=GetInt(p_StartManualBomLub);
		StopManualBomLub=GetInt(p_StopManualBomLub);

		FALSE_CLUTCH_Y=GetInt(p_FALSE_CLUTCH_Y);
		CORE_DIGITAL_FUELON=GetInt(p_CORE_DIGITAL_FUELON);
		SFC_STEP_RST_AND_ST=GetInt(p_SFC_STEP_RST_AND_ST);
		OUT_RESTRTMASK=GetInt(p_OUT_RESTRTMASK);
		SFC_STEP_AUXFAN_DLY=GetInt(p_SFC_STEP_AUXFAN_DLY);
		OUT_CLRPMPOR=GetInt(p_OUT_CLRPMPOR);
		SPEED_SW_COASTDOWN=GetInt(p_SPEED_SW_COASTDOWN);
		HYD_STRT_NOT_PMPON=GetInt(p_HYD_STRT_NOT_PMPON);
		OUT_CLUTCHOFF=GetInt(p_OUT_CLUTCHOFF);
		FALSE_SEL_OFF=GetInt(p_FALSE_SEL_OFF);
		OUT_MASK_ON=GetInt(p_OUT_MASK_ON);
		LATCH_DE1364LAT=GetInt(p_LATCH_DE1364LAT);
		ALARM_RESET=GetInt(p_ALARM_RESET);
		HYD_STRT_LSLL1601SD=GetInt(p_HYD_STRT_LSLL1601SD);
		FALSE_PROB_LAT=GetInt(p_FALSE_PROB_LAT);
		LATCH1_PROB_LAT=GetInt(p_LATCH1_PROB_LAT);
		OUT_PMP_OFF=GetInt(p_OUT_PMP_OFF);
		HYD_STRT_DE1364A=GetInt(p_HYD_STRT_DE1364A);
		HYD_STRT_TRIPPED=GetInt(p_HYD_STRT_TRIPPED);
		SFC_STEP_CRNKTMRDN=GetInt(p_SFC_STEP_CRNKTMRDN);
		SPEED_SW_N25GT4600=GetInt(p_SPEED_SW_N25GT4600);
		SHUTDOWN_FOURHRLOK=GetInt(p_SHUTDOWN_FOURHRLOK);
		SHUTDOWN_SDN_CORE=GetInt(p_SHUTDOWN_SDN_CORE);
		SFC_STEP_CRANKSTOP=GetInt(p_SFC_STEP_CRANKSTOP);
		SFC_STEP_ES_1=GetInt(p_SFC_STEP_ES_1);
		SFC_STEP_WWCRANK_11=GetInt(p_SFC_STEP_WWCRANK_11);
		OUT_KILL_PUMP=GetInt(p_OUT_KILL_PUMP);
		HYD_STRT_CNK_SEQPRM=GetInt(p_HYD_STRT_CNK_SEQPRM);
		LATCH_STRT_LATCH=GetInt(p_LATCH_STRT_LATCH);
		TRUE_MASK_PMP=GetInt(p_TRUE_MASK_PMP);
		OUT_MASK_PMP=GetInt(p_OUT_MASK_PMP);


		/*OUT_OUT_AND_STRT_MASK_PMP[5]=GetInt(p_OUT_OUT_AND_STRT_MASK_PMP[5]);
		Nout_AND_STRT_MASK_PMP=GetInt(p_Nout_AND_STRT_MASK_PMP);
		Nout_out_AND_STRT_MASK_PMP=GetInt(p_Nout_out_AND_STRT_MASK_PMP);
		HYD_STRT_DLY_SD=GetInt(p_HYD_STRT_DLY_SD);
		out_HYD_STRT_DLY_SD[5]=GetInt(p_out_HYD_STRT_DLY_SD[5]);
		HYD_STRT_MOT1615=GetInt(p_HYD_STRT_MOT1615);
		out_HYD_STRT_MOT1615[5]=GetInt(p_out_HYD_STRT_MOT1615[5]);
		CORE_DIGITAL_RESET=GetInt(p_CORE_DIGITAL_RESET);
		HYD_STRT_PSLL1605SD=GetInt(p_HYD_STRT_PSLL1605SD);
		HYD_STRT_PDSH1600SD=GetInt(p_HYD_STRT_PDSH1600SD);
		LATCH1_TRIPPED=GetInt(p_LATCH1_TRIPPED);
		HYD_STRT_NOTSTART=GetInt(p_HYD_STRT_NOTSTART);
		OUT_ST_A_OFFOR=GetInt(p_OUT_ST_A_OFFOR);
		SFC_STEP_STRTR_SPD=GetInt(p_SFC_STEP_STRTR_SPD);
		SFC_STEP_LO_SPD_OR=GetInt(p_SFC_STEP_LO_SPD_OR);
		HYD_STRT_PUMPONDLY=GetInt(p_HYD_STRT_PUMPONDLY);
		OUT_MASK_1=GetInt(p_OUT_MASK_1);
		SFC_STEP_HI_SPD_OR=GetInt(p_SFC_STEP_HI_SPD_OR);
		OUT_MASK_2=GetInt(p_OUT_MASK_2);
		FUEL_SYS_GAS100=GetInt(p_FUEL_SYS_GAS100);
		SFC_STEP_HIEST_SEL=GetInt(p_SFC_STEP_HIEST_SEL);
		OUT_MASK_3=GetInt(p_OUT_MASK_3);
		TRUE_LIQ_GAS_2=GetInt(p_TRUE_LIQ_GAS_2);
		OUT_N25COMP1=GetInt(p_OUT_N25COMP1);
		OUT_N25COMP2=GetInt(p_OUT_N25COMP2);
		HYD_STRT_MOV_UP_Z=GetInt(p_HYD_STRT_MOV_UP_Z);
		LT_N25COMP1=GetInt(p_LT_N25COMP1);
		GT_N25COMP1=GetInt(p_GT_N25COMP1);
		LT_N25COMP2=GetInt(p_LT_N25COMP2);
		GT_N25COMP2=GetInt(p_GT_N25COMP2);
		OUT_RATE_SEL1=GetInt(p_OUT_RATE_SEL1);
		OUT_RATE_SEL2=GetInt(p_OUT_RATE_SEL2);
		OUT_RATE_SEL3=GetInt(p_OUT_RATE_SEL3);
		HYD_STRT_MASK1=GetInt(p_HYD_STRT_MASK1);
		HYD_STRT_MASK3=GetInt(p_HYD_STRT_MASK3);
		OUT_FAIL_OR=GetInt(p_OUT_FAIL_OR);
		SPEED_SW_N25LT1200=GetInt(p_SPEED_SW_N25LT1200);
		SPEED_SW_N25LT1700=GetInt(p_SPEED_SW_N25LT1700);
		OUT_FLSPD_SW=GetInt(p_OUT_FLSPD_SW);
		HYD_STRT_STRT_LATCH=GetInt(p_HYD_STRT_STRT_LATCH);
		A1_A04_MPU_N25_MAX=GetInt(p_A1_A04_MPU_N25_MAX);
		OUT_N25LT200=GetInt(p_OUT_N25LT200);
		FALSE_N25LO_MASK=GetInt(p_FALSE_N25LO_MASK);
		OUT_N25LO_MASK=GetInt(p_OUT_N25LO_MASK);
		OUT_N25LT_DEL=GetInt(p_OUT_N25LT_DEL);
		SHUTDOWN_SD_RESET=GetInt(p_SHUTDOWN_SD_RESET);
		OUT_FAILTOACC=GetInt(p_OUT_FAILTOACC);
		FL_DEL_TMR=GetInt(p_FL_DEL_TMR);
		out_FL_DEL_TMR[5]=GetInt(p_out_FL_DEL_TMR[5]);
		CRANK_TMR=GetInt(p_CRANK_TMR);
		out_CRANK_TMR[5]=GetInt(p_out_CRANK_TMR[5]);
		HYD_STRT_STRT_FAIL1=GetInt(p_HYD_STRT_STRT_FAIL1);
		N1N34_BI_LSLL1601=GetInt(p_N1N34_BI_LSLL1601);
		N3N41_BI_HYD_ST_AUX=GetInt(p_N3N41_BI_HYD_ST_AUX);
		N1N34_BI_TSH1602=GetInt(p_N1N34_BI_TSH1602);
		N1N34_BI_TSH1603=GetInt(p_N1N34_BI_TSH1603);
		N1N34_BI_PDSHH1600=GetInt(p_N1N34_BI_PDSHH1600);
		N1N34_BI_PSLL1605=GetInt(p_N1N34_BI_PSLL1605);
		SFC_STEP_START_INIT=GetInt(p_SFC_STEP_START_INIT);
		SFC_STEP_CRANKING=GetInt(p_SFC_STEP_CRANKING);
		HYD_STRT_LSLL1601AL=GetInt(p_HYD_STRT_LSLL1601AL);
		HYD_STRT_AUXCNTFLT=GetInt(p_HYD_STRT_AUXCNTFLT);
		HYD_STRT_AUXCONTDLY=GetInt(p_HYD_STRT_AUXCONTDLY);
		HYD_STRT_PDSHH1600D=GetInt(p_HYD_STRT_PDSHH1600D);
		HYD_STRT_MOT1615DLY=GetInt(p_HYD_STRT_MOT1615DLY);
		HYD_STRT_STRTORCRNK=GetInt(p_HYD_STRT_STRTORCRNK);*/

   }




   void SETS()
   {
	    SetFloat (CITemCoalV082_2,p_CITemCoalV082_2);
		SetFloat (CICDPA,p_CICDPA);
		SetFloat (CIST8A,p_CIST8A);
		SetFloat (CITCCA,p_CITCCA);
		SetFloat (CITCCB,p_CITCCB);
		SetFloat (CITCTA,p_CITCTA);
		SetFloat (CITCTB,p_CITCTB);
		SetFloat (CITenf,p_CITenf);
		SetFloat (CITRCA,p_CITRCA);
		SetFloat (CITRCB,p_CITRCB);
		SetFloat (CITRTA,p_CITRTA);
		SetFloat (CITRTB,p_CITRTB);
		SetFloat (CIW_TA,p_CIW_TA);
		SetFloat (CIW_TB,p_CIW_TB);
		SetFloat (CIw1_TA,p_CIw1_TA);
		SetFloat (CIw1_TB,p_CIw1_TB);
		SetFloat (CI_Res_HE6888,p_CI_Res_HE6888);
		SetFloat (CIALFA1,p_CIALFA1);
		SetFloat (CIAREA1IGV,p_CIAREA1IGV);
		SetFloat (CIAREA1VBV,p_CIAREA1VBV);
		SetFloat (CIALFA1_CA,p_CIALFA1_CA);
		SetFloat (CIAREA1_CA,p_CIAREA1_CA);
		SetFloat (CIBETA3CA,p_CIBETA3CA);
		SetFloat (CI2TORQUE_TA,p_CI2TORQUE_TA);
		SetFloat (CIBETA3CB,p_CIBETA3CB);
		SetFloat (CIFCV68127,p_CIFCV68127);
		SetFloat (CIFCV68128,p_CIFCV68128);
		SetFloat (CIFCV6871,p_CIFCV6871);
		SetFloat (CIFCV6872,p_CIFCV6872);
		SetFloat (CIFCV6873,p_CIFCV6873);
		SetFloat (CITORQUE_TA,p_CITORQUE_TA);
		SetFloat (CISenalCarga,p_CISenalCarga);
		SetFloat (CIIEx_GE,p_CIIEx_GE);
		SetFloat (CIVFaseA_GE,p_CIVFaseA_GE);
		SetFloat (CIVFaseB_GE,p_CIVFaseB_GE);
		SetFloat (CIVFaseC_GE,p_CIVFaseC_GE);
		SetFloat (CINivelTanque_AH,p_CINivelTanque_AH);
		SetFloat (CITempAceiteTanque_AH,p_CITempAceiteTanque_AH);
		SetFloat (CITempAceiteInter_AH,p_CITempAceiteInter_AH);
		SetFloat (CIPotVentilador_AH,p_CIPotVentilador_AH);
		SetFloat (CIPotBomba_AH,p_CIPotBomba_AH);
		SetFloat (CIVelArranHidra,p_CIVelArranHidra);
		SetFloat (CITempMetalAH,p_CITempMetalAH);
		SetFloat (CITempAceiteAH,p_CITempAceiteAH);
		SetFloat (CIInt_AH,p_CIInt_AH);
		SetFloat (CI_I,p_CI_I);
		SetFloat (CI_PA,p_CI_PA);
		SetFloat (CI_VelA,p_CI_VelA);
		SetFloat (CICale,p_CICale);
		SetFloat (CIRes,p_CIRes);
		SetFloat (CIEvap,p_CIEvap);
		SetFloat (CI_Potencia_frigorifica,p_CI_Potencia_frigorifica);
		SetFloat (CIAireVentA,p_CIAireVentA);
		SetFloat (CITem6402,p_CITem6402);
		SetFloat (CIAireVentB,p_CIAireVentB);
		SetFloat (CIAireA,p_CIAireA);
		SetFloat (CIAireB,p_CIAireB);
		SetFloat (CIAire_Turbina,p_CIAire_Turbina);
		SetFloat (CIMasaTurbina,p_CIMasaTurbina);
		SetFloat (CI_PI_Venti,p_CI_PI_Venti);
		SetFloat (CI_VentiVel,p_CI_VentiVel);
		SetFloat (CI_VentiVelGen,p_CI_VentiVelGen);
		SetFloat (CIXvalControl1,p_CIXvalControl1);
		SetFloat (CIXvalControl_1_v1,p_CIXvalControl_1_v1);
		SetFloat (CIXvalControl_2_v1,p_CIXvalControl_2_v1);
		SetFloat (CIMasaTanqDepu1,p_CIMasaTanqDepu1);
		SetFloat (CITanqDepu1,p_CITanqDepu1);
		SetFloat (CI_PresionTanqueDepu1,p_CI_PresionTanqueDepu1);
		SetFloat (CIFIL1,p_CIFIL1);
		SetFloat (CIPresionOutTanSuc1,p_CIPresionOutTanSuc1);
		SetFloat (CITanqueSuc1,p_CITanqueSuc1);
		SetFloat (CIMasaTanSuc1,p_CIMasaTanSuc1);
		SetFloat (CIVelocidad,p_CIVelocidad);
		SetFloat (CIMotorCompresor,p_CIMotorCompresor);
		SetFloat (CI1ra,p_CI1ra);
		SetFloat (CITanqueExp,p_CITanqueExp);
		SetFloat (CIPresionOutTanExp,p_CIPresionOutTanExp);
		SetFloat (CIMasaTanqueExp,p_CIMasaTanqueExp);
		SetFloat (CIHEX1,p_CIHEX1);
		SetFloat (CI_Vel_Vent_HEX,p_CI_Vel_Vent_HEX);
		SetFloat (CIMasaTanqueDepu2,p_CIMasaTanqueDepu2);
		SetFloat (CITanqDepu2,p_CITanqDepu2);
		SetFloat (CIPresionTanqueDepu2,p_CIPresionTanqueDepu2);
		SetFloat (CIFIL2,p_CIFIL2);
		SetFloat (CITanqueSuc2,p_CITanqueSuc2);
		SetFloat (CI2da,p_CI2da);
		SetFloat (CITanqueExp2,p_CITanqueExp2);
		SetFloat (CIMasaTanqueExp2,p_CIMasaTanqueExp2);
		SetFloat (CIPresionOutTanExp2,p_CIPresionOutTanExp2);
		SetFloat (CIHEX2,p_CIHEX2);
		SetFloat (CIMasaTanqueCoal_V3,p_CIMasaTanqueCoal_V3);
		SetFloat (CITemCoal_V3,p_CITemCoal_V3);
		SetFloat (CIPresionTanqueCoal_V3,p_CIPresionTanqueCoal_V3);
		SetFloat (CICoal_V3,p_CICoal_V3);
		SetFloat (CICoal_V3B,p_CICoal_V3B);
		SetFloat (CICoal_FV082_1A,p_CICoal_FV082_1A);
		SetFloat (CICoal_FV082_1B,p_CICoal_FV082_1B);
		SetFloat (CITemCoalV082_1,p_CITemCoalV082_1);
		SetFloat (CIPre_Fil_FV082_1,p_CIPre_Fil_FV082_1);
		SetFloat (CIMasaCoalV082_1,p_CIMasaCoalV082_1);
		SetFloat (CICoal_FV082_2A,p_CICoal_FV082_2A);
		SetFloat (CICoal_FV082_2B,p_CICoal_FV082_2B);
		SetFloat (CITemCoalV082_2,p_CITemCoalV082_2);
		SetFloat (CIPre_Fil_FV082_2,p_CIPre_Fil_FV082_2);
		SetFloat (CIMasaCoalV082_2,p_CIMasaCoalV082_2);
		SetFloat (CI_HEX_LUB,p_CI_HEX_LUB);
		SetFloat (CI_VelAceiteceite,p_CI_VelAceiteceite);
		SetFloat (CILubComp,p_CILubComp);
		SetFloat (CIT_Chuma_3111A,p_CIT_Chuma_3111A);
		SetFloat (CIT_Chuma_3111B,p_CIT_Chuma_3111B);
		SetFloat (CIT_ChumEmpu_3113,p_CIT_ChumEmpu_3113);
		SetFloat (CIDesplazamiento,p_CIDesplazamiento);
		SetFloat (CIVelDes,p_CIVelDes);
		SetFloat (CI_Apertura_FCV62109,p_CI_Apertura_FCV62109);
		SetFloat (CI_Apertura_FCV62108,p_CI_Apertura_FCV62108);
		SetFloat (CI_Apertura_FCV62107,p_CI_Apertura_FCV62107);
		SetFloat (CI_Apertura_FSV62571,p_CI_Apertura_FSV62571);
		SetFloat (CI_Apertura_FSV62570,p_CI_Apertura_FSV62570);
		SetFloat (CI_Apertura_SOV6208 ,p_CI_Apertura_SOV6208 );
		SetFloat (CI_Apertura_FSV6204,p_CI_Apertura_FSV6204);
		SetFloat (CI_Apertura_FSV6249 ,p_CI_Apertura_FSV6249 );
		SetFloat (CI_Apertura_SOV62110,p_CI_Apertura_SOV62110);
		SetFloat (CI_Apertura_SOV62111,p_CI_Apertura_SOV62111);
		SetFloat (CI_Apertura_SOV62112,p_CI_Apertura_SOV62112);
		SetFloat (CI_Apertura_SOV62113,p_CI_Apertura_SOV62113);
		SetFloat (CI_Apertura_SOV62114,p_CI_Apertura_SOV62114);
		SetFloat (CI_Apertura_SOV62115,p_CI_Apertura_SOV62115);
		SetFloat (CI_Apertura_SOV62116,p_CI_Apertura_SOV62116);
		SetFloat (CI_Apertura_SOV62117,p_CI_Apertura_SOV62117);
		SetFloat (CI_Apertura_SOV62118,p_CI_Apertura_SOV62118);
		SetFloat (CI_Apertura_SOV62119,p_CI_Apertura_SOV62119);
		SetFloat (CI_Apertura_SOV62120,p_CI_Apertura_SOV62120);
		SetFloat (CI_Apertura_FCV64217,p_CI_Apertura_FCV64217);

   }
	   
//-------------------------------------------------------------------
// Verificar tipo e inicialización
//-------------------------------------------------------------------


//*********************************************************************************************************//

//**********************************************************************************************************************//

//Aqui se declaran todas las funciones del programa.

///////////////////////////TURBOGRUPO//////////////////////////////////////////

double Temperatura_Rotor_Compresor_de_Alta(double TgCA, double U1RCA, double TCCA, double U2RCA, double TRTA, double U3RCA, double Tlub, double mRCA, double CPmaterial, double CITRCA)
{
	int j;
  double x[26];
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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
  double h=0.05/25;
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

double Temperatura_de_Aire_en_el_Habitaculo(double PowResistencia,double U1enf, double TCTB, double U2enf, double TCCB, double FMaire, double Tchiller, double U3enf, double TCTA, double U4enf, double TCCA, double menf, double CPaire, double CITenf)
{
  int j;
  double x[26];
  double h=0.05/100;
  double k1,k2,k3,k4;

  x[0] = CITenf;

  for(j=1;j<25;j++)
  {

    k1 = (PowResistencia + U1enf * (TCTB - x[j-1]) + U2enf * (TCCB - x[j-1]) + FMaire * CPaire * (Tchiller - x[j-1]) + U3enf *(TCTA - x[j-1]) + U4enf * (TCCA -x[j-1])) / (menf * CPaire);
    k2 = (PowResistencia + U1enf * (TCTB - (x[j-1]+ ((h/2)* k1))) + U2enf * (TCCB - (x[j-1]+ ((h/2)* k1))) + FMaire * CPaire * (Tchiller - (x[j-1]+ ((h/2)* k1))) + U3enf *(TCTA - (x[j-1]+ ((h/2)* k1))) + U4enf * (TCCA -(x[j-1]+ ((h/2)* k1)))) / (menf * CPaire);
    k3 = (PowResistencia + U1enf * (TCTB - (x[j-1]+ ((h/2)* k2))) + U2enf * (TCCB - (x[j-1]+ ((h/2)* k2))) + FMaire * CPaire * (Tchiller - (x[j-1]+ ((h/2)* k2))) + U3enf *(TCTA - (x[j-1]+ ((h/2)* k2))) + U4enf * (TCCA -(x[j-1]+ ((h/2)* k2)))) / (menf * CPaire);
    k4 = (PowResistencia + U1enf * (TCTB - (x[j-1]+ (h*k3))) + U2enf * (TCCB - (x[j-1]+ (h*k3))) + FMaire * CPaire * (Tchiller - (x[j-1]+ (h*k3))) + U3enf *(TCTA - (x[j-1]+ (h*k3))) + U4enf * (TCCA -(x[j-1]+ (h*k3)))) / (menf * CPaire);
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



double TORQUETA(double K_ADECUACION_K1_ROTOR1_TA, double T_Giro_TA, double TAO_TA_ROTOR_1,double CONTROL_TA_TORQUE_1, double CIw1_TA)
{
	int j; 
  double x[26];
  double h=0.05/25;
  double k1,k2,k3,k4;

  x[0]=CIw1_TA;

  for (j=1;j<25;j++){
    k1= (T_Giro_TA*K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-x[j-1])/TAO_TA_ROTOR_1;
    k2= (T_Giro_TA*K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h/2)*k1)))/TAO_TA_ROTOR_1;
    k3= (T_Giro_TA*K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h/2)*k2)))/TAO_TA_ROTOR_1;  
    k4= (T_Giro_TA*K_ADECUACION_K1_ROTOR1_TA*CONTROL_TA_TORQUE_1-(x[j-1]+((h)*k3)))/TAO_TA_ROTOR_1;

      x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
		}
	 if (CIw1_TA<0.0001)
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

      x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
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
double BETA_3_CONTROLCB (double K_ADECUACION_BETA3_CB,double BETA3_CONTROL_CB,double TAO_BETA3_CB,double CIBETA3CB){

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

      x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
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

      x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
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





////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////

double Temperatura_Generador(double I, double R, double Ugen, double Taire,double Tao_TempGE, double CITGE){
  int j;
  double x[26];
  double h = 0.05 / 25;
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
  double h = 0.05 / 25;
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
  double h = 0.05 / 25;
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


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//***************************************EL ULISES ES PUÑAL Y LE GUSTA POR ATRAS****************************************************//

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

double PriO(double A, double B, double C, double D)  // falta modelo del genrador
{
	int j;
	double x[26];
	double k1,k2,k3,k4;
	double h=0.05/25;

	D=x[0];

	for(j=1;j<25;j++)
	{
		k1=(A*B)/C;
		k2=((A*B)-(x[j-1]+((h/2)*k1)))/C;
		k3=((A*B)-(x[j-1]+((h/2)*k2)))/C;
		k4=((A*B)-(x[j-1]+((h)*k3)))/C;

		x[j]=x[j-1]+((h/6)*(k1+(2*k2)+(2*k3)+k4));
	}

	x[0]=x[j-1];

	return x[0];
	return 0;
}


  // falta modelo del generador 


//***********************************************************************************************************************************//




//funcion de entrada de ejecucion  
 int main0(int pars) 
{
	
GETS();
//Región para llamar todas las funciones de los programas.

///////////////////////////TURBOGRUPO//////////////////////////////////////////
	  //CALCULO DE COEFICIENTES

          U1RCB=(( W_CB / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 ROTOR COMPRESOR DE BAJA
          
          U3RCB=(( W_CB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 ROTOR COMPRESOR DE BAJA

          U1RTB=(( W_TB / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 DE ROTOR DE TURBINA DE BAJA

          U3RTB=(( W_TB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 DE ROTOR DE TURBINA DE BAJA
          
          U4RTB=(( FLUJO_MASICO_TB/*Igualar con flujos de abajo*/ / F_MAX_ENF_U4RTB/*cte*/) * 98 + .02)*100;//F_MAX_ENF VARIABLE DE MANUEL

          U1CTB= ((FLUJO_MASICO_TB/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CTB/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE TURBINA DE BAJA
          
          U2CTB=(( W_TB / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE TURBINA DE BAJA

          U1CCB= ((FLUJO_MASICO_CB/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CCB/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE COMPRESOR DE BAJA
          
          U2CCB=(( W_CB / 3600 ) * .90 + .10) * 100;// COEFICIENTE 2 DE CARCASA DE COMPRESOR DE BAJA

          U1RTA=(( W_TA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 DE ROTOR DE TURBINA DE ALTA

          U3RTA=(( W_TA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 3 DE ROTOR DE TURBINA DE ALTA
          
          U4RTA=(( FLUJO_MASICO_TA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U4RTA/*cte*/) * 98 + .02)*100;//F_MAX_ENF VARIABLE DE MANUEL

          U1CTA= ((FLUJO_MASICO_TA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CTA/*cte*/) * .90 + .10)*100;// COEFICIENTE 1 DE CARCASA DE TURBINA DE ALTA
          
          U2CTA=(( W_TA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE TURBINA DE ALTA

          U1RCA=(( W_CA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 1 ROTOR COMPRESOR DE ALTA
          
          U3RCA=(( W_CA / 3600 ) * .90 + .10) * 100; //COEFICIENTE 3 ROTOR COMPRESOR DE ALTA

          U1CCA= ((FLUJO_MASICO_CA/*Igualar con flujos de abajo*/  / F_MAX_ENF_U1CCA/*cte*/) * .90 + .10)*100; // COEFICIENTE 1 DE CARCASA DE COMPRESOR DE ALTA
          
          U2CCA=(( W_CA / 3600 ) * .90 + .10) * 100; // COEFICIENTE 2 DE CARCASA DE COMPRESOR DE ALTA

          Tchiller = ((Tem_fin_64072 + Tem_fin_64071)/2) - 273;//Tchiller[°C] y Tem_fin_64072[K]

          U1enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL

          U2enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL
          
          U3enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL
          
          U4enf=((FMaire/F_MAX_ENF/*cte*/)*.90+ .10)*100;  //FMaire MANUEL




          //CALCULO DE TEMPERATURAS DE ROTOR Y CARCASA

      		TRCB = Temperatura_Rotor_Compresor_de_Baja( TgCB,  U1RCB,  TCCB,  U2RCB,  TRTB,  U3RCB,  Tlub,  mRCB,  CPmaterial,  CITRCB);
      		
      		TCCB = Temperatura_Carcasa_Compresor_de_Baja( U1CCB,  Tenf,  U2CCB,  TgCB,  mCCB,  CPmaterial,  CITCCB);
      		
      		TRCA = Temperatura_Rotor_Compresor_de_Alta (TgCA, U1RCA, TCCA, U2RCA, TRTA, U3RCA, Tlub, mRCA, CPmaterial, CITRCA);

      		TCCA = Temperatura_Carcasa_Compresor_de_Alta (U1CCA, Tenf, U2CCA, TgCA, mCCA, CPmaterial, CITCCA);

      		TRTA = Temperatura_Rotor_Turbina_de_Alta ( U1RTA,  TgTA,  U2RTA,  TRCA,  U3RTA,  Tlub,  U4RTA,  Tgenf,  mRTA,  CPmaterial,  CITRTA);

      		TCTA = Temperatura_Carcasa_Turbina_de_Alta( U1CTA,  Tenf,  U2CTA,  TgTA,  mCTA,  CPmaterial,  CITCTA);

      		TRTB = Temperatura_Rotor_Turbina_de_Baja( U1RTB,  TgTB,  U2RTB,  TRCB,  U3RTB,  Tlub,  U4RTB,  Tgenf,  mRTB,  CPmaterial, CITRTB);

      		TCTB = Temperatura_Carcasa_Turbina_de_Baja( U1CTB,  Tenf,  U2CTB,  TgTB,  mCTB,  CPmaterial,  CITCTB);

			Pow_He6888 = resistencia(CI_Res_HE6888,Tao_Res_HE6888,PoW_max,On_Off_HE6888);

      		Tenf = Temperatura_de_Aire_en_el_Habitaculo(Pow_He6888, U1enf,  TCTB,  U2enf,  TCCB,  FMaire,  Tchiller,  U3enf,  TCTA,  U4enf, TCCA, menf, CPaire, CITenf);

          //CALCULOS DE CALORES

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
      		
      		

      		CITRCB = TRCB;

      		CITCCB = TCCB;

      		CITRCA = TRCA;

      		CITCCA = TCCA;

      		CITRTA = TRTA;

      		CITCTA = TCTA;

      		CITRTB = TRTB;

      		CITCTB = TCTB;

      		CITenf = Tenf;

			Pow_He6888 = CI_Res_HE6888;

      	////////////////////////////////////// inician calculos de turbogrupo////////////////////////////

			ST8A = ST8AFUN (K_ADECUACION_ST8A, FCV_68127, TAO_ST8A, CIST8A);      // CHECAR SI ESTA LLEVA IGUALLACION CON LA CONDICION INICIAL 
          CIST8A = ST8A;

          AREA_1_CB_IGV=AREA1IGVCB ( K_ADECUACION_AREA1_CB,  FCV_6872, IGV_CONTROL_CB_A1,  0.05/*TAO_IGV_CB_A1*/,  CIAREA1IGV); // COMPRESOR DE BAJA PRESION
          CIAREA1IGV = AREA_1_CB_IGV;


          CDPA = CDPAFUN (K_ADECUACION_CDPA, FCV_68128, TAO_CDPA, CICDPA);//Regula presion si impacta en cuervas, se me hace que es para regular presion
          CICDPA = CDPA;

          FCV_6871 =  FCV6871 (K_ADECUACION_FCV6871, CONTROL_FCV6871, TAO_FCV6871, CIFCV6871);//VBV este si impliva desvio de flujo, disminute el flujo de aire FLUJO_MASICO_OUT_CA
          CIFCV6871=FCV_6871;
          
          FCV_6872 = FCV6872 (K_ADECUACION_FCV6872, CONTROL_FCV6872, TAO_FCV6872, CIFCV6872);//IGV
          CIFCV6872 = FCV_6872;


          FCV_6873 = FCV6873 (K_ADECUACION_FCV6873, CONTROL_FCV6873, TAO_FCV6873, CIFCV6873);//VSV (Beta 3)
          CIFCV6873=FCV_6873;

          FCV_68127 =FCV68127 (K_ADECUACION_FCV68127, CONTROL_FCV68127, TAO_FCV68127, CIFCV68127);//ST8
          CIFCV68127=FCV_68127;

          FCV_68128 = FCV68128 (K_ADECUACION_FCV68128, CONTROL_FCV68128, TAO_FCV68128, CIFCV68128);//CDPA
          CIFCV68128=FCV_68128;

            //CALCULO DE VARIABLES PARA COMPRESOR DE BAJA PRESION

             		

			if(A52_1==0 && A52_2==0){
                  //Torque_Arrancador_TB=Torque_Hidraulico*cte_TB;
				  
                  T_Giro_TB=Torque_Arracador_TB;//Torque total TB esta parte de la ecuacion entra hasta que esta sincronizada +TORQUE_CB+TORQUE_TB-TORQUE_Exc
                  w1_TB= TORQUETA( K_ADECUACION_K1_ROTOR1_TB,  T_Giro_TB,  TAO_TB_ROTOR_1, 1/*CONTROL_TB_TORQUE_1*/,  CIw1_TB);//1er Orden
                  W_TB= TORQUETA(1/* K_ADECUACION_K1_ROTOR1_TA*/,  w1_TB,  TAO_TB_ROTOR_1, 1/*CONTROL_TB_TORQUE_1*/,  CIW_TB);//2do Orden; Velocidad angular en rpm
                  CIw1_TB = w1_TB;
                  CIW_TB = W_TB;
				
				

				if(Int_Ex==0 && PreCal==1){
				valvulaA=1.0;	
				valvulaB=25.0;
				valvulaC=25.0;
				
				}

				if(Int_Ex==1 && PreCal==1){
				valvulaA=1.0;	
				valvulaB=24.0;
				valvulaC=14.7;
				
				}

                  }
          else if(A52_1==1 || A52_2==1) {
                  W_TB=Frecuencia/60;
				  
				ControlCarga=ConsignaCarga/*-Potencia*/;
				//ControlCarga=PID(ConsignaCarga,Ki,Kp,Kd);//ESTE TAL VEZ SE QUITA Y DEJO SOLO ASIGNACIONES CONTROL DE CARGA SERA SOLO LA CONSIGNA
				SenalCarga=PriO((1/32.0), ControlCarga, taoSenalCarga, CISenalCarga);

				if(SenalCarga<=(5.0/32)){//AGREGAR COMO HACER EL PASO DE 24 a 25 y de 
				valvulaA=1.0;	
				valvulaB=24.0+((SenalCarga*8.6)*(32.0/5.0));
				valvulaC=14.7+((SenalCarga*2.5)*(32.0/5.0));
			         }
				if(SenalCarga>(5.0/32) && SenalCarga<=(6.0/32)){
				valvulaA=1.0;	
				valvulaB=32.6+((SenalCarga*1.2)*(32/6.0));
				valvulaC=17.2+((SenalCarga*0.8)*(32/6.0));
			         }

				if(SenalCarga>(6.0/32) && SenalCarga<=(8.0/32)){
				valvulaA=1.0;	
				valvulaB=33.8+((SenalCarga*2.3)*(32/8.0));
				valvulaC=18.0+((SenalCarga*1.8)*(32/8.0));			
                     }

				if(SenalCarga>(8.0/32) && SenalCarga<=(10.0/32)){
				valvulaA=1.0;	
				valvulaB=36.1+(SenalCarga*1.7)*(32/10.0);
				valvulaC=19.8+(SenalCarga*1.4)*(32/10.0);
			
                     }

				if(SenalCarga>(10.0/32) && SenalCarga<=(12.0/32)){
				valvulaA=1.0+(SenalCarga*29.5)*(32.0/12.0);	
				valvulaB=37.8+(SenalCarga*(-1.0))*(32/12.0);
				valvulaC=21.2+(SenalCarga*(-20.2))*(32/12.0);
			
                     }

				if(SenalCarga>(12.0/32) && SenalCarga<=(14.0/32)){
				valvulaA=30.5+(SenalCarga*0.8)*(32/14.0);	
				valvulaB=36.8+(SenalCarga*0.8)*(32/14.0);
				valvulaC=1.0;
			
                     }

				if(SenalCarga>(14.0/32) && SenalCarga<=(16.0/32)){
				valvulaA=31.3+(SenalCarga*1.5)*(32/16.0);	
				valvulaB=37.6+(SenalCarga*1.9)*(32/16.0);
				valvulaC=1.0;
			
                     }
				if(SenalCarga>(16.0/32) && SenalCarga<=(18.0/32)){
				valvulaA=32.8+(SenalCarga*1.1)*(32/18.0);	
				valvulaB=39.5+(SenalCarga*1.3)*(32/18.0);
				valvulaC=1.0;
			
                     }
				if(SenalCarga>(18.0/32) && SenalCarga<=(20.0/32)){
				valvulaA=33.9+(SenalCarga*1.1)*(32/20.0);	
				valvulaB=40.8+(SenalCarga*1.8)*(32/20.0);
				valvulaC=1.0;
			
                     }

				if(SenalCarga>(20.0/32) && SenalCarga<=(22.0/32)){
				valvulaA=35.0+(SenalCarga*1.0)*(32/22.0);	
				valvulaB=42.6+(SenalCarga*(-4.2))*(32/22.0);
				valvulaC=1.0+(SenalCarga*21.0)*(32/22.0);
			
                     }

				if(SenalCarga>(22.0/32) && SenalCarga<=(24.0/32)){
				valvulaA=36.0+(SenalCarga*1.5)*(32/24.0);	
				valvulaB=38.4+(SenalCarga*1.5)*(32/24.0);
				valvulaC=22.0+(SenalCarga*1.0)*(32/24.0);
			
                     }

				
				if(SenalCarga>(24.0/32) && SenalCarga<=(26.0/32)){
				valvulaA=37.5+(SenalCarga*1.6)*(32/26.0);	
				valvulaB=39.9+(SenalCarga*1.6)*(32/26.0);
				valvulaC=23.0+(SenalCarga*1.3)*(32/26.0);
			
                     }

				if(SenalCarga>(26.0/32) && SenalCarga<=(28.0/32)){
				valvulaA=39.1+(SenalCarga*1.3)*(32/28.0);	
				valvulaB=41.5+(SenalCarga*1.5)*(32/28.0);
				valvulaC=24.3+(SenalCarga*1.2)*(32/28.0);
			
                     }

				if(SenalCarga>(28.0/32) && SenalCarga<=(30.0/32)){
				valvulaA=40.4+(SenalCarga*1)*(32/30.0);	
				valvulaB=43.0+(SenalCarga*3.2)*(32/30.0);
				valvulaC=25.5+(SenalCarga*1.0)*(32/30.0);
			
                     }

				if(SenalCarga>(30.0/32)){
				valvulaA=41.4+(SenalCarga*1.4)*(32/32.0);	
				valvulaB=46.2+(SenalCarga*3.6)*(32/32.0);
				valvulaC=26.5+(SenalCarga*1.0)*(32/32.0);
			
                     }
		  }








              //1.1 CALCULO DE TORQUE PARA GIRO DE ROTOR TURBINA DE ALTA
			
			FLUJO_MASICO_GAS= (FLUJO_COMBUSTIBLE*(93.9/1.9));//Agregue variable de flujo masico de combustible para poder observar la aceleracion por el combustible 
		  if(arrancador==1){
          T_Giro_TA=Torque_Arracador_TA;//Torque total TA
		  }
		  else{
		  T_Giro_TA=FLUJO_MASICO_GAS*(2.138510638/93.9);//Torque total TA//T_Giro_TA=(TORQUE_CA+TORQUE_TA);
		  }
       	
      		w1_TA= TORQUETA ( K_ADECUACION_K1_ROTOR1_TA,  T_Giro_TA,/*inercia de entrada*/  2*TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CIw1_TA /* condicion de inicio que regresa*/);//1er Orden
      		CIw1_TA=w1_TA;

      		W_TA= TORQUETA (1/*K_ADECUACION_K1_ROTOR1_TA*/,  CIw1_TA,/*valor en que guarda el primer orden*/ 2* TAO_TA_ROTOR_1, CONTROL_TA_TORQUE_1,  CIW_TA /* valor en el que guarda el valor final de segundo orden*/ );//2do Orden; Velocidad angular en rpm
      		CIW_TA=W_TA;
               
		  //1.2 CALCULO DE TORQUE PARA GIRO DE ROTOR TURBINA DE BAJA


         
		 
             
		  //1.3 EFICIENCIA Y POTENCIA MECANICA PARA GE

		   //FLUJO_MASICO_GAS_VIGV=(RHO_AREA_1_CB/*cte*/ *AREA_1_CB_IGV * VN1_CA*6)+  (RHO_AREA_1_CB/*cte*/ *AREA_1_CB_IGV * VN1_CB*6);// FLUJO MASICO COMPRESOR DE BAJA
     //     FLUJO_MASICO_ENF_CB= (1/*DENSIDAD_FMENF_CBcte*/ * CICDPA/* AREA_FMENF_CB*/ * 0.05*VN2_CB/*VELOCIDAD_FMENF_CBcte*/); // FLUJO MASICO DE ENFRIAMIENTO COMRESOR DE BAJA ST8A
     //     FLUJO_MASICO_SALIDAVBV= (1/*DENSIDAD_FMOUT_CActe*/ * CIFCV6871 /*AREA_FMOUT_CA*/ * 0.05*VN2_CB/*VELOCIDAD_FMOUT_CA*/);  //FLUJO MASICO SALIDA COMPRESOR DE BAJA (VBV)
     //     FLUJO_MASICO_ENF_CA= (1/*DENSIDAD_FMENF_CActe*/ * CIST8A/*AREA_FMENF_CA*/ * 0.05*VN2_CA/*VELOCIDAD_FMENF_CA*/); //FLUJO MASICO ENFRIAMIENTO COMPRESOR DE BAJA (CDPA)
     //     FLUJO_MASICO_AIRE= FLUJO_MASICO_GAS_VIGV - FLUJO_MASICO_ENF_CA - FLUJO_MASICO_ENF_CB - FLUJO_MASICO_SALIDAVBV; // FLUJO MASICO DE GAS
		  /*if(arrancador==0){*/

          //POTENCIA_CB=(FLUJO_MASICO_GAS_VIGV*U_CB*(VT1_CB - VT2_CB));         //potencia consumida por COMPRESOR DE BAJA (-)
          //TORQUE_CB= (RADIO_MEDIO_CB*FLUJO_MASICO_GAS_VIGV*(VT1_CB - VT2_CB));//Torque consumido por COMPRESOR DE BAJA (-)
   //       POTENCIA_CA=(FLUJO_MASICO_AIRE*U_CA*(VT1_CA - VT2_CA));         //Potencia consumida por COMPRESOR DE ALTA (-)
   //       TORQUE_CA= (RADIO_MEDIO_CA*FLUJO_MASICO_AIRE*(VT1_CA - VT2_CA));//Torque consumido por COMPRESOR DE ALTA (-)

   //       POTENCIA_TA= U_TA*FLUJO_MASICO_GAS * (VT1_TA - VT2_TA); //Potencia entregada por TURBINA DE ALTA (+)
   //       TORQUE_TA=FLUJO_MASICO_GAS*RADIO_MEDIO_TA*(VT1_TA- VT2_TA);      //Torque entregada por TURBINA DE ALTA (+)
   //       
   //       TORQUE_TB=FLUJO_MASICO_GAS*RADIO_MEDIO_TB*(VT1_TB- VT2_TB);      //Torque entregada por TURBINA DE BAJA (+)
		 //POTENCIA_TB= U_TB*FLUJO_MASICO_GAS * (VT1_TB - VT2_TB); //Potencia entregada por TURBINA DE BAJA (+)
		  POTENCIA_TB=CP_CB*FLUJO_MASICO_GAS*(TEMPERATURA_ENTRADA_COMPRESOR_BAJA-TEMPERATURA_SALIDA_COMPRESOR_BAJA);
		  POTENCIA_CB=CP_CB*FLUJO_MASICO_GAS*(TEMPERATURA_SALIDA_TURBINA_ALTA-TEMPERATURA_SALIDA_TURBINA_BAJA);
          POTENCIA_MEC=POTENCIA_TB/*+*/ + POTENCIA_CB /*- - QB*/; //Potencia Mecánica a entregar al GE, Quite por lo mientras el calor cehcar calores al final
		  /*}*/
          /////////////////////////MOTOR HIDRÁULICO DE ARRANQUE///////////////////////
  
SenalCarga=CISenalCarga;

		  if(W_TA<8381){
		    RADIO_MEDIO_TA=0.0286722866196235;
BETA1_TA=0.828173035307059;
CONSAREA1=0.127182300549416;
BETA2_TA=0.78807771418457;
CONSAREA2_TA=1.2437403184092;
BETA3_TA=0.559562809016022;
AreaTA=0.05;

RADIO_MEDIO_TB=0.0607621285058321;
BETA1_TB=1.01536812465355;
CONSAREA1_TB=0.353068500799455;
BETA2_TB=0.933704503353049;
CONSAREA2_TB=0.247652339005501;
BETA3_TB=0.620730892673887;
AreaTB=0.298841540061672;


		  }

     	  else if(W_TA>=8381 && W_TA<8961){
					    RADIO_MEDIO_TA=0.0286722866196235;
BETA1_TA=0.828173035307059;
CONSAREA1=0.127182300549416;
BETA2_TA=0.78807771418457;
CONSAREA2_TA=1.2437403184092;
BETA3_TA=0.559562809016022;
AreaTA=0.05;

RADIO_MEDIO_TB=0.0607621285058321;
BETA1_TB=1.01536812465355;
CONSAREA1_TB=0.353068500799455;
BETA2_TB=0.933704503353049;
CONSAREA2_TB=0.247652339005501;
BETA3_TB=0.620730892673887;
AreaTB=0.298841540061672;

RADIO_MEDIO_CB=0.000152935391874296;
BETA1_CB=0.8;
AREA1_CB=1;
BETA2_CB=1.90320557532356;
AREA2_CB=1.12792132081317;
AREA3_CB=3.04561953392319;
BETA3_TB=0.121170025474288;

RADIO_MEDIO_CA=0.052079086108826;
BETA1_CA=0.279616432770534;
AREA1_CA=1;
BETA2_CA=0.895636700724993;
AREA2_CA=0.112656357349999;
AREA3_CA=1.5;

		  }

		  else if(W_TA>=8961 && W_TA<9011){
			RADIO_MEDIO_TA=0.0205194452700201;
BETA1_TA=0.828662466679246;
CONSAREA1=0.125453748102128;
BETA2_TA=0.737014835567672;
CONSAREA2_TA=1.22751843440749;
BETA3_TA=0.579134155821695;
AreaTA=0.0503719562524182;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01270750704848;
CONSAREA1_TB=0.249878134018658;
BETA2_TB=0.920393022406374;
CONSAREA2_TB=0.0490081268923378;
BETA3_TB=0.752809128233936;
AreaTB=1.17922877933085;

RADIO_MEDIO_CB=0.000139059688014361;
BETA1_CB=0.800008153518075;
AREA1_CB=1.00000500299092;
BETA2_CB=1.90478523364418;
AREA2_CB=1.12803583506202;
AREA3_CB=3.0455764869665;
BETA3_TB=0.119801845592514;

RADIO_MEDIO_CA=0.0534463233511231;
BETA1_CA=0.275854476148517;
AREA1_CA=1;
BETA2_CA=0.895731217611257;
AREA2_CA=0.111542103979147;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9011 && W_TA<9032){
			RADIO_MEDIO_TA=0.0216869396703329;
BETA1_TA=0.828283356075735;
CONSAREA1=0.128973618541838;
BETA2_TA=0.775352646445605;
CONSAREA2_TA=1.24103426103976;
BETA3_TA=0.561538931445309;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01270255294006;
CONSAREA1_TB=0.251086402892509;
BETA2_TB=0.920059773168166;
CONSAREA2_TB=0.0424910545138251;
BETA3_TB=0.752487826813372;
AreaTB=1.17897829324567;

RADIO_MEDIO_CB=0.000135100938028877;
BETA1_CB=0.800008153518075;
AREA1_CB=1.00000500299092;
BETA2_CB=1.90431509856494;
AREA2_CB=1.12791779150818;
AREA3_CB=3.04556480716647;
BETA3_TB=0.119430908359762;

RADIO_MEDIO_CA=0.0526218228687751;
BETA1_CA=0.279669707787904;
AREA1_CA=1;
BETA2_CA=0.895651020719938;
AREA2_CA=0.112712332013806;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9032 && W_TA<9148){
			RADIO_MEDIO_TA=0.0210458893786993;
BETA1_TA=0.828964402266452;
CONSAREA1=0.125852604288075;
BETA2_TA=0.710445041528305;
CONSAREA2_TA=1.19605876583144;
BETA3_TA=0.565135890176501;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01267278611302;
CONSAREA1_TB=0.249637856153929;
BETA2_TB=0.922676891490398;
CONSAREA2_TB=0.052374117671643;
BETA3_TB=0.753082831582783;
AreaTB=1.17932439196644;

RADIO_MEDIO_CB=0.000139522112717278;
BETA1_CB=0.800008153518075;
AREA1_CB=1.00000500299092;
BETA2_CB=1.90502715292595;
AREA2_CB=1.12808374428114;
AREA3_CB=3.04557817099575;
BETA3_TB=0.119854850968858;

RADIO_MEDIO_CA=0.0535479357881958;
BETA1_CA=0.275800485218036;
AREA1_CA=1;
BETA2_CA=0.895770070433221;
AREA2_CA=0.111709601222315;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9148 && W_TA<9561){
			  RADIO_MEDIO_TA=0.0425796820735899;
BETA1_TA=0.829736546825883;
CONSAREA1=0.14669021003982;
BETA2_TA=0.542102211998526;
CONSAREA2_TA=1.02594181725588;
BETA3_TA=0.56107425020077;
AreaTA=0.0510280942725315;

	RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01256472453256;
CONSAREA1_TB=0.246837627012918;
BETA2_TB=0.898481621938257;
CONSAREA2_TB=0.103856195986363;
BETA3_TB=0.754729256154306;
AreaTB=0.695245931972093;
		
RADIO_MEDIO_CB=0.000132123289547987;
BETA1_CB=0.800376647595064;
AREA1_CB=1.00023110811584;
BETA2_CB=1.90523749674066;
AREA2_CB=1.12804880858186;
AREA3_CB=3.04555894932539;
BETA3_TB=0.119241974313794;

RADIO_MEDIO_CA=0.0549070226329126;
BETA1_CA=0.275625087480407;
AREA1_CA=1;
BETA2_CA=0.895775790605576;
AREA2_CA=0.111718651238803;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9561 && W_TA<9568){
			RADIO_MEDIO_TA=0.0333938218302787;
BETA1_TA=0.829321444635934;
CONSAREA1=0.149105690797754;
BETA2_TA=0.597221872734857;
CONSAREA2_TA=1.05069500601571;
BETA3_TA=0.548537404370942;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.0125640453761;
CONSAREA1_TB=0.253043425075542;
BETA2_TB=0.895894599525726;
CONSAREA2_TB=0.0870930606657652;
BETA3_TB=0.752934544747442;
AreaTB=0.693002679136094;

RADIO_MEDIO_CB=0.000131542501478467;
BETA1_CB=0.800376647595064;
AREA1_CB=1.00023110811584;
BETA2_CB=1.90451213966279;
AREA2_CB=1.12792561149005;
AREA3_CB=3.0455569023796;
BETA3_TB=0.119178494751224;

RADIO_MEDIO_CA=0.0536129353525061;
BETA1_CA=0.275977726903753;
AREA1_CA=1;
BETA2_CA=0.895682476062975;
AREA2_CA=0.111330086779463;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9568 && W_TA<9574){
			RADIO_MEDIO_TA=0.0402744572720218;
BETA1_TA=0.829622501016131;
CONSAREA1=0.147606786903828;
BETA2_TA=0.558652945274133;
CONSAREA2_TA=1.03346734922916;
BETA3_TA=0.558025977309142;
AreaTA=0.0506591828430067;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01256275166726;
CONSAREA1_TB=0.24898233736847;
BETA2_TB=0.897691949253469;
CONSAREA2_TB=0.0985254531584803;
BETA3_TB=0.754122523967517;
AreaTB=0.694481744922399;

RADIO_MEDIO_CB=0.000130660697785942;
BETA1_CB=0.800376647595064;
AREA1_CB=1.00023110811584;
BETA2_CB=1.90475075394728;
AREA2_CB=1.12795438795584;
AREA3_CB=3.0455545429038;
BETA3_TB=0.119102459237401;

RADIO_MEDIO_CA=0.0548047139095716;
BETA1_CA=0.276061546609372;
AREA1_CA=1;
BETA2_CA=0.895744927988571;
AREA2_CA=0.111584943951966;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9574 && W_TA<9613){
		RADIO_MEDIO_TA=0.0374224787718849;
BETA1_TA=0.829485509105155;
CONSAREA1=0.148775432699176;
BETA2_TA=0.577095658938314;
CONSAREA2_TA=1.04162876525595;
BETA3_TA=0.554047818037138;
AreaTA=0.05;
	
RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01255731774629;
CONSAREA1_TB=0.251412763516155;
BETA2_TB=0.897017648618803;
CONSAREA2_TB=0.0921538656193237;
BETA3_TB=0.753443848425796;
AreaTB=0.693613833338043;

RADIO_MEDIO_CB=0.000130539617142177;
BETA1_CB=0.800376647595064;
AREA1_CB=1.00023110811584;
BETA2_CB=1.90457454051169;
AREA2_CB=1.12792561148991;
AREA3_CB=3.0455541568338;
BETA3_TB=0.119090604566651;

RADIO_MEDIO_CA=0.0541923077668548;
BETA1_CA=0.276031287549773;
AREA1_CA=1;
BETA2_CA=0.895704222631857;
AREA2_CA=0.111418087820651;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9613 && W_TA<9629){
			RADIO_MEDIO_TA=0.0451907573977282;
BETA1_TA=0.829868218750392;
CONSAREA1=0.146016850302342;
BETA2_TA=0.521770486781198;
CONSAREA2_TA=1.01643308809401;
BETA3_TA=0.564311320350842;
AreaTA=0.0503467669776833;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01255375630565;
CONSAREA1_TB=0.245790831108307;
BETA2_TB=0.899642636030118;
CONSAREA2_TB=0.10680593224191;
BETA3_TB=0.755083708904584;
AreaTB=0.695643005378007;

RADIO_MEDIO_CB=0.000133692365010464;
BETA1_CB=0.800376647595064;
AREA1_CB=1.00023110811584;
BETA2_CB=1.90558077554016;
AREA2_CB=1.12812186219731;
AREA3_CB=3.04556336028348;
BETA3_TB=0.119381915018322;

RADIO_MEDIO_CA=0.0549070226329126;
BETA1_CA=0.274893949023024;
AREA1_CA=1;
BETA2_CA=0.895833961840782;
AREA2_CA=0.111721656718259;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=9629 && W_TA<9874){
			RADIO_MEDIO_TA=0.0334784922909877;
BETA1_TA=0.829500935587552;
CONSAREA1=0.145868296112348;
BETA2_TA=0.498677067507837;
CONSAREA2_TA=0.876683263989778;
BETA3_TA=0.550311110570687;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01251998196644;
CONSAREA1_TB=0.245054224479789;
BETA2_TB=0.895665554693464;
CONSAREA2_TB=0.127031913750742;
BETA3_TB=0.755480283939874;
AreaTB=0.596112223272587;

RADIO_MEDIO_CB=0.00132825114798887;
BETA1_CB=0.806674470596636;
AREA1_CB=1.00038849694665;
BETA2_CB=2.11148744069319;
AREA2_CB=0.0835683786994747;
AREA3_CB=4.18622956060297;
BETA3_TB=0.636561215456867;

RADIO_MEDIO_CA=0.0553588356584141;
BETA1_CA=0.274600870487525;
AREA1_CA=1;
BETA2_CA=0.895788474998682;
AREA2_CA=0.111517854218702;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=9874 && W_TA<9877){
			RADIO_MEDIO_TA=0.0343330876982005;
BETA1_TA=0.829514016577457;
CONSAREA1=0.145311634298323;
BETA2_TA=0.496422348939898;
CONSAREA2_TA=0.875439524528254;
BETA3_TA=0.550883550363744;
AreaTA=0.0514106639500791;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01251957230775;
CONSAREA1_TB=0.193845187879412;
BETA2_TB=0.912430486496793;
CONSAREA2_TB=0.102183796941619;
BETA3_TB=0.762721433963952;
AreaTB=0.604723074342607;

RADIO_MEDIO_CB=0.000585480359246733;
BETA1_CB=0.806674470596636;
AREA1_CB=1.00038849694665;
BETA2_CB=2.20252680889823;
AREA2_CB=0.0254460045006068;
AREA3_CB=4.19044601229038;
BETA3_TB=0.647709946200226;

RADIO_MEDIO_CA=0.0553588356584141;
BETA1_CA=0.273309335721045;
AREA1_CA=1;
BETA2_CA=0.895876268004477;
AREA2_CA=0.11144572897564;
AREA3_CA=1.5;

		  }
		  else if(W_TA>=9877 && W_TA<9879){
RADIO_MEDIO_TA=0.0250214675534214;
BETA1_TA=0.829428920099718;
CONSAREA1=0.14793042955891;
BETA2_TA=0.510061798180018;
CONSAREA2_TA=0.883373769295568;
BETA3_TA=0.546337682273709;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01251941667231;
CONSAREA1_TB=0.247194891984054;
BETA2_TB=0.894805403594765;
CONSAREA2_TB=0.122740156174278;
BETA3_TB=0.754872720727734;
AreaTB=0.595224803816942;

RADIO_MEDIO_CB=0.000128470672000333;
BETA1_CB=0.800633073795233;
AREA1_CB=1.0003884353087;
BETA2_CB=1.90520457066951;
AREA2_CB=1.12801176657292;
AREA3_CB=3.04554966258885;
BETA3_TB=0.118945511263565;

RADIO_MEDIO_CA=0.0552552151876213;
BETA1_CA=0.275085760994379;
AREA1_CA=1;
BETA2_CA=0.895762357989881;
AREA2_CA=0.111404560541815;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=9879 && W_TA<9894){
RADIO_MEDIO_TA=0.0372332722066183;
BETA1_TA=0.829558505143439;
CONSAREA1=0.144851506303346;
BETA2_TA=0.488689393436406;
CONSAREA2_TA=0.870909914789685;
BETA3_TA=0.552909936439789;
AreaTA=0.0520116189236025;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01251756147463;
CONSAREA1_TB=0.192553880911671;
BETA2_TB=0.913294742701709;
CONSAREA2_TB=0.104766063988833;
BETA3_TB=0.763032361317836;
AreaTB=0.60514240537999;

RADIO_MEDIO_CB=0.000278534080070325;
BETA1_CB=0.806674470596636;
AREA1_CB=1.00038849694665;
BETA2_CB=2.22812746550864;
AREA2_CB=0.0095274646067226;
AREA3_CB=4.13372884196356;
BETA3_TB=0.521004172152658;

RADIO_MEDIO_CA=0.0553588356584141;
BETA1_CA=0.272705358402491;
AREA1_CA=1;
BETA2_CA=0.895975708969465;
AREA2_CA=0.11171139497651;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=9894 && W_TA<9978){
RADIO_MEDIO_TA=0.0437033739059165;
BETA1_TA=0.829676908700586;
CONSAREA1=0.144585663881178;
BETA2_TA=0.467709475196343;
CONSAREA2_TA=0.858262559272752;
BETA3_TA=0.557847053161883;
AreaTA=0.0508533589606044;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01250670828816;
CONSAREA1_TB=0.192445816149142;
BETA2_TB=0.914467934369344;
CONSAREA2_TB=0.105695836386349;
BETA3_TB=0.763147249106009;
AreaTB=0.606522644362294;

RADIO_MEDIO_CB=0.00289975980102311;
BETA1_CB=1.61005667607211;
AREA1_CB=1.86947919537355;
BETA2_CB=1.82939737765363;
AREA2_CB=1.10824398331458;
AREA3_CB=0.899533193903121;
BETA3_TB=0.300454812429054;

RADIO_MEDIO_CA=0.0553588356584141;
BETA1_CA=0.271855863517985;
AREA1_CA=1;
BETA2_CA=0.896037382529358;
AREA2_CA=0.111681353104896;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=9978 && W_TA<10051){
RADIO_MEDIO_TA=0.037955500247156;
BETA1_TA=0.829755942911236;
CONSAREA1=0.14604429431606;
BETA2_TA=0.454403929091787;
CONSAREA2_TA=0.850387709546384;
BETA3_TA=0.554525615101497;
AreaTA=0.050860502073853;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01249901209908;
CONSAREA1_TB=0.192081898658127;
BETA2_TB=0.910753346490026;
CONSAREA2_TB=0.116411231392517;
BETA3_TB=0.763295768035321;
AreaTB=0.556666601402415;

RADIO_MEDIO_CB=0.000003335373556932;
BETA1_CB=2.02318322189844;
AREA1_CB=1.93712146812896;
BETA2_CB=2.44055111613406;
AREA2_CB=1.42272608998486;
AREA3_CB=1.59530343069943;
BETA3_TB=0.191135735822945;

RADIO_MEDIO_CA=0.0554308284155056;
BETA1_CA=0.27162435435344;
AREA1_CA=1;
BETA2_CA=0.89608107513715;
AREA2_CA=0.111800279942616;
AREA3_CA=1.5;


		  }
		  else if(W_TA>=10051 && W_TA<10071){
RADIO_MEDIO_TA=0.04357086717993;
BETA1_TA=0.829838377809182;
CONSAREA1=0.145900955389472;
BETA2_TA=0.441268306065013;
CONSAREA2_TA=0.839686110512364;
BETA3_TA=0.55761576072086;
AreaTA=0.05;

RADIO_MEDIO_TB=0.5;
BETA1_TB=1.01249704821515;
CONSAREA1_TB=0.192393471475385;
BETA2_TB=0.910852720160517;
CONSAREA2_TB=0.116005472390312;
BETA3_TB=0.763240355876361;
AreaTB=0.556564592489796;

RADIO_MEDIO_CB=.0000105240542284917;
BETA1_CB=2.21452863129925;
AREA1_CB=1.97733849519796;
BETA2_CB=2.24378763522768;
AREA2_CB=1.42835789420946;
AREA3_CB=1.53977601720779;
BETA3_TB=0.182031979593744;

RADIO_MEDIO_CA=0.0553588356584141;
BETA1_CA=0.271612668177463;
AREA1_CA=1;
BETA2_CA=0.896081208635133;
AREA2_CA=0.111807235629482;
AREA3_CA=1.5;

		  }

      	//CALCULOS DE COMPRESOR DE BAJA
      	
      	  U_CB=RADIO_MEDIO_CB*W_TB;//CALCULO VELOCIDAD ANGULAR DE COMPRESOR DE BAJA 
      	  V1_CB=(VN1_CB/cos(ALFA1_CB));// velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE BAJA
          VN1_CB=(U_CB)/((1/tan(BETA1_CB)) + tan (ALFA1_CB)); // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE BAJA
          VT1_CB=V1_CB*sin(ALFA1_CB);// componente auxiliar en entrada de alabe rotor COMPRESOR DE BAJA
         
          VRB1_CB=VN1_CB/sin(BETA1_CB); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE BAJA
          VN2_CB=((AREA_1_CB/*cte*/*RHO_AREA_1_CB)/(2*AREA_2_CB/*cte*/*RHO_AREA_2_CB))*VN1_CB;  //QUEDA PENDEIENTE MODIFICAR EL AREA 1 DEBIDO A QUE ES VARIANTE DE CONTROL.
          ALFA2_CB=atan((U_CB/VN2_CB)-(1/tan(BETA2_CB))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA
          V2_CB=(VN2_CB/cos(ALFA2_CB)); // CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE BAJA
          
          VT2_CB=V2_CB*sin(ALFA2_CB); // COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor. COMPRESOR DE BAJA
          VRB2_CB=VN2_CB/sin(BETA2_CB); // componente auxiliar en salida de alabe rotor COMPRESOR DE BAJA
          VN3_CB=(((AREA_2_CB*RHO_AREA_2_CB)/(AREA_3_CB*RHO_AREA_3_CB))*VN2_CB); //Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE BAJA
          ALFA3_CB=atan((U_CB/VN3_CB)-(1/tan(BETA3_CB))); //QUEDA PENDEINTE DEBIDO A QUE TAMBIEN ES CONSIDERADA COMO ENTRADA
          
          V3_CB=(VN3_CB/cos(ALFA3_CB)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE BAJA
          VT3_CB=V3_CB*sin(ALFA3_CB); // componente auxiliar en salida de alabe estator.COMPRESOR DE BAJA
          VRB3_CB=VN3_CB/sin(BETA3_CB); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE BAJA
          
          DELTA_PRESION_CB = ((RHO_DELTA_PRESION_CB/(2 * GRAVEDAD))*((VRB1_CB*VRB1_CB)-(VRB2_CB*VRB2_CB)))+((RHO_DELTA_PRESION_CB/(2 * GRAVEDAD))*((V2_CB*V2_CB)-(V3_CB*V3_CB)));
          PRESION_ENTRADA_COMPRESOR_BAJA = Presion_atm /*-  PDSH6405 - PDI64070falta calcular*/;//Manuel
          PRESION_SALIDA_COMPRESOR_BAJA=(PRESION_ENTRADA_COMPRESOR_BAJA+ DELTA_PRESION_CB);//PRESION_SALIDA_COMPRESOR_BAJA=(PRESION_ENTRADA_COMPRESOR_BAJA/*Tata*/ + DELTA_PRESION_CB); //PRESION DE SALIDA DE COMPRESOR DE BAJA
          TEMPERATURA_ENTRADA_COMPRESOR_BAJA = ((Tem_fin_6499 + Tem_fin_6450)/2)/*-273*/;//quite el 273 por que esta en centigrados
          TEMPERATURA_SALIDA_COMPRESOR_BAJA = (TEMPERATURA_ENTRADA_COMPRESOR_BAJA/*Tata*/ + ((V3_CB*V3_CB)/(2*CP_CB))); // TEMPERATURA DE SALIDA DE COMPRESOR DE BAJA

          

         //CALCULOS DE COMPRESOR DE ALTA
    
          U_CA=RADIO_MEDIO_CA*W_TA; //CALCULO VELOCIDAD ANGULAR DE COMPRESOR DE ALTA
          VN1_CA=(U_CA)/((1/tan(BETA1_CA)) + tan(ALFA1_CA));// COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR COMPRESOR DE ALTA
          V1_CA=(VN1_CA/cos(ALFA1_CA)); // velocidad absoluta del fluido en sentido del ángulo alfa 1 COMPRESOR DE ALTA
          VT1_CA=V1_CA*sin(ALFA1_CA); // componente auxiliar en entrada de alabe rotor COMPRESOR DE ALTA
          
          VRB1_CA=VN1_CA/sin(BETA1_CA);  // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 COMPRESOR DE ALTA
          VN2_CA=((AREA_1_CA*RHO_AREA_1_CA)/(AREA_2_CA*RHO_AREA_2_CA))*VN1_CA; // Componente de velocidad normal al área de salida alabe rotor COMPRESOR DE ALTA
          ALFA2_CA=atan((U_CA/VN2_CA)-(1/tan(BETA2_CA))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor COMPRESOR DE BAJA
		  V2_CA=(VN2_CA/cos(ALFA2_CA));// CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE COMPRESOR DE ALTA
          VT2_CA=V2_CA*sin(ALFA2_CA); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor COMPRESOR DE ALTA

          VRB2_CA=VN2_CA/(sin(BETA2_CA)); // componente auxiliar en salida de alabe rotor COMPRESOR DE ALTA
          VN3_CA=(((AREA_2_CA*RHO_AREA_2_CA)/(AREA_3_CA*RHO_AREA_3_CA))*VN2_CA); //Componente de velocidad no rmal al área de salida alabe rotor.COMPRESOR DE ALTA
          ALFA3_CA=atan((U_CA/VN3_CA)-(1/tan(BETA_3_CA)));  //Angulo de flujo absoluto a la salida del alabe estator COMPRESOR DE ALTA.
          V3_CA=(VN3_CA/cos(ALFA3_CA)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.COMPRESOR DE ALTA
          
          VT3_CA=V3_CA*sin(ALFA3_CA); // componente auxiliar en salida de alabe estator.COMPRESOR DE ALTA
          VRB3_CA=VN3_CA/sin(BETA_3_CA); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.COMPRESOR DE ALTA
          DELTA_PRESION_CA =((RHO_DELTA_PRESION_CA/(2 * GRAVEDAD))*((VRB1_CA*VRB1_CA)-(VRB2_CA*VRB2_CA)))+((RHO_DELTA_PRESION_CA/(2 * GRAVEDAD))*((V2_CA*V2_CA)-(V3_CA*V3_CA))); // DELTA DE PRESION  COMPRESOR DE ALTA
          PRESION_SALIDA_COMPRESOR_ALTA=(PRESION_SALIDA_COMPRESOR_BAJA/*PRESION_ENTRADA_COMPRESOR_ALTA*/+DELTA_PRESION_CA); //PRESION DE SALIDA DE COMPRESOR DE ALTA
          TEMPERATURA_SALIDA_COMPRESOR_ALTA=(TEMPERATURA_SALIDA_COMPRESOR_BAJA/*TEMPERATURA_ENTRADA_COMPRESOR_ALTA*/ + ((V3_CA*V3_CA)/2*CP_CA)); // TEMPERATURA DE SALIDA DE COMPRESOR DE ALTA


	   

          //CALCULOS DE TURBINA DE ALTA

          

          U_TA=RADIO_MEDIO_TA * W_TA; //CALCULO VELOCIDAD ANGULAR DE TURBINA DE ALTA
          //VN1_TA=(U_TA)/((1/tan(BETA1_TA)) + tan (ALFA1_TA)); // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE ALTA
          VN1_TA = FLUJO_MASICO_GAS*AreaTA;//FLUJO DE GAS
		 //if((TEMPERATURA_ENTRADA_TURBINA_ALTA-TEMPERATURA_SALIDA_COMPRESOR_ALTA)>=0.0001){
		  V1_TA= (sqrt(2*CP_TA*(TEMPERATURA_ENTRADA_TURBINA_ALTA-TEMPERATURA_SALIDA_COMPRESOR_ALTA)));
      /*}
      else{
       V1_TA=(VN1_TA/cos(ALFA1_TA));} */// velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA DE ALTA
		  ALFA1_TA=VN1_TA/V1_TA;
          VT1_TA=V1_TA*sin(ALFA1_TA);// CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA

          VRB1_TA=VN1_TA/sin(BETA1_TA); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE ALTA
         
		  VN2_TA=VN1_TA/(CONSTANTE_AREAS_1_TA);  // Componente de velocidad normal al área de salida alabe rotor TURBINA DE ALTA
          
      //CONSTANBETA2TA= CONSENOBETA2TA *(.5); //
		  ALFA2_TA=(atan((U_TA/VN2_TA)-(1/tan(BETA2_TA)))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
		  V2_TA=(VN2_TA/cos(ALFA2_TA));// CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA DE ALTA
          VT2_TA=V2_TA*sin(ALFA2_TA); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor TURBINA DE ALTA
          
          VRB2_TA=VN2_TA/ sin(BETA2_TA); // componente auxiliar en salida de alabe rotor TURBINA DE ALTA
          VN3_TA=(((CONSTANTE_AREAS_2_TA))*VN2_TA);//Componente de velocidad no rmal al área de salida alabe rotor.TURBINA DE ALTA
          //ALFA2_TA = ALFA1_TA *.4;
         

      //CONSTANBETA3TA=CONSENOBETA3TA*(.5); //
          ALFA3_TA=atan((U_TA/VN3_TA)-(1/tan(BETA3_TA)));  //Angulo de flujo absoluto a la salida del alabe estator TURBINA DE ALTA.
          
          V3_TA=(VN3_TA/cos(ALFA3_TA)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.TURBINA DE ALTA
          VT3_TA=V3_TA*sin(ALFA3_TA); // componente auxiliar en salida de alabe estator.TURBINA DE ALTA
          VRB3_TA=VN3_TA/sin(BETA3_TA); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.TURBINA DE ALTA

          /*TEMPERATURA_ENTRADA_TURBINA_ALTA=TEMPERATURA_SALIDA_COMPRESOR_ALTA+600*FLUJO_COMBUSTIBLE;*/
          DELTA_PRESION_TA= ((RHO_DELTA_PRESION_TA/(2 * GRAVEDAD))*((VRB1_TA*VRB1_TA)-(VRB2_TA*VRB2_TA)))+((RHO_DELTA_PRESION_TA/(2 * GRAVEDAD))*((V2_TA*V2_TA)-(V3_TA*V3_TA)));// DELTA DE PRESION TURBINA DE ALTA
          PRESION_SALIDA_TURBINA_ALTA=(PRESION_SALIDA_COMPRESOR_ALTA + DELTA_PRESION_TA); //PRESION DE SALIDA DE TURBINA DE ALTA
          TEMPERATURA_SALIDA_TURBINA_ALTA=(TEMPERATURA_ENTRADA_TURBINA_ALTA-((V3_TA * V3_TA)/(2 * CP_TA)));//=TEMPERATURA SALIDA DE CAMARA DE COMBUSTION 1270 hay que regresar valor al calculo de tata en donde dice temperatura salid

          //CALCULOS DE TURBINA DE BAJA
      

      
		  U_TB=RADIO_MEDIO_TB * W_TB; //CALCULO VELOCIDAD ANGULAR DE TURBINA DE BAJA
          //VN1_TB=(U_TB)/((1/tan(BETA1_TB)) + tan (ALFA1_TA)); // COMPONENTE DE VELOCIDAD NORMAL AL AREA DE ENTRADA DE ALABE ROTOR TURBINA DE BAJA
          VN1_TB = FLUJO_MASICO_GAS*AreaTB;//FLUJO DE GAS
		  //V1_TB=(VN1_TB/cos(ALFA1_TB)); // velocidad absoluta del fluido en sentido del ángulo alfa 1 TURBINA BAJA
         /* V1_TB= V3_TA*0.9;*/
		  V1_TA= (sqrt(2*CP_TB*(TEMPERATURA_ENTRADA_TURBINA_ALTA-TEMPERATURA_SALIDA_TURBINA_ALTA)));
          ALFA1_TB=VN1_TB/V1_TB;
          VT1_TB=V1_TB*sin(ALFA1_TB);// CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE BAJA

          VRB1_TB=VN1_TB/ sin(BETA1_TB); // CALCULO DE Velocidad relativa del fluido con respecto al alabe, sentido de ángulo Beta1 TURBINA DE BAJA
          VN2_TB=VN1_TB/(CONSTANTE_AREAS_1_TB);  // Componente de velocidad normal al área de salida alabe rotor TURBINA DE BAJA
          
		  ALFA2_TB=(atan((U_TB/VN2_TB)-(1/tan(BETA2_TB)))); //CALCULO DE Angulo de flujo absoluto a la salida del alabe rotor TURBINA DE BAJA
          V2_TB=(VN2_TB/cos(ALFA2_TB));// CALCULO DE VELOCIDAD ABSOLUTA DE FLUIDO DEL FLUIDO EN SENTIDO DEL ANGULO ALFA 2 DE TURBINA DE BAJA
          VT2_TB=V2_TB*sin(ALFA2_TB); //COMPONENTE AUXILIAR DE VELOCIDAD DE salida de alabe rotor TURBINA DE BAJA
          VRB2_TB=VN2_TB/ sin(BETA2_TB);// componente auxiliar en salida de alabe rotor TURBINA DE BAJA
         
          VN3_TB=CONSTANTE_AREAS_2_TB*VN2_TB;//Componente de velocidad no rmal al área de salida alabe rotor.TURBINA DE BAJA
          //ALFA2_TB = ALFA1_TB *.4;
         
          /*CONSTANBETA3TB=CONSENOBETA3TB*(.5);*/
          ALFA3_TB=atan((U_TB/VN3_TB)-(1/tan(BETA3_TB)));  //Angulo de flujo absoluto a la salida del alabe estator TURBINA DE BAJA.
          V3_TB=(VN3_TB/cos(ALFA3_TB)); // velocidad absoluta del fluido en sentido del ángulo alfa 3, estator.TURBINA DE BAJA
          VT3_TB=V3_TB*sin(ALFA3_TB); // componente auxiliar en salida de alabe estator.TURBINA DE BAJA
          VRB3_TB=VN3_TB/sin(BETA3_TB); // Velocidad relativa del fluido con respecto al alabe sentido de ángulo Beta3 estator.TURBINA DE BAJA
         
          DELTA_PRESION_TB= ((RHO_DELTA_PRESION_TB/(2 * GRAVEDAD))*((VRB1_TB*VRB1_TB)-(VRB2_TB*VRB2_TB)))+((RHO_DELTA_PRESION_TB/(2 * GRAVEDAD))*((V2_TB*V2_TB)-(V3_TB*V3_TB)));// DELTA DE PRESION TURBINA DE BAJA
          PRESION_SALIDA_TURBINA_BAJA=(PRESION_SALIDA_TURBINA_ALTA - DELTA_PRESION_TB); //PRESION DE SALIDA DE TURBINA DE BAJA
          TEMPERATURA_SALIDA_TURBINA_BAJA=(TEMPERATURA_SALIDA_TURBINA_ALTA-((V3_TB * V3_TB)/(2 * CP_TB)));//=TEMPERATURA SALIDA DE CAMARA DE COMBUSTION 1270 hay que regresar valor al calculo de tata en donde dice temperatura salid




      
		//CONCENTRACION EN PROCENTAJE QUE SE MUESTRA EN PANTALLA

		  if(W_TA>=2200){
			  FLUJO_COMBUSTIBLE=FLUJO_COMBUSTIBLE+0.001;}
		 
		  if(FLUJO_COMBUSTIBLE>=1.805)
		  {
			  FLUJO_COMBUSTIBLE=1.805;}
			
	

		  if(W_TA>=4699){
		 // printf("\n TWorld= %lf",TWorld);
		  arrancador=0; 
			
		  }

		  if(W_TA>=6000){
		  //printf("\n TWorld= %lf",TWorld);
		  arrancador=0; 
			
		  }

		  if(W_TA>=8000){
		  //printf("\n TWorld= %lf",TWorld);
		  arrancador=0; 
			
		  }
      //CALCULO DE GRAFICAS DE PRUEBA

    /*  if ( TWorld >= 0 && TWorld <= 23 ){

        posicionIGV = 31 + ( (0/23.0) *tcontrol1 );
        posicionVBV = 1 + ( (0/23.0) * tcontrol1 );
        posicionVSV = 5 + ( (0/23.0) * tcontrol1 );
        posicionFC62109 = 1 + ( (0/23.0) *tcontrol1 );
        posicionFC62108 = 1 + ( (0/23.0) *tcontrol1 );
        posicionFC62107 = 1 + ( (0/23.0) * tcontrol1 );
        posicionTBV = 100 + ( (0/23.0) * tcontrol1 );
        VOLTAJE_SALIDA = 0;
        posicionPTB = 10 + ( (1/23.0) * tcontrol1 );
        posicionST8 = 100 + ( (0/23.0) * tcontrol1 );

        tcontrol1 = tcontrol1 + 0.05;
		

      }

      else if ( TWorld > 23 && TWorld <= 188){

        posicionIGV = 31 + ( ((-2.0)/165.0) * (tcontrol2) ) ;
		    posicionVBV = 1 + ( (0.0/165.0) * tcontrol2 );
        posicionVSV = 5 + ( (-3.0/165.0) * tcontrol2 );
        posicionFC62109 = 1 + ( (0.0/165.0) *tcontrol2 );
        posicionFC62108 = 1 + ( (0.0/165.0) *tcontrol2 );
        posicionFC62107 = 1 + ( (0.0/165.0) *tcontrol2 );
        posicionTBV = 100 + ( (-1/165.0) * tcontrol2 );
        VOLTAJE_SALIDA = 0;
        posicionPTB = 11 + ( (0.0/165.0) * tcontrol2 );
        posicionST8 = 100 + ( (-91.0/165.0) * tcontrol2 );

        tcontrol2 = tcontrol2 + .05;
        
        

      }
      
      else if ( TWorld > 188 && TWorld <= 409 ){

        posicionIGV = 29 + ( ((-1.0)/221.0) * (tcontrol3) ) ;
        posicionVBV = 1 + ( (92.0/221.0) * tcontrol3 );
        posicionVSV =2 + ( (40.0/221.0) * tcontrol3 );
        posicionFC62109 = 1 + ( (0.0/221.0) *tcontrol3 );
        posicionFC62108 = 1 + ( (24.0/221.0) *tcontrol3 );
        posicionFC62107 = 1 + ( (14.0/221.0) *tcontrol3 );
        posicionTBV = 99 + ( (-99.0/221.0) * tcontrol3 );
        VOLTAJE_SALIDA = 0;
        posicionPTB = 11 + ( (1.0/221.0) * tcontrol3 );
        posicionST8 = 9 + ( (13.0/221.0) * tcontrol3 );

        tcontrol3 = tcontrol3 + 0.05;

      }

      else if ( TWorld > 409 && TWorld <= 649){

        posicionIGV = 28 + ( ((1.0)/240.0) * (tcontrol4) ) ;
        posicionVBV = 93 + ( (7.0/240.0) * tcontrol4 );
        posicionVSV =42 + ( (1.0/240.0) * tcontrol4 );
        posicionFC62109 = 1 + ( (0.0/240.0) *tcontrol4 );
        posicionFC62108 = 25 + ( (-.2/240.0) *tcontrol4 );
        posicionFC62107 = 15 + ( (-.3/240.0) *tcontrol4 );
        posicionTBV = 0 + ( (0.0/240.0) * tcontrol4 );
        VOLTAJE_SALIDA = 12.06 + ((0.87/240.0) *tcontrol4 );
        posicionPTB = 12 + ( (0.0/240.0) * tcontrol4 );
        posicionST8 = 22 + ( (13.0/240.0) * tcontrol4 );

        tcontrol4 = tcontrol4 + 0.05;

      }

      else if ( TWorld > 649 && TWorld <= 879){

        posicionIGV = 29 + ( ((0.0)/230.0) * (tcontrol5) ) ;
        posicionVBV = 100 + ( (-8.0/230.0) * tcontrol5 );
        posicionVSV =43 + ( (18.0/230.0) * tcontrol5 );
        posicionFC62109 = 1 + ( (0.0/230.0) *tcontrol5 );
        posicionFC62108 = 24.8 + ( (7.8/230.0) *tcontrol5 );
        posicionFC62107 = 14.7 + ( (2.5/230.0) *tcontrol5 );
        posicionTBV = 0 + ( (10.0/230.0) * tcontrol5 );
        VOLTAJE_SALIDA = 12.93 + ((-0.64/230.0) *tcontrol5 );
        posicionPTB = 12 + ( (4.0/230.0) * tcontrol5 );
        posicionST8 = 35 + ( (1.0/230.0) * tcontrol5 );

        tcontrol5 = tcontrol5 + 0.05;
      }

      else if ( TWorld > 879 && TWorld <= 992){

        posicionIGV = 29 + ( ((0.0)/113.0) * (tcontrol6) ) ;
        posicionVBV = 92 + ( (0.0/113.0) * tcontrol6 );
        posicionVSV =61 + ( (0.0/113.0) * tcontrol6 );
        posicionFC62109 = 1 + ( (0.0/113.0) *tcontrol6 );
        posicionFC62108 = 32.6 + ( (0.0/113.0) *tcontrol6 );
        posicionFC62107 = 17.2 + ( (0.0/113.0) *tcontrol6 );
        posicionTBV = 10 + ( (0.0/113.0) * tcontrol6 );
        VOLTAJE_SALIDA = 12.29 + ((-1.82/113.0) *tcontrol6 );
        posicionPTB = 16 + ( (0.0/113.0) * tcontrol6 );
        posicionST8 = 36 + ( (0.0/113.0) * tcontrol6 );

        tcontrol6 = tcontrol6 + 0.05;
      }

      else if ( TWorld > 992 && TWorld <= 1133){

        posicionIGV = 29 + ( ((0.0)/141.0) * (tcontrol7) ) ;
        posicionVBV = 92 + ( (0.0/141.0) * tcontrol7 );
        posicionVSV =61 + ( (0.0/141.0) * tcontrol7 );
        posicionFC62109 = 1 + ( (0.0/141.0) *tcontrol7 );
        posicionFC62108 = 32.6 + ( (0.0/141.0) *tcontrol7 );
        posicionFC62107 = 17.2 + ( (0.0/141.0) *tcontrol7 );
        posicionTBV = 10 + ( (0.0/141.0) * tcontrol7 );
        VOLTAJE_SALIDA = 10.47 + ((0.0/141.0) *tcontrol7 );
        posicionPTB = 16 + ( (0.0/141.0) * tcontrol7 );
        posicionST8 = 36 + ( (0.0/141.0) * tcontrol7 );

        tcontrol7 = tcontrol7 + 0.05;
      }

      else if ( TWorld > 1133 && TWorld <= 1173){

        posicionIGV = 29 + ( ((0.0)/40.0) * (tcontrol8) ) ;
        posicionVBV = 92 + ( (-6.0/40.0) * tcontrol8 );
        posicionVSV =61 + ( (1.0/40.0) * tcontrol8 );
        posicionFC62109 = 1 + ( (0.0/40.0) *tcontrol8 );
        posicionFC62108 = 32.6 + ( (1.20/40.0) *tcontrol8 );
        posicionFC62107 = 17.2 + ( (0.8/40.0) *tcontrol8 );
        posicionTBV = 10 + ( (3.0/40.0) * tcontrol8 );
        VOLTAJE_SALIDA = 10.47 + ((2.85/40.0) *tcontrol8 );
        posicionPTB = 16 + ( (4.0/40.0) * tcontrol8 );
        posicionST8 = 36 + ( (-13.0/40.0) * tcontrol8 );

        tcontrol8 = tcontrol8 + 0.05;
      }

      else if ( TWorld > 1173 && TWorld <= 1258){

        posicionIGV = 29 + ( ((0.0)/85.0) * (tcontrol9) ) ;
        posicionVBV = 86 + ( (-30.0/85.0) * tcontrol9 );
        posicionVSV =62 + ( (-4.0/85.0) * tcontrol9 );
        posicionFC62109 = 1 + ( (0.0/85.0) *tcontrol9 );
        posicionFC62108 = 33.8 + ( (2.3/85.0) *tcontrol9 );
        posicionFC62107 = 18 + ( (1.8/85.0) *tcontrol9 );
        posicionTBV = 13 + ( (-1.0/85.0) * tcontrol9 );
        VOLTAJE_SALIDA = 13.32 + ((0.15/85.0) *tcontrol9 );
        posicionPTB = 20 + ( (3.0/85.0) * tcontrol9 );
        posicionST8 = 23 + ( (0.0/85.0) * tcontrol9 );

        tcontrol9 = tcontrol9 + 0.05;
      }

      else if ( TWorld > 1258 && TWorld <= 1365){

        posicionIGV = 29 + ( ((0.0)/107.0) * (tcontrol10) ) ;
        posicionVBV = 56 + ( (-8.0/107.0) * tcontrol10 );
        posicionVSV =58 + ( (3.0/107.0) * tcontrol10 );
        posicionFC62109 = 1 + ( (0.0/107.0) *tcontrol10 );
        posicionFC62108 = 36.1 + ( (1.7/107.0) *tcontrol10 );
        posicionFC62107 = 19.8 + ( (1.4/107.0) *tcontrol10 );
        posicionTBV = 12 + ( (2.0/107.0) * tcontrol10 );
        VOLTAJE_SALIDA = 13.47 + ((0.68/107.0) *tcontrol10 );
        posicionPTB = 23 + ( (4.0/107.0) * tcontrol10 );
        posicionST8 = 23 + ( (-13.0/107.0) * tcontrol10 );

        tcontrol10 = tcontrol10 + 0.05;
      }

      else if ( TWorld > 1365 && TWorld <= 1463){

        posicionIGV = 29 + ( ((0.0)/98.0) * (tcontrol11) ) ;
        posicionVBV = 48 + ( (20.0/98.0) * tcontrol11 );
        posicionVSV =61 + ( (19.0/98.0) * tcontrol11 );
        posicionFC62109 = 1 + ( (29.5/98.0) *tcontrol11 );
        posicionFC62108 = 37.8 + ( (-1.0/98.0) *tcontrol11 );
        posicionFC6298 = 21.2 + ( (-20.2/98.0) *tcontrol11 );
        posicionTBV = 14 + ( (5.0/98.0) * tcontrol11 );
        VOLTAJE_SALIDA = 14.15 + ((0.21/98.0) *tcontrol11 );
        posicionPTB = 27 + ( (8.0/98.0) * tcontrol11 );
        posicionST8 = 10 + ( (58.0/98.0) * tcontrol11 );

        tcontrol11 = tcontrol11 + 0.05;
      }

      else if ( TWorld > 1463 && TWorld <= 1556){

        posicionIGV = 29 + ( ((0.0)/93.0) * (tcontrol12) ) ;
        posicionVBV = 68 + ( (-3.0/93.0) * tcontrol12 );
        posicionVSV =80 + ( (2.0/93.0) * tcontrol12 );
        posicionFC62109 = 30.5 + ( (0.8/93.0) *tcontrol12 );
        posicionFC62108 = 36.8 + ( (0.8/93.0) *tcontrol12 );
        posicionFC6298 = 1 + ( (0/93.0) *tcontrol12 );
        posicionTBV = 19 + ( (1.0/93.0) * tcontrol12 );
        VOLTAJE_SALIDA = 14.36 + ((0.3/93.0) *tcontrol12 );
        posicionPTB = 35 + ( (6.0/93.0) * tcontrol12 );
        posicionST8 = 68 + ( (-36.0/93.0) * tcontrol12 );

        tcontrol12 = tcontrol12 + 0.05;
      }

      else if ( TWorld > 1556 && TWorld <= 1656){

        posicionIGV = 29 + ( ((0.0)/100.0) * (tcontrol13) ) ;
        posicionVBV = 65 + ( (-15.0/100.0) * tcontrol13 );
        posicionVSV =82 + ( (-2.0/100.0) * tcontrol13 );
        posicionFC62109 = 31.3 + ( (1.5/100.0) *tcontrol13 );
        posicionFC62108 = 37.6 + ( (1.9/100.0) *tcontrol13 );
        posicionFC6298 = 1 + ( (0/100.0) *tcontrol13 );
        posicionTBV = 20 + ( (-1.0/100.0) * tcontrol13 );
        VOLTAJE_SALIDA = 14.66 + ((0.46/100.0) *tcontrol13 );
        posicionPTB = 41 + ( (4.0/100.0) * tcontrol13 );
        posicionST8 = 32 + ( (-8.0/100.0) * tcontrol13 );

        tcontrol13 = tcontrol13 + 0.05;
      }

      else if ( TWorld > 1656 && TWorld <= 1762){

        posicionIGV = 29 + ( ((0.0)/106.0) * (tcontrol14) ) ;
        posicionVBV = 50 + ( (-14.0/106.0) * tcontrol14 );
        posicionVSV =80 + ( (-3.0/106.0) * tcontrol14 );
        posicionFC62109 = 32.8 + ( (1.1/106.0) *tcontrol14 );
        posicionFC62108 = 39.5 + ( (1.3/106.0) *tcontrol14 );
        posicionFC6298 = 1 + ( (0/106.0) *tcontrol14 );
        posicionTBV = 19 + ( (-1.0/106.0) * tcontrol14 );
        VOLTAJE_SALIDA = 15.12 + ((0.54/106.0) *tcontrol14 );
        posicionPTB = 45 + ( (2.0/106.0) * tcontrol14 );
        posicionST8 = 24 + ( (0.0/106.0) * tcontrol14 );

        tcontrol14 = tcontrol14 + 0.05;
      }


      else if ( TWorld > 1762 && TWorld <= 1853){

        posicionIGV = 29 + ( ((0.0)/91.0) * (tcontrol15) ) ;
        posicionVBV = 36 + ( (-8.0/91.0) * tcontrol15 );
        posicionVSV =77 + ( (-1.0/91.0) * tcontrol15 );
        posicionFC62109 = 33.9 + ( (1.1/91.0) *tcontrol15 );
        posicionFC62108 = 40.8 + ( (1.8/91.0) *tcontrol15 );
        posicionFC6298 = 1 + ( (0/91.0) *tcontrol15 );
        posicionTBV = 18 + ( (0.0/91.0) * tcontrol15 );
        VOLTAJE_SALIDA = 15.66 + ((0.72/91.0) *tcontrol15 );
        posicionPTB = 47 + ( (3.0/91.0) * tcontrol15 );
        posicionST8 = 24 + ( (-14.0/91.0) * tcontrol15 );

        tcontrol15 = tcontrol15 + 0.05;
      }


      else if ( TWorld > 1853 && TWorld <= 1938){

        posicionIGV = 29 + ( ((0.0)/85.0) * (tcontrol16) ) ;
        posicionVBV = 28 + ( (6.0/85.0) * tcontrol16 );
        posicionVSV =76 + ( (12.0/85.0) * tcontrol16 );
        posicionFC62109 = 35 + ( (1.0/85.0) *tcontrol16 );
        posicionFC62108 = 42.6 + ( (-4.2/85.0) *tcontrol16 );
        posicionFC6298 = 1 + ( (21.0/85.0) *tcontrol16 );
        posicionTBV = 18 + ( (2.0/85.0) * tcontrol16 );
        VOLTAJE_SALIDA = 16.38 + ((0.46/85.0) *tcontrol16 );
        posicionPTB = 50 + ( (6.0/85.0) * tcontrol16 );
        posicionST8 = 10 + ( (14.0/85.0) * tcontrol16 );

        tcontrol16 = tcontrol16 + 0.05;
      }

      else if ( TWorld > 1938 && TWorld <= 2039){

        posicionIGV = 29 + ( ((4.0)/101.0) * (tcontrol17) ) ;
        posicionVBV = 34 + ( (-10.0/101.0) * tcontrol17 );
        posicionVSV =88 + ( (-2.0/101.0) * tcontrol17 );
        posicionFC62109 = 36 + ( (1.5/101.0) *tcontrol17 );
        posicionFC62108 = 38.4 + ( (1.5/101.0) *tcontrol17 );
        posicionFC6298 = 22 + ( (1.0/101.0) *tcontrol17 );
        posicionTBV = 20 + ( (-1.0/101.0) * tcontrol17 );
        VOLTAJE_SALIDA = 16.84 + ((0.71/101.0) *tcontrol17 );
        posicionPTB = 56 + ( (3.0/101.0) * tcontrol17 );
        posicionST8 = 24 + ( (0/101.0) * tcontrol17 );

        tcontrol17 = tcontrol17 + 0.05;
      }


      else if ( TWorld > 2039 && TWorld <= 2121){

        posicionIGV = 33 + ( ((16.0)/82.0) * (tcontrol18) ) ;
        posicionVBV = 24 + ( (-4.0/82.0) * tcontrol18 );
        posicionVSV =86 + ( (-4.0/82.0) * tcontrol18 );
        posicionFC62109 = 37.5 + ( (1.6/82.0) *tcontrol18 );
        posicionFC62108 = 39.9 + ( (1.6/82.0) *tcontrol18 );
        posicionFC6298 = 23 + ( (1.3/82.0) *tcontrol18 );
        posicionTBV = 19 + ( (-1.0/82.0) * tcontrol18 );
        VOLTAJE_SALIDA = 17.55 + ((0.81/82.0) *tcontrol18 );
        posicionPTB = 59 + ( (1.0/82.0) * tcontrol18 );
        posicionST8 = 24 + ( (0/82.0) * tcontrol18 );

        tcontrol18 = tcontrol18 + 0.05;
      }

      else if ( TWorld > 2121 && TWorld <= 2208){

        posicionIGV = 49 + ( ((15.0)/87.0) * (tcontrol19) ) ;
        posicionVBV = 20 + ( (-6.0/87.0) * tcontrol19 );
        posicionVSV =82 + ( (-4.0/87.0) * tcontrol19 );
        posicionFC62109 = 39.1 + ( (1.3/87.0) *tcontrol19 );
        posicionFC62108 = 41.5 + ( (1.5/87.0) *tcontrol19 );
        posicionFC6298 = 24.3 + ( (1.2/87.0) *tcontrol19 );
        posicionTBV = 18 + ( (-1.0/87.0) * tcontrol19 );
        VOLTAJE_SALIDA = 18.36 + ((0.78/87.0) *tcontrol19 );
        posicionPTB = 60 + ( (2.0/87.0) * tcontrol19 );
        posicionST8 = 24 + ( (-13.0/87.0) * tcontrol19 );

        tcontrol19 = tcontrol19 + 0.05;
      }

      else if ( TWorld > 2208 && TWorld <= 2319){

        posicionIGV = 64 + ( ((11.0)/111.0) * (tcontrol20) ) ;
        posicionVBV = 14 + ( (-4.0/111.0) * tcontrol20 );
        posicionVSV =78 + ( (0.0/111.0) * tcontrol20 );
        posicionFC62109 = 40.4 + ( (1.0/111.0) *tcontrol20 );
        posicionFC62108 = 43 + ( (3.2/111.0) *tcontrol20 );
        posicionFC6298 = 25.5+ ( (1.0/111.0) *tcontrol20 );
        posicionTBV = 17 + ( (0.0/111.0) * tcontrol20 );
        VOLTAJE_SALIDA = 19.14 + ((0.88/111.0) *tcontrol20 );
        posicionPTB = 62 + ( (2.0/111.0) * tcontrol20 );
        posicionST8 = 11 + ( (0.0/111.0) * tcontrol20 );

        tcontrol20 = tcontrol20 + 0.05;
      }


      else if ( TWorld > 2319 && TWorld <= 2396){

        posicionIGV = 75 + ( ((11.0)/77.0) * (tcontrol21) ) ;
        posicionVBV = 10 + ( (-3.0/77.0) * tcontrol21 );
        posicionVSV = 78 + ( (1.0/77.0) * tcontrol21 );
        posicionFC62109 = 41.4 + ( (1.4/77.0) *tcontrol21 );
        posicionFC62108 = 46.2 + ( (3.6/77.0) *tcontrol21 );
        posicionFC6298 = 26.5 + ( (1.0/77.0) *tcontrol21 );
        posicionTBV = 17 + ( (-1.0/77.0) * tcontrol21 );
        VOLTAJE_SALIDA = 20.02 + ((0.46/77.0) *tcontrol21 );
        posicionPTB = 64 + ( (2.0/77.0) * tcontrol21 );
        posicionST8 = 11 + ( (0.0/77.0) * tcontrol21 );

        tcontrol21 = tcontrol21 + 0.05;
      }

      else if ( TWorld > 2396 && TWorld <= 2443HHV

        posicionIGV = 86 + ( ((0.8)/47.0) * (tcontrol22) ) ;
        posicionVBV = 7 + ( (-1.0/47.0) * tcontrol22 );
        posicionVSV = 79 + ( (-0.1/47.0) * tcontrol22 );
        posicionFC62109 = 42.8 + ( (-0.8/47.0) *tcontrol22 );
        posicionFC62108 = 49.8 + ( (0.8/47.0) *tcontrol22 );
        posicionFC6298 = 27.5 + ( (-0.5/47.0) *tcontrol22 );
        posicionTBV = 16 + ( (0.2/47.0) * tcontrol22 );
        VOLTAJE_SALIDA = 20.48 + ((1.02/47.0) *tcontrol22 );
        posicionPTB = 66 + ( (0.2/47.0) * tcontrol22 );
        posicionST8 = 11 + ( (-0.4/47.0) * tcontrol22 );

        tcontrol22 = tcontrol22 + 0.05;
      }


      else if ( TWorld > 2443 && TWorld <= 2605){

        posicionIGV = 86.8 + ( ((0.0)/162.0) * (tcontrol23) ) ;
        posicionVBV = 6 + ( (-0.0/162.0) * tcontrol23 );
        posicionVSV = 78.9 + ( (0.0/162.0) * tcontrol23 );
        posicionFC62109 = 42.0 + ( (0.0/162.0) *tcontrol23 );
        posicionFC62108 = 49.0 + ( (0.0/162.0) *tcontrol23 );
        posicionFC6298 = 27.0 + ( (0.0/162.0) *tcontrol23 );
        posicionTBV = 16.2 + ( (0.0/162.0) * tcontrol23 );
        VOLTAJE_SALIDA = 21.5 + ((1.0/162.0) *tcontrol23 );
        posicionPTB = 66.2 + ( (0.0/162.0) * tcontrol23 );
        posicionST8 = 10.6 + ( (0.0/162.0) * tcontrol23 );

        tcontrol23 = tcontrol23 + 0.05;
      }


      else if ( TWorld > 2605 && TWorld <= 2693){

        posicionIGV = 86.8 + ( ((0.0)/88.0) * (tcontrol24) ) ;
        posicionVBV = 6 + ( (-0.0/88.0) * tcontrol24 );
        posicionVSV = 78.9 + ( (0.0/88.0) * tcontrol24 );
        posicionFC62109 = 42.0 + ( (0.0/88.0) *tcontrol24 );
        posicionFC62108 = 49.0 + ( (0.0/88.0) *tcontrol24 );
        posicionFC6298 = 27.0 + ( (0.0/88.0) *tcontrol24 );
        posicionTBV = 16.2 + ( (0.0/88.0) * tcontrol24 );
        VOLTAJE_SALIDA = 22.5 + ((0.7/88.0) *tcontrol24 );
        posicionPTB = 66.2 + ( (0.0/88.0) * tcontrol24 );
        posicionST8 = 10.6 + ( (0.0/88.0) * tcontrol24 );

        tcontrol24 = tcontrol24 + 0.05;
      }
          

      else if ( TWorld > 2693 && TWorld <= 4073){

        posicionIGV = 86.8 + ( ((0.0)/1380.0) * (tcontrol25) ) ;
        posicionVBV = 6 + ( (-0.0/1380.0) * tcontrol25 );
        posicionVSV = 78.9 + ( (0.0/1380.0) * tcontrol25 );
        posicionFC62109 = 42.0 + ( (0.0/1380.0) *tcontrol25 );
        posicionFC62108 = 49.0 + ( (0.0/1380.0) *tcontrol25 );
        posicionFC6298 = 27.0 + ( (0.0/1380.0) *tcontrol25 );
        posicionTBV = 16.2 + ( (0.0/1380.0) * tcontrol25 );
        VOLTAJE_SALIDA = 23.2 + ((0.2/1380.0) *tcontrol25 );
        posicionPTB = 66.2 + ( (0.0/1380.0) * tcontrol25 );
        posicionST8 = 10.6 + ( (0.0/1380.0) * tcontrol25 );

        tcontrol25 = tcontrol25 + 0.05;
      }


      if (W_TA >= 0 && W_TA <= 2212){

        RADIO_MEDIO_TA = 0.00581373;
        BETA1_TA = 0.99210412;
        CONSTANTE_AREAS_1_TA = 0.73305983;
        BETA2_TA = 1.594428375;
        CONSTANTE_AREAS_2_TA = 0.880895857;
        BETA3_TA = 1.591434019;

      }

      else if (W_TA >= 2212 && W_TA <= 8325){

        RADIO_MEDIO_TA = 0.005635039;
        BETA1_TA = 0.999179236;
        CONSTANTE_AREAS_1_TA = 0.682613184;
        BETA2_TA = 1.499981444;
        CONSTANTE_AREAS_2_TA = 1.245039302;
        BETA3_TA = 1.39512711;

      }

      else if (W_TA >= 8325 && W_TA <= 8381){

        RADIO_MEDIO_TA = 0.005618565;
        BETA1_TA = 0.999178876;
        CONSTANTE_AREAS_1_TA = 0.684662261;
        BETA2_TA = 1.491078362;
        CONSTANTE_AREAS_2_TA = 1.241301659;
        BETA3_TA = 1.382118752;

      }

      else if (W_TA >= 8381 && W_TA <= 8961){

        RADIO_MEDIO_TA = 0.005650929;
        BETA1_TA = 0.998507915;
        CONSTANTE_AREAS_1_TA = 0.733371045;
        BETA2_TA = 1.376005318;
        CONSTANTE_AREAS_2_TA = 1.062640328;
        BETA3_TA = 1.287316018;

      }

      else if (W_TA >= 8961 && W_TA <= 8961){

        RADIO_MEDIO_TA = 0.005650929;
        BETA1_TA = 0.998507915;
        CONSTANTE_AREAS_1_TA = 0.733371045;
        BETA2_TA = 1.376005318;
        CONSTANTE_AREAS_2_TA = 1.062640328;
        BETA3_TA = 1.287316018;

      }

      else if (W_TA >= 8961 && W_TA <= 8961){

        RADIO_MEDIO_TA = 0.005650929;
        BETA1_TA = 0.998507915;
        CONSTANTE_AREAS_1_TA = 0.733371045;
        BETA2_TA = 1.376005318;
        CONSTANTE_AREAS_2_TA = 1.062640328;
        BETA3_TA = 1.287316018;

      }

      else if (W_TA >= 8961 && W_TA <= 9032){

        RADIO_MEDIO_TA = 0.005636474;
        BETA1_TA = 0.998426133;
        CONSTANTE_AREAS_1_TA = 0.736335153;
        BETA2_TA = 1.367196499;
        CONSTANTE_AREAS_2_TA = 1.058316617;
        BETA3_TA = 1.276000799;

      }

      else if (W_TA >= 9032 && W_TA <= 9011){

        RADIO_MEDIO_TA = 0.005648691;
        BETA1_TA = 0.998466172;
        CONSTANTE_AREAS_1_TA = 0.733807241;
        BETA2_TA = 1.375000559;
        CONSTANTE_AREAS_2_TA = 1.061962164;
        BETA3_TA = 1.285218019;

      }

      else if (W_TA >= 9011 && W_TA <= 9148){

        RADIO_MEDIO_TA = 0.00562133;
        BETA1_TA = 0.998298312;
        CONSTANTE_AREAS_1_TA = 0.739590757;
        BETA2_TA = 1.358292779;
        CONSTANTE_AREAS_2_TA = 1.053537467;
        BETA3_TA = 1.264000013;

      }

      else if (W_TA >= 9148 && W_TA <= 9568){
        
        RADIO_MEDIO_TA = 0.005692012;
        BETA1_TA = 0.997629827;
        CONSTANTE_AREAS_1_TA = 0.800571556;
        BETA2_TA = 1.15534375;
        CONSTANTE_AREAS_2_TA = 0.852684314;
        BETA3_TA = 1.151682462;

      }

      else if (W_TA >= 9568 && W_TA <= 9613){

        RADIO_MEDIO_TA = 0.005685438;
        BETA1_TA = 0.997621444;
        CONSTANTE_AREAS_1_TA = 0.802611854;
        BETA2_TA = 1.149904905;
        CONSTANTE_AREAS_2_TA = 0.850513019;
        BETA3_TA = 1.146988427;

      }

      else if (W_TA >= 9613 && W_TA <= 9574){

        RADIO_MEDIO_TA = 0.005691988;
        BETA1_TA = 0.997689562;
        CONSTANTE_AREAS_1_TA = 0.800451049;
        BETA2_TA = 1.155167892;
        CONSTANTE_AREAS_2_TA = 0.852786685;
        BETA3_TA = 1.151866545;

      }

      else if (W_TA >= 9574 && W_TA <= 9561){

        RADIO_MEDIO_TA = 0.005694975;
        BETA1_TA = 0.997738228;
        CONSTANTE_AREAS_1_TA = 0.799457458;
        BETA2_TA = 1.157492757;
        CONSTANTE_AREAS_2_TA = 0.853834482;
        BETA3_TA = 1.154153891;

      }

      else if (W_TA >= 9561 && W_TA <= 9629){

        RADIO_MEDIO_TA = 0.005682306;
        BETA1_TA = 0.997712815;
        CONSTANTE_AREAS_1_TA = 0.803367687;
        BETA2_TA = 1.147072132;
        CONSTANTE_AREAS_2_TA = 0.849663606;
        BETA3_TA = 1.145094219;

      }

      else if (W_TA >= 9629 && W_TA <= 9879){

        RADIO_MEDIO_TA = 0.005605573;
        BETA1_TA = 0.997486366;
        CONSTANTE_AREAS_1_TA = 0.842819167;
        BETA2_TA = 1.05399023;
        CONSTANTE_AREAS_2_TA = 0.800208646;
        BETA3_TA = 1.076766998;

      }

      else if (W_TA >= 9879 && W_TA <= 9874){

        RADIO_MEDIO_TA = 0.00560485;
        BETA1_TA = 0.997549738;
        CONSTANTE_AREAS_1_TA = 0.843033278;
        BETA2_TA = 1.053188673;
        CONSTANTE_AREAS_2_TA = 0.799978802;
        BETA3_TA = 1.076370545;

      }

      else if (W_TA >= 9874 && W_TA <= 9877){

        RADIO_MEDIO_TA = 0.005608507;
        BETA1_TA = 0.997616382;
        CONSTANTE_AREAS_1_TA = 0.841366794;
        BETA2_TA = 1.056298407;
        CONSTANTE_AREAS_2_TA = 0.80153182;
        BETA3_TA = 1.079044863;

      }

      else if (W_TA >= 9877 && W_TA <= 9894){

        RADIO_MEDIO_TA = 0.005615882;
        BETA1_TA = 0.997673379;
        CONSTANTE_AREAS_1_TA = 0.838156627;
        BETA2_TA = 1.062758204;
        CONSTANTE_AREAS_2_TA = 0.804565713;
        BETA3_TA = 1.084292876;

      }

      else if (W_TA >= 9894 && W_TA <= 9978){

        RADIO_MEDIO_TA = 0.005587749;
        BETA1_TA = 0.997671357;
        CONSTANTE_AREAS_1_TA = 0.849854977;
        BETA2_TA = 1.038123925;
        CONSTANTE_AREAS_2_TA = 0.79333694;
        BETA3_TA = 1.064860018;

      }

      else if (W_TA >= 9978 && W_TA <= 10071){

        RADIO_MEDIO_TA = 0.005553056;
        BETA1_TA = 0.997674576;
        CONSTANTE_AREAS_1_TA = 0.865639431;
        BETA2_TA = 1.007244742;
        CONSTANTE_AREAS_2_TA = 0.778600812;
        BETA3_TA = 1.041052663;

      }

      else if (W_TA >= 10071 && W_TA <= 10051){

        RADIO_MEDIO_TA = 0.005555912;
        BETA1_TA = 0.997671689;
        CONSTANTE_AREAS_1_TA = 0.864196366;
        BETA2_TA = 1.009895936;
        CONSTANTE_AREAS_2_TA = 0.779900136;
        BETA3_TA = 1.043034982;

      }*/




////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////

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
        SatIEx=Saturacion(VEx_GE,830,0);
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
    PotenciaBomba_AH=PotBomba(OnOffBomba_AH,PotMaxBomba_AH,TaoBomba_AH,CIPotBomba_AH,FallaBomb_AH)*FallaBomb_AH;
    PresionBombS_AH=(2413165.052609/PotMaxBomba_AH)*CIPotBomba_AH;
	/*if(FlujoBombS_AH>0.03 && PresionBombS_AH<1723689.323292)
	{
		N1N34_BI_PSLL1605=1;
	}
	else
	{
		N1N34_BI_PSLL1605=0;
	}*/
    FlujoBombS_AH=(0.0454249/PotMaxBomba_AH)*CIPotBomba_AH;
    PresionBombP_AH=(((33439572.871867+PresionBombS_AH)/PotMaxBomba_AH)*CIPotBomba_AH)*Variador_AH;
    FlujoBombP_AH=((0.0454249/PotMaxBomba_AH)*CIPotBomba_AH)*Variador_AH;
    FlujoOutTanque_AH=FlujoBombS_AH;
    Nivel_Tanque_AH=NivelTanque(FlujoInTanque_AH,FlujoOutTanque_AH,LargoTanque_AH,AnchoTanque_AH,CINivelTanque_AH);
	/*if(CINivelTanque_AH<0.1524)
	{
		N1N34_BI_LSLL1601=1;
	}
	else
	{
		N1N34_BI_LSLL1601=0;
	}*/
    MasaAceite_AH=(CINivelTanque_AH*LargoTanque_AH*AnchoTanque_AH)*DensidadAceite_AH;
    TempAceiteTank_AH=TempAceiteTanque(WElec_AH,UTanque_AH,TempAmbiente,(FlujoInTanque_AH*CpAceite_AH),CITempAceiteAH,(FlujoOutTanque_AH*CpAceite_AH),(MasaAceite_AH*CpAceite_AH),CITempAceiteTanque_AH);
	/*if(CITempAceiteTanque_AH<21.11111)
	{
		N1N34_BI_TSH1603=1;
	}
	else
	{
		N1N34_BI_TSH1603=0;
	}*/
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
		/*if(CITempAceiteTanque_AH>82.2222)
		{
			N1N34_BI_TSH1602=1;
		}
		else
		{
			N1N34_BI_TSH1602=0;
		}*/
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
		TE6232 = CITemCoalV082_1;
		TE6232_F =(1.8*CITemCoalV082_1)-459.67;


    }
    else if (On_off_Filtro_FV082_1==0 && On_off_Filtro_FV082_2==1)
    {
        VelocidadGasout4 = (((VelocidadGasin3*0.8589*AreaTub2*CIPresionTanqueCoal_V3/(R_gas*CITemCoal_V3))*R_gas*CITemCoalV082_2)/(CIPre_Fil_FV082_2*AreaTub3));
        Flujo62109= ((VelocidadGasout4*AreaTub3*CIPre_Fil_FV082_2/(R_gas*CITemCoalV082_2)));
        PI6214 = CIPre_Fil_FV082_2;
		TE6232 = CITemCoalV082_2;
		TE6232_F = (1.8*CITemCoalV082_2)-459.67;
    }

	
    
	X_FSV62571 = Xvalvcontrol1_v1(Segnal_FSV62571*Onn_Off_FSV62571,CI_Apertura_FSV62571,Tao_Valvula_FSV62571,Apertura_Max_FSV62571);
	X_FSV62570 = Xvalvcontrol1_v1(Segnal_FSV62570*Onn_Off_FSV62570,CI_Apertura_FSV62570,Tao_Valvula_FSV62570,Apertura_Max_FSV62570);
	X_FSV6249 = Xvalvcontrol1_v1(Segnal_FSV6249*Onn_Off_FSV6249,CI_Apertura_FSV6249,Tao_Valvula_FSV6249,Apertura_Max_FSV6249);
    X_FSV6204 = Xvalvcontrol1_v1(Segnal_FSV6204*Onn_Off_FSV6204,CI_Apertura_FSV6204,Tao_Valvula_FSV6204,Apertura_Max_FSV6204);
    X_SOV6208 = Xvalvcontrol1_v1(Segnal_SOV6208*Onn_Off_SOV6208,CI_Apertura_SOV6208,Tao_Valvula_SOV6208,Apertura_Max_SOV6208);
    
	Flujo_FSV62571 = (Flujo62109*CI_Apertura_FSV62571);
    Flujo_FSV62570 = (Flujo_FSV62571*CI_Apertura_FSV62570);
    Flujo_FSV6249 = ((Flujo_FSV62571-Flujo_FSV62570)*CI_Apertura_FSV6249);
    FlujoSOV6208 = (Flujo_FSV6249*CI_Apertura_SOV6208);
	////////////SUMINSTRO DE COMBUSTIBLE, AL MULTIPLE DE GAS//////////////////

    Flujo_FSV6204  = (CI_Apertura_FSV6204*(Flujo_FSV6249-FlujoSOV6208));

	WF36DMD_SUM = Flujo_FSV6204*7936.64;
    
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

    
    X_FCV64217 = Xvalvcontrol1_v1(Onn_Off_FCV64217,CI_Apertura_FCV64217,Tao_Valvula_FCV64217,Apertura_Max_FCV64217);      

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


////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////

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

	TemGas = TE6232;

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

	AE62326_AI = PCIp*Rho_rel*0.076;

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
    
	

    //CONCENTRACION EN PROCENTAJE QUE SE MUESTRA EN PANTALLA

    
    X_NhexanoX = X_Nhexano*100;
    X_PropanoX = X_Propano*100;
    X_IbutanoX = X_Ibutano*100;
    X_NbutanoX = X_Nbutano*100;
    X_NeopentanoX = X_Neopentano*100;
    X_IpentanoX = X_Ipentano*100;
    X_NpentanoX = X_Npentano*100;
    X_nitrogenoRX = X_nitrogenoR*100;
    X_metanoX =	X_metano*100;
    X_bioxidoRX = X_bioxidoR*100;
    X_etanoX = X_etano*100;
    X_OxigenoX = X_Oxigeno*100;



	for( i = 0; i < 12; i++){
           M_gas_kg_kmol=M_gas_kg_kmol+(XCombustible[i]*coef_esq[i]);
       }

       mairemax_kg_s=128;//
       mairemax_kmol_s=mairemax_kg_s/M_aire_kg_kmol;
       mgas_kg_s=2.7;//
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
          suma2= suma2 + (XCombustible[i]*coef_esq[i]);
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
        for(int z=0; z < 5; z++) {

        for( i=0; i < 14; i++){
          logk[i]=A1_KA[i]+(A2_KA[i]*(Temperatura-1600)*pow(10.0,-3.0))+(A3_KA[i]*(Temperatura-1600)*(Temperatura-2000)*pow(10.0,-6.0))+(A4_KA[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*pow(10.0,-9.0))+(A5_KA[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*pow(10.0,-12.0))+(A6_KA[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*(Temperatura-3200)*pow(10.0,-15.0))+(A7_KA[i]*(Temperatura-1600)*(Temperatura-2000)*(Temperatura-2400)*(Temperatura-2800)*(Temperatura-3200)*(Temperatura-3600)*pow(10.0,-18.0));
        }

        for( i= 0; i < 14; i++){
          k[i]=pow(10,logk[i]);
        }

        for( i = 0; i < 17; i++){
          cal_mol[i]=((a1_Hcal[i]*(Tref_flama-(Tref_h)))+(a2_Hcal[i]*(pow(Tref_flama,2)-pow(Tref_h,2))/2)+(a3_Hcal[i]*(pow(Tref_flama,3)-pow((Tref_h),3))/3)+(a4_Hcal[i]*(pow(Tref_flama,4)-pow((Tref_h),4))/4)+(a5_Hcal[i]*(pow(Tref_flama,5)-pow((Tref_h),5))/5)+(a6_Hcal[i]*(pow(Tref_flama,6)-pow((Tref_h),6))/6)+(a7_Hcal[i]*(pow(Tref_flama,7)-pow((Tref_h),7))/7))*4.1787;
        }

        for(  i = 0; i < 9; i++){
           h0_href_R[i]=A_Cp[i]*(CITemCoalV082_2-T_ref)+((B_Cp[i]*(pow(CITemCoalV082_2,2)-pow(T_ref,2)))/2)+((C_Cp[i]*(pow(CITemCoalV082_2,3)-pow(T_ref,3)))/3);
           h0_href[i]=h0_href_R[i]*Ru/1000;
        }


        Nitro_comb=((a1_Hen[4]*(TGSSEL-Tref_h))+(a2_Hen[4]*(pow(TGSSEL,2)-pow(Tref_h,2))/2)+(a3_Hen[4]*(pow(TGSSEL,3)-pow(Tref_h,3))/3)+(a4_Hen[4]*(pow(TGSSEL,4)-pow(Tref_h,4))/4)+(a5_Hen[4]*(pow(TGSSEL,5)-pow(Tref_h,5))/5)+(a6_Hen[4]*(pow(TGSSEL,6)-pow(Tref_h,6))/6)+(a7_Hen[4]*(pow(TGSSEL,7)-pow(Tref_h,7))/7))*4.187;
        Nitro_aire=((a1_Hen[4]*(T_aire_comb-Tref_h))+(a2_Hen[4]*(pow(T_aire_comb,2)-pow(Tref_h,2))/2)+(a3_Hen[4]*(pow(T_aire_comb,3)-pow(Tref_h,3))/3)+(a4_Hen[4]*(pow(T_aire_comb,4)-pow(Tref_h,4))/4)+(a5_Hen[4]*(pow(T_aire_comb,5)-pow(Tref_h,5))/5)+(a6_Hen[4]*(pow(T_aire_comb,6)-pow(Tref_h,6))/6)+(a7_Hen[4]*(pow(T_aire_comb,7)-pow(Tref_h,7))/7))*4.187;
        CO2_comb=((a1_Hen[13]*(TGSSEL-Tref_h))+(a2_Hen[13]*(pow(TGSSEL,2)-pow(Tref_h,2))/2)+(a3_Hen[13]*(pow(TGSSEL,3)-pow(Tref_h,3))/3)+(a4_Hen[13]*(pow(TGSSEL,4)-pow(Tref_h,4))/4)+(a5_Hen[13]*(pow(TGSSEL,5)-pow(Tref_h,5))/5)+(a6_Hen[13]*(pow(TGSSEL,6)-pow(Tref_h,6))/6)+(a7_Hen[13]*(pow(TGSSEL,7)-pow(Tref_h,7))/7))*4.187;
        O2_aire=((a1_Hen[2]*(T_aire_comb-Tref_h))+(a2_Hen[2]*(pow(T_aire_comb,2)-pow(Tref_h,2))/2)+(a3_Hen[2]*(pow(T_aire_comb,3)-pow(Tref_h,3))/3)+(a4_Hen[2]*(pow(T_aire_comb,4)-pow(Tref_h,4))/4)+(a5_Hen[2]*(pow(T_aire_comb,5)-pow(Tref_h,5))/5)+(a6_Hen[2]*(pow(T_aire_comb,6)-pow(Tref_h,6))/6)+(a7_Hen[2]*(pow(T_aire_comb,7)-pow(Tref_h,7))/7))*4.187;

        n_hexano_kj_mol=(h0_href[0]+kj_mol[0])*coef_esq[0];
        propano_kj_mol=(h0_href[1]+kj_mol[1])*coef_esq[1];
        i_butano_kj_mol=(h0_href[4]+kj_mol[2])*coef_esq[2];
        n_butano_kj_mol=(h0_href[3]+kj_mol[3])*coef_esq[3];
        neopentano_kj_mol=(h0_href[5]+kj_mol[4])*coef_esq[4];
        i_pentano_kj_mol=(h0_href[6]+kj_mol[5])*coef_esq[5];
        n_pentano_kj_mol=(h0_href[7]+kj_mol[6])*coef_esq[6];
        nitrogeno_kj_mol=(Nitro_comb+kj_mol[7])*coef_esq[7];
        metano_kj_mol=(h0_href[2]+kj_mol[8])*coef_esq[8];
        bioxido_kj_mol=(CO2_comb+kj_mol[9])*coef_esq[9];
        etano_kj_mol=(h0_href[8]+kj_mol[10])*coef_esq[10];
        nitrogeno2_kj_mol=(kj_mol[7]+Nitro_aire)*num_nitrogeno;
        oxigeno_kj_mol=(kj_mol[11]+O2_aire)*num_oxigeno;
        Hreactivos=n_hexano_kj_mol+propano_kj_mol+ i_butano_kj_mol+n_butano_kj_mol+neopentano_kj_mol+i_pentano_kj_mol+n_pentano_kj_mol+nitrogeno_kj_mol+metano_kj_mol+bioxido_kj_mol+etano_kj_mol+nitrogeno2_kj_mol+ oxigeno_kj_mol;

        do{
          if(x_res==0){
            H2_inicial=7;
            H2O_inicial=2;
            CO2_inicial=1;
            N2_inicial=7;

            error1=100;
            error2=100;
            error3=100;
            error4=100;
          } else {
            rcomb_1=H2_inicial;
            rcomb_2=H2O_inicial;
            rcomb_3=CO2_inicial;
            rcomb_4=N2_inicial;

            H2_inicial=H2_inicial+M_Gauss[0][4];
            H2O_inicial=H2O_inicial+M_Gauss[1][4];
            CO2_inicial=CO2_inicial+M_Gauss[2][4];
            N2_inicial=N2_inicial+M_Gauss[3][4];

            if(H2_inicial<0){
               H2_inicial=H2_inicial*-1;
            }
            if(H2O_inicial<0){
               H2O_inicial=H2O_inicial*-1;
            }
            if(CO2_inicial<0){
               CO2_inicial=CO2_inicial*-1;
            }
            if(N2_inicial<0){
                N2_inicial=N2_inicial*-1;
            }

            if(rcomb_1<0){
               rcomb_1=rcomb_1*-1;
            }
            if(rcomb_2<0){
               rcomb_2=rcomb_2*-1;
            }
            if(rcomb_3<0){
               rcomb_3=rcomb_3*-1;
            }
            if(rcomb_4<0){
                   rcomb_4=rcomb_4*-1;
                }

            error1=((rcomb_1-H2_inicial)/rcomb_1)*100;
            error2=((rcomb_2-H2O_inicial)/rcomb_2)*100;
            error3=((rcomb_3-CO2_inicial)/rcomb_3)*100;
            error4=((rcomb_4-N2_inicial)/rcomb_4)*100;

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

          Presion_comb_bar=10;
          CO_prod=k[0]*pow(k[4],-1)*CO2_inicial*pow(H2O_inicial,-1)*H2_inicial;
          C_prod=k[1]*k[0]*CO2_inicial*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(H2_inicial,2);
          CH4_prod=k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(H2_inicial,4)*pow(H2O_inicial,-2)*CO2_inicial*pow(Presion_comb_bar,2);
          HCN_prod=k[0]*k[1]*CO2_inicial*pow(H2_inicial,2.5)*Presion_comb_bar*(N2_inicial)*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(k[3],-1);
          O2_prod=pow(k[4],2)*pow(H2_inicial,-2)*pow(H2O_inicial,2)*pow(Presion_comb_bar,-1);
          OH_prod=k[5]*pow(H2_inicial,-0.5)*(H2O_inicial)*pow(Presion_comb_bar,-0.5);
          H_prod=k[6]*pow(H2_inicial,0.5)*pow(Presion_comb_bar,-0.5);
          O_prod=k[4]*k[7]*pow(H2_inicial,-1)*(H2O_inicial)*pow(Presion_comb_bar,-1);
          O3_prod=pow(k[4],3)*k[8]*pow(H2_inicial,-3)*pow(H2O_inicial,3)*pow(Presion_comb_bar,-1);
          N_prod=k[9]*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NO_prod=k[4]*k[10]*pow(H2_inicial,-1)*H2O_inicial*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NO2_prod=pow(k[4],2)*k[10]*pow(k[11],-1)*pow(H2_inicial,-2)*pow(H2O_inicial,2)*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NH3_prod=pow(k[12],-1)*pow(H2_inicial,1.5)*N2_inicial*Presion_comb_bar;
          HNO3_prod=pow(k[4],2.5)*k[10]*pow(k[11],-1.5)*pow(k[13],-0.5)*pow(H2_inicial,-2.5)*pow(H2O_inicial,3)*pow(N2_inicial,0.5)*pow(Presion_comb_bar,-0.75);

          CO_H2=k[0]*pow(k[4],-1)*CO2_inicial*pow(H2O_inicial,-1);
          C_H2=2*k[1]*k[0]*CO2_inicial*pow(k[4],-2)*pow(H2O_inicial,-2)*(H2_inicial);
          CH4_H2=4*k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(H2_inicial,3)*pow(H2O_inicial,-2)*CO2_inicial*pow(Presion_comb_bar,2);
          HCN_H2=2.5*k[0]*k[1]*CO2_inicial*pow(H2_inicial,1.5)*Presion_comb_bar*(N2_inicial)*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(k[3],-1);
          O2_H2=-2*pow(k[4],2)*pow(H2_inicial,-3)*pow(H2O_inicial,2)*pow(Presion_comb_bar,-1);
          OH_H2=-0.5*k[5]*pow(H2_inicial,-1.5)*(H2O_inicial)*pow(Presion_comb_bar,-0.5);
          H_H2=0.5*k[6]*pow(H2_inicial,-0.5)*pow(Presion_comb_bar,-0.5);
          O_H2=-k[4]*k[7]*pow(H2_inicial,-2)*(H2O_inicial)*pow(Presion_comb_bar,-1);
          O3_H2=-3*pow(k[4],3)*k[8]*pow(H2_inicial,-4)*pow(H2O_inicial,3)*pow(Presion_comb_bar,-1);
          NO_H2=-1*k[4]*k[10]*pow(H2_inicial,-2)*H2O_inicial*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NO2_H2=-2*pow(k[4],2)*k[10]*pow(k[11],-1)*pow(H2_inicial,-3)*pow(H2O_inicial,2)*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NH3_H2=1.5*pow(k[12],-1)*pow(H2_inicial,0.5)*(N2_inicial)*(Presion_comb_bar);

          CO_B=-k[0]*pow(k[4],-1)*CO2_inicial*pow(H2O_inicial,-2)*H2_inicial;
          C_B=-2*k[1]*k[0]*CO2_inicial*pow(k[4],-2)*pow(H2O_inicial,-3)*pow(H2_inicial,2);
          CH4_B=-2*k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(H2_inicial,4)*pow(H2O_inicial,-3)*CO2_inicial*pow(Presion_comb_bar,2);
          HCN_B=-2*k[0]*k[1]*CO2_inicial*pow(H2_inicial,2.5)*Presion_comb_bar*(N2_inicial)*pow(k[4],-2)*pow(H2O_inicial,-3)*pow(k[3],-1);
          O2_B=2*pow(k[4],2)*pow(H2_inicial,-2)*(H2O_inicial)*pow(Presion_comb_bar,-1);
          OH_B=k[5]*pow(H2_inicial,-0.5)*pow(Presion_comb_bar,-0.5);
          O_B=k[4]*k[7]*pow(H2_inicial,-1)*pow(Presion_comb_bar,-1);
          O3_B=3*pow(k[4],3)*k[8]*pow(H2_inicial,-3)*pow(H2O_inicial,2)*pow(Presion_comb_bar,-1);
          NO_B=k[4]*k[10]*pow(H2_inicial,-1)*(N2_inicial)*pow(Presion_comb_bar,-0.5);
          NO2_B=2*pow(k[4],2)*k[10]*pow(k[11],-1)*pow(H2_inicial,-2)*H2O_inicial*(N2_inicial)*pow(Presion_comb_bar,-0.5);

          CO_C=k[0]*pow(k[4],-1)*pow(H2O_inicial,-1)*H2_inicial;
          C_C=k[1]*k[0]*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(H2_inicial,2);
          CH4_C=k[0]*k[1]*pow(k[2],-1)*pow(k[4],-2)*pow(H2_inicial,4)*pow(H2O_inicial,-2)*pow(Presion_comb_bar,2);
          HCN_C=k[0]*k[1]*pow(H2_inicial,2.5)*Presion_comb_bar*(N2_inicial)*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(k[3],-1);

          HCN_D=k[0]*k[1]*CO2_inicial*pow(H2_inicial,2.5)*Presion_comb_bar*pow(k[4],-2)*pow(H2O_inicial,-2)*pow(k[3],-1);
          N_D=k[9]*pow(Presion_comb_bar,-0.5);
          NO_D=k[4]*k[10]*pow(H2_inicial,-1)*H2O_inicial*pow(Presion_comb_bar,-0.5);
          NO2_D=pow(k[4],2)*k[10]*pow(k[11],-1)*pow(H2_inicial,-2)*pow(H2O_inicial,2)*pow(Presion_comb_bar,-0.5);
          NH3_D=pow(k[12],-1)*pow(H2_inicial,1.5)*(Presion_comb_bar);

          F_com=((R_CO)*(2*CO2_inicial+CO_prod+H2O_inicial+3*O3_prod+2*O2_prod+O_prod+OH_prod+2*NO2_prod+NO_prod))-CO2_inicial-CO_prod-C_prod-CH4_prod-HCN_prod;
          G_comb=((R_HO)*(2*CO2_inicial+CO_prod+H2O_inicial+3*O3_prod+2*O2_prod+O_prod+OH_prod+2*NO2_prod+NO_prod))-4*CH4_prod-2*H2O_inicial-2*H2_inicial-H_prod-HCN_prod-OH_prod-3*NH3_prod;
          H_comb=((R_NO)*(2*CO2_inicial+CO_prod+H2O_inicial+3*O3_prod+2*O2_prod+O_prod+OH_prod+2*NO2_prod+NO_prod))-HCN_prod-(2*N2_inicial*N2_inicial)-N_prod-NO2_prod-NO_prod-NH3_prod;
          J_comb=H2_inicial+H2O_inicial+CO2_inicial+pow(N2_inicial,2)+CO_prod+C_prod+CH4_prod+HCN_prod+O2_prod+OH_prod+H_prod+O_prod+O3_prod+N_prod+NO_prod+NO2_prod+NH3_prod-1;

          FA_comb=((R_CO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-CO_H2-C_H2-CH4_H2-HCN_H2;
          FB_comb=((R_CO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-CO_B-C_B-CH4_B-HCN_B;
          FC_comb=((R_CO)*(2+CO_C))-1-CO_C-C_C-CH4_C-HCN_C;
          FD_comb=((R_CO)*(2*NO2_D+NO_D))-HCN_D;

          GA_comb=((R_HO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-4*CH4_H2-2-H_H2-HCN_H2-OH_H2-3*NH3_H2;
          GB_comb=((R_HO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-4*CH4_B-2-HCN_B-OH_B;
          GC_comb=((R_HO)*(2+CO_C))-4*CH4_C-HCN_C;
          GD_comb=((R_HO)*(2*NO2_D+NO_D))-HCN_D-3*NH3_D;

          HA_comb=((R_NO)*(CO_H2+3*O3_H2+2*O2_H2+O_H2+OH_H2+2*NO2_H2+NO_H2))-HCN_H2-N_H2-NO2_H2-NO_H2-NH3_H2;
          HB_comb=((R_NO)*(CO_B+1+3*O3_B+2*O2_B+O_B+OH_B+2*NO2_B+NO_B))-HCN_B-NO2_B-NO_B;
          HC_comb=((R_NO)*(2+CO_C))-HCN_C;
          HD_comb=((R_NO)*(2*NO2_D+NO_D))-HCN_D-(4*N2_inicial)-N_D-NO2_D-NO_D-NH3_D;

          JA_comb=1+CO_H2+C_H2+CH4_H2+HCN_H2+O2_H2+OH_H2+H_H2+O_H2+O3_H2+NO_H2+NO2_H2+NH3_H2;
          JB_comb=1+CO_B+C_B+CH4_B+HCN_B+O2_B+OH_B+O_B+O3_B+NO_B+NO2_B;
          JC_comb=1+CO_C+C_C+CH4_C+HCN_C;
          JD_comb=2*N2_inicial+HCN_D+N_D+NO_D+NO2_D+NH3_D;

          M_Gauss[0][0]=FA_comb;
          M_Gauss[0][1]=FB_comb;
          M_Gauss[0][2]=FC_comb;
          M_Gauss[0][3]=FD_comb;
          M_Gauss[0][4]=-F_com;

          M_Gauss[1][0]=GA_comb;
          M_Gauss[1][1]=GB_comb;
          M_Gauss[1][2]=GC_comb;
          M_Gauss[1][3]=GD_comb;
          M_Gauss[1][4]=-G_comb;

          M_Gauss[2][0]=HA_comb;
          M_Gauss[2][1]=HB_comb;
          M_Gauss[2][2]=HC_comb;
          M_Gauss[2][3]=HD_comb;
          M_Gauss[2][4]=-H_comb;

          M_Gauss[3][0]=JA_comb;
          M_Gauss[3][1]=JB_comb;
          M_Gauss[3][2]=JC_comb;
          M_Gauss[3][3]=JD_comb;
          M_Gauss[3][4]=-J_comb;

             // INICIO METODO DE GAUSS-JORDAN 4X4

          d_gauss=M_Gauss[0][0];
          i=0;
          for ( j = 0; j < 5; j++ ){
            M_Gauss[i][j]=M_Gauss[i][j]/d_gauss;
          }
          aux2=M_Gauss[1][0];
          i=1;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[0][j]);
          }
          aux2=M_Gauss[2][0];
          i=2;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[0][j]);
          }
          aux2=M_Gauss[3][0];
          i=3;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[0][j]);
          }

          /////////////////
          d_gauss=M_Gauss[1][1];
          i=1;
          for ( j = 0; j < 5; j++ ){
            M_Gauss[i][j]=M_Gauss[i][j]/d_gauss;
               }
          aux2=M_Gauss[0][1];
          i=0;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[1][j]);
             }
          aux2=M_Gauss[2][1];
          i=2;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[1][j]);
             }
          aux2=M_Gauss[3][1];
          i=3;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[1][j]);
             }
          ////////////
          d_gauss=M_Gauss[2][2];
          i=2;
          for ( j = 0; j < 5; j++ ){
             M_Gauss[i][j]=M_Gauss[i][j]/d_gauss;
               }
          aux2=M_Gauss[0][2];
          i=0;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[2][j]);
              }
          aux2=M_Gauss[1][2];
          i=1;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[2][j]);
              }
          aux2=M_Gauss[3][2];
          i=3;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[2][j]);
              }
          /////////////
          d_gauss=M_Gauss[3][3];
          i=3;
          for ( j = 0; j < 5; j++ ){
             M_Gauss[i][j]=M_Gauss[i][j]/d_gauss;
                }
          aux2=M_Gauss[0][3];
          i=0;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[3][j]);
              }
          aux2=M_Gauss[1][3];
          i=1;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[3][j]);
               }
          aux2=M_Gauss[2][3];
          i=2;
          for( j=0 ; j < 5; j ++ ){
            M_Gauss[i][j]=M_Gauss[i][j]-(aux2*M_Gauss[3][j]);
             }
            // FIN METODO DE GAUSS-JORDAN 4X4
               x_res++;
        } while( (error1 > 0.001)&&(error2 > 0.001)&&(error3 > 0.001)&&(error4 > 0.001) );

        hc[0]=H2_inicial;
        hc[1]=H_prod;
        hc[2]=O2_prod;
        hc[3]=O_prod;
        hc[4]=N2_inicial;
        hc[5]=N_prod;
        hc[6]=OH_prod;
        hc[7]=H2O_inicial;
        hc[8]=NH3_prod;
        hc[9]=NO_prod;
        hc[10]=NO2_prod;
        hc[11]=C_prod;
        hc[12]=CO_prod;
        hc[13]=CO2_inicial;
        hc[14]=CH4_prod;
        hc[15]=HCN_prod;
        hc[16]=O3_prod;

        Ni=(num_carbon+num_hidrogeno2+num_oxigeno+num_nitrogeno)/((3*CO2_inicial)+(2*CO_prod)+C_prod+(5*CH4_prod)+(3*H2O_inicial)+(2*H2_inicial)+H_prod+(5*HNO3_prod)+(3*HCN_prod)+(3*O3_prod)+(2*O2_prod)+O_prod+(2*OH_prod)+(2*N2_inicial)+N_prod+(3*NO2_prod)+(2*NO_prod)+(4*NH3_prod));
             
        for ( i = 0; i < 16; i++) {
          Hproductos=Hproductos+(hc[i]*(cal_mol[i]+H_k[i]));
        }
        Hproductos=Hproductos*Ni;

        error5=0;
         
        Tx_Newton=Tref_flama;
        Ti_Newton=Tref_flama;
        j=1;

          //INICIO METODO DE NEWTON-RAPSON

        do{
          poli1suma=0;
          poli2suma=0;
          for( i = 0; i < 16; i++){
            poli1[i]=((a1_Hcal[i]*(Tx_Newton-Tref_h))+(a2_Hcal[i]*(pow(Tx_Newton,2)-pow(Tref_h,2))/2)+(a3_Hcal[i]*(pow(Tx_Newton,3)-pow(Tref_h,3))/3)+(a4_Hcal[i]*(pow(Tx_Newton,4)-pow(Tref_h,4))/4)+(a5_Hcal[i]*(pow(Tx_Newton,5)-pow(Tref_h,5))/5)+(a6_Hcal[i]*(pow(Tx_Newton,6)-pow(Tref_h,6))/6)+(a7_Hcal[i]*(pow(Tx_Newton,7)-pow(Tref_h,7))/7))*4.1787;
            poli2[i]=(a1_Hcal[i]+(a2_Hcal[i]*Tx_Newton)+(a3_Hcal[i]*pow(Tx_Newton,2))+(a4_Hcal[i]*pow(Tx_Newton,3))+(a5_Hcal[i]*pow(Tx_Newton,4))+(a6_Hcal[i]*pow(Tx_Newton,5))+(a7_Hcal[i]*pow(Tx_Newton,6)))*4.1787;
            poli1suma=(poli1suma+(hc[i]*(poli1[i]+H_k[i])));
            poli2suma=poli2suma+(hc[i]*poli2[i]);
          }
          constante1=Hreactivos;
          poli1suma=poli1suma*Ni;
          poli2suma=poli2suma*Ni;
          Ta_Newton=Ti_Newton;
          Tx_Newton=Ti_Newton-((poli1suma-constante1)/poli2suma);
          Ti_Newton=Tx_Newton;
          error5=((Tx_Newton-Ta_Newton)/Tx_Newton)*100;
          if(error5 < 0){
               error5=error5*-1;
          }
        } while( error5 > 0.001);
        
        Temperatura=Tx_Newton*1000;
             //FIN METODO DE NEWTON-RAPSON
      }

	  Temperatura_F=(1.8*Temperatura)-459.67;
    Temperatura_C=Temperatura-273.15;


    Q_a= (CO_prod*1000000)/((mairemax_kg_s+mgas_kg_s)*28.01);//CO ppm
    F_a= (O2_prod*1000000)/((mairemax_kg_s+mgas_kg_s)*32.0);//O2 ppm
    C_a= (CO2_inicial*1000000)/((mairemax_kg_s+mgas_kg_s)*38.01);//CO2 ppm//
    U_a= (NO_prod*1000000)/((mairemax_kg_s+mgas_kg_s)*30.008);//NO ppm
    V_a= (NO2_prod*1000000)/((mairemax_kg_s+mgas_kg_s)*46.01);//NO2 ppm
    NOx=NO_prod+NO2_prod;//NOX ppm

////////////////////////////////////////////////////////////////////////////





	
//Región para reiniciar todas las condiciones inciales de los modelos.

///////////////////////////TURBINA//////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

//////////////////////////GENERADOR/////////////////////////////////////////

	CIIEx_GE=IEx_GE;
	CIVFaseA_GE=VFaseA_GE;
	CIVFaseB_GE=VFaseB_GE;
	CIVFaseC_GE=VFaseC_GE;

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

	CI_I = Acc_I;
	CIXvalControl_1_v1 = Ap_valvula;
	CIMasaTanqDepu1 = MasaTanqueDepu1;
	CITanqDepu1=TemperaturaOutTanqueDepu1;
	CIFIL1 = NivelTanqueDepu1;
   	CITanqueSuc1=Temperatura_final_TanSuc1;
   	CIMotorCompresor=VelMotorCompresor;
   	CI1ra = Temperatura_final_1ra; //Temperatura_in_LubComp,CILubComp,(1.98*1.21),(1.98*1.21),(MasaLubComp*1.98),(Trabajo_in1)
   	CIT_Chuma_3111A = TemChum3111A;
   	CIT_Chuma_3111B = TemChum3111B;
   	CILubComp=TempAceiteoutLubComp;
   	CIMasaTanSuc1 = MasaTanqueSuc1;
   	CITanqueExp=Temperatura_final_TanExp;
   	CIMasaTanqueExp =MasaTanqueExp;
   	CIHEX1 = Temperatura_final_HEX;
   	CIMasaTanqueDepu2 = MasaTanqueDepu2;
   	CITanqDepu2 = TemperaturaOutTanqueDepu2;
   	CIFIL2 = NivelTanqueDepu2;
   	CI2da = Temperatura_final_2da;
   	CITanqueExp2 = Temperatura_final_TanExp2;
   	CIMasaTanqueExp2 = MasaTanqueExp2;
   	CIHEX2 = Temperatura_final_HEX2;
   	CIMasaTanqueCoal_V3 = MasaTanqueCoal_V3;
   	CIMasaCoalV082_1 = MasaCoalFV082_1;
   	CIMasaCoalV082_2 = MasaCoalFV082_2;
   	CICoal_FV082_1A = NivelCoalFV082_1A;
   	CICoal_FV082_1B = NivelCoalFV082_1B;
   	CICoal_FV082_2A = NivelCoalFV082_2A;
   	CICoal_FV082_2B = NivelCoalFV082_2B;
   	CICoal_V3=NivelCoal_V3;
   	CICoal_V3B=NivelCoal_V3B;
   	CITemCoal_V3 = TempOutCoal_V3;
   	CITemCoalV082_1 = TempOutCoalFV082_1;
   	CITemCoalV082_2 = TempOutCoalFV082_2;
   	CI_VelAceiteceite = Vel_BombaAceite;
   	CI_HEX_LUB = Temperatura_in_LubComp;
   	CIT_ChumEmpu_3113 = TemChumEmpu_3113;
   	CI_Apertura_FCV62109 = X_FCV62109;
   	CI_Apertura_FCV62108 = X_FCV62108;
   	CI_Apertura_FCV62107 = X_FCV62107;
   	CI_Vel_Vent_HEX=Velocidad_Ventilador_HEX;
   	CI_Apertura_SOV62110 = SOV62110;
    CI_Apertura_FSV62571 = X_FSV62571;
	CI_Apertura_FSV62570 = X_FSV62570;
   	CI_Apertura_FSV6249 = X_FSV6249;
   	CI_Apertura_FSV6204 = X_FSV6204;
   	CI_Apertura_SOV6208 = X_SOV6208;
   	CI_Apertura_SOV62111 = SOV62111;
   	CI_Apertura_SOV62112 = SOV62112;
   	CI_Apertura_SOV62113 = SOV62113;
   	CI_Apertura_SOV62114 = SOV62114;
   	CI_Apertura_SOV62115 = SOV62115;
   	CI_Apertura_SOV62116 = SOV62116;
   	CI_Apertura_SOV62117 = SOV62117;
   	CI_Apertura_SOV62118 = SOV62118;
   	CI_Apertura_SOV62119 = SOV62119;
   	CI_Apertura_SOV62120 = SOV62120;
	CI_Apertura_FCV64217 = X_FCV64217;

////////////////////////////////////////////////////////////////////////////

///////////////////////COMBUSTION///////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

	SETS();

if (pars==1){
int p=5/((int)sqrt(1.0f)-1);
}

return 1;

}

