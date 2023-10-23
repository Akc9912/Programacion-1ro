#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

void cargarEncuesta(t_encuesta *encuesta);
void mostrarEncuesta(t_encuesta encuesta);
void cargarVectorEncuesta(t_encuesta vector[], int n);
void mostrarVectorEncuesta(t_encuesta vector[], int n);

int main()
{
    int n = 0;
    t_encuesta vEncuesta[n];
    system("cls");
    printf("Ingrese la cantidad de personas a encuestar: ");
    scanf("%d", &n);
    system("cls");
    cargarVectorEncuesta(vEncuesta, n);
    system("pause");
    system("cls");
    mostrarVectorEncuesta(vEncuesta, n);
}