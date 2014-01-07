#ifndef ARRANQUE_H
#define ARRANQUE_H

#include <stdio.h>

// Prototipos de funciones
void ARRANQUEModel();
void PRINTING(double Print_iter,double Time_factor, int *counter);
void InicializaArrI(int arr[], int t);
void InicializaArrD(double arr[], int t);


// Prototipos propios de funciones
void PRINTING(double Print_iter,double Time_factor, int *counter)
{
	*counter = (*counter) + 1;
	if(*counter>=(Print_iter*Time_factor))
	{                        
		*counter=0;
		system("cls");
		
		//Area para impresion
	}
}

void InicializaArrI(int arr[], int t)
{
	int i = 0;
	for(i = 0; i < t; i++)
	{
		arr[i] = 0;
	}
}

void InicializaArrD(double arr[], int t)
{
	int i = 0;
	for(i = 0; i < t; i++)
	{
		arr[i] = 0;
	}
}


#endif // ARRANQUE_H
