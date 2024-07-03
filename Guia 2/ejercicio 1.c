// Escribir un programa C que determine su un numero natural es par o impar
// Suponer que el valor ingresado es entero y positivo

#include <stdio.h>

int main()
{

    int numero, condicion;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    condicion = numero % 2;

    if (condicion == 0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }
}