#include <stdio.h>

int main()
{
    int N, K, suma, resultado, rep;

    printf("Ingrese un numero: ");
    scanf("%d", &K);
    printf("Ingrese la cantidad de repeticiones: ");
    scanf("%d", &N);

    rep = N;

    while (rep > 0)
    {

        suma = K * rep;
        resultado += suma;
        rep--;
    }

    printf("La suma de los  %d primeros multiplos de %d es: %d", N, K, resultado);
}