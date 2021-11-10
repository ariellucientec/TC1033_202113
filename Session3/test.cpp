#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "dame un número de 5 dígitos";
    cin >> num;
    for(int i=0; i<5; i++)
    {
        //aquí va un avance
        cout << num%10;         //observa qué se imprime y eso te dará una idea de cómo resolverlo
        break;  // esto lo puse para que sólo se repita una iteración y no las 5 completas
    }
}