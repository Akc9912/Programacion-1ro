#include <stdio.h>

int main()
{

    int num1, num2, resultado, l1, l2, l3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    resultado = num1 * num2;
    l1 = (num2 % 10) * num1;
    l2 = (num2 / 200) * num1;
    l3 = (num2 / 100) * num1;

    printf("   %d \n", num1);
    printf(" x %d \n", num2);
    printf("_______\n");
    printf("  %d\n", l1);
    printf("  %d\n", l2);
    printf("%d\n", l3);
    printf("_______\n");
    printf("%d", resultado);
}

//corregir formulas de lineas