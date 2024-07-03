#include <stdio.h>

int main()
{
    int x, y, N, sumador;

    printf("Ingrese la base: ");
    scanf("%d", &x);
    printf("Ingrese el exponencial: ");
    scanf("%d", &y);

    N = y;
    sumador = 1;

    while (N > 0)
    {
        sumador *= x;
        N--;
    }

    printf("El resultado de %d elevado a %d es: %d", x, y, sumador);
}