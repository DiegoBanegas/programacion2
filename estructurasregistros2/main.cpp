#include <iostream>

using namespace std;
/*
Elaborar un programa donde se declare la siguiente estructura
nombre,horas, hn,he,pn,pe,pb,ihss y tp
se tiene que elaborar un procedimiento para ingresar los datos al registro
,luego debemos calcular las hn,he,pn,pe,pb,ihss y tp
un procedimeitn.(las horas normales son las primeras 40 y las demas extras)
se tienen que elaborar una funcion para determinar el seguro social
donde solo se ingrese el pago que es parte de la estructura y nos
devuelve el ihss

emplex.ihss=seguro(emplex.pb)

luego presentar los datos usando un procedimiento
*/
struct empleado
{

};
empleado emplex

void ingreso (empleado &emplex)
{
    cout<<"Ingrese el nombre...:";
    cin.getline(emplex.nombre,30);
    cout<<"Ingrese las horas...:";
    cin>>emplex.horas;
}

void calcular(empleado &emplex)
{
    if (horas>40)
        hn=40;
        he=horas-40;
    else
        hn=horas;
        he=0;
}
int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035* pb;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
