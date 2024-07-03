#include <stdio.h>

int main() { 

    int a,;

    printf("Ingrese el valor de a");
    scanf("%d", &a);

    if (a/2 == 0) {
        printf("%d es multiplo de %d", a);
        if (a/3 == 0 ) {
            printf("Y tambien es multiplo de %d\n",3);
            printf("por lo tanto lo es de %d\n",);
        } else {
            printf("pero no lo es de %d\n");
        }
    } else {
        if (a/3 == 0) {
            printf("%d es multiplo de %d pero no de %d", a);

        } else {
            printf("%d no es multiplo de %d ni de %d", a);
        }
    }
}