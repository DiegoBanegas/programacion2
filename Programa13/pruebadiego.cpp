#include <iostream>

using namespace std;
/*Ingresar el nombre del empleado,las horas trabajadas,o determinar las
horas normales que son las primeras 40 y las extras que son las mayores a 40.
debera de obtener pago por hora usando el turno,luego un bono,el pago bruto que son la suma de los pagos normales y extras.
ihss y total a pagar.

turno   pn   pe
1       100  130
2       135   140
3         140   150

bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino 100.

para calcular el seguro el pagobruto myor a 7000 es 245 y sino el pago bruto por3.5%
*/

int main()
{   char nombre[30];
    int horas,turno,pxh,bono,pb,pn,ihss,tp,pxhe,horase,horasn;

    cout << "Ingresar el nombre del empleado...: ";
    cin.getline (nombre,30);

    cout<<"Ingresar horas trabajadas.....:";
    cin>>horas;

    cout<<"Ingresar el turno...:";
    cin>>turno;

    if (horas>40)
    {
       horasn=40;
       horase=horas-40;
    }

        else
   {
       horasn=horas;
       horase=0;
   }

   if (turno==1)
    {
        pxh=100*horasn;
        pxhe=130*horase;
    }
        else if (turno==2)
        {
            pxh=135*horasn;
            pxhe=140*horase;
        }
            else if (turno==3)
            {
                pxh=140*horasn;
                pxhe=138*horase;
            }
    else
    {
        pxh=0;
        pxhe=0;
    }

    if ((turno==1) and (horas>45))
    {
        bono=300;
    }

    else
    {
        bono=100;
    }

    pb=pxh+pxhe+bono;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=(pb*0.035);
    }

    tp=pb+bono-ihss;

    cout<<"Horas normales....:"<<horasn<<"\n";
    cout<<"Horas extras es....:"<<horase<<"\n";
    cout<<"Pago normal es.....:"<<pxh<<"\n";
    cout<<"Pago extra es....:"<<pxhe<<"\n";
    cout<<"Bono es....:"<<bono<<"\n";
    cout<<"Pago Bruto es....:"<<pb<<"\n";
    cout<<"Ihss....:"<<ihss<<"\n";
    cout<<"Total a pagar es...:"<<tp<<"\n";




    return 0;
}
