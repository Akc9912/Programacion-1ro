// Definir estructura auto
typedef struct automovil
{
    char marca[10];
    int modelo;
    char tipoCombustible[10];
    float precio;
    float precioVenta;
} t_auto;

// valido tipo de combustible
void tipoComb(char tipoComb[])
{
    int opcion;
    char combustible[10];
    char tipo1[10] = {"GNC"}, tipo2[10] = {"Nafta"}, tipo3[10] = {"Diesel"};
    do
    {
        printf("Ingrese un tipo de combustible valido (1-GNC, 2-Nafta o 3-Diesel): ");
        scanf("%d", &opcion);
    } while ((opcion != 1) && (opcion != 2) && (opcion != 3));

    switch (opcion)
    {
    case 1:
        strcpy(combustible, tipo1);
        break;

    case 2:
        strcpy(combustible, tipo2);
        break;

    case 3:
        strcpy(combustible, tipo3);
        break;
    }
    strcpy(tipoComb, combustible);
}

// carga archivo bin

void crearBin()
{
    FILE *archivo;
    t_auto automovil;
    archivo = fopen("vehiculos.dat", "w");
    if (archivo != NULL)
    {
        int opc = 1;
        while (opc == 1)
        {

            printf("Ingrese la marca del automovil: ");
            fflush(stdin);
            gets(automovil.marca);
            printf("Ingrese el modelo del automovil: ");
            scanf("%d", &automovil.modelo);
            printf("Ingrese tipo de combustible: ");
            tipoComb(automovil.tipoCombustible);
            printf("Ingrese el precio del automovil: ");
            scanf("%f", &automovil.precio);
            automovil.precioVenta = automovil.precio + (automovil.precio * 0.15);
            fwrite(&automovil, sizeof(t_auto), 1, archivo);
            printf("\n\nDesea cargar otro automovil? (0-no 1-si): ");
            scanf("%d", &opc);
        }
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}

// mostrar bin

void mostrarBin()
{
    FILE *archivo;
    t_auto automovil;
    archivo = fopen("vehiculos.dat", "r");

    if (archivo != NULL)
    {
        while (!feof(archivo))
        {
            fread(&automovil, sizeof(t_auto), 1, archivo);
            printf("Marca: %s\n", automovil.marca);
            printf("Modelo: %d\n", automovil.modelo);
            printf("Tipo de combustible: %s\n", automovil.tipoCombustible);
            printf("Precio: %.3f\n", automovil.precio);
            printf("Precio venta: %.2f\n", automovil.precioVenta);
        }
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}

// Crear archivo de texto

void crearTxt()
{
    FILE *archivoTexto;
    FILE *archivoBinario;
    archivoTexto = fopen("vehiculos.txt", "w");
    archivoBinario = fopen("vehicilos.dat", "r");
    if ((archivoBinario != NULL) && (archivoTexto != NULL))
    {
        t_auto automovil;
        char marca[10];
        gets(marca);

        fprintf("MARCA\tMODELO\tCOMBUSTIBLE\tPRECIO\N");
        while (!feof(archivoBinario))
        {
            if (strcmp(automovil.marca, marca) == 1)
            {
                fprintf("%s\t", automovil.marca);
                fprintf("%d\t", automovil.modelo);
                fprintf("%s\t", automovil.tipoCombustible);
                fprintf("%.2f\n", automovil.precioVenta);
            }
        }
        fclose(archivoBinario);
        fclose(archivoTexto);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}

// reducir precios

void reducirPrecios()
{
    FILE *archivo;
    archivo = fopen("vehiculos.dat", "a");
    t_auto automovil;
    if (archivo != NULL)
    {
        if (automovil.modelo >= 2020)
        {
            automovil.precioVenta -= (automovil.precioVenta * 0.1);
        }
        fwrite(&automovil, sizeof(t_auto), 1, archivo);
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}