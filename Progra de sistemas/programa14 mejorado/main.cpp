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
 int c=0, num, suma=0, mayor=0, contarPar=0;
 double promedio;
    do
    { do
        {cout<<"Ingrese numero entre 50-100...: ";
        cin>>num;
        }while (!((num>=50) and (num<=100)));
         _flushall();
        do
        {   cout << "Desea continuar ...: ";
            cin.get(resp); /* cin.get lee un solo caracter */
            _flushall();
        } while((toupper(resp)!='S') and (toupper(resp)!='N'));
            suma+=num;
            if (num>mayor)
            {mayor=num;
            }
            c++;
            if (num%2==0)
            {
                contarPar++;
            }
    } while ((toupper(resp)=='S'));
        if (c>0)
        promedio=suma/c;
        else
        promedio=0;

    cout<<"Promedio numeros entre 80-100..: "<<promedio<<"\n";
    cout<<"Numero mayor...: "<<mayor<<"\n";
    cout<<"Cantidad de numeros pares"<<contarPar<<"\n";

    return 0;
}
