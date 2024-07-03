#include <stdio.h>

int main()
{

    int segundos, minutos, horas, segundos2;
    printf("ingrese los segundos\n");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos / 60) % 60;
    segundos2 = segundos % 60;
    printf("%dH %dM %dS", horas, minutos, segundos2);
}