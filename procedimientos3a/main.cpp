#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del empleado,las horas y el turno
usando un procedimiento.

Luego determinar el pxh usando el turno,el pago de horas,ihss
y total a pagar usando un procedimiento.
turno        pxh
1             100
2             150
3             180

Presentar los datos usando un procedimiento.
*/

char nombre[30];
int turno,horas,pb,ihss,tp,pxh;

void ingreso(char nombre[],int &horas,int&turno)
{
 cout<<"Ingrese el nombre....:";
 cin.getline(nombre,30);
 cout<<"Ingrese las horas....:";
 cin>>horas;

 do
 {
    cout<<"Ingrese el turno....:";
    cin>>turno;

 }while (turno<1 and turno>3);

}

void calcular(int turno,int horas,int &pxh,int &pb,int &ihss,int &tp)
{
    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=150;
        break;
    default:
        pxh=180;
        break;
    }

    pb=pxh*horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.035*pb;
    }

    tp= pb-ihss;
}

void presentar(int pxh,int pb,int ihss,int tp)
{
    cout<<"El pxh es...:"<<pxh<<"\n";
    cout<<"El pago bruto es...:"<<pb<<"\n";
    cout<<"El seguro es...:"<<ihss<<"\n";
    cout<<"El total a pagar es...:"<<tp<<"\n";

}



int main()
{   for(int i=0;i<3;i++)
    ingreso(nombre,horas,turno);
    calcular(turno,horas,pxh,pb,ihss,tp);
    presentar(ihss,pb,tp,pxh);
    return 0;
}
