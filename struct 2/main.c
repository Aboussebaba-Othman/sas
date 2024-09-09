#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct etudiant {
        char nom[30];
        char prenom[30];
        int note;
    };

    struct etudiant fn[3];

    for(int i=0;i<3;i++){
        printf("entre le nom : ");
        scanf("%s",&fn[i].nom);
        printf("entre le prenom : ");
        scanf("%s",&fn[i].prenom);
        printf("entre le note : ");
        scanf("%d",&fn[i].note);
    }

    for(int i=0;i<3;i++){
        printf("%s\n %s\n %d",fn[i].nom,fn[i].prenom,fn[i].note);
    }
    return 0;
}
