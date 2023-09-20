#include <stdio.h>

int main()
{
    int N, i;

    printf("Ingrese la cantidad de numeros pares que desea imprimir: ");
    scanf("%d", &N);

    printf("Los primeros %d numeros pares son:\n", N);

    for (i = 1; i <= N; i++)
    {
        int numPar = 2 * i;
        printf("%d\n", numPar);
    }
}
