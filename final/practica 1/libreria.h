#include <stdio.h>
#include <string.h>

#define MAX_LONGITUD_CIUDAD 15

// Obtener ciudad
void obtenerCiudad(char ciudad[])
{
    printf("Ingrese el nombre de una ciudad (max %d caracteres): ", MAX_LONGITUD_CIUDAD);
    fflush(stdin);
    fgets(ciudad, MAX_LONGITUD_CIUDAD + 1, stdin);

    // Eliminar el carácter de nueva línea al final del nombre
    size_t len = strlen(ciudad);
    if (len > 0 && ciudad[len - 1] == '\n')
    {
        ciudad[len - 1] = '\0';
    }
}

// Obtener temperatura
float obtenerTemperatura(char ciudad[])
{
    float temperatura;

    printf("Ingrese la temperatura para %s (min -10 max 50): ", ciudad);
    scanf("%f", &temperatura);

    if (temperatura < -10 || temperatura > 50)
    {
        printf("La temperatura ingresada no es válida.\n");
        return obtenerTemperatura(ciudad);
    }
    else
    {
        return temperatura;
    }
}

// Carga de los vectores
void cargarVectores(char ciudad[][MAX_LONGITUD_CIUDAD + 1], float temperatura[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        char auxCiudad[MAX_LONGITUD_CIUDAD + 1];
        obtenerCiudad(auxCiudad);

        if (strlen(auxCiudad) <= MAX_LONGITUD_CIUDAD)
        {
            strcpy(ciudad[i], auxCiudad);
            temperatura[i] = obtenerTemperatura(ciudad[i]);
        }
        else
        {
            printf("El nombre de la ciudad supera los %d caracteres.\n", MAX_LONGITUD_CIUDAD);
            i--;
        }
    }
}

void mostrarVectores(char ciudad[][MAX_LONGITUD_CIUDAD + 1], float temperatura[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\n%s: %.2f grados\n", ciudad[i], temperatura[i]);
    }
}

// Temperatura máxima
int tempMaximaIndice(float vecTemp[], int n)
{
    int indice = 0, i;
    float max = vecTemp[0];

    for (i = 1; i < n; i++)
    {
        if (vecTemp[i] > max)
        {
            max = vecTemp[i];
            indice = i;
        }
    }
    return indice;
}

void mostrarTempMax(char ciudad[][MAX_LONGITUD_CIUDAD + 1], float temperatura[], int n)
{
    printf("La temperatura más alta registrada fue de %.2f en %s\n", temperatura[tempMaximaIndice(temperatura, n)], ciudad[tempMaximaIndice(temperatura, n)]);
}

void cargarArchivo(char ciudad[][MAX_LONGITUD_CIUDAD + 1], float temperatura[], int n)
{
    int i;
    FILE *archivo;
    archivo = fopen("temperaturas.txt", "w");

    if (archivo != NULL)
    {
        for (i = 0; i < n; i++)
        {
            if (temperatura[i] <= 0)
            {
                fprintf(archivo, "%s\n", ciudad[i]);
            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\nNo se pudo abrir el archivo\n");
    }
}
