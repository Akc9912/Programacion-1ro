#include <stdio.h>

int main()
{
    int N, i, resInf30 = 0;
    char encontrarVuelo; //encontrarVuelo[7]

    printf("Ingrese la cantidad de vuelos a registrar: ");
    scanf("%d", &N);

    char codigo[N]; //codigo[N][7]
    int cantPasajes[N];

    // 1

    for (i = 0; i < N; i++)
    {
        printf("Ingrese el codigo de vuelo: ");
        scanf("%s", &codigo[i]); //%6s para limitar la entrada a 6 caracteres
        printf("Ingrese el numero depasajes vendidos para el vuelo %s: ", &codigo[i]);
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
            //printf("%s\t\t%d\n", codigo[i], cantPasajes[i]) y elimino '&'
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
    scanf("%s", &encontrarVuelo); //%6s
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
    /*for (i = 0; i < N; i++)
    {
        int j;
        for (j = 0; j < 6; j++) // Se compara solo los primeros 6 caracteres del código
        {
            if (codigo[i][j] != encontrarVuelo[j])
                break;
        }

        if (j == 6 && encontrarVuelo[j] == '\0') // Se verifica si se recorrieron los 6 caracteres y se llegó al final del código
        {
            printf("Se encuentra\n");
            break;
        }
    }

    if (i == N)
    {
        printf("No se encuentra\n");
    }*/
}