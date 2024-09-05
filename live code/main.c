#include <stdio.h>
#include <stdlib.h>


int main(){

    struct personne {

        char *nom;
        char *prenom;
        int age;
    };
    struct personne champs={"ABOUSSEBABA","OTHMAN",24};
    printf("%s\n %s\n %d",champs.nom,champs.prenom,champs.age);

    return 0;
}

