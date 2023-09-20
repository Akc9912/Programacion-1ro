#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libreria.h"

void invertirCadena(char cadena[]);

int main()
{
    system("cls");
    char cadena[30] = {"alocarac aloh"};
    puts(cadena);
    invertirCadena(cadena);
}