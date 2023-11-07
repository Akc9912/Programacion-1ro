#include <stdio.h>
#include <string.h>

// Definir estructura auto
typedef struct automovil
{
    char marca[10];
    int modelo;
    char tipoCombustible[10];
    float precio;
    float precioVenta;
} t_auto;

// Validar tipo de combustible
void tipoComb(char tipoComb[])
{
    int opcion;
    char combustible[10];

    do
    {
        printf("Ingrese un tipo de combustible valido (1-GNC, 2-Nafta o 3-Diesel): ");
        scanf("%d", &opcion);
    } while (opcion < 1 || opcion > 3);

    switch (opcion)
    {
    case 1:
        strcpy(combustible, "GNC");
        break;

    case 2:
        strcpy(combustible, "Nafta");
        break;

    case 3:
        strcpy(combustible, "Diesel");
        break;
    }
    strcpy(tipoComb, combustible);
}

// Crear archivo binario
void crearBin()
{
    FILE *archivo;
    t_auto automovil;
    archivo = fopen("vehiculos.dat", "wb"); // Se corrige la bandera "w" por "wb" para escritura binaria.

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

// Mostrar archivo binario
void mostrarBin()
{
    FILE *archivo;
    t_auto automovil;
    archivo = fopen("vehiculos.dat", "rb"); // Se corrige la bandera "r" por "rb" para lectura binaria.

    if (archivo != NULL)
    {
        while (fread(&automovil, sizeof(t_auto), 1, archivo))
        {
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
    archivoBinario = fopen("vehiculos.dat", "rb"); // Se corrige el nombre del archivo binario.

    if (archivoBinario != NULL && archivoTexto != NULL)
    {
        t_auto automovil;
        char marca[10];

        // Obtener la marca a buscar
        printf("Ingrese la marca a buscar: ");
        scanf("%s", marca);

        fprintf(archivoTexto, "MARCA\tMODELO\tCOMBUSTIBLE\t\t\t\tPRECIO\n");

        while (fread(&automovil, sizeof(t_auto), 1, archivoBinario))
        {
            if (strcmp(automovil.marca, marca) == 0) // Cambiar "1" a "0" para comparar igualdad
            {
                fprintf(archivoTexto, "%s\t%d\t%s\t%.2f\n", automovil.marca, automovil.modelo, automovil.tipoCombustible, automovil.precioVenta);
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

// Reducir precios
void reducirPrecios()
{
    FILE *archivo;
    archivo = fopen("vehiculos.dat", "rb+"); // Se cambia la bandera "a" por "rb+" para lectura/escritura binaria.
    t_auto automovil;

    if (archivo != NULL)
    {
        while (fread(&automovil, sizeof(t_auto), 1, archivo))
        {
            if (automovil.modelo >= 2020)
            {
                automovil.precioVenta -= (automovil.precioVenta * 0.1);
                fseek(archivo, -sizeof(t_auto), SEEK_CUR); // Retroceder la posición del archivo para actualizar el registro.
                fwrite(&automovil, sizeof(t_auto), 1, archivo);
            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}

