// Archivo DLL principal.
# define _SECURE_SCL 0
// Archivo DLL principal.

#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <iostream>


using namespace std;

LPVOID lpvMem = NULL;      // pointer to shared memory
HANDLE hMapObject = NULL;  // handle to file mapping
HANDLE hMapObjectx = NULL;  // handle to file mapping

__declspec(dllexport) void __cdecl clients() ;
__declspec(dllexport) int __cdecl getQT() ;
__declspec(dllexport) float __cdecl GetFloat(int pos) ;
__declspec(dllexport) int __cdecl GetInt(int pos) ;
__declspec(dllexport) int __cdecl queryQT() ;
int MEMPILES =16;       //indice de pila entero //4 vacios //4 cur // 4 cur sent
int MEMFLOAT= 1024*4*24 ;    //define una memoria con capacidad de 1000 flotantes
int MEMINT=  1024*4*24  ;     //define una memoria con capacidad de 1000 enteros



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




__declspec(dllexport) void __cdecl SetFloat(float ax,int pos) 
{
p0=(int)int (int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
    *bf=ax;    
} 
  


__declspec(dllexport) void __cdecl SetRaw(unsigned char a,int pos) 
{
   
unsigned char  *b;
int p0;
p0=(int)int(int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos));
b=(unsigned char *)p0;
*b=a;     
} 


__declspec(dllexport) unsigned char __cdecl GetRaw(int pos) 
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


__declspec(dllexport) float __cdecl GetFloat(int pos) 
{ 
 
p0=(int)int(int(lpvMem)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
      af=  *bf;
return af;
}




__declspec(dllexport) int __cdecl GetInt(int pos) 
{ 


p0=(int)int(int(lpvMem)+int(OFFSET_MEMINT)+int(pos*4));

c=(int *) p0;


b =(int *) c;

      a=  *b;
      //*SLOCK=0; //elimina candado
return a;
}


__declspec(dllexport) void __cdecl SetInt(int a,int pos) 
{
   

  
p0=(int)int(int(lpvMem)+int(OFFSET_MEMINT)+int(pos*4));
c=(int *) p0;
b =(int *) c;
    *b=a;    
   //   *SLOCK=0;  //elimina candado
} 






/* funciones de inicializacion de memoria y acceso a memoria compartida

*/



bool fInit;  
BOOL fIgnore; 
__declspec(dllexport) void __cdecl masterend() {

 fIgnore = UnmapViewOfFile(lpvMem);  // se finaliza la memoria compartida
 fIgnore = CloseHandle(hMapObject);        
}

__declspec(dllexport) void __cdecl client() 
{ 
init();
    printf ("Accediendo a Memoria compartida V 36 KB");
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

}

  

float __stdcall  GetFloatvb(int pos,int ax) 
{ 
	pos=pos-ax+1;
//	Sleep(1);
	client();
	//Sleep(1);
float a;
float *b;
int *c;

int p0;
//verifica el candado


// fin de proteccion  
p0=(int)lpvMem+OFFSET_MEMFLOAT+pos*4;

c=(int *) p0;


b =(float *) c;
//* val= *b;
      a=  *b;

//return 0;
	  return a;
}


int __stdcall GetIntvb(int pos,int ax) 
{ 
	pos=pos-ax+1;
	//Sleep(1);
	client();
	//Sleep(1);

int a;
int *b;
int *c;

int p0;
//verifica el candado

// fin de proteccion  
p0=(int)lpvMem+OFFSET_MEMINT+pos*4;

c=(int *) p0;


b =(int *) c;

      a=  *b;
return a;
}
