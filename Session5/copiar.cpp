#include<iostream>
#include<string>
using namespace std;

struct Persona
{
    string nombre;
};

int main()
{
    Persona pepito;
    pepito.nombre = "Pepito";

    Persona Juanito = pepito;
}