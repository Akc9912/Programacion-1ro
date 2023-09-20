#include <stdio.h>

int main()
{

    int pos1, pos2, pos3, pos4, numero;

    printf("Ingrese un numero de 4 digitos: ");
    scanf("%d", &numero);

    pos1 = numero / 1000;
    pos2 = (numero % 1000) / 100;
    pos3 = ((numero % 100) % 100) / 10;
    pos4 = ((numero % 100) % 100) % 10;

    printf("%d\n", pos1);
    printf("%d\n", pos2);
    printf("%d\n", pos3);
    printf("%d\n", pos4);
}