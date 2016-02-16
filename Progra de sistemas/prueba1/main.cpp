#include <iostream>

using namespace std;

int main()
{
    int num;
    int r1=0, s1=0, s2=0, s3=0;
    int r2=0;
    int r3=0;
    int mayor=0;
    int menor=10000000;
    int c=0;
    float p1=0, p2=0, p3=0;

    while (c<5)
    { c++;
        cout << "Numero "<<c<<"...:";
        cin>>num;

        if ((num>0) and (num<51))
        { r1++;
        s1+=num;}
        else if ((num>50) and (num<101))
        { r2++;
        s2+=num;}
        if (num>101)
        {r3++;
        s3+=num;}
        {if (num>mayor)
        mayor=num;}
        {if (num<menor)
        menor=num;}

    {if (r1>0)
         {p1=s1/r1;}
    else
        {p1=0;}}

    {if (r2>0)
         {p2=s2/r2;}
    else
        {p2=0;}}

    {if (r3>0)
         {p3=s3/r3;}
    else
        {p3=0;}}
    }
    cout<<"\n";
    cout<<"Cantidad de numeros entre 1-50..: "<<r1<<"\n";
    cout<<"Cantidad de numeros entre 51-100..: "<<r2<<"\n";
    cout<<"Cantidad de numeros mayores a 101..: "<<r3<<"\n"<<"\n";
    cout<<"El numero mayor entre todos es..: "<<mayor<<"\n";
    cout<<"El numero menor entre todos es..: "<<menor<<"\n"<<"\n";
    cout<<"Promedio en rango 1-50..: "<<p1<<"\n";
    cout<<"Promedio en rango 51-100..: "<<p2<<"\n";
    cout<<"Promedio numeros mayores a 101..: "<<p3<<"\n";
    return 0;
}
