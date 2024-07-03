#include <stdio.h>

int main()
{
    int N, i, resInf30 = 0;
    char encontrarVuelo[7]; // Se ajusta el tamaño del array para almacenar el código del vuelo (6 caracteres + 1 para el carácter nulo)

    printf("Ingrese la cantidad de vuelos a registrar: ");
    scanf("%d", &N);

    char codigo[N][7]; // Se ajusta el tamaño del array para almacenar los códigos de vuelo (6 caracteres + 1 para el carácter nulo)
    int cantPasajes[N];

    for (i = 0; i < N; i++)
    {
        printf("Ingrese el codigo de vuelo: ");
        scanf("%6s", codigo[i]); // Se utiliza "%6s" para limitar la entrada a 6 caracteres (sin contar el carácter nulo)

        // Validación del código de vuelo
        int j;
        for (j = 0; j < 6; j++)
        {
            if ((codigo[i][j] < 'A' || codigo[i][j] > 'Z') && (codigo[i][j] < '0' || codigo[i][j] > '9')) // Verifica si el carácter no es una letra mayúscula o un número
            {
                printf("El codigo de vuelo solo puede contener numeros y letras mayusculas. Vuelva a ingresar el codigo de vuelo.\n");
                j = -1;       // Reinicia el contador para volver a solicitar el código de vuelo
                scanf("%*s"); // Descarta la entrada inválida
                continue;
            }
        }

        printf("Ingrese el numero de pasajes vendidos para el vuelo %s: ", codigo[i]);
        scanf("%d", &cantPasajes[i]);
    }

    printf("Codigo vuelo\tCantidad pasajeros\n");

    for (i = 0; i < N; i++)
    {
        if (cantPasajes[i] > 90)
        {
            printf("%s\t\t%d\n", codigo[i], cantPasajes[i]);
        }
    }

    for (i = 0; i < N; i++)
    {
        if (cantPasajes[i] < 30)
        {
            resInf30++;
        }
    }

    printf("Cantidad de vuelos con pasajes menores a 30: %d\n", resInf30);

    printf("Ingrese el codigo del vuelo que desea encontrar: ");
    scanf("%6s", encontrarVuelo);
    for (i = 0; i < N; i++)
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
    }
}
