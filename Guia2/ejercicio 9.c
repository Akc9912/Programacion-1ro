#include <stdio.h>

int main()
{
    int m, x = 2, y = 3, z = 4;

    printf("Ingrese el valor de M: ");
    scanf("%d", &m);

    switch (m)
    {
    case 2:
        printf("El valor de %d es igual al de %d", m, x);
        break;
    case 3:
        printf("El valor de %d es igual al de %d", m, y);
        break;
    case 4:
        printf("El valor de %d es igual al de %d", m, x);

    default:
        printf("El valor de %d no coincide con ninguno de los ingresados", m);
        break;
    }
}