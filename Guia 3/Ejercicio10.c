#include <stdio.h>

int main()
{
    int contador_min = 0, contador_may = 0;
    char letra;

    printf("Ingrese un texto: ");

    do
    {

        scanf("%c", &letra);

        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            contador_may++;
        }
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            contador_min++;
        }

    } while (letra != '*');

    printf("El texto contiene %d mayusculas y %d minusculas", contador_may, contador_min);
}