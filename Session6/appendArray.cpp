#include<iostream>
#include<string>
using namespace std;

struct Persona
{
    string nombre = "default";
    string correo;
    int presupuesto;
};

void append(Persona* lista, int* size)
{
    Persona* copiaLista = new Persona[*size+1];
    for(int i=0; i<*size; i++)
    {
        copiaLista[i] = lista[i];
    }
    delete [] lista;
    lista = copiaLista;
}

int main()
{
    int sizeLista = 3;
    Persona* lista = new Persona[sizeLista]; //crea una lista de 3 personas 3 objetos de tipo persona están en la memoria

    cout << endl << "nombre" << lista[0].nombre << endl;

    append(lista, &sizeLista);
    
    cout << "nombre" << lista[0].nombre << endl;
}

