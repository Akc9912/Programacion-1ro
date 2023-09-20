// escribir un programa para convertir una medida dada en pies a sus equivalentes
// en: yardas, pulgadas, centimetros, metros
#include <stdio.h>

int main()
{
    float pies, yardas, pulgadas, centimetros, metros;
    printf("Ingrese la medida en pies: ");
    scanf("%f", &pies);
    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pies * 30.48;
    metros = centimetros / 100;
    printf("%f pies equivalen a: \n", pies);
    printf("%f yardas\n", yardas);
    printf("%f pulgadas\n", pulgadas);
    printf("%f centimetros\n", centimetros);
    printf("%f metros", metros);
}