#include <stdio.h>

int main()
{
    int K, i;

    printf("Defina el valor de K: ");
    scanf("%d", &K);

    for (i = K; i >= -K; i--)
    {
        printf("%d\n", i);
    }
}