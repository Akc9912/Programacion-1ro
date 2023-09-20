#include <stdio.h>
#include <stdlib.h>

float potencia(float x, int w);

int main()
{
    float base, pot;
    int exp;
    printf("ingrese la base: ");
    scanf("%f", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exp);
    pot = potencia(base, exp);
}

float potencia(float x, int w)
{
    int i;
    float pot = 1;
    for (i = 0; i < w; i++)
    {
        pot *= x;
    }
    return pot;
}