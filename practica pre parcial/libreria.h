typedef struct Datos
{
    float base;
    float altura;
} t_medida;

typedef struct figuraGeometrica
{
    char tipoFigura;
    t_medida datos;
    float perimetro;
    float superficie;
} t_figGeometrica;

float calculoSuperficie(float base, float altura, char tipoFigura)
{
    float superficie;

    switch (tipoFigura)
    {
    case 'T':
        superficie = (base * altura) / 2;
        break;
    case 'R':
        superficie = (base * 2) + (altura * 2);
        break;
    case 'C':
        superficie = base * 4;
        break;
    default:
        break;
    }

    return superficie;
}

float calculoPerimetro(float base, float altura)
{
    float perimetro = base + altura;
    return perimetro;
}

char validacionTipoFigura(char tipofigura)
{

    scanf("%c", &tipofigura);
    if (tipofigura != 'T' && tipofigura != 'R' && tipofigura != 'C')
    {
        printf("\nIngrese un tipo de figura valido: ");
        scanf("%c", &tipofigura);
    }

    return tipofigura;
}

void cargaFigura(t_figGeometrica *figura)
{
    t_figGeometrica aux;
    printf("Ingrese un tipo de figura.\nT: triangulo.\nR: rectangulo.\nC: cuadrado\n\n");
    aux.tipoFigura = validacionTipoFigura(aux.tipoFigura);
    printf("Ingrese la altura de la figura: ");
    scanf("%f", &aux.datos.altura);
    printf("Ingrese la base de la figura: ");
    scanf("%f", &aux.datos.base);
    aux.superficie = calculoSuperficie(aux.datos.base, aux.datos.altura, aux.tipoFigura);
    aux.perimetro = calculoPerimetro(aux.datos.base, aux.datos.altura);
    *figura = aux;
}
void mostrarTipo(t_figGeometrica figura)
{
    switch (figura.tipoFigura)
    {
    case 'T':
        printf("Tipo de figura: Triangulo\n");
        break;
    case 'R':
        printf("Tipo de figura: Rectangulo\n");
        break;
    case 'C':
        printf("Tipo de figura: Cuadrado\n");
        break;
    default:
        break;
    }
}
void mostrarFigura(t_figGeometrica figura)
{
    mostrarTipo(figura);
    printf("Base: %.2f\nAltura: %.2f\n", figura.datos.base, figura.datos.altura);
    printf("Perimetro: %.2f\n", figura.perimetro);
    printf("Superficie: %.2f\n", figura.superficie);
}

void cargarVectorFiguras(t_figGeometrica vector[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        system("cls");
        cargaFigura(&vector[i]);
        system("pause");
    }
}

void mostrarVectorFiguras(t_figGeometrica vector[], int x)
{
    int i;
    system("cls");
    for (i = 0; i < x; i++)
    {
        mostrarFigura(vector[i]);
        printf("--------------------------------------");
    }
}

void guardarEnArchivo(t_figGeometrica figura[], int x)
{
    int i;
    t_figGeometrica aux;
    FILE *archivo;
    for (i = 0; i < x; i++)
    {
        if (figura[i].superficie < 10.5)
        {
            archivo = fopen("figuras.dat", "w");
            strcpy(aux.tipoFigura, figura[i].tipoFigura);
            aux.datos.altura = figura[i].datos.altura;
        }
    }
}
