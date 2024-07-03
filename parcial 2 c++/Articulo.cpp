#include "Articulo.h"

Articulo::Articulo(string nombreArticulo, int precio) 
    : nombreArticulo(nombreArticulo), precio(precio) {}

string Articulo::getNombreArticulo() const {
    return nombreArticulo;
}

int Articulo::getPrecio() const {
    return precio;
}
