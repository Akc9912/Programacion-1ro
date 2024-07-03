#include "Orden.h"

Orden::Orden(Cliente* c, Empleado* e, const Articulo arts[], int numArts) 
    : cliente(c), empleado(e), numArticulos(numArts) {
    articulos = new Articulo[numArts];
    for (int i = 0; i < numArticulos; ++i) {
        articulos[i] = arts[i];
    }
}

Orden::~Orden() {
    delete[] articulos;
}

void Orden::infoInicial(const Cliente lista[], int numClientes) {
    cout << "Empleado: " << empleado->getNombreEmpleado() << " " << empleado->getApellidoEmpleado() << endl;
    cout << "-------------------" << endl;
    cout << "Lista de Artículos: " << endl;

    for (int i = 0; i < numArticulos; i++) {
        cout << "Nombre: " << articulos[i].getNombreArticulo() << " Precio: " << articulos[i].getPrecio() << endl;
    }

    cout << "-------------------" << endl;
    cout << "Lista de Clientes: " << endl;

    for (int i = 0; i < numClientes; i++) {
        cout << "Nombre: " << lista[i].getNombre() << " Apellido: " << lista[i].getApellido() << endl;
    }

    cout << "---------------------" << endl;
}

void Orden::cargarPedido() {
    int indiceCliente = cliente->getNumeroPedido() - 1;
    cout << "Cliente: " << cliente->getNombre() << " " << cliente->getApellido() << endl;
    cout << "Número de Pedido: " << cliente->getNumeroPedido() << endl;
    cout << "Artículo: " << articulos[indiceCliente].getNombreArticulo() << ", Precio: " << articulos[indiceCliente].getPrecio() << endl;
    cout << "---------------------" << endl;
}
