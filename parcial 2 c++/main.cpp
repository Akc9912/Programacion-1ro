#include "Cliente.h"
#include "Empleado.h"
#include "Articulo.h"
#include "Orden.h"

int main()
{
    Cliente *cliente1 = new Cliente("Tihara", "Martinez", 1);
    Cliente *cliente2 = new Cliente("Claudia", "Ortiz", 2);
    Cliente *cliente3 = new Cliente("Cristian", "Martinez", 3);
    Empleado *empleado = new Empleado("Jose", "Oemig");

    Articulo articulos[] = {Articulo("Labial", 600), Articulo("Vestido", 12000), Articulo("Zapatos", 6000)};

    Cliente lista[3] = {Cliente("Tihara", "Martinez", 1), Cliente("Claudia", "Ortiz", 2), Cliente("Cristian", "Martinez", 3)};

    Orden orden1(cliente1, empleado, articulos, 3);
    orden1.infoInicial(lista, 3);
    orden1.cargarPedido();

    Orden orden2(cliente2, empleado, articulos, 3);
    orden2.cargarPedido();

    Orden orden3(cliente3, empleado, articulos, 3);
    orden3.cargarPedido();

    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete empleado;

    return 0;
}
