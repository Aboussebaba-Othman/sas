#include <stdio.h>
#include <stdlib.h>



int main() {
    int n,i;
    int element;
    int a=0;


    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];


    printf("Entrez %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf(" tableau[%d]  : ",i);
        scanf("%d", &tableau[i]);
    }


    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);


    for (int i = 0; i < n; i++) {
        if (tableau[i] == element) {

            a=1;
            break;

        }

    }
    if(a){
           printf("L'element %d est present au position %d.\n", element, i);
    }
    else
        printf("l'element ne pas trouve");
    return 0;
}
