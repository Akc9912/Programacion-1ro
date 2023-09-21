#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

void cargarEncuesta(t_encuesta *encuesta);
void mostrarEncuesta(t_encuesta encuesta);

int main()
{
    t_encuesta persona;
    system("cls");
    cargarEncuesta(&persona);
    mostrarEncuesta(persona);
}