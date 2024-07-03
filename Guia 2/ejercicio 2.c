#include <stdio.h>

int main()
{

    int a, b;

    printf("\nIingrese un numero estero\n");
    scanf("%d", &a);
    printf("\nIngrese otro numero entero\n");
    scanf("%d", &b);
    printf("\n");

    if (a > b)
    {
        printf("%d es mayor que %d", a, b);
    }
    else if (a < b)
    {
        printf("%d es mayor que %d", b, a);
    }
    else
    {
        printf("%d es igual a %d", a, b);
    }

    printf("\n");
    system("pause");

    // A- el programa compara dos numeros y devuelve cual es mayor que el otro o si son iguales
    // B- el programa del ejercicio 1 indica si el numero es par o impar
    // C- el programa tomaria su valor entero y/o el valor del codigo ascii
    // D-

    if (a == b)
    {
        printf("%d es igual a %d", a, b);
    }
    else if (a != b)
    {
        printf("%d es distinto de %d", a, b);
    }
}
