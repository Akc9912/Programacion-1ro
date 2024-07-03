#include <stdio.h>

int main()
{
    int pot = 1;

    do
    {
        printf("5%d\n", pot);
        pot *= 2;
    } while (pot < 30);
}