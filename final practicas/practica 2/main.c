#include <stdio.h>
#include "libreria.h"

int contarLineas();
void cargarVector(t_reserva reservas[], int n);
void calcularTotFacturado(t_reserva reservas[], int n);
void generarListado(t_reserva reservas[], int n);

int main()
{
    int n = contarLineas();
    t_reserva reservas[n];

    cargarVector(reservas, n);

    calcularTotFacturado(reservas, n);

    generarListado(reservas, n);

    return 0;
}