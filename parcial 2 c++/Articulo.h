#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>
using namespace std;

class Articulo {
private:
    string nombreArticulo;
    int precio;

public:
    Articulo() = default;
    Articulo(string nombreArticulo, int precio);

    string getNombreArticulo() const;
    int getPrecio() const;
};

#endif // ARTICULO_H
