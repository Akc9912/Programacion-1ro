#include "Cliente.h"

Cliente::Cliente(string nombre, string apellido, int NumeroPedido)
    : nombre(nombre), apellido(apellido), NumeroPedido(NumeroPedido) {}

string Cliente::getNombre() const
{
    return nombre;
}

string Cliente::getApellido() const
{
    return apellido;
}

int Cliente::getNumeroPedido() const
{
    return NumeroPedido;
}
