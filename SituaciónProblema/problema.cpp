#include<iostream>
#include<string>
using namespace std;

class Desinfectante
{
private:
    string nombre;
    string marca;
    double precio;
public: 
    Desinfectante(){}
    Desinfectante(string marcaP, double precioP);
};


Desinfectante::Desinfectante(string marcaP, double precioP)
{
        nombre = "desinfectante";
        marca = marcaP;
        precio = precioP;
}

class Tienda
{
private:
    int minStock;
    int contadorDesinfectantesEnStock;
    Desinfectante** listaDesinfectantes;
    Tienda();
public:
    Tienda(int minStockP);
    void listarProductos();
    void agregarDesinfectante(Desinfectante* d);
};

void Tienda::agregarDesinfectante(Desinfectante* d)
{
    listaDesinfectantes[contadorDesinfectantesEnStock] = d;
    contadorDesinfectantesEnStock++;
}

Tienda::Tienda(){}
Tienda::Tienda(int minStockP)
{
    minStock = minStockP;
    contadorDesinfectantesEnStock = 0;
}

int main()
{
    Tienda tiendita;
    Desinfectante prod1("dove", 100);
    tiendita.agregarDesinfectante(&prod1);
}