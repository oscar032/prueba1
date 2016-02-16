#include <iostream>
#include <stdio.h>
/* Tabla de multiplicar */
using namespace std;
/*
Programa 1: Presentar los numeros de 10 al 1 usando el ciclo for.

Porgrama 2: Pedir la tabla de multiplicar entre 5-10.
Luego presentar la tabla multiplicada
de 1 a 10
Tabla 6
1 x 6 = 6
.
.
.
10 x 6 = 60
Luego preguntar si desea continuar. */
int main()
{   int num, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
    char respuesta;
  do{
        do{
        cout<<"Tabla del numero...: ";
        cin>>num;
        _flushall();

        }while ((num<5) or (num>10));
            p1=num*1;
            p2=num*2;
            p3=num*3;
            p4=num*4;
            p5=num*5;
            p6=num*6;
            p7=num*7;
            p8=num*8;
            p9=num*9;
            p10=num*10;
            cout<<" 1 x "<<num<<" = "<<p1<<"\n";
            cout<<" 2 x "<<num<<" = "<<p2<<"\n";
            cout<<" 3 x "<<num<<" = "<<p3<<"\n";
            cout<<" 4 x "<<num<<" = "<<p4<<"\n";
            cout<<" 5 x "<<num<<" = "<<p5<<"\n";
            cout<<" 6 x "<<num<<" = "<<p6<<"\n";
            cout<<" 7 x "<<num<<" = "<<p7<<"\n";
            cout<<" 8 x "<<num<<" = "<<p8<<"\n";
            cout<<" 9 x "<<num<<" = "<<p9<<"\n";
            cout<<"10 x "<<num<<" = "<<p10<<"\n\n";
            _flushall();

       do{
        cout<<"Desea continuar..: ";
        cin.get(respuesta);
        _flushall();
        }while ((toupper(respuesta)!='X') and (toupper(respuesta)!='Y'));

        }while (toupper(respuesta)=='X');

    return 0;
}
