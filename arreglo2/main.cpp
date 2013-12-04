#include <iostream>

using namespace std;
/*Ingresar 5 numeros a un arreglos.
los  numeros deberan de estar entre 50-100.

usando una funcion debera de obtener la suma de los numeros divisibles
entre 5.

crear una funcion para determinar el promedio de los numeros pares

crear un procedimiento para modificar el arreglo y colocar 0 a todos
los numeros que son pares.

crear un procedimiento para presentar el arreglo.

*/
const int tam=4;
int arreglo[4];
int sumaA,promedioP;
void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do
        {
            cout<<"Ingresar numero..:";
            cin>>arreglo[i];
        }while (!((arreglo[i]>=50) and (arreglo[i]<=100)));

    }
}
int numerosdivisibles5(int arreglo[])
{
int sumadiv5=0;
for (int i=0;i<=tam;i++)
{
    if (arreglo[i]%5==0)
    {
        sumadiv5+=arreglo[i];
    }
}
    return sumadiv5;
}
int promedioPares(int arreglos[])
{int conp=0;
int sumapa=0;
for (int i=0;i<=tam;i++)
{
    if (arreglo[i]%2==0)
    {
        sumapa+=arreglo[i];
        conp++;
    }
}
return sumapa/conp;
}
void modificarArreglo(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%2==0)
        {
            arreglo[i]=0;
        }
    }
}
void presentarArreglo(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"El arreglo es..:"<< arreglo[i] <<"\n";
    }
}
int main()
{
    ingreso(arreglo);
    sumaA=numerosdivisibles5(arreglo);
    promedioP=promedioPares(arreglo);
    modificarArreglo(arreglo);
    presentarArreglo(arreglo);
    cout<<"Suma de divisibles entre 5..:"<<sumaA<<"\n";
    cout<<"Promedio de pares..:"<<promedioP<<"\n";
    return 0;
}
