void sustituirEspacios(char cadena[])
{
    int i = 0;
    do
    {
        if (cadena[i] == ' ')
        {
            cadena[i] = '*';
        }
        i++;
    } while (cadena[i] != '\0');
}

void ingresarDatos(char c1[], char c2[], char c3[])
{
    char espacio[2];
    espacio[0] = ' ';
    printf("Ingrese un nombre: ");
    fflush(stdin);
    gets(c1);
    strcat(c1, espacio);
    printf("Ingrese el primer apellido: ");
    fflush(stdin);
    gets(c2);
    strcat(c2, espacio);
    printf("Ingrese el segundo apellido: ");
    fflush(stdin);
    gets(c3);
}
void combinarCadenas(char c1[], char c2[], char c3[], char c4[])
{
    strcat(c1, c2);
    strcat(c1, c3);
    strcat(c1, c4);
}
void convertirMayus(char cadena[])
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cadena[i] = toupper(cadena[i]);
    }
    puts(cadena);
}
void convertirMinus(char cadena[])
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
    puts(cadena);
}

int encontrarApellido(char cadena[], char apellido[])
{
    int longitudCadena = strlen(cadena);
    int longitudApellido = strlen(apellido);
    int posicion = -1; // Inicializa la posición con un valor que no se encontró el apellido (para return)

    // Realiza la validacion siempre que posicion sia -1(no hay coincidencia)

    for (int i = 0; i < longitudCadena && posicion == -1; i++)
    {
        int coincidencia = 1;

        // cuando encuetra la primera letra valida el resto de las letras

        for (int j = 0; j < longitudApellido && coincidencia; j++)
        {
            if (cadena[i + j] != apellido[j])
            {
                coincidencia = 0;
            }
        }
        // Si encuentra una coincidencia le asigna un valor a posicion (que sea distinta de -1 si es que se encuentra el apellido)
        if (coincidencia == 0)
        {
            posicion = i;
        }
    }
    return posicion;
}
void verificarApellido(char cadena[])
{
    char apellido[40];
    printf("Ingrese el apellido que desea verificar: ");
    gets(apellido);

    int posicion = encontrarApellido(cadena, apellido);

    if (posicion != -1)
    {
        printf("El apellido '%s' se encuentra en la cadena.\n", apellido);
    }
    else
    {
        printf("El apellido '%s' no se encuentra en la cadena.\n", apellido);
    }
}
void primeraEnMayuscula(char cadena[])
{
    int i, x = strlen(cadena);
    cadena[0] = toupper(cadena[0]);
    for (i = 0; i < x; i++)
    {
        if (cadena[i] == ' ')
        {
            cadena[i + 1] = toupper(cadena[i + 1]);
        }
    }
    puts(cadena);
}
void encontrarEnCadena(char cadena[])
{
    char caracter;
    int i, x = strlen(cadena);
    printf("Ingrese un caracter para buscar coincidencia: ");
    scanf("%c", &caracter);
    for (i = 0; i < x; i++)
    {
        if (cadena[i] == caracter)
        {
            printf("El caracter '%c' se encuentra en la cadena", caracter);
        }
    }
}
void reemplazarÑ(char cadena[])
{
    int i, x = strlen(cadena);
    for (i = 0; i < x; i++)
    {
        if (cadena[i] == 'n' && cadena[i + 1] == 'y')
        {
            cadena[i] = 'ñ';
            for (i = i; i < x; i++)
            {
                cadena[i + 1] = cadena[i + 2];
            }
        }
    }
}
void invertirCadena(char cadena[])
{
    int i, j, x = strlen(cadena);
    char aux[x + 1];
    for (i = 0, j = x - 1; i < x; i++, j--)
    {
        aux[j] = cadena[i];
    }
    aux[x] = '\0';
    strcpy(cadena, aux);
    puts(cadena);
}

int validarEmail(char cadena[])
{
    int arroba = 0, punto = 0;

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == '@')
        {
            arroba++;
        }
        else if (cadena[i] == '.')
        {
            punto++;
        }
    }

    if (punto == 1 && arroba == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ingresarEmail()
{
    char email[100];

    printf("Ingrese un email: ");
    scanf("%s", email);

    if (validarEmail(email) == 1)
    {
        printf("El email es valido.\n");
    }
    else
    {
        printf("El email no es valido.\n");
    }
}