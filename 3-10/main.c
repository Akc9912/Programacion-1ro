#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

int menu();

void main()
{
    int opcion = 1;
    while (opcion)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            altaEstudiante();
            break;
        case 2:
            bajaEstudiante();
            break;
        case 3:
            mostrarEstudiante();
            break;
        case 4:
            mostrarUno();
            break;

        default:
            break;
        }
    }
}