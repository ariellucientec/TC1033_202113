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
    Desinfectante();
    Desinfectante(string marcaP, double precioP);

public:
    string getNombre();
    string getMarca();
    double getPrecio();
    void imprimirDesinfectante();
};

Desinfectante::Desinfectante(){}
Desinfectante::Desinfectante(string marcaP, double precioP)
{
    //Aquí coloca la inicialización de los atributos (asigna valores)
}
string Desinfectante::getNombre()
{
    //Pon el código
}
string Desinfectante::getMarca()
{
    //Pon el código
}
double Desinfectante::getPrecio()
{
    //Pon el código
}
void Desinfectante::imprimirDesinfectante()
{
    //Pon el código para que imprima los detalles del producto
}

class Cliente
{
private:
    string nombreCompleto;
    int idCliente;
    int maxSizeLista;
    int contProductosComprados;
    string* listaNombresProductosComprados;
    double totalGastado;
    Cliente();
public:
    Cliente(string nombreCompletoP, int idClienteP);
    string getNombreCompleto();
    int getIdCliente();
    double getTotalGastado();
    void incrementarTotalGastado(double cantidadGastada);
    void agregarProductoComprado(string nombreProducto);
};

Cliente::Cliente(){}
Cliente::Cliente(string nombreCompletoP, int idClienteP)
{
    nombreCompleto = nombreCompletoP;
    idCliente = idClienteP;
    maxSizeLista = 5;               //tamaño máximo de la lista de productos comprados
    contProductosComprados = 0;     //se inicia en cero pq no se ha comprado nada en este punto
    listaNombresProductosComprados = new string[maxSizeLista]; //Se inicializa la lista con un máximo de 5 productos comprados (sus nombres)
}
void Cliente::agregarProductoComprado(string nombreProducto)
{
    //agrega el nombre del producto comprado a la lista en la posición correspondiente (contarProductos comprados)
}
void Cliente::incrementarTotalGastado(double cantidadGastada)
{
    // Pon el código para actualizar el total gastado
}
string Cliente::getNombreCompleto()
{
    //pon el código
}

class Tienda
{
private:
    int minStock;
    int contadorDesinfectantesEnStock;
    Desinfectante** listaDesinfectantes;
    Cliente** listaClientes;
    int contClientesAgregados;
    int maxSizeListaClientes;
    Tienda();
public:
    Tienda(int minStockP);
    void listarProductos();
    void agregarDesinfectante(Desinfectante* d);
    int getMinStock();
    int getContadorDesinfectanteEnStock();
    void venderDesinfectante(Cliente* cliente);
};
Tienda::Tienda(){}
Tienda::Tienda(int minStockP)
{
    minStock = minStockP;
    contadorDesinfectantesEnStock = 0;
    listaDesinfectantes = new Desinfectante*[minStock];  //inicializa la lista de Desinfectantes (debes hacer una lista por cada producto)
    maxSizeListaClientes = 5;       //tamaño máximo de la lista de desinfectantes
    contClientesAgregados = 0;      //número de clientes agregados a la lista de clientes
    listaClientes = new Cliente*[maxSizeListaClientes]; // inicializa la lista de direcciones de clientes con el tamaño máximo
}
void Tienda::agregarDesinfectante(Desinfectante* d)  //permite agregar un producto en su lista correspondiente
{
    //agrega el código correspondiente
}
int Tienda::getMinStock(){
    //pon el código
}
int Tienda::getContadorDesinfectanteEnStock(){
    //pon el código
}
void Tienda::listarProductos()
{
    //imprimimos los detalles de cada producto (usamos el primero de cada lista)
    listaDesinfectantes[0]->imprimirDesinfectante();
    cout << "Total de Desinfectantes en Stock: " << contadorDesinfectantesEnStock << endl;

    //aquí sigues imprimiendo cada una de los productos que tengas
}

void Tienda::venderDesinfectante(Cliente* cliente)
{
    cout << "hola " << cliente->getNombreCompleto();
    cout << " pagarás " << listaDesinfectantes[0]->getPrecio() << " en tu desodorante" << endl;  //se obtiene el precio de un producto y se imprime
    cliente->agregarProductoComprado(listaDesinfectantes[contadorDesinfectantesEnStock-1]->getNombre());  //Se agrega al Cliente la info de lo que compró
    cliente->incrementarTotalGastado(listaDesinfectantes[contadorDesinfectantesEnStock-1]->getPrecio());  //Se agrega al Cliente la info de lo que compró
    contadorDesinfectantesEnStock--;    // se reduce el stock del producto vendido
}

int main()
{
    Desinfectante desinfectante1("dove", 100);      //Se crean instancias
    Desinfectante desinfectante2("clorox", 200);    //Se crean instancias

    Tienda tiendita(5);
    tiendita.agregarDesinfectante(&desinfectante1);     //se agregan productos a la tienda
    tiendita.agregarDesinfectante(&desinfectante2);     //se agregan productos a la tienda
    tiendita.listarProductos();

    Cliente pedrito("Pedrito F", 1);
    tiendita.venderDesinfectante(&pedrito);             //Se vende un producto a un cliente
    tiendita.listarProductos();
}

