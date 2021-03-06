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
	GLOBAL_INSTANCE=0;

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

#define MAX_THREADS 3
DWORD WINAPI MyThreadFunction( LPVOID lpParam ){ 
return APP_01_EXECUTE(0);
}
DWORD WINAPI MyThreadFunction2( LPVOID lpParam ) {
return APP_02_EXECUTE(0);
}

DWORD WINAPI MyThreadFunction3( LPVOID lpParam ) {
return APP_03_EXECUTE(0);
}

typedef struct MyData {
    int val1;
    int val2;
} MYDATA, *PMYDATA;


int main0() {
//arranca APP_01
	
	printf("Remote Launcher  ready\n");

	system("pause");
return -1;
}
