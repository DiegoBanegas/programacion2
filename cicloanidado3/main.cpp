#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
ingresar el nombre del alumno,luego debemos de pedir
las tres notas parciales usando un ciclo,presentar el promedio,la nota mayor
de los tres parciales.
Preguntar si desea continuar,al final presentar el nombre del alumnocon la mejor nota.

*/

int main()
{   char nombre[30];
    char resp;
    int nota,promedio,notamax,suma,alumnomax;
        char nombremayor[30];

        alumnomax=0;

        do
        {
            cout<<"Nombre del alumno....:";
            cin.getline(nombre,30);
            suma=0;
            notamax=0;
            for (int i=1;i<=3;i++)
            {
                cout<<"Ingresar el parcial "<<i<<"..:";
                cin>>nota;
                suma+=nota;
                if (nota>notamax)
                    notamax=nota;
            }
            promedio=suma/3;

            cout<<"Presentar Promedio.....:"<<promedio<<"\n";
            cout<<"Nota maxima es....:"<<notamax<<"\n";
            _flushall();
            if (alumnomax<promedio)
            {
                alumnomax=promedio;
                strcpy(nombremayor,nombre);
            }
            _flushall();
            do
            {
                cout<<"Desea Continuar...:";
                cin.get(resp);
                _flushall();
            }
            while ((resp!='N') and (resp!='S'));
        }

        while (resp!='N');
        cout<<"Nombre del alumno con la mejor nota.....:"<<nombremayor;
        cout<<" Con la nota"<<alumnomax<<"\n";
    return 0;
}
