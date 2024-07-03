/*Escribir un programa que sume los N primeros numeros impares*/

#include <stdio.h>

int main()
{
    int N, suma = 0, numero = 1, acumulador = 0;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    while (acumulador < N)
    {
        suma += numero;
        numero += 2;
        acumulador++;
    }

    printf("La suma de los primeros %d numeros impares es: %d\n", N, suma);

    return 0;
}
