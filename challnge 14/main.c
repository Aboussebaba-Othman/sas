#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int tableau[6];

    printf("Veuillez entrer les 6 éléments du tableau :\n");
    for (i = 0; i < 6; i++) {
        printf(" tableau[%d]  : ",i);
        scanf("%d", &tableau[i]);
    }
    printf("LE MULTIPLICATION D'UN TROIX ELEMENT EST  :\n");


return 0;
}
