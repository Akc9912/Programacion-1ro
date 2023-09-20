#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libreria.h"

// Declaración de las funciones
void ingresarDatos(char c1[], char c2[], char c3[]);
void combinarCadenas(char c1[], char c2[], char c3[], char c4[]);
void convertirMayus(char cadena[]);
void convertirMinus(char cadena[]);
int encontrarApellido(char cadena[], char apellido[]);
void verificarApellido(char cadena[]);
void primeraEnMayuscula(char cadena[]);

int main()
{
    char nombre[20], apellido1[20], apellido2[20], nombreCompleto[70];
    int caracteres;

    // punto 1 - combinar 3 cadenas de caracteres

    system("cls");
    ingresarDatos(nombre, apellido1, apellido2);
    combinarCadenas(nombreCompleto, nombre, apellido1, apellido2);
    puts(nombreCompleto);
    system("pause");

    // punto 2 - longitud de la cadena

    system("cls");
    caracteres = strlen(nombreCompleto);
    printf("Cantidad de caracteres: %d\n", caracteres);
    system("pause");

    // punto 3 - convertir cadena a mayúscula y minúscula

    system("cls");
    // copio de la cadena original para preservarla
    char copiaNombreCompleto[70];
    strcpy(copiaNombreCompleto, nombreCompleto);

    // convevierto la copia a mayúsculas e imprimo
    convertirMayus(copiaNombreCompleto);
    puts(copiaNombreCompleto);

    // Restauro la cadena original
    strcpy(copiaNombreCompleto, nombreCompleto);

    // Converto la copia a minúsculas e imprimo
    convertirMinus(copiaNombreCompleto);
    puts(copiaNombreCompleto);

    system("pause");

    // punto 4 - validar si existe un apellido en la cadena

    system("cls");
    verificarApellido(nombreCompleto);
    system("pause");

    // punto 5 - Primeras letras en mayúscula

    system("cls");
    primeraEnMayuscula(nombreCompleto);
    system("pause");
}
