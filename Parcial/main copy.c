#include <stdio.h>

int main()
{
    int N, i, resInf30 = 0;
    char encontrarVuelo;

    printf("Ingrese la cantidad de vuelos a registrar: ");
    scanf("%d", &N);

    char codigo[N][7];
    int cantPasajes[N];

    // 1

    for (i = 0; i < N; i++)
    {
        printf("Ingrese el codigo de vuelo: ");
        scanf("%6s", &codigo[i]);
        int j;
        for (j = 0; j < 6; j++)
        {
            if ((codigo[i][j] < 'A' || codigo[i][j] > 'Z') && (codigo[i][j] < '0' || codigo[i][j] > '9'))
            {
                printf("El codigo solo puede contener mayusculas y numeros\n");
                j--;
                scanf("%*s");
            }
        }
        printf("Ingrese el numero depasajes vendidos para el vuelo %6s: ", codigo[i]);
        scanf("%d", &cantPasajes[i]);
    }

    // 2

    printf("Codigo vuelo\tCantidad pasajeros\n");

    for (i = 0; i < N; i++)
    {
        if (cantPasajes[i] > 90)
        {
            printf("%s\t\t", &codigo[i]);
            printf("%d\n", cantPasajes[i]);
        }
    }

    // 3

    for (i = 0; i < N; i++)
    {
        if (cantPasajes[i] < 30)
        {
            resInf30++;
        }
    }

    printf("Cantidad de vuelos con pasajes menores a 30: %d\n", resInf30);

    // 4

    printf("Ingrese el codigo del vuelo que desea encontrar: ");
    scanf("%s", &encontrarVuelo);
    for (i = 0; i < N; i++)
    {
        if (codigo[i] == encontrarVuelo)
        {
            printf("Se encuentra\n");
        }
        else
        {
            printf("No se encuentra\n");
        }
    }
}