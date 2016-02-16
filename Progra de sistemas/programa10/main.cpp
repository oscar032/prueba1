#include <iostream>

using namespace std;

int main()
{   int c=0;
    int numero;
    int r0=0;
    int r1=0;
    int r2=0;
    int r3=0;

    while (c<10)
    {   c++;
        cout << "Numero # "<<c<<"...:";
        cin>>numero;
        if ((numero>0) and (numero<51))
        { r1++;
        }}
    while (c<10)
    {   c++;
        cout << "Numero # "<<c<<"...:";
        cin>>numero;
        if((numero>50) and (numero<81))
            {r2++;
            }}
    while (c<10)
    {   c++;
        cout << "Numero # "<<c<<"...:";
        cin>>numero;
        if (numero>80)
        {r3++;
        }}
    while (c<10)
    {   c++;
        cout << "Numero # "<<c<<"...:";
        cin>>numero;
        if (numero<1)
        {r0++;
        }}
        cout<<"Cantidad entre 1-50: "<<r1<<"\n";
        cout<<"Cantidad entre 51-80: "<<r2<<"\n";
        cout<<"Cantidad mayor a 80: "<<r3<<"\n";
        cout<<"Cantidad de negativos y ceros: "<<r0<<"\n";
    return 0;
}

