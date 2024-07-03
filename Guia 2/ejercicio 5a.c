// Escribir un programa que lea dos enteros que representen una fecha (mes y dia del mes)
// y escriba true si la fecha corresponde al dia de navidad y false de lo contrario

#include <stdio.h>

int main()
{
    int dia, mes;

    printf("Ingrese el dia del mes: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    if (dia == 25 && mes == 12)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}