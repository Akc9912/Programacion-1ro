#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

#define MAX_CIUDADES 10

int main()
{
    int n;
    printf("Indique la cantidad de ciudades (máximo %d): ", MAX_CIUDADES);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_CIUDADES)
    {
        printf("La cantidad de ciudades ingresada no es válida.\n");
        return 1; // Salida con error
    }

    float temperatura[MAX_CIUDADES];
    char ciudad[MAX_CIUDADES][MAX_LONGITUD_CIUDAD + 1];

    cargarVectores(ciudad, temperatura, n);

    system("pause");
    system("cls");

    mostrarVectores(ciudad, temperatura, n);

    system("pause");
    system("cls");

    mostrarTempMax(ciudad, temperatura, n);

    system("pause");
    system("cls");

    cargarArchivo(ciudad, temperatura, n);

    return 0;
}
