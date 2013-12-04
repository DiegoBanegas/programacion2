#include <iostream>

using namespace std;

int main()
    {   int numero,contador,suma,mayor;
    double promedio;
    contador=0;
    mayor=0;
    suma=0;

    for ( int i=0;i<10;i++)
    {
        cout<<"Ingrese el numero....: ";
        cin>>numero;

        if ((numero % 5)==0)
        {
            contador++;
            suma+=numero;
        }

        if (numero>mayor)
        {
            mayor=numero;
        }

    }
    if (contador!=0)
    {
        promedio=suma/contador;
    }
    else
    {
        promedio=0;
    }


    cout<<"Numeros divisibles entre 5 son....: "<<contador<<"\n";
    cout<<"Promedio es....: "<<promedio<<"\n";
    cout<<"El mayor es.......:"<<mayor<<"\n";
    return 0;
}
