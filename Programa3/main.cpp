#include <iostream>

using namespace std;

int main()
{   int horas;
double pxh,salario,deduccion,tp;

    cout << "Ingresar las horas...>" ;
    cin>>horas;

    cout<<"Ingresar el pago por hora...>";
    cin>>pxh;

    salario= horas*pxh;
    deduccion=salario*0.05;
    tp=salario - deduccion;
        cout<<"salario "<<salario<<"\n";
        cout<<"deduccion "<<deduccion<<"\n";

    return 0;
}
