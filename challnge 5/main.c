#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;


    printf("entre la nombre des elements ? ");
    scanf("%d", &n);


    int tableau[n];

    printf("Veuillez entrer les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i+1);
        scanf("%d", &tableau[i]);
    }

    int somme = 0;
     for (i = 0; i < n; i++) {
        somme = somme + tableau[i];
    }
    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}
