#include<iostream>
#include<string>
using namespace std;

struct Contacto
{
    string nombre;
    string mail;
};

void agregarContacto(Contacto* contacto, Contacto* lista, int* posicion)
{
    lista[*posicion] = *contacto;
    (*posicion)++;
}

int main()
{
    Contacto* listaDeContactos;
    int size_contactos = 100;
    int numero_elementos_agregados = 0;
    listaDeContactos = new Contacto[size_contactos];

    Contacto pedrito;
    pedrito.nombre = "Pedrito";
    pedrito.mail = "pedrito@tec.mx";

    agregarContacto(&pedrito, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&pedrito, listaDeContactos, &numero_elementos_agregados);
    agregarContacto(&pedrito, listaDeContactos, &numero_elementos_agregados);

    cout << numero_elementos_agregados;

}