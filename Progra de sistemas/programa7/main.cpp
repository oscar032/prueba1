#include <iostream>

using namespace std;
/* ingresar un numero y determinar su rango
1-50, 51-100 y mayor a 100
*/
int numero;
int main()
{
    cout << "Ingrese un numero:  ";
    cin>>numero;
    if ((numero>=1) and (numero<=50))
    {
        cout<<"El numero esta entre 1-50";
    }
    else if ((numero>=51) and (numero<=100))
    {
        cout<<"El numero esta entre 51-100";
    }
    else if (numero>100)
    {
        cout<<"El numero es mayor a 100";
    }
    else
    {
        cout<<"El numero es negativo";
    }
    return 0;
}
