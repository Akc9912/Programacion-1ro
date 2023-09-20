#include <stdio.h>

int main()
{

    int Z;

    printf("Ingrese un numero: ");
    scanf("%d", &Z);

    if (Z == 1 || Z == 0)
    {
        printf("El numero %d no es primo", Z);
    }
    else if (Z % 2 != 0 && Z % 3 != 0)
    {
        printf("El numero %d es primo", Z);
    }
    else
    {
        printf("El numero %d no es primo", Z);
    }
}