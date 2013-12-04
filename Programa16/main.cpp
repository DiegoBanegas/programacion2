#include <iostream>

using namespace std;

int main()
   int num,cifra,suma,mayor,menor;
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
    }

    cout<<"\n";
    cout<<"Suma de las cifras...:"<<suma<<"\n";
    cout<<"cifra mayor es...:"<<menor<<"\n";
    cout<<"cifra menor es...:"<<menor<<"\n";
    return 0;
