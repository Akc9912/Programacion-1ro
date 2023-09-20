#include <stdio.h>

int main()
{
    float A, B, numero, suma = 0;
    int contador = 0;

    printf("Ingrese el valor de A: ");
    scanf("%f", &A);

    printf("Ingrese el valor de B: ");
    scanf("%f", &B);

    printf("Ingrese los numeros decimales (0 para finalizar):\n");
    scanf("%f", &numero);

    while (numero != 0)
    {
        if (numero > A && numero < B)
        {
            suma += numero;
            contador++;
        }
        scanf("%f", &numero);
    }

    if (contador > 0)
    {
        float promedio = suma / contador;
        printf("El promedio de los numeros entre %.2f y %.2f es: %.2f\n", A, B, promedio);
    }
    else
    {
        printf("No se encontraron numeros entre %.2f y %.2f\n", A, B);
    }

    return 0;
}
