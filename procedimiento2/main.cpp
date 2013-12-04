#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del empleado,el turno y las ventas.
validar que el turno solo sea 1,2,3.(usar un procedimiento)

calcular usando un procedimiento,la comision ganada,el ihss,
y total a pagar.1=5%,2=3%,3=6%

presentar los datos calculados usando un procedimiento.
*/

char nombre[30];
int turno,ventas,ihss,com,tp;

void Ingreso(char nombre[],int &turno,int &ventas)
{
    cout<<"Ingrese el nombre del alumno.....: ";
    cin.getline(nombre,30);
    do
    {
    cout<<"Ingrese el turno.....: ";
    cin>>turno;
    }while (turno<1 and turno>3);

    cout<<"Ingrese las ventas.....: ";
    cin>>ventas;
}
void calcular(int turno,int ventas,int &com,int &ihss,int &tp)
{
    if (turno==1)
      {
        com=ventas*0.05;
      }
    if (turno==2)
     {
        com=ventas*0.03;
     }
    if (turno==3)
     {
        com=ventas*0.06;
     }
     tp=ventas+com-ihss;
}

void presentar(int tp,int ihss,int com)
{
    cout<<"Total a pagar es.....: "<<tp<<"\n";
    cout<<"El ihss es.....: "<<ihss<<"\n";
    cout<<"La comision es.....: "<<com<<"\n";
}
int main()
{
    Ingreso(nombre,turno,ventas);
    calcular(turno,ventas,com,ihss,tp);
    presentar(tp,ihss,com);
    return 0;
}
