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
void verificaPais(t_audio equipo)
{
    char arg[20] = {"argentina"};
    char comparador[20];
    strcpy(equipo.pais_origen, comparador);
    if (strcmp(comparador, arg))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void mostrarSi(t_audio equipo)
{
    printf("Marca: %s\n", equipo.marca);
    printf("Modelo: %s\n", equipo.modelo);
    printf("Potencia de salida: %d\n", equipo.pot_salida);
    printf("Pais de origen: %s\n", equipo.pais_origen);
    printf("Garantia (en meses): %d\n", equipo.garantia);
    if (equipo.garantia >= 6 && verificaPais(equipo))
    {
        printf("Precio: %.2f", equipo.precio);
    }
}
