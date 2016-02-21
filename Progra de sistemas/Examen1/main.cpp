#include <iostream>

using namespace std;
char nombre[35];
int turno, hrstrab, extras;
int pxhn, pxhe;
double sueldo;

void Datos(char nombre[], int &turno, int &hrstrab, int &extras)
{
    cout<<"Ingrese el nombre del empleado: ";
    cin.getline(nombre, 35);
    do
    {
       cout<<"Turno:  ";
       cin>>turno;
    }while ((turno<1) or (turno>4));

    cout<<"Horas trabajadas:  ";
    cin>>hrstrab;
    cout<<"Horas extras:  ";
    cin>>extras;
    cout<<"\n\n";
}

int Pxhn(int turno)
{
   if ((turno==1) or (turno==3))
    {return 200;}
    else
    {return 300;}
}

int Pxhe(int turno)
{
   if ((turno==1) or (turno==3))
    {return 250;}
    else
    {return 350;}
}

void Calcular(int hrstrab, int extras, int &pxhn, int &pxhe, double &sueldo)
{
   pxhn=hrstrab*Pxhn(turno);
   pxhe=extras*Pxhe(turno);
   sueldo=pxhn+pxhe;

}
int main()
{
    Datos(nombre,turno,hrstrab, extras);
    Pxhn(turno);
    Pxhe(turno);
    Calcular(hrstrab, extras, pxhn, pxhe, sueldo);
    cout<<"P. hora normal: "<<"L. "<<Pxhn(turno)<<"\n";
    cout<<"P. hora extra: "<<"L. "<<Pxhe(turno)<<"\n";
    cout<<"Pago por horas normales: "<<"L. "<<pxhn<<"\n";
    cout<<"Pago por horas extras: "<<"L. "<<pxhe<<"\n";
    cout<<"Pago total "<<"L. "<<sueldo<<"\n";
}
