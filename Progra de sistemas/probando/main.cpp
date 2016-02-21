#include <iostream>

using namespace std;
double n, cubo;
void Dato(double &n)
{
    cout<<"Numero...: ";
    cin>>n;
}
double Cubo(double n)
{
    return n*n*n;
}
int main()
{
    Dato(n);
    cubo=Cubo(n);
    cout<<"Cuadrado del numero...: "<<cubo<<"\n";
}
