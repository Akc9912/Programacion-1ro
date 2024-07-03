#include <stdio.h>

int main()
{
    int suma = 0, conta = 0, dato;

    while (conta < 5)
    {
        scanf("%d", &dato);
        suma += dato;
        conta++;
    }

    printf("La suma de 5 enteros es: %d", suma);
}