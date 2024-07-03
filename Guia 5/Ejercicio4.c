#include <stdio.h>
int main()
{
    int F, C, i, j, H, P, K;
    int Z[F][C], Zmod[F][C];
    printf("Indique la cantidad de filas: ");
    scanf("%d", &F);
    printf("Indique el numero de columnas: ");
    scanf("%d", &C);
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Ingese el valor de la fila %d columna %d", i, j);
            scanf("%d", &Z[i][j]);
        }
    }

    printf("\nMatriz Z: \n");
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d", Z[i][j]);
        }
        printf("\n");
    }
    /*printf("\nMatriz Zmod: \n");
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d", Zmod[i][j]);
        }
        printf("\n");
    }*/
}