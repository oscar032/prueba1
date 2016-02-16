#include <iostream>
#include <stdio.h>
using namespace std;
/* Ingresar un numero entero entre 50-100,
luego preguntar si desea continuar.
Al final del ciclo debera presentar
el promedio de los numeros entre 80-100
y cual fue el numero mayor.
*/
int main()
{char resp;
 int c=0, num, suma=0, mayor=0;
 double promedio;
    do
    {cout<<"Ingrese numero entre 50-100...: ";
    cin>>num;
    if ((num>=80) and (num<=100))
    {c++;
    suma+=num;
        {if (c>0)
            promedio=suma/c;
        else
            promedio=0;
        }}

    {if (num>mayor)
    mayor=num;}

    _flushall();

        do
    {   cout << "Desea continuar ...: ";
        cin.get(resp);
        _flushall();
    } while((toupper(resp)!='S') and (toupper(resp)!='N'));
    } while ((toupper(resp)=='S'));


    cout<<"Promedio numeros entre 80-100..: "<<promedio<<"\n";
    cout<<"Numero mayor...: "<<mayor<<"\n";
    return 0;
}
