#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Generar 10 numeros aleatorios, presentarlos en la pantalla.
al final presentar el numero mayor y el promedio de los  numeros.
Generar los numeros entre 30-80
*/
int main()
{
  srand(time(0));
  int numero;
  int mayor=0;
  int contar=0, suma=0;
  int promedio;

  for (int i=0; i<10;i++)
  {   numero =30 + rand() % (80-30);
      cout<<"Valor de numero "<<i<<" es: "<<numero<<"\n";
      if (numero>mayor)
       { mayor=numero;
       }
       contar++;
       suma+=numero; /* suma=suma +numero*/
   }
   promedio=suma/contar;
   cout<<"Numero mayor:  "<<mayor<<"\n";
   cout<<"Promedio entre los numeros:  "<<promedio<<"\n";
   system("PAUSE");
    return 0;
}
