typedef struct ficha
{
    int numeros;
    char nombre[20];
    float precio;
} stock;

typedef struct e_audio
{
    char marca[20];
    char modelo[20];
    char pais_origen[20];
    int pot_salida;
    int garantia;
    float precio;
} t_audio;
typedef struct encuesta
{
    char nombre[30];
    int edad;
    char conoce[3];
    char consume[3];
} t_encuesta;

void cargarAudio(t_audio *x)
{
    t_audio aux;
    printf("Ingresar marca del equipo: ");
    gets(aux.marca);
    printf("Ingrese modelo del equipo: ");
    gets(aux.modelo);
    printf("Ingrese potencia de salida: ");
    scanf("%d", &aux.pot_salida);
    printf("Ingrese pais de origen del equipo:");
    scanf("%s", &aux.pais_origen);
    printf("Ingrese la garantia del equipo (en meses): ");
    scanf("%d", &aux.garantia);
    printf("Ingrese el precio del equipo: ");
    scanf("%g", &aux.precio);
    *x = aux;
}
void mostrarAudio(t_audio x)
{
    printf("Marca: %s\n", x.marca);
    printf("Modelo: %s\n", x.modelo);
    printf("Potencia de salida: %d\n", x.pot_salida);
    printf("Pais de origen: %s\n", x.pais_origen);
    printf("Garantia (en meses): %d\n", x.garantia);
    printf("Precio: %.2f\n", x.precio);
}
void mostrarSi(t_audio x)
{
    int condicion;
    printf("Marca: %s\n", x.marca);
    printf("Modelo: %s\n", x.modelo);
    printf("Potencia de salida: %d\n", x.pot_salida);
    printf("Pais de origen: %s\n", x.pais_origen);
    printf("Garantia (en meses): %d\n", x.garantia);
    condicion = strcmp(x.pais_origen, "Argentina");
    if ((x.garantia >= 6) && condicion != 0)
    {
        printf("Precio: %.2f", x.precio);
    }
}

void cargarEncuesta(t_encuesta *x)
{
    t_encuesta aux;
    char S[3] = {"si"}, N[3] = {"no"};

    printf("Ingrese el nombre: ");
    gets(x.nombre);
    printf("Ingrese la edad de %s: ", x.nombre);
    scanf("%d", &x.edad);
    printf("Conoce el producto XXX?: ");
    gets(x.conoce);

    if (strcmp(s, x.conoce) != 0)
    {
        printf("Consume el producto XXX)");
        gets(x.consume);
    }
    *x = aux;
}

void cargarVecEncuestas(t_encuesta vec[], int n)
{
    int i;
    t_encuesta encuestado;
    for (i = 0; i < n; i++)
    {
        vec[i] = cargarEncuesta(encuestado);
    }
}
float porcentajeConoce(t_encuesta vec[], , int n)
{
    float porcentaje;
    t_encuesta x;
    int i, contador = 0;
    char S[3] = {"si"};
    for (i = 0; i < n; i++)
    {
        x = v[i];
        if (strcmp(s, x.conoce))
        {
            contador++;
        }
    }
    porcentaje = (n * 100) / contador;
    return porcentaje;
}
