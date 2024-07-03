// Escribir un programa que lea dos variables X e Y, y a continuacion obtenga los
// valores de X/Y y X%

#include <stdio.h>

int main()
{

    int x, y, division, modulo;

    printf("Ingrese el primer valor: ");
    scanf("%d", &x);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &y);

    division = x / y;
    modulo = x % y;

    printf("%d\n", division);
    printf("%d", modulo);
}