#include <iostream>

using namespace std;

int main()
{   int numero,contador,suma;
contador=0;
suma=0;
    while (contador<10)
    {
      cout << "Ingresar un numero...: ";
      cin>>numero;

      contador ++; //contadpr = contador +1

      suma+=numero; //suma=suma+numero;
    }

    cout<<"Suma de los numeros es "<<suma<<"\n";

    return 0;
}
