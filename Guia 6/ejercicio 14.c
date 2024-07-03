#include <stdio.h>
#include <stdlib.h>

int multiplicacion(int a, int b);

int main()
{
    printf("el resultado de la multiplicacion es: %d", multiplicacion(3, 5));
}

int multiplicacion(int a, int b)
{
    int aux = 0, i;
    for (i = 0; i < b; i++)
    {
        aux += a;
    }
    return aux;
}