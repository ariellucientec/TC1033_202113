#include<iostream>
#include<string>
using namespace std;

struct Fecha
{
    int dia;
    string mes;
    int anio;
};

struct Boleto
{
    string tipo;
    int price;
    Fecha fechaCompra;
};

struct Persona
{
    string nombre;
    string correo;
    int presupuesto;
};

struct Cliente
{
    Persona* persona;
    Boleto boleto;
};

void comprarBoleto(Cliente** listaClientes, int sizeLista, int* clientesRegistrados, Persona* persona, string tipo, int price)
{
    if(*clientesRegistrados >= sizeLista)
    {
        cout << "sorry, se terminaron los boletos";
        return;
    }
    else
    {
        if (persona->presupuesto > price)
        {
            Cliente* c = new Cliente;
            Boleto b;
            b.tipo = tipo;
            b.price = price;
            Fecha hoy;
            hoy.dia = 17;
            hoy.mes = 11;
            hoy.anio = 2021;
            b.fechaCompra = hoy;
            c->boleto = b;
            c->persona = persona;
            persona->presupuesto -= price;
            listaClientes[(*clientesRegistrados)++] = c;
        }
        else
        {
            cout << "sorry, no te alcanza";
        }
    }
}

void printClientesRegistrados(Cliente** listaClientes, int sizeLista, int clientesRegistrados)
{
    for(int i=0; i< clientesRegistrados; i++)
    {
        cout << listaClientes[i]->persona->nombre << endl;
        cout << "cantidad gastada" << listaClientes[i]->persona->presupuesto;
    }
}

int main()
{
    int size = 10;
    int registrados = 0;
    Cliente** listaClientes = new Cliente*[size];

    Persona pedrito;
    pedrito.nombre = "Pedrito";
    pedrito.correo = "pedrito@tec.mx";
    pedrito.presupuesto = 1000;

    comprarBoleto(listaClientes, size, &registrados, &pedrito, "VIP", 200);

    printClientesRegistrados(listaClientes, size, registrados);

    for(int i=0; i < registrados;i++)
    {
        delete listaClientes[i];
    }
    delete [] listaClientes;
}