#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b;


    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);

    int somme(int a, int b) {
    return a + b;
}
    int resultat = somme(a, b);
    printf("La somme de %d et %d est : %d\n", a, b, resultat);

    return 0;
}
