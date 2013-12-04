#include <iostream>

using namespace std;
struct empleado
{
   char nombre[30];
   int vent,turno,comis,ihss,tp;
   double pcomis;
};
empleado emplex;

void ingreso(empleado &emplex)
{
   cout<<"Ingresar nombre del empleado....: ";
   cin.getline(emplex.nombre,30);

   cout<<"Ingresar las ventas.....: ";
   cin>>emplex.vent;

   do
   {
   cout<<"Ingrese el turno.....: ";
   cin>>emplex.turno;
   }while (emplex.turno<0 or emplex.turno>3);
}

double Pcomision (empleado &emplex)
{
   if(emplex.turno==1)
       return 0.03;
   else if (emplex.turno==2)
       return 0.05;
   else if (emplex.turno==3)
       return 0.06;
   else
       return -1;
}

int SeguroSocial (empleado &emplex)
{
   if (emplex.vent>7000)
       return 245;
   else
       return 0.035*emplex.vent;
}

void calcular (empleado &emplex)
{
   emplex.pcomis = Pcomision(emplex);
   emplex.comis = emplex.vent*emplex.pcomis;

   emplex.ihss=SeguroSocial(emplex);

   emplex.tp= emplex.vent+emplex.comis-emplex.ihss;
}

void presentar (empleado emplex)
{
   cout<<"Comision es.....: "<<emplex.comis<<"\n";
   cout<<"Seguro social es....."<<emplex.ihss<<"\n";
   cout<<"Total a pagar es...."<<emplex.tp<<"\n";
}
int main()
{
   ingreso(emplex);
   calcular(emplex);
   presentar(emplex);
   return 0;
}
