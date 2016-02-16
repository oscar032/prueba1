#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*Ingresar dos numeros y determinar cual es el numero mayor */
int main()
{   int n1,n2;
    printf("Ingrese un numero:  ");
    scanf("%d",&n1);
    printf("Ingrese otro numero:  ");
    scanf("%d",&n2);

    if (n1>n2)
    {
        printf("El numero %d es mayor \n",n1);
    }
    else
    {
        printf("El numero %d es mayor \n",n2);
    }
    return 0;
}
