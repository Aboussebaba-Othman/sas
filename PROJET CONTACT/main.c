#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact{
    char nom[50];
    char num_tel[50];
    char email[50];

};
struct contact table[100];
int nbr_contact =0;
void ajeuter_contact(){
    printf("entre les informations de contact\n");
    printf("entre le nom de contact:\t");
    scanf(" %[^\n]",table[nbr_contact].nom);
    printf("entre le num de contact:\t");
    scanf(" %[^\n]",table[nbr_contact].num_tel);
    printf("entre email:\t");
    scanf(" %[^\n]",table[nbr_contact].email);

}
void Supprimer_contact(){
    int contact_charch;
    printf("entre le nom de contact");


}

int main()
{
     int choix;
    do{
        printf("------- MENU-----------\n");
        printf("1 : Ajouter un Contact\n");
        printf("2 : Modifier un Contact\n");
        printf("3 : Supprimer un Contact\n");
        printf("4 : Afficher Tous les Contacts \n");
        printf("5 : Rechercher un Contact\n");
        printf(" choisir votre choix :\n");
        scanf("%d",&choix);

        switch(choix){
        case 1:
            ajeuter_contact();
            break;
        }
    }
        while(!choix);
    return 0;
}
