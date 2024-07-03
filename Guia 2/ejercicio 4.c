#include <stdio.h>

int main()
{

    int x;
    float funcion;

    printf("infrese el valor de X: ");
    scanf("%d", &x);

    if (x = (-1))
    {
        funcion = (-x - 1);
    }
    else if (x >= 1)
    {
        funcion = x - 1;
    }
    else
    {
        funcion = 1 - sqrt(x);
    }

    printf("f(%d)=%g", x, funcion);
}