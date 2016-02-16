#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1,num2,suma;

    printf("Ingrese un numero  ");
    scanf("%d",&num1);

    printf("Ingrese otro numero  ");
    scanf("%d",&num2);

    suma = num1+num2;

    printf("La suma de los numeros es  %d \n", suma);
    system("PAUSE");

    return 0;
}
