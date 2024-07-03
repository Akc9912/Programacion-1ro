#include <stdio.h>

int main()
{
    int i = 0, j; // declaramos la variable 'i' y la inicializamos en 0

    while (i < 4) // siempre que i sea menor a 4 se va a repetir el ciclo
    {
        i++;                              // el valor de i se va a incrementar en 1 cada vez que se repita el ciclo
        printf("Estoy en el ciclo!!!\n"); // en cada repeticion se va a imprimir este mensaje
    }
    j = 100 + i; // una vez que la condicion deje de ser verdadera, se ejecuta esta formula

    printf("El valor de j es %d", j);
}