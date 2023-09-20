#include <stdio.h>

int main()
{
    float K = 3.5;
    int N, i, cont = 0;
    float V[N];

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%f", &V[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (V[i] == K)
        {
            cont++;
            if (cont > 0)
            {
                printf("%d\n", cont);
            }
        }
        else
        {
            printf("No esta\n");
        }
    }
}