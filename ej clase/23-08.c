#include <stdio.h>
#include <stdlib.h>
#define F 3
#define C 4
// Poner prototipos
void cargar(float Mat[][C]);
void mostrar(float Mat[][C]);
float sumar(float Mat[][C]);

void main()
{
    float A1[C][F], A2[C][F], acum;

    cargar(A1);
    cargar(A2);
    mostrar(A1);
    mostrar(A2);
    acum = sumar(A1);
    printf("Total de A1 es: %d\n", acum);
    printf("Total de A2 es: %g\n", simar(A2));
}

void cargar(float Mat[][C])
{
    int i, j;

    printf("Carguemos un array de %d filas y %d columnas\n", F, C);
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Fila n°%d\n", j + 1);
            scanf("%g", &Mat[i][j]);
        }
    }
}
void mostrar(float Mat[][C])
{
    int i, j;

    printf("FORMATO MATRICIAL");
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("[%g]");
        }
        printf("\n");
    }
}
float sumar(float Mat[][C])
{
    int i, j;
    float aux;

    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            aux += Mat[i][j];
        }
    }
    return aux;
}