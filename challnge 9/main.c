#include <stdio.h>
#include <stdlib.h>



int main() {
    int n,i,max;
    printf("entre la nombre des elements ? ");
    scanf("%d", &n);


    int tableau[n];

    printf("Veuillez entrer les %d �l�ments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i+1);
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];
     for (i = 0; i < n; i++) {
        if(tableau[i]>max)
        max = tableau[i];
    }
    printf("Le plus grand �l�ment du tableau est : %d\n", max);

    return 0;
}


