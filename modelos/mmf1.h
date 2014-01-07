#ifndef WHATEVER_H_INCLUDED3
#define WHATEVER_H_INCLUDED3

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




 void SetFloat(int pos,float ax) 
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


void  SetInt(int pos,int a) 
{
p0=(int)int(int(lpvMem)+int(OFFSET_MEMINT)+int(pos*4));
c=(int *) p0;
b =(int *) c;
    *b=a;    
} 

bool fInit;  
BOOL fIgnore; 


void initmmf(char nameid[],int instance)
{
     init();
     printf ("\n Programa %s @ %d ",nameid,instance);
	wchar_t sinstance[250];
swprintf(sinstance,L"Global\\PROCESS_INTEROP_MEM_%d",instance);
   hMapObject = OpenFileMapping(
                   FILE_MAP_ALL_ACCESS,   // read/write access
                   FALSE,                 // do not inherit the name
                   sinstance);               // name of mapping object

 
     if (hMapObject == NULL) 
        printf ("\n Falla de inicializacion...Sin segmento virtual de ejecucion");
   
     lpvMem = MapViewOfFile(hMapObject,  FILE_MAP_ALL_ACCESS, 0,   0,  0);             // 
	 if (lpvMem == NULL) {
		 printf ("\n No se creo apuntador"); }           
     printf ("\n APP LISTA MEM=0x%x ",TOTMEM);

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
#endif