#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libreria.h"

void reemplazarÑ(char cadena[]);

int main()
{
    system("cls");
    char cadena[20] = {"ensenyanza"};
    printf("%s\n", cadena);
    reemplazarÑ(cadena);
    printf("%s", cadena);
}