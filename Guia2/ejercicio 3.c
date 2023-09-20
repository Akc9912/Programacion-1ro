// Escribir un programa que permita evaluar la siguiente funcion definida por tramos
// para un valor de x ingresado por teclado
//  5x+2 si x <= 3
//  4x-5 si x > 3

#include <stdio.h>

int main()
{

    int funcion, x;

    printf("Ingrese el valor de X: ");
    scanf("%d", &x);

    if (x > 3)
    {
        funcion = (4 * x) - 5;
    }
    else if (x <= 3)
    {
        funcion = (5 * x) + 2;
    }

    printf("Cuando el valor de X es %d, el valor de Y es %d", x, funcion);
}