#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,i,facteur;
    printf("entre la nombre des elements ? ");
    scanf("%d", &n);


    int tableau[n];

    printf("Veuillez entrer les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i);
        scanf("%d", &tableau[i]);
    }
     printf("entre le facteur de multiplication");
     scanf("%d",&facteur);


     for (i = 0; i < n; i++) {
        printf("%d\n",tableau[i] * facteur);
    }


    return 0;

}
