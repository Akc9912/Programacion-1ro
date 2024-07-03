#ifndef ORDEN_H
#define ORDEN_H

#include "Cliente.h"
#include "Empleado.h"
#include "Articulo.h"
#include <iostream>

class Orden {
private:
    Cliente* cliente;
    Empleado* empleado;
    Articulo* articulos;
    int numArticulos;

public:
    Orden(Cliente* c, Empleado* e, const Articulo arts[], int numArts);
    ~Orden();

    void infoInicial(const Cliente lista[], int numClientes);
    void cargarPedido();
};

#endif // ORDEN_H
