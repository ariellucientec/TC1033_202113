#include<iostream>
using namespace std;

void dulceria(int*acumulador)
{
    int total;
    cout << "cuánto gastaste en nuestra dulcería" << endl;
    cin >> total;
    cout << "gracias por gastar "<< total << " pesos en dulcería"; 
    (*acumulador) += total;
}

int main()
{
    int acumulador  = 0;

    dulceria(&acumulador);
    cout << "en total gastaste " << acumulador;
}