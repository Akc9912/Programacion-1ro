void leerLista(char Mat[][12], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        gets(Mat[i]);
    }
}
void mostrarLista(char Mat[][12], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        puts(Mat[i]);
    }
}
void mostrarListaEn(char L[][12], int indice)
{
    puts(L[indice]);
}
void contarLetras(char L[][12], int V[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        V[i] = strleng(L[i]);
    }
}
void mostrarVector(int V[])
{
    puts(V);
}
void contarVocales(char L[][12], int L2[][5], int F, int C)
{
    int i, j;
    for (i = 0; i < F; i++)
    {
        for (j = 0; j < C; j++)
        {
            char vocal = tolower(L[i][j]);
            switch (vocal)
            {
            case 'a':
                L2[i][0] += 1;
                break;
            case 'e':
                L2[i][1] += 1;
                break;
            case 'i':
                L2[i][2] += 1;
                break;
            case 'o':
                L2[i][3] += 1;
                break;
            case 'u':
                L2[i][4] += 1;
                break;
            default:
                break;
            }
        }
    }
}