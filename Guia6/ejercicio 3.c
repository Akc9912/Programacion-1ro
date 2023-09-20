#include <stdio.h>
#include <stdlib.h>

void date(int dd, int mm, int aa);

/*
A continuacion se realiza la prueba de escritorio correspondiente al programa.
Analizar la estructura de la misma con los parametros por valor utilizados:
*/

void main()
{
    int dia, mes, year;
    scanf("%d%d%d", &dia, &mes, &year);
    date(dia, mes, year);
    system("pause");
}
void date(int dd, int mm, int aa)
{
    int B;
    B = aa % 100;
    printf("%d/%d/%d", dd, mm, B);
}