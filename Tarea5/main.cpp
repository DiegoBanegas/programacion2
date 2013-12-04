#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int arreglo[5];

void descendente(int arreglo[])
{
	for(int cont1=1;cont1<5;cont1++)
    {
		for(int cont2=0;cont2<5;cont2++)
		{
			if(arreglo[cont1]>arreglo[cont2])
			{
				int temp=arreglo[cont2];
				arreglo[cont2]=arreglo[cont1];
				arreglo[cont1]=temp;
			}
		}
	}
}

void ascendente(int arreglo[])
{
	for(int cont1=1;cont1<5;cont1++)
    {
		for(int cont2=0;cont2<5;cont2++)
		{
			if(arreglo[cont1]<arreglo[cont2])
			{
				int temp=arreglo[cont2];
				arreglo[cont2]=arreglo[cont1];
				arreglo[cont1]=temp;
			}
		}
	}
}

void substituirpares(int arreglo[])
{
		for(int cont=0;cont<5;cont++)
        {
			if(arreglo[cont]%2==0)
			{
				arreglo[cont]=0;
			}
		}
}

void ingresar(int arreglo[])
{
	for(int cont=0;cont<5;cont++)
    {
		cout<<cont+1<<")Ingese un numero.....: ";
		cin>>arreglo[cont];
	}
}

void presentar(int arreglo[])
{
	for(int cont=0;cont<5;cont++)
    {
		cout<<" "<<arreglo[cont];
	}
	cout<<"\n";
}

int main()
{
	ingresar(arreglo);
	ascendente(arreglo);
	cout<<"Forma Ascendente....: "<<"\n";
	presentar(arreglo);
	descendente(arreglo);
	cout<<"Forma Descendente.....:"<<"\n";
	presentar(arreglo);
	substituirpares(arreglo);
	cout<<"Pares por Cero's....:"<<"\n";
	presentar(arreglo);
        return 0;
}
