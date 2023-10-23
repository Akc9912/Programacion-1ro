typedef struct cliente
{
    int numeroCliente;
    char nombre[80];
    float saldo;
} t_cuenta;

void cargarCli()
{
    t_cuenta r;
    char resp = 's';
    FILE *archivo;
    archivo = fopen("clientes.dat", "a");
    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo\n");
    }
    while (resp == 's' || resp == 'S')
    {

        printf("\nIngrese Nro de cliente: ");
        scanf("%d", &r.numeroCliente);
        printf("Ingrese el Nombre: ");
        scanf("%s", r.nombre);
        printf("ingrese el saldo: ");
        scanf("%f", &r.saldo);
        fwrite(&r, sizeof(t_cuenta), 1, archivo);
        printf("Desea ingresar otro cliente?\ns=si - n=no\n");
        getchar();
        scanf("%c", &resp);
    }
    fclose(archivo);
    system("pause");
}

void MuestraCli()
{
    FILE *pf;
    t_cuenta r;
    char nom[80];

    pf = fopen("clientes.dat", "r");
    printf("\nIngrese Nombre a buscar\n");
    scanf("%s", &nom);
    fread(&r, sizeof(t_cuenta), 1, pf);
    while (strcmp(r.nombre, nom) != 0)
    {
        fread(&r, sizeof(t_cuenta), 1, pf);
    }
    printf("%d ; %s ; %.2f\n", r.numeroCliente, r.nombre, r.saldo);
    fclose(pf);
}
