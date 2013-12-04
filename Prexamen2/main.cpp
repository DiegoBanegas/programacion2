#include <iostream>
/*
Ingresar 5 numeros a un arreglo.Los numeros deberan de estar entre 50-100.

Usando una funcion debera de obtener la suma de los numeros divisibles
entre 5.

crear una funcion para determinar el promedio de los numeros pares

crear un procedimiento para modificar el arreglo y colocar 0 a todos los numros que son pares.

crear un procedimiento para presentar el arreglo
*/

const int tam=4;
int arreglo [4];
int sumaA,promedioP;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do
        {

            cout<<"Ingresar numero....:";
            cin>>arreglo[i];
        }while (!((arreglo[i]>=50) and (arreglo[i]<=100)));
    }
}
int numerosdivisibles5(int arreglo[])
{
    int suma=0
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0)
            suma+=arreglo[i];
    }
    return suma;
}

int promedioPares(int arreglo[])
{
int conp=0;
int sumapa;
    for (int i=0;i<=tam;i++)
    {
        if(arreglo[i]%2==0)
        {
            sumapa+=arreglo[i];
            conp++;
        }

    }
    return sumapa/conp;
}
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
