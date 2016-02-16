#include <iostream>

using namespace std;
/* Ingresar la nota acumulada y examen, luego obtener la nota final
y ajustarla a 60. Si se encuentra entre 57-59 a 60,
presentar la nota y el estado si es aprobado o reprobado.
*/
int ne, na, nf;
int main()
{
    cout << "Ingrese la nota del examen: ";
    cin>>ne;
    cout << "Ingrese la nota acumulada: ";
    cin>>na;
    nf=ne+na;
    if ((nf>=57) and (nf<=59))
    {   nf=60;
        cout <<"Nota Final: "<<nf<<"\n";
    }
    else if (nf>=60)
    {
       cout <<"APROBADO \n";
    }
    else
    {
        cout <<"REPROBADO \n";
    }
    return 0;
}
