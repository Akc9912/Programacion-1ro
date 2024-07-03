#include <stdio.h>
#include <stdlib.h>

void sumaFracciones(int n1, int d1, int n2, int d2);

int main()
{
    sumaFracciones(1, 2, 1, 2);
    return 0;
}
void sumaFracciones(int n1, int d1, int n2, int d2)
{
    int N, D;
    if (d1 != d2)
    {
        N = (n1 * d2) * (n2 * d1);
        D = d1 * d2;
        printf("La suma de %d/%d y %d/%d es: %d/%d", n1, d1, n2, d2, N, D);
    }
    else
    {
        N = n1 + n2;
        D = d1;

        printf("La suma de %d/%d y %d/%d es: %d/%d", n1, d1, n2, d2, N, D);
    }
}