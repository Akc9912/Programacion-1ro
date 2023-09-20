#include <stdio.h>

int main()
{
    int contador_esp = 0;
    char letra;

    printf("Ingrese un texto: ");

    do
    {

        scanf("%c", &letra);

        if (letra == ' ' || letra == '.')
        {
            contador_esp++;
        }

    } while (letra != '*');

    printf("El texto contiene %d palabras", contador_esp);
}