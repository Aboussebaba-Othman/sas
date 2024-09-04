#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;


    printf("entre la nombre des elements ? ");
    scanf("%d", &n);


    int tableau[n];

    printf("Veuillez entrer les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i+1);
        scanf("%d", &tableau[i]);
    }


    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
    return 0;
}
