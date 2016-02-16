#include <iostream>

using namespace std;

int main()
{   int n=0;
    int num;
    int r0=0;
    int r1=0;
    int r2=0;
    int r3=0;

    while (n<10)
    {n++;
    cout <<"Numero #" <<n<<"...:";
    cin>>num;
        if (num<1)
        {r0++;}
        else if ((num>0)and(num<51))
        {r1++;}
        else if ((num>50)and(num<81))
        {r2++;}
        else
        {r3++;}

    }
    cout<<"Cantidades entre 1-50...: "<<r1<<"\n";
    cout<<"Cantidades entre 51-80...: "<<r2<<"\n";
    cout<<"Cantidades mayores a 80...: "<<r3<<"\n";
    cout<<"Cantidades negativas y cero...: "<<r0<<"\n";
    return 0;
}
