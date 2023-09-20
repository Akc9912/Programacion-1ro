#include <stdio.h>
#include <stdlib.h>
#define A 5

void dibujo();
void dibujo2(char simbolo);

int main()
{
    char simb = '*';
    dibujo();
    dibujo2(simb);
}

void dibujo()
{
    int i, j, B;
    printf("Indique el numero de filas del dibujo: ");
    scanf("%d", &B);
    for (j = 0; j < B; j++)
    {
        for (i = 0; i < A; i++)
        {
            printf("&");
        }
        printf("\n");
    }
}
void dibujo2(char simbolo)
{
    int i, j, B;

    printf("Indique el numero de filas del dibujo: ");
    scanf("%d", &B);
    for (j = 0; j < B; j++)
    {
        for (i = 0; i < A; i++)
        {
            printf("%c", simbolo);
        }
        printf("\n");
    }
}