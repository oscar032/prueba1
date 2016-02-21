#include <iostream>
/* Ingresar el nombre del empleado, el turno y sus ventas usando un procedimiento
el turno solo puede ser 1,2,3.
Luego usar una funcion para determinar el % de comision, ingresando el turno.
turno:
1   5%
2   6%
3   4%

Elaborar un procedimiento para calcular el % de comision ganada.
*/
using namespace std;
int turno;
char nombre[45];
double ventas, pcomis, comis;

void Datos(int &turno, double &ventas,
           char nombre[])
{
    cout<<"Ingrese el nombre..: ";
    cin.getline(nombre, 45);
    do
        {cout<<"Turno..: ";
         cin>>turno;
    }while ((turno<1) or (turno>3));

    cout<<"Ventas..: ";
    cin>>ventas;
}

double PorComis(int turno)
{
    if (turno==1)
    { return 0.05; }
    else if (turno==2)
    { return 0.06; }
    else
    { return 0.04; }
}

void Calcular(int turno, double ventas, double &pcomis, double &comis)
{   pcomis=PorComis(turno);
    comis=PorComis(turno)*ventas;
}

int main()
{
    Datos(turno,ventas,nombre);
    Calcular(turno, ventas, pcomis, comis);
    cout<<"Porcentaje de comision..: "<<pcomis<<"\n";
    cout<<"Comision ganada..: "<<comis<<"\n";
}
