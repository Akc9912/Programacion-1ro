#include <stdio.h>
#include <stdlib.h>

void sumar();
void restar(int a, int b);
int multiplicar(int a, int b);
float dividir(float x, float y);
int potenciar(int a, int b);
int menu();

int main()
{
    int op = 1;
    int N1, N2;

    while (op != 0)
    {
        op = menu();
        switch (op)
        {
        case 1:
            sumar();
            break;
        case 2:
            printf("ingrese N1 y N2\n");
            scanf("%d%d", &N1, &N2);
            restar(N1, N2);
            break;
        case 3:
            printf("%d", multiplicar(7, 2));
            break;
        case 4:
            printf("%f", dividir(7.2, 8.4));
            break;
        case 5:
            potenciar(N1, N2);
            break;
        default:
            break;
        }
        system("pause");
    }
}

void sumar()
{
    int N1, N2, N3;
    printf("Ingrese 2 enteros:\n");
    scanf("%d%d", &N1, &N2);
    N3 = N1 + N2;
    printf("%d mas %d es: %d\n", N1, N2, N3);
}

void restar(int a, int b)
{
    int c;
    c = a - b;
    printf("%d menos %d es: %d\n", a, b, c);
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

int potenciar(int a, int b)
{
    printf("Ingrese 2 enteros:\n");
    scanf("%d%d", &a, &b);
    int c = 1;
    for (int i = 0; i < b; i++)
    {
        c *= a;
    }
    printf("%d\n", c);
    return c;
}

int menu()
{
    int opc;
    system("cls");
    printf("seleccione una opcion\n");
    do
    {
        printf("1: sumar\n");
        printf("2: restar\n");
        printf("3: multiplicar\n");
        printf("4: dividir\n");
        printf("5: potenciar\n");
        printf("0: fin App\n");
        scanf("%d", &opc);
    } while ((opc < 0) || (opc > 5));
    return opc;
}