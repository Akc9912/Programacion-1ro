#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado
{
private:
    string nombreEmpleado, apellidoEmpleado;

public:
    Empleado() = default;
    Empleado(string nombreEmpleado, string apellidoEmpleado);

    string getNombreEmpleado() const;
    string getApellidoEmpleado() const;
};

#endif // EMPLEADO_H
