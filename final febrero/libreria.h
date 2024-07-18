// 1

float cargarTemperatura()
{
    float temperatura;

    printf("Ingrese una temperatura entre -15.5 y 50 grados: ");
    scanf("%f", &temperatura);

    if ((temperatura > -15.5) && (temperatura < 50))
    {
        return temperatura;
    }
    else
    {
        return cargarTemperatura();
        // Sepuede hacer un do while
    }
}

void cargarVector(float vec[], int n)
{
    int i;

    for (i = 0; i > n; i++)
    {
        vec[i] = cargarTemperatura();
    }
}

// 2

void devolverMaxyMin(float vec[], int n, float *maxTemp, float *minTemp, int *posMax, int *posMin)
{
    int i, auxMaxPos, auxMinPos;
    float auxMaxTemp = vec[0], auxMinTemp = vec[0];

    for (i = 0; i < n; i++)
    {
        if (vec[i] > auxMaxTemp)
        {
            auxMaxTemp = vec[i];
            auxMaxPos = i;
        }
        if (vec[i] < auxMinTemp)
        {
            auxMinTemp = vec[i];
            auxMinPos = i;
        }
    }

    *maxTemp = auxMaxTemp;
    *minTemp = auxMinTemp;
    *posMax = auxMaxPos;
    *posMin = auxMinPos;
}

// 3

void generarArchivo(float vec[], int n)
{
    int i;
    FILE *archivo;
    archivo = fopen("temperaturas.txt", "w");
    if (archivo != NULL)
    {
        for (i = 0; i < n; i++)
        {
            if (vec[i] > 0)
            {
                fprintf(archivo, "%d     %.2f\n", i, vec[i]);
            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\nError al abrir el archivo.\n");
    }
}