typedef struct fecha
{
    int dia;
    int mes;
    int año;
} t_fecha;

typedef struct reserva
{
    char tipo;
    t_fecha diaEntrada;
    float costo;
    char formaPago;
} t_reserva;

/*  1-
    - Leer archivo de texto "RESERVAS.TXT" que contiene datos de un balneario para la temporada 23-24.
    - A partir del archivo generar un vector de registros que contenga los datos de t_reserva.
*/

// Leer y contar lineas del archivo (saco tamaño del vector)

int contarLineas()
{
    FILE *archivo;
    int contador = 0;
    char caracter;

    archivo = fopen("reservas.txt", "r");

    if (archivo != NULL)
    {
        while ((caracter = fgetc(archivo)) != EOF)
        {
            if (caracter == '\n')
            {
                contador++;
            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
    return contador;
}

// Leer archivo y crear vector;

void cargarVector(t_reserva reservas[], int n) // n se saca con la funcion contar lineas en el main.c
{
    FILE *archivo;
    t_reserva aux;
    int i;
    archivo = fopen("reservas.txt", "r");

    if (archivo != NULL)
    {
        for (i = 0; i < n; i++)
        {
            if (fscanf(archivo, "'%c'\t%d/%d/%d\t%f\t'%c'", &aux.tipo, &aux.diaEntrada.dia, &aux.diaEntrada.mes, &aux.diaEntrada.año, &aux.costo, &aux.formaPago) == 6)
            {
                reservas[i] = aux;
            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\n\nError al abrir el archivo.\n");
    }
}

/*  2-
    -Recorrer el vector y calcular el total facturado con efectivo y el total facturado con credito.
*/

void calcularTotFacturado(t_reserva reservas[], int n)
{
    int i;
    float efectivo = 0, credito = 0;

    for (i = 0; i < n; i++)
    {
        switch (reservas[i].formaPago)
        {
        case 'C':
            credito += reservas[i].costo;
            break;
        case 'E':
            efectivo += reservas[i].costo;
            break;

        default:
            break;
        }
    }
    printf("\n-----------------------\n");
    printf("TOTAL FACTURADO EN EFECTIVO: %.2f", efectivo);
    printf("TOTAL FACTURADO CON CREDITO: %.2f", credito);
}

/*  3-
    -A partir del vector, generar un listado con las reservas de la primera quincena de enero. Indicar cantidad de reservas y el total facturado.
*/

void generarListado(t_reserva reservas[], int n)
{
    int i, contador = 0;
    float totFacturado = 0;

    for (i = 0; i < n; i++)
    {
        if ((reservas[i].diaEntrada.año == 2024) && (reservas[i].diaEntrada.mes == 1) && ((reservas[i].diaEntrada.dia <= 15) || reservas[i].diaEntrada.dia >= 1))
        {
            printf("%c\t%d/%d/%d\t%.2f\n", reservas[i].tipo, reservas[i].diaEntrada.dia, reservas[i].diaEntrada.mes, reservas[i].diaEntrada.año, reservas[i].costo);
            contador++;
            totFacturado+=reservas[i].costo;
        }
    }
    printf("\n-----------------------\n");
    printf("\nTOTAL FACTURADO: %.2f", totFacturado);
    printf("\nCANTIDAD DE RESERVAS: %d", contador);
}