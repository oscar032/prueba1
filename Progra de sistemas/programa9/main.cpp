#include <iostream>

using namespace std;
/*presentar los numeros del 1 al 10 suando while
*/
int main()
{   int c=0;
    int numero;
    int suma=0;
    int mayor=0;
    float promedio;
    while (c<5)
    {   c++;
        cout << "Numero # "<<c<<"...:";
        cin>>numero;
        suma+=numero;

        if (numero>mayor)
        {
            mayor=numero;
        }

    }
    promedio=suma/5;
    cout<<"El promedio es "<<promedio<<"\n";
    cout<<"El numero mayor es: "<<mayor<<"\n";
    cout<<"Suma de los numeros "<<suma<<"\n";
    cout<<"Final del ciclo\n";
    return 0;
}
