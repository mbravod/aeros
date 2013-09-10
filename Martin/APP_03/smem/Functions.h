#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//Funcion para el bloque de tipo AND
void AND(int variable[],int tam,int out_variable[])
{
	//out_variable[1]      Q
	int i;
	out_variable[1]=1;
	for(i=1;i<=tam;i++)
	{
		if(variable[i]==0)
		{
			out_variable[1]=0;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque CONVERGENCEOR
void CONVERGENCEOR(int variable[],int out_variable[])
{
	//out_variable[1]		Q
	int i;
	out_variable[1]=0;
	for(i=1;i<=8;i++)
	{
		if(variable[i]==1)
		{
			out_variable[1]=1;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque DIVERGENCEOR
void DIVERGENCEOR(int variable[],int out_variable[])
{
	//variable[1...8]		IN
	//variable[9]			ORDER
	//out_variable[1...8]	Q
	//out_variable[9]		COND
	//out_variable[10]		i
	//out_variable[11]		AUX1
	out_variable[9]=0;

	for(out_variable[10]=1;out_variable[10]<=8;out_variable[10]++)
	{
		if(variable[out_variable[10]]==1)
		{
			out_variable[9]=1;
		}
	}
	
	if(variable[9]==1 && out_variable[9]==1 && out_variable[11]==0)
	{
		for(out_variable[10]=1;out_variable[10]<=8;out_variable[10]++)
		{
			if(variable[out_variable[10]]==1)
			{
				out_variable[out_variable[10]]=1;
				out_variable[11]=1;
			}
		}
	}
	
	if(out_variable[9]==0)
	{
		for(out_variable[10]=1;out_variable[10]<=8;out_variable[10]++)
		{
			out_variable[out_variable[10]]=0;
			out_variable[11]=0;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el detector de flanco negativo de tipo FTRIG
void FTRIG(int variable,int out_variable[])
{
	//variable				IN
	//out_variable[1]		Q
	//out_variable[2]		AUX1
	//out_variable[3]		AUX2
	//out_variable[4]		i

	int Work_cycle=2;		//CYCLE(S) OF WORK (+1)

	if(variable==1 && out_variable[3]==0)
	{
		out_variable[2]=1;
	}

	if(variable==0 && out_variable[2]==1)
	{
		out_variable[1]=1;
		out_variable[4]=out_variable[4]+1;

		if(out_variable[4]>=Work_cycle)
		{
			out_variable[1]=0;
			out_variable[2]=0;
			out_variable[3]=1;
		}
	}

	if(variable==1 && out_variable[1]==1)
	{
		out_variable[1]=1;
		out_variable[4]=out_variable[4]+1;
		
		if(out_variable[4]>=Work_cycle)
		{
			out_variable[1]=0;
			out_variable[2]=0;
		}
	}
	
	if(variable==1 && out_variable[1]==0)
	{
		out_variable[2]=1;
		out_variable[3]=0;
	}

	if(out_variable[4]>=Work_cycle)
	{
		out_variable[4]=0;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el comparador
void CMP(float variable[],int out_variable[],char option_variable[])
{
	if(option_variable[0]=='G' && option_variable[1]=='T' && variable[1]>variable[2])
	{
		out_variable[1]=1;
	}

	if(option_variable[0]=='G' && option_variable[1]=='E' && variable[1]>=variable[2])
	{
		out_variable[1]=1;
	}

	if(option_variable[0]=='L' && option_variable[1]=='T' && variable[1]<variable[2])
	{
		out_variable[1]=1;
	}

	if(option_variable[0]=='L' && option_variable[1]=='E' && variable[1]<=variable[2])
	{
		out_variable[1]=1;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el timer de tipo IMPD
void IMPD(int variable,double TP_variable,double Time_factor,int out_variable[])
{
	//out_variable[1]		Q
	//out_variable[2]		TIMER WITH CYCLES
	//out_variable[3]		AUX1
	//out_variable[4]		AUX2

	if(variable==0)
	{
		out_variable[4]=0;
	}

	if(variable==1 && out_variable[4]==0)
	{
		out_variable[3]=1;
	}

	if(out_variable[3]==1)
	{
		out_variable[2]=out_variable[2]+1;
		out_variable[1]=1;
		if(out_variable[2]>=(TP_variable*Time_factor))
		{
			out_variable[1]=0;
			out_variable[2]=0;
			out_variable[3]=0;
			out_variable[4]=1;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque NOT
int NOT(int variable)
{
	if(variable==0)
		return 1;
	if(variable==1)
		return 0;
	return -1;
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque de tipo OR
void OR(int variable[],int tam,int out_variable[])
{
	//out_variable[1]		Q
	int i;
	out_variable[1]=0;

	for(i=1;i<=tam;i++)
	{
		if(variable[i]==1)
		{
			out_variable[1]=1;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el flip-flop de tipo RS
void RS(int variable[],int out_variable[])
{
	//variable[1]			SET
	//variable[2]			RESET
	//out_variable[1]		Q
	//out_variable[2]		NOT Q
	//out_variable[3]		AUX1

	if(variable[1]==0 && variable[2]==0 && out_variable[3]==0)
	{
		out_variable[1]=0;
		out_variable[2]=1;
	}

	if(variable[1]==1 && variable[2]==0)
	{
		out_variable[1]=1;
		out_variable[2]=0;
		out_variable[3]=1;
	}
	
	if(variable[2]==0 && out_variable[3]==1)
	{
		out_variable[1]=1;
		out_variable[2]=0;
	}

	if(variable[1]==1 && variable[2]==1)
	{
		out_variable[1]=1;
		out_variable[2]=0;
		out_variable[3]=0;
	}
	
	if(variable[1]==0 && variable[2]==1)
	{
		out_variable[1]=0;
		out_variable[2]=1;
		out_variable[3]=0;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el detector de flanco positivo de tipo RTRIG
void RTRIG(int variable,int out_variable[])
{
	//variable				IN
	//out_variable[1]		Q
	//out_variable[2]		AUX1
	//out_variable[3]		AUX2
	//out_variable[4]		i
	
	int Work_cycle=2;		//CYCLE(S) OF WORK (+1)

	if(variable==1 && out_variable[3]==0)
	{
		out_variable[2]=1;
	}

	if(out_variable[2]==1)
	{
		out_variable[1]=1;
		out_variable[4]=out_variable[4]+1;
		if(out_variable[4]>=Work_cycle)
		{
			out_variable[1]=0;
			out_variable[2]=0;
			out_variable[3]=1;
		}
	}

	if(variable==0 && out_variable[1]==0)
	{
		out_variable[4]=0;
		out_variable[3]=0;
	}

	if(variable==1 && out_variable[4]>=Work_cycle)
	{
		out_variable[4]=0;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el flip-flop de tipo SR
void SR(int variable[],int out_variable[])
{
	//variable[1]			SET
	//variable[2]			RESET
	//out_variable[1]		Q
	//out_variable[2]		NOT Q
	//out_variable[3]		AUX1

	if(variable[1]==0 && variable[2]==0 && out_variable[3]==0)
	{
		out_variable[1]=0;
		out_variable[2]=1;
	}
	
	if(variable[1]==1 && variable[2]==0)
	{
		out_variable[1]=1;
		out_variable[2]=0;
		out_variable[3]=1;
	}

	if(variable[2]==0 && out_variable[3]==1)
	{
		out_variable[1]=1;
		out_variable[2]=0;
	}
	
	if(variable[2]==1)
	{
		out_variable[1]=0;
		out_variable[2]=1;
		out_variable[3]=0;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque STEP_MMT
void STEPMMT(int variable[],int out_variable[])
{
	//variable[1]			ORDER
	//variable[2]			FOR_1
	//variable[3]			FOR_0
	//variable[4]			COND
	//out_variable[1]		STATE
	//out_variable[2]		NEXT
	//out_variable[5]		AUX1
	//out_variable[6]		AUX2

	int i;

	if((variable[1]==1 || variable[2]==1) && out_variable[6]==0)
	{
		out_variable[1]=1;
		out_variable[6]=1;
	}

	if(variable[3]==1)
	{
		for(i=1;i<=6;i++)
		{
			out_variable[i]=0;
		}
	}

	if(out_variable[1]==1 && variable[4]==1)
	{
		out_variable[1]=0;
		out_variable[2]=1;
	}
	
	if(variable[4]==0)
	{
		out_variable[2]=0;
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el bloque STEP_T_MMT
void STEPTMMT(int variable[],double TP_variable,double Time_factor,int out_variable[])
{
	//variable[1]			ORDER
	//variable[2]			FOR_1
	//variable[3]			FOR_0
	//variable[4]			COND
	//variable[5]			TTLE
	//out_variable[1]		STATE
	//out_variable[2]		NEXT
	//out_variable[3]		TIMER WITH CYCLES
	//out_variable[4]		FAILURE
	//out_variable[5]		AUX1
	//out_variable[6]		AUX2
	int i;
	
	if((variable[1]==1 || variable[2]==1) && out_variable[6]==0)
	{
		out_variable[5]=1;
		out_variable[6]=1;
	}
	
	if(out_variable[5]==1)
	{
		out_variable[1]=1;
		out_variable[3]=out_variable[3]+1;

		if(out_variable[3]>=(TP_variable*Time_factor))
		{
			out_variable[3]=0;
			out_variable[4]=1;
			out_variable[5]=0;
		}
	}
	
	if(variable[3]==1)
	{
		for(i=1;i<=6;i++)
		{
			out_variable[i]=0;
		}
	}

   if(out_variable[1]==1 && out_variable[4]==0 && variable[4]==1)
   {
	   out_variable[1]=0;
	   out_variable[2]=1;
	   out_variable[3]=0;
	   out_variable[5]=0;
   }
   
   if(variable[4]==0)
   {
	   out_variable[2]=0;
   }
}   
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el timer de tipo TOFD
void TOFD(int variable,double TP_variable,double Time_factor,int out_variable[])
{
	//out_variable[1]		Q
	//out_variable[2]		TIMER WITH CYCLES
	if(variable==0 && out_variable[1]==0)
	{
		out_variable[2]=0;
	}

	if(variable==1)
	{
		out_variable[2]=0;
		out_variable[1]=1;
	}

	if(variable==0 && out_variable[1]==1)
	{
		out_variable[2]=out_variable[2]+1;

		if(out_variable[2]>=(TP_variable*Time_factor))
		{
			out_variable[1]=0;
			out_variable[2]=0;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

//Funcion para el timer de tipo TOND
void TOND(int variable,double TP_variable,double Time_factor,int out_variable[])
{
	//out_variable[1]		Q
	//out_variable[2]		TIMER WITH CYCLES
	
	if(variable==0)
	{
		out_variable[1]=0;
		out_variable[2]=0;
	}

	if(variable==1 && out_variable[1]==0)
	{
		out_variable[2]=out_variable[2]+1;
		
		if(out_variable[2]>=(TP_variable*Time_factor))
		{
			out_variable[1]=1;
			out_variable[2]=0;
		}
	}
}
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *


#endif // FUNCTIONS_H
