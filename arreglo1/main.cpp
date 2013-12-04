#include <iostream>

using namespace std;
const int tam=4;
int num[4];
int mayor,menor,promedio;
int contador;
void ingreso(int num[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingresar un numero["<<i<<"]...:";
        cin>>num[i];
    }
}
int promedioArreglo(int num[])
{ int suma=0;
    for (int i=0;i<=tam;i++)
    {
        suma+=num[i];
    }
    return suma/tam;
}
int mayorArreglo(int num[])
{int mayor=num[0];
for (int i=0;i<=tam;i++)
{
 if (num[i]>mayor)
 {
     mayor=num[i];
 }
}
    return mayor;
}
int menorArreglo(int num[])
{int menor=num[0];
for (int i=0;i<=tam;i++)
{
    if (num[i]<menor)
    {
        menor=num[i];
    }
}
    return menor;
}
int paresArreglo(int num[])
{int cont=0;
    for (int i=0;i<=tam;i++)
    {
        if ((num[i]%2)==0)
        cont++;
    }
return cont;
}

int main()
{
    ingreso(num);
    promedio=promedioArreglo(num);
    mayor=mayorArreglo(num);
    menor=menorArreglo(num);
    contador=paresArreglo(num);
    cout<<"Pares..:"<<contador<<"\n";
    cout<<"Menor es....:"<<menor<<"\n";
    cout<<"Mayor es....:"<<mayor<<"\n";
    cout<<"promedio del arreglo...:"<<promedio<<"\n";

    return 0;
}
