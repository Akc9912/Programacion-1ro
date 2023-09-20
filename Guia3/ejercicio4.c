#include <stdio.h>

int main()
{
    int A, B, D, M;

    printf("Ingrese Dividendo y divisor: ");
    scanf("%d%d", &A, &B);

    M = A;
    D = 0;

    while (M >= B)
    {
        M -= B;
        D++;
    }

    printf("%d dividido %d es: %d y su resto es %d", A, B, D, M);
}