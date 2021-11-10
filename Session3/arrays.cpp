#include<iostream>
using namespace std;

int main()
{
    int* arregloEnteros;                //declaración del arreglo
    int size = 10;                      // Guarda en una variable el tamaño del arreglo
    arregloEnteros = new int[size];     // reserva de memoria para el arreglo


    arregloEnteros[0] = 22;
    arregloEnteros[1] = 32;
    arregloEnteros[2] = 65;

    *(arregloEnteros+3) = 1;
    *(arregloEnteros+4) = 78;
    *(arregloEnteros+5) = 97;


    delete [] arregloEnteros;

    return 0;
}