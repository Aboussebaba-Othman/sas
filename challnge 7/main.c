#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,min;
    printf("entre la nombre des elements ? ");
    scanf("%d", &n);


    int tableau[n];

    printf("Veuillez entrer les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i+1);
        scanf("%d", &tableau[i]);
    }

    min = tableau[0];
     for (i = 0; i < n; i++) {
        if(tableau[i]<min)
        min = tableau[i];
    }
    printf("Le plus grand élément du tableau est : %d\n", min);

    return 0;

}
