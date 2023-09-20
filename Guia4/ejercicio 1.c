#include <stdio.h>

int main()
{
    int i, j, n;
    int vect[9];
    printf("\nIngrese la cantidad de elementos\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &vect[i]);
    printf("\nIngrese un valor entero\n");
    scanf("%d", &j);
    for (i = 0; i < n; i++)
        vect[i + 2] = vect[i] * j;
    printf("\nEscribe un valor modificado\n");
    for (i = 0; i < n; i++)
        printf("%d", vect[i]);
}
