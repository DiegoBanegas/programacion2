#include <iostream>

using namespace std;

int main()
{   int dia,mes,anio;
    cout << "Ingrese el dia...: ";
    cin>>dia;

    cout << "Ingrese el mes...: ";
    cin>>mes;

    cout << "Ingrese el anio...: ";
    cin>>anio;

    if((anio>=1) and ((mes>=1) and (mes<=12)))
    {

            if ((mes==1) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==2) and ((dia>=1)and(dia<=28)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==3) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==4) and ((dia>=1)and(dia<=30)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==5) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==6) and ((dia>=1)and(dia<=30)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==7) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==8) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==9) and ((dia>=1)and(dia<=30)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==10) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==11) and ((dia>=1)and(dia<=30)))
            {
                cout<<"Correcto"<<"\n";
            }


            else if ((mes==12) and ((dia>=1)and(dia<=31)))
            {
                cout<<"Correcto"<<"\n";
            }


    else
    {
        cout<<"*****Incorrecto****"<<"\n";
    }
    }

    return 0;
}
