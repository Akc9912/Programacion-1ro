#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include <string.h>

void cargarAudio(t_audio *equipo);
void mostrarAudio(t_audio x);
int verificaPais(t_audio equipo);
void mostrarSi(t_audio equipo);

int main()
{
    t_audio audio1;
    system("cls");
    cargarAudio(&audio1);
    system("pause");
    system("cls");
    mostrarAudio(audio1);
    system("pause");
    system("cls");
    mostrarSi(audio1);
}