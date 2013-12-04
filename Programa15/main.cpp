#include <iostream>

using namespace std;
/* ingresar la base y el exponente y determinar la potencia usando el ciclo for.
*/
int main()
{   int base,exponente,potencia;
    potencia=1;

    cout <<"Ingrese la base......: ";
    cin>>base;


    cout<<"Ingrese el exponente.....: ";
    cin>>exponente;

    for (int i=0;i<exponente;i++)
    {
        potencia*=base;
    }

    cout<<"La potencia es....: "<<potencia<<"\n";
    return 0;
}
