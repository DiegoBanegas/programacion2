#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{   int numero,cpar=0,cdiv5=0,mayor,suma100,c100=0;
    double promedio;
    char resp;

    do
    {
        do
        {
            cout<<"Ingresar el numero";
            cin>>numero;

        }
        while (((numero%2)!=0) and (numero%5)!=0);
        _flushall();

        do
        {
            cout<<"Desea continuar.....;";
            cin.get(resp);
            _flushall();
        }

        while ((resp != 'S') and (resp != 'N'));

        if ((numero%2)==0)
        {
        cpar++;
        }
        if ((numero%5)==0)
         {
             cdiv5++;
         }

         if (numero>100)
             {
                 c100++;
                 suma100+=numero;
             }
             if (c100!=0)
                {
                    promedio=suma100/c100;
                }
                else
                {
                    promedio=0;
                }

             if (numero>mayor)
             {
                 mayor=numero;
             }

    }
 while (resp!='N');
    cout<<"Cantidad de pares....:"<<cpar<<"\n";
    cout<<"cantidad de divisbles entre 5......:"<<cdiv5<<"\n";
    cout<<"promedio mayores de 100......:"<<promedio<<"\n";
    cout<<"El numero mayor es......:"<<mayor<<"\n";
    return 0;
}
