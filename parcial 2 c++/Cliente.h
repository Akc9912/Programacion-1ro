#include <string>
#ifndef CLIENTE_H
#define CLIENTE_H
using namespace std;

class Cliente
{
private:
    string nombre, apellido;
    int NumeroPedido;

public:
    Cliente() = default;
    Cliente(string nombre, string apellido, int NumeroPedido);

    string getNombre() const;
    string getApellido() const;
    int getNumeroPedido() const;
};

#endif // CLIENTE_H
