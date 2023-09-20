#include <stdio.h>
#include <stdlib.h>

int main()
{
}

void sumar()
{
    int n1, n2, n3;
    printf("Ingrese dos enteros para sumar: ");
    scanf("%d%d", &n1, &n2);
    n3 = n1 + n2;
    printf("%d mas %d es: %d", n1, n2, n3);
}
void restar(int a, int b)
{
    int c;
    c = a - b;
    printf("%d menos %d es: %d", a, b, c);
}
int multiplicar(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
float dividir(float x, float y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        return 0;
    }
}
int potencia(int a, int b)
{
    int c = 1;
    for (int i = 0; i < b; i++)
    {
        c *= a;
    }
}