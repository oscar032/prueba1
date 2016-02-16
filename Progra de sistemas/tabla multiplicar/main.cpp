#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   int tabla;
    int resp;
    int i;
    char respuesta;
    do
    {   do
        {cout<<"Tabla de multiplicar...: ";
         cin>>tabla;
        }while((tabla<5) or (tabla>10));
        for (i=1; i<=10; i++)
        {resp= tabla*i;
        cout<<i<<" X "<<tabla<<" = "<<resp<<"\n";
        }
        _flushall();
            do
            {   cout<<"Desea continuar..: ";
                cin.get(respuesta);
                _flushall();

            }while ((toupper(respuesta)!='X') and (toupper(respuesta)!='Y'));

    }while (toupper(respuesta)=='X');
    return 0;
}
