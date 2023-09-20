/*Ingresar el nombre, numero de matricula y tres notas correspondientes a los
parciales de la materia, calcular el promedio e imprimir el nombre, numero de
matricula y condicion del alumno, considerando:
APROBADO con un promedio mayor o igual a 6
SOBRESALIENTE si es igual o superior a 9
DESAPROBADO en cualquier otro cas*/

#include <stdio.h>

int main()
{

    int nota1, nota2, nota3, promedio, matricula;
    char nombre[50], condicion[20];

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &nombre);
    printf("Ingrese el numero de matricula: ");
    scanf("%d", &matricula);
    printf("Ingrese la primera nota: ");
    scanf("%d", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%d", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%d", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 9)
    {
        sprintf(condicion, "SOBRESALIENTE");
    }
    else if (promedio >= 6)
    {
        sprintf(condicion, "APROBADO");
    }
    else
    {
        sprintf(condicion, "DESAPROBADO");
    }

    printf("Nombre del alumno: %s\n", nombre);
    printf("Numero de matricula: %d\n", matricula);
    printf("Condicion: %s", condicion);
}