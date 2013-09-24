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


using namespace std;

LPVOID lpvMem = NULL;      // pointer to shared memory
HANDLE hMapObject = NULL;  // handle to file mapping
HANDLE hMapObjectx = NULL;  // handle to file mapping

__declspec(dllexport) int __cdecl execute() ;
__declspec(dllexport) void __cdecl load() ;
int MEMPILES =16;       //indice de pila entero //4 vacios //4 cur // 4 cur sent
int MEMFLOAT= 1024*4*24 ;    //define una memoria con capacidad de 1000 flotantes
int MEMINT=  1024*4*24  ;     //define una memoria con capacidad de 1000 enteros

//Ya estoy bajo control de versiones

int TOTMEM;
int posPILE;
int posPILEF;
//calcula las variables de offset

int OFFSET_MEMFLOAT;
int OFFSET_MEMINT;
int OFFSET_MEMMODDATA;

#include <fstream>


void init(){
	//RESERVAMOS UNOS BYTES INTERNOS JEJEJ
OFFSET_MEMFLOAT= 16;
OFFSET_MEMINT= 16;//tienen la misma direccion
OFFSET_MEMMODDATA=OFFSET_MEMFLOAT+MEMFLOAT;
TOTMEM= OFFSET_MEMMODDATA+MEMFLOAT+1024;

}


float af;
float *bf;
int a;
int *b;
int *c;
int *p;
int p0;




 void SetFloat(float ax,int pos) 
{
p0=(int)int (int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
    *bf=ax;    
} 
  


void SetRaw(unsigned char a,int pos) 
{
   
unsigned char  *b;
int p0;
p0=(int)int(int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos));
b=(unsigned char *)p0;
*b=a;     
} 


 unsigned char GetRaw(int pos) 
{ 
unsigned char a;
unsigned char *b;
int *c;
int p0;
p0=(int)int(int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos));
c=(int *) p0;
b =(unsigned char *) c;
a=  *b;
return a;
}


 float  GetFloat(int pos) 
{ 
p0=(int)int(int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
af=  *bf;
return af;
}




int  GetInt(int pos) 
{ 
p0=(int)int(int(lpvMem)+int(OFFSET_MEMINT)+int(pos*4));
c=(int *) p0;
b =(int *) c;
a=  *b;
return a;
}


void  SetInt(int a,int pos) 
{
p0=(int)int(int(lpvMem)+int(OFFSET_MEMINT)+int(pos*4));
c=(int *) p0;
b =(int *) c;
    *b=a;    
} 






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

bool fInit;  
BOOL fIgnore; 

__declspec(dllexport) void __cdecl load() 
{ 
init();
    printf ("\n Programa APP_01");
     hMapObject = CreateFileMapping( 
                    INVALID_HANDLE_VALUE ,  // Permite crear FileMapping
                    NULL,                   // Sin Atributos de seguridad
                    PAGE_READWRITE,         // Todos pueden leer y escribir
                    0,                      // Tamano: 64-bits Superiores
                    TOTMEM,                 // Tamano: 64-bits Inferiores
                    TEXT("PROCESS_INTEROP_MEM")); // Nombre del archivo virtual
     if (hMapObject == NULL) 
        printf ("\n Falla de inicializacion...Sin memoria");
     fInit = (GetLastError() != ERROR_ALREADY_EXISTS);
     if (fInit==true){  
   
         printf ("\n Este programa se iniciado como MASTER de la memoria compartida");
   
     }
     else{
        printf ("\n Este programa se iniciado como cliente de la memoria compartida");
        }
     lpvMem = MapViewOfFile(hMapObject,// Obtencion del puntero a la memoria compartida
                            FILE_MAP_ALL_ACCESS, // Acceso sin restriciones
                            0,              // leer todo
                            0,              // 
                            0);             // 
     if (lpvMem == NULL) 
         printf ("\n No se creo apuntador");            
     printf ("\n Listo para acceder a la memoria ",TOTMEM);

// INICIA LA MEMORIA COMPARTIDA
p0=(int)lpvMem+4;
c=(int *) p0;
b =(int *) c;
*b=0;//posPILE; 
p0=(int)lpvMem+8;
c=(int *) p0;
b =(int *) c;
*b=0;//posPILEF; 


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
int i=0;
for (i=0;i<5000;i++){
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
	if(FlujoBombS>0.03 && PresionBombaS<1723689.323292)
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
	if(CInivelTanque<0.1524)
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
        qDebug()<<UInter<<TempAmbiente<<(0.333116666*CpAceite)<<CpAceite<<CITempAceiteAH<<(0.333116666*CpAceite)<<CpAceite<<MasaAceiteInter<<CpAceite<<CITempAceiteInter;

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

}
if (pars==1){
int p=5/((int)sqrt(1.0f)-1);
}
return 1;

}
