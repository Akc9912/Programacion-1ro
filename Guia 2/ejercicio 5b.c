// Ingresar tres valores decimales, calcular e imprimir el minimo

#include <stdio.h>

int main()
{

    float val1, val2, val3;

    printf("Ingrese el primer valor decimal: ");
    scanf("%f", &val1);
    printf("Ingrese el segundo valor decimal: ");
    scanf("%f", &val2);
    printf("Ingrese el tercer valor decimal: ");
    scanf("%f", &val3);

    if (val1 < val2 && val1 < val3)
    {
        printf("%f es el valor decimal mas bajo", val1);
    }
    else if (val2 < val1 && val2 < val3)
    {
        printf("%f es el valor decimal mas bajo", val2);
    }
    else
    {
        printf("%f es el valor decimal mas bajo", val3);
    }
}