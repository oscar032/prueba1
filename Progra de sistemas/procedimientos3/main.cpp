#include <iostream>

/* Ingresar el nombre, las horas y el turno usando un procedimiento.
    Luego usando una funcion, devolver el pago por hora de acuerdo al turno.
    turno:
    1      100
    2      120
    3      150

    Elaborar un procedimiento para calcular el pago de horas trabajadas
    del empleado y presentarlo.
*/
using namespace std;
int turno, horas, salario;
char nombre[30];

void LecturaDatos(int &horas, int &turno,
                  char nombre[])
{
    cout<<"Nombre del Empleado..: ";
    cin.getline(nombre, 30);

    do
    {cout<<"Turno..: ";
    cin>>turno;
    }while ((turno<1) or (turno>3));

    cout<<"Horas..: ";
    cin>>horas;
}

int Sueldo(int turno, int horas)
{   int sueldo;

    if (turno==1)
    {sueldo=horas*100;}
    else if (turno==2)
    {sueldo=horas*120;}
    else if (turno==3)
    {sueldo=horas*150;}

    return sueldo;
}

int main()
{
    LecturaDatos(horas, turno, nombre);
    salario=Sueldo(turno, horas);
    cout<<"Salario del Empleado..: "<<"$ "<<salario<<"\n";

}
