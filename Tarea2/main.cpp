#include <iostream>

using namespace std;

int main()
{   int num,cpares,cimpares,contador,cifra,suma,mayor,menor,promedio;
    contador=0;
    cpares=0;
    cimpares=0;
    cout<<"Ingresar un numero entero...:";
    cin>>num;
    suma=0;
    mayor=0;
    menor=9;

    cout<<"numero al revez.....:";
    while (num>0)
    {
        cifra=num % 10;
        cout<<cifra;
        num= num/10;
        suma+=cifra;

        if (cifra>mayor)
        {
            mayor=cifra;
        }
        if (cifra<menor)
        {
            menor=cifra;
        }

        if ((cifra%2)==0)
        {
            cpares++;
        }

         else
        {
            cimpares++;
        }
        contador++;

    }
    promedio=suma/contador;

    cout<<"\n";
    cout<<"Suma de las cifras...:"<<suma<<"\n";
    cout<<"cifra mayor es...:"<<mayor<<"\n";
    cout<<"cifra menor es...:"<<menor<<"\n";
    cout<<"Promedio es....:"<<promedio<<"\n";
    cout<<"Contador es..."<<contador<<"\n";
    cout<<"cifra pares son..."<<cpares<<"\n";
    cout<<"cifra impares son..."<<cimpares<<"\n";
    return 0;
}
