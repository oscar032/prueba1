#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Ingresar un numero y determinar su signo
si es cero, positivo o negativo */

int main()
{   int numero;
    printf("Ingrese un numero:  ");
    scanf("%d",&numero);

    if (numero>0)
    {
        printf("El numero es positivo\n");
    }
    else if (numero<0)
    {
       printf("El numero es negativo\n");
    }
    else
    {
        printf("El numero es cero\n");
    }
    system("PAUSE");
    return 0;
}
