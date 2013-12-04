#include <iostream>
#include <stdio.h>
using namespace std;
/*
Ingresar 5 numeros pares.validar que el numero sea par
*/
int main()
{   int numero,mayor=0,menor=10000000000;
    for (int i=0;i<5;i++)
    {
        do
        {
            cout<<"Ingresar un numero par....:";
            cin>>numero;
            _flushall();

        }
        while ((numero%2)!=0);
    if (numero>mayor)
    {
        mayor=numero;
    }
    if (numero<menor)
    {
        menor=numero;
    }
    }
    cout << "Numero mayor es...:"<<mayor<<"\n";
    cout<<"Numero menor es....:"<<menor<<"\n";
    return 0;
}
