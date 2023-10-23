typedef struct estudiante
{
    int matricula;
    char nombre[50];
    int cant;
    int notas[20];
} t_estudiante;

void altaEstudiante()
{
    t_estudiante R;
    int i, tam = sizeof(t_estudiante);
    char resp = 'S';
    FILE *arch;
    while (resp == 'S')
    {
        arch = fopen("aprobada.dat", "a");
        printf("Ingrese Matricula, AyN y cantidad de materias aprobadas\n");
        scanf("%d", &R.matricula);
        gets(R.nombre);
        scanf("%d", &R.cant);
        printf("Ingrese %d notas\n", R.cant);
        for (i = 0; i < R.cant; i++)
        {
            scanf("%d", &R.notas[i]);
        }
        fwrite(&R, tam, 1, arch);
        fclose(arch);
        printf("Continia ingresando estudiantes?\n");
        scanf("%c", &resp);
    }
    system("pause");
}

void mostrarEstudiante()
{
    FILE *pf;
    t_estudiante R;
    int i;
    pf = fopen("aprobada.dat", "r");
    if (pf != NULL)
    {
        printf("Mostrar datos del curso.\n");
        fread(&R, sizeof(R), 1, pf);
        while (!feof(pf))
        {
            printf("Matricula: %d\n", R.matricula);
            printf("Ap. y Nombre: %s\n", R.nombre);
            printf("Calificaciones");
            for (i = 0; i < R.cant; i++)
            {
                printf("%d\t", R.notas[i]);
            }
            fread(&R, sizeof(R), 1, pf);
        }
    }
    else
    {
        printf("Error de apertura del archivo\n");
    }
    fclose(pf);
    system("pause");
}

void bajaEstudiante()
{
    FILE *pf, *pfaux;
    t_estudiante R;
    char nom[50];
    pf = fopen("aprobada.dat", "r");
    pfaux = fopen("auxiliar.dat", "w");
    printf("Ingrese el nombre del estudiante a eliminar\n");
    gets(nom);
    fread(&R, sizeof(t_estudiante), 1, pf);
    while (!feof(pf))
    {
        if (strcmp(nom, R.nombre) != 0)
        {
            fwrite(&R, sizeof(t_estudiante), 1, pfaux);
        }
        fread(&R, sizeof(R), 1, pf);
    }
    fclose(pf);
    fclose(pfaux);
    remove("aprobada.dat");
    rename("auxiliar.dat", "aprobada.dat");
    system("pause");
}

int menu()
{
    int op;
    do
    {
        printf("Seleccione una opcion para archivos:\n");
        printf("1: Dar de alta a un estudiante.\n");
        printf("2: Dar de baja a un estudiante.\n");
        printf("3: Mostrar un curso completo.\n");
        printf("4: Mostrar un estudiante.\n");
        printf("0: Fin App.\n");
        scanf("%d", &op);
    } while ((op > 0) || (op < 5));
    return op;
}
