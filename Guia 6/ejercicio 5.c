#include <stdio.h>
#include <stdlib.h>
#define C 4

void main()
{
    int A, B;
    scanf("%d", &A);
    saludo(A);
    suma(A, &B);
    printf("\nEl resultado es: %d", B);
    lio(&A);
    printf("\n Valor de A = %d", A);
}

void saludo(int k)
{
    printf("OPERAMOS CON:\n", k);
    printf("*************\n");
}

void suma(int x, int *res)
{
    res = 0;
    while (x > 0)
    {
        *res += x;
        x--;
    }
}

void lio(int *G)
{
    int U;
    printf("Valor?\n");
    scanf("%d", &U);
    *G += U;
}