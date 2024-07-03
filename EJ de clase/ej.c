#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, F = 5, C = 7;
    char dias[][20] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    char ciudades[][20] = {"Mar del Plata", "Batan", "Tandil", "Santa Clara", "Mar Chiquita"};
    float tabla[F][C];
    float maxSemana = 0, acum, maxDia;
    srand(time(NULL));

    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            // printf("Ingese la cantidad de lluvia de la ciudad de %s del dia %s:\n", ciudades[i], dias[j]);
            //  scanf("%f", &tabla[i][j]);
            tabla[i][j] = rand() % 10 + 1;
        }
    }

    system("pause");

    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("[%.2f]", tabla[i][j]);
        }
        printf("\n");
    }

    system("pause");

    for (i = 0; i < F; i++)
    {
        for (acum = 0, j = 0; j < C; j++)
        {
            acum += tabla[i][j];
        }
        if (acum > maxSemana)
        {
            maxSemana = acum;
        }
    }

    for (i = 0; i < F; i++)
    {
        for (acum = 0, j = 0; j < C; j++)
        {
            acum += tabla[i][j];
            if (acum == maxSemana)
            {
                printf("El la ciudad que mas llovio fue en: %s\n", ciudades[i]);
                if (tabla[i][j] > maxDia)
                {
                    maxDia = tabla[i][j];
                    printf("Y el dia que mas llovio fue el %s, con %.2f milimetros.", dias[j], tabla[i][j]);
                }
            }
        }
    }
}