// Archivo DLL principal.
# define _SECURE_SCL 0
// Archivo DLL principal.

#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <iostream>


using namespace std;

LPVOID MMF_MEMPTR = NULL;      // pointer to shared memory
HANDLE MMF_SECTION = NULL;  // handle to file mapping
HANDLE MMF_SECTIONx = NULL;  // handle to file mapping

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
p0=(int)int (int(MMF_MEMPTR)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
    *bf=ax;    
} 
  


__declspec(dllexport) void __cdecl SetRaw(unsigned char a,int pos) 
{
   
unsigned char  *b;
int p0;
p0=(int)int(int(MMF_MEMPTR)+int(OFFSET_MEMFLOAT)+int(pos));
b=(unsigned char *)p0;
*b=a;     
} 


__declspec(dllexport) unsigned char __cdecl GetRaw(int pos) 
{ 
unsigned char a;
unsigned char *b;
int *c;

int p0;
 
p0=(int)int(int(MMF_MEMPTR)+int(OFFSET_MEMFLOAT)+int(pos));
c=(int *) p0;
b =(unsigned char *) c;
      a=  *b;
return a;
}


__declspec(dllexport) float __cdecl GetFloat(int pos) 
{ 
 
p0=(int)int(int(MMF_MEMPTR)+int(OFFSET_MEMFLOAT)+int(pos*4));
c=(int *) p0;
bf =(float *) c;
      af=  *bf;
return af;
}




__declspec(dllexport) int __cdecl GetInt(int pos) 
{ 


p0=(int)int(int(MMF_MEMPTR)+int(OFFSET_MEMINT)+int(pos*4));

c=(int *) p0;


b =(int *) c;

      a=  *b;
      //*SLOCK=0; //elimina candado
return a;
}


__declspec(dllexport) void __cdecl SetInt(int a,int pos) 
{
   

  
p0=(int)int(int(MMF_MEMPTR)+int(OFFSET_MEMINT)+int(pos*4));
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

 fIgnore = UnmapViewOfFile(MMF_MEMPTR);  // se finaliza la memoria compartida
 fIgnore = CloseHandle(MMF_SECTION);        
}

__declspec(dllexport) void __cdecl client(int instance) 
{ 
    init();
wchar_t sinstance[250];
swprintf(sinstance,L"Global\\PROCESS_INTEROP_MEM_%d",instance);

    printf ("\nAccediendo al servicio MMF mem_size 0x%x bytes @%d",TOTMEM,instance);
     MMF_SECTION = CreateFileMapping(INVALID_HANDLE_VALUE ,NULL,PAGE_READWRITE, 0,TOTMEM, sinstance); // Nombre del archivo virtual
     if (MMF_SECTION == NULL) 
        printf ("\n Falla de inicializacion...Sin memoria");
     fInit = (GetLastError() != ERROR_ALREADY_EXISTS);
     if (fInit==true){  
         printf ("\n Este programa se iniciado como ADMIN de MMF");
     }
     else{
        printf ("\n Este programa se iniciado como USER de MMF");
        }
     MMF_MEMPTR = MapViewOfFile(MMF_SECTION, FILE_MAP_ALL_ACCESS, 0, 0,   0);             // 
     if (MMF_MEMPTR == NULL) 
         printf ("\n No se creo apuntador");            
     printf ("\n Inicializion de Servicio...Lista ",TOTMEM);

// INICIA LA MEMORIA COMPARTIDA
p0=(int)MMF_MEMPTR+4;
c=(int *) p0;
b =(int *) c;
*b=0;//posPILE; 
p0=(int)MMF_MEMPTR+8;
c=(int *) p0;
b =(int *) c;
*b=0;//posPILEF; 

}

  

float __stdcall  GetFloatvb(int pos,int ax) 
{ 
	pos=pos-ax+1;
//	Sleep(1);
	client(0);
	//Sleep(1);
float a;
float *b;
int *c;

int p0;
//verifica el candado


// fin de proteccion  
p0=(int)MMF_MEMPTR+OFFSET_MEMFLOAT+pos*4;

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
	client(0);
	//Sleep(1);

int a;
int *b;
int *c;

int p0;
//verifica el candado

// fin de proteccion  
p0=(int)MMF_MEMPTR+OFFSET_MEMINT+pos*4;

c=(int *) p0;


b =(int *) c;

      a=  *b;
return a;
}
