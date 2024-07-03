#include <stdio.h>
#include <time.h>
int main()
{
    int K, N, i, j, H;
    float C;
    float M[K][N];
    srand(time(NULL));
    printf("Indique la cantidad de filas: ");
    scanf("%d", &K);
    printf("Indique la cantidad de columnas: ");
    scanf("%d", &N);
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            M[i][j] = rand() % 99 + 1;
        }
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%.2f]", M[i][j]);
        }
        printf("\n");
    }
    system("pause");
    M[1][2] = -1.5;
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%.2f]", M[i][j]);
        }
        printf("\n");
    }
    system("pause");
    for (i = 0, j = 3; i < N; i++)
    {
        M[j][i] = 0;
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%.2f]", M[i][j]);
        }
        printf("\n");
    }
    system("pause");
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            M[i][j] = C;
        }
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%.2f]", M[i][j]);
        }
        printf("\n");
    }
    system("pause");
    printf("Ingrese el valor de H: ");
    scanf("%d", &H);

    for (i = 0, j = H; i < N; i++)
    {
        M[i][j] = 25;
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("[%.2f]", M[i][j]);
        }
        printf("\n");
    }
}