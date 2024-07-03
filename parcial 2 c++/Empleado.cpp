#include "Empleado.h"

Empleado::Empleado(string nombreEmpleado, string apellidoEmpleado)
    : nombreEmpleado(nombreEmpleado), apellidoEmpleado(apellidoEmpleado) {}

string Empleado::getNombreEmpleado() const
{
    return nombreEmpleado;
}

string Empleado::getApellidoEmpleado() const
{
    return apellidoEmpleado;
}
