#include <stdio.h>

int main()
{
    int A, B, D, M;

    printf("\nIngrese dividendo y divisor\n");
    scanf("%d%d", &A, &B);

    M = A;
    D = 0;

    do
    {
        M = M - B;
        D++;
    } while (M >= B);

    printf("La division de %d por %d es: %d y el resto es: %d", A, B, D, M);
}