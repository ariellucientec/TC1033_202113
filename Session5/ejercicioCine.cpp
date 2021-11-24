#include<iostream>
#include<string>
using namespace std;

struct Persona
{
    string nombre = "default";
    string correo;
    int presupuesto;
};

struct Fecha
{
    int dia;
    string mes;
    int anio;
};

struct Boleto
{
    string tipo;
    int precio;
    Fecha fechaCompra;
};

struct Cliente
{
    Persona* persona;
    Boleto boleto;
};


void venderBoletos(Cliente** lista, int size, int* numVendidos, Persona* p, string tipo, int precio)
{
    if(*numVendidos >= 10)
    {
        cout << "ya no hay boletos" << endl;
    }
    else
    {
        if (p->presupuesto >= precio)
        {
            Fecha fechaCompra;
            fechaCompra.dia = 17;
            fechaCompra.mes = "nov";
            fechaCompra.anio = 2021;
            
            Boleto b;
            b.tipo = tipo;
            b.precio = precio;
            b.fechaCompra = fechaCompra;

            Cliente* c = new Cliente;
            c->persona = p;
            c->boleto = b;

            p->presupuesto -= precio;

            lista[(*numVendidos)++] = c;
        }
        else
        {
            cout << "sorry no te alcanza" << endl;
        }
    }
}

void imprimerClientesAtendidos(Cliente** lista, int size, int registrados)
{
    for(int i=0; i<registrados; i++)
    {
        cout << "cliente: " << lista[i]->persona->nombre << endl;
        cout << "su presupuesto restante es: " << lista[i]->persona->presupuesto;
    }
}

int main()
{
    Persona juanito;
    juanito.nombre = "Juanito";
    juanito.correo = "juanito@tec.mx";
    juanito.presupuesto = 1000;

    Persona pedrito;
    juanito.nombre = "Pedrito";
    juanito.correo = "pedrito@tec.mx";
    juanito.presupuesto = 1000;

    int size = 10;
    int clientesRegistrados = 0;
    Cliente ** listaClientes = new Cliente*[size];

    venderBoletos(listaClientes, size, &clientesRegistrados, &juanito, "VIP", 200);
    venderBoletos(listaClientes, size, &clientesRegistrados, &pedrito, "VIP", 200);

    imprimerClientesAtendidos(listaClientes, size, clientesRegistrados);

    for(int i=0; i<clientesRegistrados;i++)
    {
        delete listaClientes[i];
    }
    delete [] listaClientes;
}