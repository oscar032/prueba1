#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*
Ingresar la nota examen y la nota acumulada en base
a 100
la nota examen vale 70% y la nota acumulada 30%

*/
int main()
{   double ne, na, nf;

    printf("Ingrese la nota del examen  ");
    scanf("%lf",&ne);

    printf("Ingrese la nota acumulada  ");
    scanf("%lf",&na);

    nf = (ne*0.7)+(na*0.3);

    if (nf>=60)
    {
        printf("Estado de la nota: APB\n");
    }
    else
    {
        printf("Estado de la nota: REP\n");
        printf("Necesita tutorias\n");
    }
    printf("La final es  %lf \n", nf);
    system("PAUSE");
    return 0;
}
