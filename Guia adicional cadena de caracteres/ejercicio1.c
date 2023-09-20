#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

void sustituirEspacios(char cadena[]);

int main()
{
    char texto[100];
    printf("Ingrese un tecto breve: ");
    gets(texto);
    system("pause");
    puts(texto);
    sustituirEspacios(texto);
    puts(texto);
}