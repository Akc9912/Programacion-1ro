#include <stdio.h>

int main()
{
    int factorial = 1, n;
    scanf("%d", &n);

    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }

    printf("el factorial es %d", factorial);
}