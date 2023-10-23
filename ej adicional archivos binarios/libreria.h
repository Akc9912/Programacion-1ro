typedef struct alumno
{
    int matricula;
    char AyN[100];
    int materiasAprobadas;
    int codMateria[60];
} t_alumno;

void cargarAlumno(t_alumno *alumno)
{
    int i;
    t_alumno aux;
    printf("Ingrese el numero de matricula: ");
    scanf("%d", &aux.matricula);
    printf("Ingrese AyN: ");
    scanf("%s", &aux.AyN);
    printf("Ingrese la cantidad de materias aprobadas: ");
    scanf("%d", &aux.materiasAprobadas);
    printf("Ingrese los codigos de las materias: ");
    for (i = 0; i < aux.materiasAprobadas; i++)
    {
        scanf("%d", &aux.codMateria[i]);
    }
    *alumno = aux;
}

void alta()
{
    t_alumno r;
    char resp = 's';
    FILE *archivo;
    archivo = fopen("aprobadas.dat", "a");
    if (archivo == NULL)
    {
        printf("Error de apertura del archivo\n");
    }
    while (resp == 's' || resp == 'S')
    {
        cargarAlumno(&r);
        printf("Desea cargar mas alumnos?");
        scanf("%c", &resp);
    }
}