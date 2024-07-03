/*Defina una matriz de enteros y mediante funciones:
-Lea una matriz de F * C numeros enteros.
-Dada la matriz leida en el punto anterior , obtenga un vector de C elementos
con promedios de cada columna*/

#include <stdio.h>
#include <stdlib.h>
#define F 4
#define C 6

void cargarVec(int V[], int M[][C]);
void cargarMat(int M[][C]);
void leerMat(int M[][C]);

void main()
{
    int Mat[F][C];
    int Vec[C];
    cargarMat(Mat[F][C]);
    leerMat(Mat[F][C]);
    cargarVec(Vec[C], Mat[F][C]);
}
void cargarMat(int M[][C])
{
    int i, j;
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Ingrese el valor de F%d C%d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void leerMat(int M[][C])
{
    int i, j;
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
}
void cargarVec(int V[], int M[][C])
{
    int i, j;
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            V[j] += M[i][j];
        }
    }
}