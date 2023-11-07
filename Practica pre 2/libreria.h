// Estructuras que voy a usar
typedef struct datos
{
    float base;
    float altura;
} t_datos;

typedef struct figura
{
    char tipoFigura;
    t_datos datos;
    float perimetro;
    float superficie;
} t_figura;

// Validación para tipo de figura
char validoTipoFigura()
{
    char tipoFigura;
    do
    {
        printf("Ingrese un tipo de figura (T:Triangulo R:Rectangulo C:Cuadrado): ");
        scanf(" %c", &tipoFigura);
    } while ((tipoFigura != 'T') && (tipoFigura != 'C') && (tipoFigura != 'R'));
    return tipoFigura;
}

// Cálculos para perimetro y superficie

float calcPerimetro(t_figura figura)
{
    float perimetro;
    switch (figura.tipoFigura)
    {
    case 'T':
        perimetro = sqrt(pow(figura.datos.altura, 2) + pow(figura.datos.base, 2)) + figura.datos.altura + figura.datos.base;
        break;
    case 'C':
        perimetro = figura.datos.base * 4;
        break;
    case 'R':
        perimetro = (figura.datos.base * 2) + (figura.datos.altura * 2);
        break;
    default:
        break;
    }
    return perimetro;
}

float calcSuperficie(t_figura figura)
{
    float superficie;
    switch (figura.tipoFigura)
    {
    case 'T':
        superficie = (figura.datos.base * figura.datos.altura) / 2;
        break;
    case 'C':
        superficie = figura.datos.base * figura.datos.altura;
        break;
    case 'R':
        superficie = figura.datos.base * figura.datos.altura;
        break;
    default:
        break;
    }
    return superficie;
}

// Datos según tipo de figura

void cargarDatos(t_figura *figura)
{
    t_figura aux = *figura;
    switch (aux.tipoFigura)
    {
    case 'T':
        printf("Ingrese la base del triangulo: ");
        scanf("%f", &aux.datos.base);
        printf("Ingrese la altura del triangulo: ");
        scanf("%f", &aux.datos.altura);
        break;
    case 'C':
        printf("Ingrese la base del cuadrado: ");
        scanf("%f", &aux.datos.base);
        aux.datos.altura = aux.datos.base;
        break;
    case 'R':
        printf("Ingrese la base del rectangulo: ");
        scanf("%f", &aux.datos.base);
        printf("Ingrese la altura del rectangulo: ");
        scanf("%f", &aux.datos.altura);
        break;
    default:
        break;
    }
    *figura = aux;
}

// Carga de una figura
void cargarFigura(t_figura *figura)
{
    t_figura aux;
    aux.tipoFigura = validoTipoFigura();
    cargarDatos(&aux);
    aux.perimetro = calcPerimetro(aux);
    aux.superficie = calcSuperficie(aux);
    *figura = aux;
}

// Muestra de una figura
void muestraFigura(t_figura figura)
{
    printf("Tipo de figura: %c\n", figura.tipoFigura);
    printf("Base: %f\nAltura: %f\n", figura.datos.base, figura.datos.altura);
    printf("Perimetro: %f\nSuperficie: %f\n", figura.perimetro, figura.superficie);
}

// Carga vector de figuras
void cargarVectorfiguras(t_figura vecFiguras[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        cargarFigura(&vecFiguras[i]);
    }
}

// Muestra vector de figuras
void mostrarVectorfiguras(t_figura vecFiguras[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        muestraFigura(vecFiguras[i]);
    }
}

// Recorrido de vector y carga a archivo binario según condición sup > 10.5
void cargarArchivoBinario(t_figura vecFigura[], int x)
{
    int i;
    t_figura
    FILE *archivo;
    archivo = fopen("figuras.dat", "w");
    if (archivo != NULL)
    {
        for (i = 0; i < x; i++)
        {

            if (vecFigura[i].superficie >= 10.5)
            {
                fwrite(&vecFigura[i], sizeof(t_figura), 1, archivo);

            }
        }
        fclose(archivo);
    }
    else
    {
        printf("\nNo se puede abrir el archivo.\n");
    }
}

void mostrarArchivoBinario()
{
    FILE *archivo;
    archivo = fopen("figuras.dat", "rb");

    if (archivo != NULL)
    {
        t_figura figura;
        fread(&figura, sizeof(t_figura), 1, archivo);
        while (!feof(archivo))
        {
            muestraFigura(figura);
        }

        fclose(archivo);
    }
    else
    {
        printf("No se puede abrir el archivo.\n");
    }
}

// Crear archivo de texto a partir del archivo binario
void copiarArchivoTexto()
{
    FILE *archivoBinario;
    FILE *archivoTexto;
    t_figura figura;

    archivoBinario = fopen("figuras.dat", "r");
    archivoTexto = fopen("figuras.txt", "w");

    if (archivoBinario != NULL && archivoTexto != NULL)
    {
        fprintf(archivoTexto, "TIPO\tPERIMETRO\tSUPERFICIE\n");
        fread(&figura, sizeof(t_figura), 1, archivoBinario);
        while (!feof(archivoBinario))
        {
            fprintf(archivoTexto, "%c\t%.2f\t%.2f\n", figura.tipoFigura, figura.perimetro, figura.superficie);
        }
        fclose(archivoBinario);
        fclose(archivoTexto);
        printf("Archivo de texto creado con éxito.\n");
    }
    else
    {
        printf("\nNo se pueden abrir los archivos correctamente.\n");
    }
}
