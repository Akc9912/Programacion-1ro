#include <stdio.h>
#include <stdlib.h>
#define MAX_VECTOR 100

int cargar(float v[]);
void cargar1(float v[], int *x);
void mostrar(float v[], int b);

main()
{
    float vector1[MAX_VECTOR], vector2[MAX_VECTOR];
    int L1, L2;

    L1 = cargar(vector1);
    mostrar(vector1, L1);
    system("cls");

    L2 = cargar(vector2);
    mostrar(vector2, L2);
    system("cls");
}

int cargar(float v[])
{
    int i, x;
    printf("Cuantos valores tiene el vector?\n");
    scanf("%d", &x);
    printf("Indicar %d valores reales.", x);
    for (i = 0; i < x; i++)
    {
        printf("Valor n°%d", x + 1);
        scanf("%f", &v[i]);
    }
    return x;
}

void cargar1(float v[], int *x)
{
    int i;
    printf("Cuantos valores tiene el vextor?");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("Valor n°%d", i + 1);
        scanf("%f", &v[i]);
    }
}
void mostrar(float v[], int b)
{
    int i;
    printf("Este vector tiene %d valores", b);
    for (i = 0; i < b; i++)
    {
        printf("%g\t", v[i]);
    }
    system("pause");
}
// 1
float sumaVector(float v[], int a)
{
    float suma;
    int i;
    for (i = 0; i < a; i++)
    {
        suma += v[i];
    }
    return suma;
}
float promVector(float v[], int a)
{
    float suma, prom;
    suma = sumaVector(v, a);
    prom = suma / a;
    return prom;
}
void sumayProm(float v[], int a)
{
    printf("La suma de los valores del vector es: %g\n", sumaVector(v, a));
    printf("El promedio de los valores del vector es: %g", promVector(v, a));
}
// 2
float maximo(float v[], int l)
{
    int i;
    float max = v[0];
    for (i = 0; i < l; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}
float minimo(float v[], int l)
{
    int i;
    float min = v[0];
    for (i = 0; i < l; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}
void maxyMin(float v[], int a)
{
    printf("El maximo es: %g\n", maximo(v, a));
    printf("El minimo es: %g\n", minimo(v, a));
}
//
void promVectores(float v1[], int x1, float v2[], int x2)
{
    float prom1, prom2, prom3;
    prom1 = promVector(v1, x1);
    prom2 = promVector(v2, x2);
    prom3 = (prom1 + prom2) / 2;
    printf("El promedio de los vectores es: %g", prom3);
}
