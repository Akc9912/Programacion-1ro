#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float potencia(float x, int w);

void main()
{
    float r;
    int op;
    op = menu();
    while (op)
    {
        /* code */
    }
}

float potencia(float x, int w)
{
    int i;
    float pot = 1;
    for (i = 0; i < w; i++)
    {
        pot *= x;
    }
    return pot;
}

int menu()
{
    int op;
    system("cls");
    printf("Seleccione una opcion: \n");
    do
    {
        printf("1-Volumen de una esfera de radio r.\n");
        printf("2-Superficie de una esfera de radio r.\n");
        printf("3-Superficie de una circunsferencia de radio r.\n");
        printf("4-Perimetro de una circunsferencia de radio r.\n");
        printf("0-Finalizar.");
    } while (op < 0 || op < 5) return op;
}