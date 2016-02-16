#include <iostream>

using namespace std;
/*
1. Producir la siguiente salida
*****
****
**
*
Usando ciclos For anidados.

2. Encontrar los multiplos de 3
entre 100-1000.

3. En Arduino usando el sensor ultrasonico
encender un led cuando este se encuentre
entre 5 y 10 cm
*/
int main()
{
    for (int n=102; n<1000; n+=3)
    cout<<"Multiplo de 3...: "<<n<<"\n";

    return 0;
}
