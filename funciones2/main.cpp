#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingresar el nombre y las horas usando un procedimiento
Luego determinar las horas normales usando una funcion,
lo mismo con las horas extras.
Las primeras 40 son normales y las demas son extras

Luego determinar el pago por hora normal y el extra usando un
procedimiento.
turno       pago normal     pago extra
1                100           120
2                130           150
3                140           160
Elaborar una funcion para el ihss.
Usando un procedimiento realizar los calculos y en otro
procedimiento presentar los datos
*/

char    nombre[30];
int     turno,horas,hn,he;
double  pxn,pxe,pn,pe,pb,ihss,tp;

void ingresar(char nombre[],int &horas,int &turno)
{
 cout<<"Ingresar el nombre...: ";
 cin.getline(nombre,30);
 cout<<"Horas....: ";
 cin>>horas;

 do
 {
     cout<<"Ingrese el turno....: ";
     cin>>turno;
 }while ((turno<1) or (turno>3));
  _flushall();
}
int horasN(int horas)
{
    if (horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}

int horasE (int horas)
{
    if (horas>40)
    {
        return horas-40;
    }
    else
    {
        return 0;
    }
}
void pagos(int turno,double &pxn,double &pxe)
{
    switch (turno)
    {
        case 1:
            pxn=100;
            pxe=120;
            break;
        case 2:
            pxn=130;
            pxe=150;
            break;
        default:
            pxn=140;
            pxe=160;
            break;
    }
}
double  Seguro(double sueldo)
{
    if (sueldo>7000)
    {
        return 245;
    }
    else
    {
        return 0.035*sueldo;
    }
}
void calcular(int turno,int horas,int &hn,int &he,double &pxn,double &pxe,double &pn,double &pe,double &pb,double &ihss,double &tp)
{
    hn=horasN(horas);
    he=horasE(horas);
    pagos(turno,pxn,pxe);

    pn=hn*pxn;
    pe=he*pxe;

    pb=pn+pe;

    ihss=Seguro(pb);

    tp=(pn+pe)-ihss;
}
void presentar(int hn,int he,double pxn,double pxe,double pn,double pe,double pb,double ihss,double tp)
{
    cout<<"Horas normales....:"<<hn<<"\n";
    cout<<"Horas extras....:"<<he<<"\n";
    cout<<"Pago Normal....:"<<pn<<"\n";
    cout<<"Pago Extra....:"<<pe<<"\n";
    cout<<"Pago Bruto....:"<<pb<<"\n";
    cout<<"Seguro Social....:"<<ihss<<"\n";
    cout<<"Total a pagar....:"<<tp<<"\n";
}
int main()
{
    ingresar(nombre,horas,turno);
    calcular(turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp);
    presentar(hn,he,pxn,pxe,pn,pe,pb,ihss,tp);
    return 0;
}
