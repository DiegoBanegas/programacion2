#include <iostream>

using namespace std;
/*
Los parametros de valor no reflejan
los cambios que tienen en un procedimiento
en el main,pero los de variable si reflejan todos los
que hayan sufrido en el programa principal.
A esto se les coloca el "&".
*/
void calcular(int &sueldo,int &ihss)
{
    if (sueldo>7000)
        ihss=245;
    else
        ihss=0.035*sueldo;

    sueldo=sueldo*1.20;
}

int main()
{
    int sueldo;
    int ihss=0;


    cout<<"Ingrese el sueldo....: ";
    cin>>sueldo;

    calcular(sueldo,ihss);
    cout<<"Sueldo....: "<<sueldo<<"\n";
    cout<<"IHSS.....: "<<ihss<<"\n";


    return 0;
}
