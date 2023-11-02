#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "libreria.h"

char validoTipoFigura();
float calcPerimetro(t_figura figura);
float calcSuperficie(t_figura figura);
void cargarDatos(t_figura *figura);
void cargarFigura(t_figura *figura);
void muestraFigura(t_figura figura);
void cargarVectorfiguras(t_figura vecFiguras[], int x);
void mostrarVectorfiguras(t_figura vecFiguras[], int x);
void cargarArchivoBinario(t_figura vecFigura[], int x);
void mostrarArchivoBinario();
void copiarArchivoTexto();

int main()
{
    int n = 0;
    t_figura vecFiguras[n];

    printf("Cuantas figuras desea cargar?\n");
    scanf("%d", &n);
    system("cls");
    cargarVectorfiguras(vecFiguras, n);
    cargarArchivoBinario(vecFiguras, n);
    mostrarArchivoBinario();
    copiarArchivoTexto();
}