/* Dadas las componentes de un punto, determinar en que cuadrante corresponde
teniendo en cuenta que se pueden encontrar sobre los ejes o en el origen*/

#include <stdio.h>

int main()
{

    int x, y;

    printf("Ingrese coordenada de X: ");
    scanf("%d", &x);
    printf("Ingrese coordenada de Y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("El punto no pertenece a ningun cuadrante");
    }
    else if (x >= 0 && y >= 0)
    {
        printf("El punto pertenece al cuadrante I");
    }
    else if (x < 0 && y >= 0)
    {
        printf("El punto pertenece al cuadrante II");
    }
    else if (x < 0 && y < 0)
    {
        printf("El punto pertenece al cuadrante III");
    }
    else if (x >= 0 && y < 0)
    {
        printf("El punto pertenece al cuadrante IV");
    }
}