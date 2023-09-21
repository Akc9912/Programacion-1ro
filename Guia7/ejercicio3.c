#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include <string.h>

void cargarAudio(t_audio *x);
void mostrarAudio(t_audio x);
void mostrarSi(t_audio x);

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