/*Leer una variable real PESO, e informar el estado de la persona de acuerdo
con la tabla:
Peso<40 "DELGADA"
40<= Peso <= 70 "NORMAL"
70 <= Peso <= 90 "SOBREPESO"
90<= "Obesa"*/

#include <stdio.h>

int main()
{

    float peso;

    printf("Indique el peso de la persona: ");
    scanf("%f", &peso);

    if (peso < 40)
    {
        printf("DELGADA");
    }
    else if (40 <= peso && peso <= 70)
    {
        printf("NORMAL");
    }
    else if (70 <= peso && peso <= 90)
    {
        printf("SOBREPESO");
    }
    else if (90 <= peso)
    {
        printf("OBESA");
    }
}
