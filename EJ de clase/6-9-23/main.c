#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

void leerLista(char Mat[][12], int x);
void mostrarLista(char Mat[][12], int x);
void mostrarListaEn(char L[][12], int indice);
void contarLetras(char L[][12], int V[], int x);
void mostrarVector(int V[]);
void contarVocales(char L[][12], int L2[][5], int F, int C);
int main()
{
    int X;
    char lista[X][12];
    int vec2[X], matVocales[X][5];

    printf("Ingrese la cantidad de elemontos de la lista: ");
    scanf("%d", &X);

    leerLista(lista, X);
    mostrarLista(lista, X);
    mostrarListaEn(lista, 2);
    contarLetras(lista, vec2, X);
    mostrarVector(vec2);
    contarVocales(lista, matVocales, X, 5);
}