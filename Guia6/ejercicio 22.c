#include <stdio.h>
#include <stdlib.h>

void main()
{
}
int contador(int v[], int h, int nro)
{
    int i, cont = 0;
    for (i = 0; i < h; i++)
    {
        if (v[i] == nro)
        {
            ++cont;
        }
    }
    return cont;
}
int masRepetido(int v[], int h)
{
    int i, aux, mayor = 0;
    for (i = 0; i < h; i++)
    {
        aux = contador(v, h, v[i]);
        if (aux > mayor)
        {
            mayor = aux;
        }
    }
    return mayor;
}
int leerVector(int v[])
{
    int i, N;
    printf("Cuales nros lee?\n");
    scanf();
}