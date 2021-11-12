#include<iostream>
using namespace std;

int main()
{
    int size_calificaciones = 10;
    int* calificaciones;
    calificaciones = new int[size_calificaciones];
    for(int i=0; i<size_calificaciones; i++)
    {
        *(calificaciones+i) = 100*i+1;
        //calificaciones[i] = 100;
        cout << *(calificaciones+i) << endl;
    }

    int* valor = new int;
    *valor = 200;
    cout << valor[0];


    delete [] calificaciones;

    delete valor;
    
    return 0;
}