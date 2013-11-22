//#pragma comment(lib,"WS2_32.Lib")

//--Redefinir Funcion de entrada
int main0(); 
//----------Definicion de Debugger en tiempo real-------------
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>          
#include <cstdlib>          
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <Mmsystem.h>
using namespace std;
#include <Winbase.h >
int GLOBAL_INSTANCE;
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
//----------Definiciones de error de modelos------------------
#define		ERROR_MODELO_VALOR_MUYALTO 101
//----------Fin Definiciones de error de modelos--------------
//----------Definiciones de Shared Memory---------------------

HINSTANCE hGetProcIDDLL;
FARPROC lpfnGetProcessID001;
FARPROC lpfnGetProcessID002;
FARPROC lpfnGetProcessID003;
FARPROC lpfnGetProcessID004;
FARPROC lpfnGetProcessID005;
FARPROC lpfnGetProcessID006;
FARPROC lpfnGetProcessID007;
FARPROC lpfnGetProcessID008;
FARPROC lpfnGetProcessID009;
FARPROC lpfnGetProcessID010;


HINSTANCE hGetProcIDDLL_MEM;
/////Definiciones de APP
FARPROC lpfnGetProcess_APP_01_ID001;
FARPROC lpfnGetProcess_APP_01_ID002;
HINSTANCE hGetProcIDDLL_APP_01;
typedef void (__stdcall * pICFUNC01_APP_01)(int instance);
pICFUNC01_APP_01 APP_01_LOAD;
typedef int (__stdcall * pICFUNC02_APP_01)(int parameter);
pICFUNC02_APP_01 APP_01_EXECUTE;


FARPROC lpfnGetProcess_APP_02_ID001;
FARPROC lpfnGetProcess_APP_02_ID002;
HINSTANCE hGetProcIDDLL_APP_02;
typedef void (__stdcall * pICFUNC01_APP_02)(int instance);
pICFUNC01_APP_02 APP_02_LOAD;
typedef int (__stdcall * pICFUNC02_APP_02)(int parameter);
pICFUNC02_APP_02 APP_02_EXECUTE;



FARPROC lpfnGetProcess_APP_03_ID001;
FARPROC lpfnGetProcess_APP_03_ID002;
HINSTANCE hGetProcIDDLL_APP_03;
typedef void (__stdcall * pICFUNC01_APP_03)(int instance);
pICFUNC01_APP_03 APP_03_LOAD;
typedef int (__stdcall * pICFUNC02_APP_03)(int parameter);
pICFUNC02_APP_03 APP_03_EXECUTE;

FARPROC lpfnGetProcess_APP_04_ID001;
FARPROC lpfnGetProcess_APP_04_ID002;
HINSTANCE hGetProcIDDLL_APP_04;
typedef void (__stdcall * pICFUNC01_APP_04)(int instance);
pICFUNC01_APP_04 APP_04_LOAD;
typedef int (__stdcall * pICFUNC02_APP_04)(int parameter);
pICFUNC02_APP_04 APP_04_EXECUTE;

//fin de definiciones


typedef void (__stdcall * pICFUNC02)();
pICFUNC02 clients0;
typedef void (__stdcall * pICFUNC01)(int instance);
pICFUNC01 client0;
typedef void (__stdcall * pICFUNC00)();
pICFUNC00 master0;

typedef void (__stdcall * pICFUNC11)(float val,int pos);
pICFUNC11 SetSMemF0;
typedef float (__stdcall * pICFUNC12)(int pos);
pICFUNC12 GetSMemF0;
typedef void (__stdcall * pICFUNC13)(int val,int pos);
pICFUNC13 SetSMemI0;
typedef int (__stdcall * pICFUNC14)(int pos);
pICFUNC14 GetSMemI0;

typedef void (__stdcall * pICFUNC21)(unsigned char a,int pos);
pICFUNC21 SetRaw0;
typedef unsigned char (__stdcall * pICFUNC22)(int pos);
pICFUNC22 GetRaw0;


	///fin de shrmem
//----------Funciones Virtuales (Permiten debugger)-----------
void vSetSMemvI(int val,int pos){
SetSMemI0(val, pos);
}
void vSetSMemvF(float val,int pos){
SetSMemF0(val, pos);
}

int vGetSMemvI(int pos){
	int a;
a=GetSMemI0(pos);
return a;
}
float vGetSMemvF(int pos){
	float a;
a=GetSMemF0(pos);
return a;
}

unsigned char vGetvRaw(int pos){
	unsigned char a;
a=GetRaw0(pos);
return a;
}
void vSetvRaw(unsigned char a,int pos){
	
SetRaw0(a,pos);
}
void vclient(int instance){
client0(instance);
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
int main(int argc, char* argv[])
{
 if (argc < 2) {
	 cout<<"Numero de Instancia{1-100}: ";
	 cin>> GLOBAL_INSTANCE;
    }
 else{
 GLOBAL_INSTANCE=atoi(argv[1]);
 }
 if (GLOBAL_INSTANCE<1){
	 GLOBAL_INSTANCE=1;
 }

 cout<<"Target MMF:"<<GLOBAL_INSTANCE;
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
MYID("FLASH SERVER 01/05/11 + ON SITE DEBUGGER V1 REV 2");
cout<<"\n******************************\nCargando On Site Debugger ...";
__try
{

	printf("\n Abriendo memoria ...");
	hGetProcIDDLL = LoadLibrary(L"mmf.dll"); 
	if (!hGetProcIDDLL  ){
		printf("No se encontro el dll solicitado: mmf.dll");
	}
	lpfnGetProcessID007 = GetProcAddress(HMODULE (hGetProcIDDLL),"?clients@@YAXXZ"); 
	clients0 = pICFUNC02(lpfnGetProcessID007) ; 
	lpfnGetProcessID001 = GetProcAddress(HMODULE (hGetProcIDDLL),"?client@@YAXH@Z");  
	client0 = pICFUNC01(lpfnGetProcessID001) ; 
	lpfnGetProcessID002 = GetProcAddress(HMODULE (hGetProcIDDLL),"?master@@YAXXZ"); 
	master0 = pICFUNC00(lpfnGetProcessID002) ;

	lpfnGetProcessID003 = GetProcAddress(HMODULE (hGetProcIDDLL),"?SetFloat@@YAXMH@Z"); 
	SetSMemF0 = pICFUNC11(lpfnGetProcessID003) ; 
	lpfnGetProcessID004 = GetProcAddress(HMODULE (hGetProcIDDLL),"?GetFloat@@YAMH@Z");  
	GetSMemF0 = pICFUNC12(lpfnGetProcessID004) ; 
	lpfnGetProcessID005 = GetProcAddress(HMODULE (hGetProcIDDLL),"?SetInt@@YAXHH@Z"); 
	SetSMemI0 = pICFUNC13(lpfnGetProcessID005) ; 
	lpfnGetProcessID006 = GetProcAddress(HMODULE (hGetProcIDDLL),"?GetInt@@YAHH@Z");  
	GetSMemI0 = pICFUNC14(lpfnGetProcessID006) ; 

	lpfnGetProcessID008 = GetProcAddress(HMODULE (hGetProcIDDLL),"?SetRaw@@YAXEH@Z"); 
	SetRaw0 = pICFUNC21(lpfnGetProcessID008) ; 
	lpfnGetProcessID009 = GetProcAddress(HMODULE (hGetProcIDDLL),"?GetRaw@@YAEH@Z");
	GetRaw0 = pICFUNC22(lpfnGetProcessID009) ; 

//inicia la carga de direcciones APP's
printf("\n Cargando App's ...");
	hGetProcIDDLL_APP_01 = LoadLibrary(L"APP_01.dll"); 
	if (!hGetProcIDDLL_APP_01  ){
		printf("\nNo se encontro el dll solicitado: APP_01.dll");
	}
	
	lpfnGetProcess_APP_01_ID001 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_01),"?load@@YAXH@Z"); 
	APP_01_LOAD = pICFUNC01_APP_01(lpfnGetProcess_APP_01_ID001) ; 
	lpfnGetProcess_APP_01_ID002 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_01),"?execute@@YAHH@Z");  
	APP_01_EXECUTE = pICFUNC02_APP_01(lpfnGetProcess_APP_01_ID002) ; 

hGetProcIDDLL_APP_02 = LoadLibrary(L"APP_02.dll"); 
	if (!hGetProcIDDLL_APP_02  ){
		printf("\nNo se encontro el dll solicitado: APP_02.dll");
	}

	
	lpfnGetProcess_APP_02_ID001 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_02),"?load@@YAXH@Z"); 
	APP_02_LOAD = pICFUNC01_APP_02(lpfnGetProcess_APP_02_ID001) ; 
	lpfnGetProcess_APP_02_ID002 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_02),"?execute@@YAHH@Z");  
	APP_02_EXECUTE = pICFUNC02_APP_02(lpfnGetProcess_APP_02_ID002) ; 


	///app3

	
hGetProcIDDLL_APP_03 = LoadLibrary(L"APP_03.dll"); 
	if (!hGetProcIDDLL_APP_03  ){
		printf("\nNo se encontro el dll solicitado: APP_03.dll");
	}

	
	lpfnGetProcess_APP_03_ID001 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_03),"?load@@YAXH@Z"); 
	APP_03_LOAD = pICFUNC01_APP_03(lpfnGetProcess_APP_03_ID001) ; 
	lpfnGetProcess_APP_03_ID002 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_03),"?execute@@YAHH@Z");  
	APP_03_EXECUTE = pICFUNC02_APP_03(lpfnGetProcess_APP_03_ID002) ; 

////////

	hGetProcIDDLL_APP_04 = LoadLibrary(L"APP_04.dll"); 
	if (!hGetProcIDDLL_APP_04  ){
		printf("\nNo se encontro el dll solicitado: APP_04.dll");
	}

	
	lpfnGetProcess_APP_04_ID001 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_04),"?load@@YAXH@Z"); 
	APP_04_LOAD = pICFUNC01_APP_04(lpfnGetProcess_APP_04_ID001) ; 
	lpfnGetProcess_APP_04_ID002 = GetProcAddress(HMODULE (hGetProcIDDLL_APP_04),"?execute@@YAHH@Z");  
	APP_04_EXECUTE = pICFUNC02_APP_04(lpfnGetProcess_APP_04_ID002) ; 
	///
	vclient(GLOBAL_INSTANCE);                  ////////////////////////////////////////////////////////////////////Cambiar en caso necesario
	cout<<"\n Cliente de memoria iniciado!";
	cout<<"\nOn Site Debugger Listo\n******************************\n";
///////////////////////////////////////////////FIN Funiones de Genericas De Control //////////////////////
	int su;

	su=main0();          ////cambiar por la funcion main local
///////////////////////////////////////////////Funiones de control de errores//////////////////////
}
__except(ExpFilterO(GetExceptionInformation(), GetExceptionCode()))
{
	system("pause");
}
}


//----------FIN DE FUNCIONES DE DEBUGGER----------------------
//----------Definiciones de Programa--------------------------


#include <iostream>           // For cerr and cout
#include <cstdlib>            // For atoi()
#include <windows.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
HANDLE gDoneEvent;
VOID CALLBACK TimerRoutine(PVOID lpParam, BOOLEAN TimerOrWaitFired)
{
    if (lpParam == NULL)
    {
        printf("TimerRoutine lpParam is NULL\n");
    }
    else
    {
        // lpParam points to the argument; in this case it is an int
    printf("Timer routine called. Parameter is %d.\n", 
                *(int*)lpParam);
  
    }

    SetEvent(gDoneEvent);
}

#define MAX_THREADS 7
DWORD WINAPI MyThreadFunction( LPVOID lpParam ){ 
return APP_01_EXECUTE(0);
}
DWORD WINAPI MyThreadFunction2( LPVOID lpParam ) {
return APP_02_EXECUTE(0);
}

DWORD WINAPI MyThreadFunction3( LPVOID lpParam ) {
return APP_03_EXECUTE(0);
}

DWORD WINAPI MyThreadFunction4( LPVOID lpParam ) {
return APP_04_EXECUTE(0);
}
typedef struct MyData {
    int val1;
    int val2;
} MYDATA, *PMYDATA;


int main0() {
//arranca APP_01
	APP_01_LOAD(GLOBAL_INSTANCE);
	APP_02_LOAD(GLOBAL_INSTANCE);
    APP_03_LOAD(GLOBAL_INSTANCE);
	APP_04_LOAD(GLOBAL_INSTANCE);
	int i;

	//Cambios temporales hechos por Horacio


	SetSMemI0(1, 500);
	int edo = GetSMemI0(500);
	cout<<"\nValor recogido: "<<edo<<"\n";

	while(1)
	{
		edo = GetSMemI0(500);
		while(edo == 0)
		{

		}

// Parte original del código...
// ----------------------------
DWORD TIME;
DWORD old_TIME;
DWORD start_TIME,end_TIME;
printf("service Init");


DWORD abs[50];
int j=0;
for (;;){
start_TIME=timeGetTime();
	for (i=0;i<20;i++)
	{	
		old_TIME=timeGetTime();
        edo = GetSMemI0(500);
		if (edo != 0)
		{
			APP_01_EXECUTE (0);
			APP_02_EXECUTE (0);
			APP_03_EXECUTE (0);
			APP_04_EXECUTE (0);
		}


	
	TIME=timeGetTime();
abs[i]=TIME-old_TIME;
Sleep(50-abs[i]);

	}
end_TIME=timeGetTime();
j++;
printf("%d %d\n",j,end_TIME-start_TIME);
}
	printf("service ready");

//ahora lee el resultado de la prueba
	
	for(i=0;i<10000;i=i+100){
cout<<i<<"\t"<<vGetSMemvF(i)<<"\t";
if (i%400==0) {cout <<"\n";}
	}

//------------------------------

	// Modificaciones temporales
	}



//system("pause");
//genera un error en tiempo de ejecucion
//int p=5/((int)sqrt(1.0f)-1);
//Cierra el servicio de memoria compartida
return -1;
}
