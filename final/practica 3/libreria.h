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

/* Lectura del archivo y carga del vector */

// cantidad de lineas (para saber n)

int calculoN()
{
    FILE *archivo;
    int contador = 0;
    char caracter;
    archivo = fopen("reservas.txt", "r");

    if (archivo != NULL)
    {
        while ((caracter == fgetc(archivo)) != EOF)
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
        printf("\nError al abrir el archivo,\n");
    }
    return contador;
}

// lectura y carga del vector

void cargarVector(t_reserva reservas[], int n)
{
    int i;
    FILE *archivo;
    archivo = fopen("reservas.txt", "r");

    if (archivo != NULL)
    {
        for (i = 0; i < n; i++)
        {
            fscanf(archivo, "'%c'\t%d/%d/%d\t%f\t'%c'", &reservas[i].tipo, &reservas[i].diaEntrada.dia, &reservas[i].diaEntrada.mes, &reservas[i].diaEntrada.año, &reservas[i].costo, &reservas[i].formaPago);
        }
        fclose(archivo);
    }
    else
    {
        printf("\nError la abrir el archivo.\n");
    }
}

/* Calcular total facturado en efectivo y credito */

void calcularTotFacturado(t_reserva reservas[], int n)
{
    int i;
    float efectivo = 0, credito = 0;
    for (i = 0; i < n; i++)
    {
        switch (reservas[i].formaPago)
        {
        case 'E':
            efectivo += reservas[i].costo;
            break;
        case 'C':
            credito += reservas[i].costo;
            break;
        default:
            break;
        }
    }
    printf("\n------------------------------------------\n");
    printf("TOTAL FACTURADO EN EFECTIVO: %.2f\n", efectivo);
    printf("TOTAL FACTURADO CON CREDITO: %.2F\n", credito);
}

/* Listado de reservas primera quincena de enero 2024 */

void crearListado(t_reserva reservas[], int n)
{
    int i, cantidadRes = 0;
    float totalFacturado = 0;

    for (i = 0; i < n; i++)
    {
        if ((reservas[i].diaEntrada.año == 2024) && (reservas[i].diaEntrada.mes == 1) && ((reservas[i].diaEntrada.dia >= 1) || (reservas[i].diaEntrada.dia <= 15)))
        {
            cantidadRes++;
            totalFacturado += reservas[i].costo;
            printf("\n%c\t%d/%d/%d\t%.2f\n", reservas[i].tipo, reservas[i].diaEntrada.dia, reservas[i].diaEntrada.mes, reservas[i].diaEntrada.año, reservas[i].costo);
        }
    }
    printf("\n------------------------------------------\n");
    printf("TOTAL FACTURADO: %.2f\n", totalFacturado);
    printf("CANTIDAD DE RESERVAS: %d\n", cantidadRes);
}