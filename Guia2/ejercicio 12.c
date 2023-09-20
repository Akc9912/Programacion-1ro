#include <stdio.h>

int main()
{

    int tipo_de_abonado, valor_abono, gigas;
    float importe_a_pagar, valor_gigas;

    printf("Tipos de abonados:\n");
    printf("1-Particular\n");
    printf("2-Profesional\n");
    printf("3-Comercial\n");
    printf("Ingrese su tipo de abonado: ");
    scanf("%d", &tipo_de_abonado);
    printf("Ingrese la cantidad de gigas: ");
    scanf("%d", &gigas);

    switch (tipo_de_abonado)
    {

    case 1:
        valor_abono = 300;

        if (gigas == 0 && gigas <= 200)
        {
            valor_gigas = gigas * 0.5;
        }
        else if (gigas > 200 && gigas <= 400)
        {
            valor_gigas = gigas * 0.7;
        }
        else if (gigas > 400 && gigas < 1000)
        {
            valor_gigas = gigas * 1;
        }
        else if (gigas > 1000)
        {
            valor_gigas = gigas * 1.2;
        }

        break;

    case 2:
        valor_abono = 500;
        if (gigas == 0 && gigas <= 200)
        {
            valor_gigas = gigas * 0.7;
        }
        else if (gigas > 200 && gigas <= 400)
        {
            valor_gigas = gigas * 1.1;
        }
        else if (gigas > 400 && gigas < 1000)
        {
            valor_gigas = gigas * 1.3;
        }
        else if (gigas > 1000)
        {
            valor_gigas = gigas * 1.5;
        }

        break;

    case 3:
        valor_abono = 700;
        if (gigas == 0 && gigas <= 200)
        {
            valor_gigas = gigas * 0.9;
        }
        else if (gigas > 200 && gigas <= 400)
        {
            valor_gigas = gigas * 1.2;
        }
        else if (gigas > 400 && gigas < 1000)
        {
            valor_gigas = gigas * 1.5;
        }
        else if (gigas > 1000)
        {
            valor_gigas = gigas * 1.7;
        }

        break;

    default:
        break;
    }

    importe_a_pagar = valor_abono + valor_gigas;

    printf("El importe a pagar es de %.2f", importe_a_pagar);
}
