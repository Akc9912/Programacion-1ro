#include <stdio.h>
#include <stdlib.h>

void AA(int h, int i, int *k, int *m);

void main()
{
    int a, b, c, d;
    printf("Escriba un numero entero\n");
    scanf("%d", &a);
    printf("Escriba otro numero entero\n");
    scanf("%d", &b);
    AA(a, b, &c, &d);
    printf("La potencia de %d elevado a %d es %d\n", a, b, c);
    printf("El resto del cosciente entre %d y %d es %d\n", a, b, d);
    system("pause");
}

void AA(int h, int i, int *k, int *m)
{
    int y;
    *k = 1;
    for (y = 0; y < i; y++)
    {
        *k = *k * h;
    }
    *m = h % i;
}

/*
¿Como modifico AA para que las siguientes sentencias sean correctas para calcular la potencia
y el resto?
c=AA(a,b);
m=AA(a,b);

¿Como devuelvo los resultado devueltos por AA sin utilizar las variables c y m?
*/