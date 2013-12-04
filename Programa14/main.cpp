#include <iostream>

using namespace std;
/* Ingresar 5 numeros y determinarcuantos son divisibles entre 3
obtener el promedio de los numeros divisibles entre 3
*/
int main()
{   int numero,cdiv3,sdiv3,promedio;
    cdiv3=0;
    sdiv3=0;

    for(int i=0;i<5;i++)
    {
        cout<<"Ingresar un numero entero";
        cin>>numero;
        if((numero % 3)==0)
        {
            sdiv3=+numero;
            cdiv3++;
        }
    }
    if (cdiv3>0)

    {
        promedio=sdiv3/cdiv3;
    }
    else (promedio=0);

    cout<<"Contador de divisibles entre 3 es...:"<<cdiv3<<"\n";
    cout<<"El promedio es....:"<<promedio<<"\n";
    return 0;
}
