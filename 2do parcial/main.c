#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreriaCorreccion.h"

// prototipos de finciones
void tipoComb(char tipoComb[]);
void crearBin();
void mostrarBin();
void crearTxt();

int main()
{
    system("cls");
    crearBin();
    system("pause");
    system("cls");
    mostrarBin();
    crearTxt();

    return 1;
}