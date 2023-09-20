#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libreria.h"

void encontrarEnCadena(char cadena[]);

int main()
{
    system("cls");
    char cadena[20];
    printf("Ingrese un nombre: ");
    gets(cadena);
    encontrarEnCadena(cadena);
}