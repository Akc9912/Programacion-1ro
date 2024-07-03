/*Calcular promedio de N numeros*/

#include <stdio.h>

int main()
{
    int N, K;
    float promedio, numero, suma;

    printf("ingrese la cantidad de numeros a promediar: ");
    scanf("%d", &N);

    K = N;

    while (K > 0)
    {
        scanf("%f", &numero);
        suma += numero;
        K--;
    }

    promedio = (suma / N);

    printf("El promedio es de: %.2f", promedio);
}