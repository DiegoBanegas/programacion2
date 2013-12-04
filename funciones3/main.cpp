#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar la base y el exponente usando un procedimiento
luego calcular la base y el exponente usando una funcion.
luego preguntar si desea continuar usando una funcion
para devolver una respuesta s o n validada.
*/
int base,expo,poten;
char respuesta()
{
    char resp;
    do
    {
        cout<<"Desea continuar.....:";
        cin.get(resp);

    }while ((resp!='S') and (resp!='N'));
    return resp;

}
void ingreso(int &base,int &expo)
{
    cout<<"Ingrese la base.......:";
    cin>>base;
    cout<<"Ingrese el exponente......: ";
    cin>>expo;
}

int potencia(int base,int expo)
{
    int poten=1;
    for(int i=0;i<expo;i++)
    {
        poten*=base;
    }
    return poten;
}

int main()
{ char resp;
int base,expo,poten;
do
{
    ingreso(base,expo);
    poten=potencia(base,expo);
    _flushall();
    cout<<"Potencia es...:"<<poten<<"\n";
    resp=respuesta();
}while (resp!='N');
    return 0;
}
