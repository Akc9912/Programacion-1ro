#include <stdio.h>

int main()
{
    int N, NB=0, NC=0, i, j = 0, opcion, par = 0, impar = 0;
    float K;
    float A[N], B[NB], C[NC];

    printf("Indique la longitud del vector A: ");
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%f",&N);
    }
    

    printf("1-Crear arreglo B\n");
    printf("2-Crear arreglos B y C\n");
    printf("3-Sumar negativos y multiplicar positivos\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("Ingrese el valor de K: ");
        scanf("%f", &K);
        for (i = 0; i < N; i++)
        {
            if (A[i] != K)
            {
                NB++;
            }
        }

        for (i = 0; i < N; i++)
        {
            if (A[i] != K)
            {
                B[j] = A[i];
                j++;
            }
        }
        break;
    case 2:
        for (i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }

        break;
    case 3:
        /* code */
        break;

    default:
        break;
    }
    for (i = 0; i < N; i++)
    {
        if (A[i] != K)
        {
            B[j] = A[i];
            j++;
        }
    }
}