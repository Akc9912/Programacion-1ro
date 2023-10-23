#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

float calculoSuperficie(float base, float altura, char tipoFigura);
float calculoPerimetro(float base, float altura);
char validacionTipoFigura(char tipofigura);
void cargaFigura(t_figGeometrica *figura);
void mostrarTipo(t_figGeometrica figura);
void mostrarFigura(t_figGeometrica figura);
void cargarVectorFiguras(t_figGeometrica vector[], int x);
void mostrarVectorFiguras(t_figGeometrica vector[], int x);

int main()
{
    int n = 0;
    t_figGeometrica vectorFiguras[n];
    system("cls");
    printf("Ingrese cuantas figuras desea cargar: ");
    scanf("%d", &n);
    cargarVectorFiguras(vectorFiguras, n);
    mostrarVectorFiguras(vectorFiguras, n);
}