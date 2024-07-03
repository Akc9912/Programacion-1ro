#include <stdio.h>

int main()
{
    char palabra[5];
    printf("Ingrese una palabra de 5 letras: ");
    scanf("%s", &palabra);
    printf("*********************\n");
    printf("*                   *\n");
    printf("*       %s       *\n", palabra);
    printf("*                   *\n");
    printf("*********************");
}
