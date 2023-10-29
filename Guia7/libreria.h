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
    char nombre[50];
    int edad;
    char conoce[3];
    char consume[3];
} t_encuesta;

void cargarAudio(t_audio *equipo)
{
    t_audio aux;
    printf("Ingrese los datos del equipo.\n");
    printf("Marca: ");
    gets(aux.marca);
    printf("Modelo: ");
    gets(aux.modelo);
    printf("Potencia de salida: ");
    scanf("%d", &aux.pot_salida);
    printf("Pais de origen: ");
    scanf("%s", &aux.pais_origen);
    printf("Garantia (meses): ");
    scanf("%d", &aux.garantia);
    printf("Precio: ");
    scanf("%g", &aux.precio);
    *equipo = aux;
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
int verificaPais(t_audio equipo)
{
    char argentina[] = "argentina";
    return strcmp(argentina, equipo.pais_origen);
}
void mostrarSi(t_audio equipo)
{
    printf("Marca: %s\n", equipo.marca);
    printf("Modelo: %s\n", equipo.modelo);
    printf("Potencia de salida: %d\n", equipo.pot_salida);
    printf("Pais de origen: %s\n", equipo.pais_origen);
    printf("Garantia (en meses): %d\n", equipo.garantia);
    if (equipo.garantia >= 6 && verificaPais(equipo) == 0)
    {
        printf("Precio: %.2f\n", equipo.precio);
    }
}

void cargarEncuesta(t_encuesta *encuesta)
{
    t_encuesta aux;
    char respuesta[3] = "si";

    printf("Nombre: ");
    scanf("%s", aux.nombre);
    printf("Edad: ");
    scanf("%d", &aux.edad);
    printf("Conoce el producto XXX (si/no): ");
    scanf(" %2s", aux.conoce); // da errores con gets
    if (strcmp(respuesta, aux.conoce) == 0)
    {
        printf("Consume el producto XXX (si/no): ");
        scanf(" %2s", aux.consume);
    }
    printf("----------------------------------------------------------------------------\n");
    *encuesta = aux;
}
void mostrarEncuesta(t_encuesta encuesta)
{
    printf("Nombre: %s\n", encuesta.nombre);
    printf("Edad: %d\n", encuesta.edad);
    printf("Conoce el produco: %s\n", encuesta.conoce);
    if (strcmp(encuesta.conoce, "si") == 0)
    {
        printf("Consume el producto: %s\n", encuesta.consume);
    }
    printf("----------------------------------------------------------------------------\n");
}
void cargarVectorEncuesta(t_encuesta vector[], int n)
{
    int i;
    t_encuesta persona;
    for (i = 0; i < n; i++)
    {
        cargarEncuesta(&persona);
        vector[i] = persona;
    }
}
void mostrarVectorEncuesta(t_encuesta vector[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        mostrarEncuesta(vector[i]);
        printf("--------------------------------------------------------\n");
    }
}
