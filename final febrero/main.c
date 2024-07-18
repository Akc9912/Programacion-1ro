#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

float cargarTemperatura();
void cargarVector(float vec[], int n);
void devolverMaxyMin(float vec[], int n, float *maxTemp, float *minTemp, int *posMax, int *posMin);
void generarArchivo(float vec[], int n);

int main()
{
    int tam, maxPos, minPos;
    float maxTemp, minTemp;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);

    float temperaturas[tam];

    cargarVector(temperaturas, tam);
    system("pause");

    devolverMaxyMin(temperaturas, tam, &maxTemp, &minTemp, &maxPos, &minPos);
    system("pause");

    generarArchivo(temperaturas, tam);
    system("pause");

    return 0;
}