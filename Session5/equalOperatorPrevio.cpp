#include<iostream>
using namespace std;

struct Prueba
{
    int value;
};

struct PruebaConPointer
{
    int* sharedValue;
};

int main()
{
    Prueba one;
    one.value = 10;
    Prueba two = one;   //se copian los valores (cada instancia tiene su propia copia de valores)

    cout << one.value;

    PruebaConPointer pp;
    pp.sharedValue = new int;
    *(pp.sharedValue) = 200;

    PruebaConPointer pp2 = pp;  // se copian la dirección que guarda el pointer, es decir las dos instancias apuntan al mismo lugar
    cout << "PruebaConPonter 2 " << *(pp2.sharedValue) << endl;
    cout << "PruebaConPonter 1 " << *(pp.sharedValue) << endl;
    
    //tons que pasa si modifico el valor de cualquiera de las 2 estructuras?
    *(pp.sharedValue) = 100;
    cout << "PruebaConPonter 2 " << *(pp2.sharedValue) << endl;
    cout << "PruebaConPonter 1 " << *(pp.sharedValue) << endl;
}