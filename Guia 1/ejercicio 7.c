// convertir un valor de grados celcius a su equivalente en fahrenheit

#include <stdio.h>

int main()
{

    float c, f;
    printf("Ingrese la temperatura en grados celcius: ");
    scanf("%f", &c);
    f = (c * (9.0 / 5.0)) + 32.0;
    printf("%f gardos Celcius equivalen a %f grados Fahrenheit", c, f);
}