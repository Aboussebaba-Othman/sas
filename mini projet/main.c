
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    struct liver{
    char titre[50];
    char auteur[50];
    int quantiti;
    float prix;

};
    struct liver table[100];
    int nbr_livers = 0;


    void ajeuter(){
    printf("enter les informations de liver :\n");
    printf("entre le titre de liver:\t");
    scanf(" %[^\n]s",table[nbr_livers].titre);

    printf("entre le auteur de liver:\t");
    scanf(" %[^\n]s",table[nbr_livers].auteur);

    printf("entre le prix de liver:\t");
    scanf("%f",&table[nbr_livers].prix);

    printf("entre le quantiti de liver:\t");
    scanf("%d",&table[nbr_livers].quantiti);
    nbr_livers++;

    }
    void affichage(){
        printf("les livers disponible est :\n");
        for(int i=0;i<nbr_livers;i++){
            printf("le titre :%s\n",table[i].titre);
            printf("le auteur :%s\n",table[i].auteur);
            printf("le prix :%.2f DH\n",table[i].prix);
            printf("le quantiti :%d\n",table[i].quantiti);
            printf("------------------------\n");
        }

    }
    char titre_cherch[50];
    void recherche(){
    printf("entre le titre de livre qui recherche:\t");
    scanf(" %[^\n]s", titre_cherch);
    for(int i=0; i<nbr_livers;i++){
        if(strcmp(table[i].titre,titre_cherch)==0){
            printf("le titre :%s\n",table[i].titre);
            printf("le auteur :%s\n",table[i].auteur);
            printf("le prix :%f\n",table[i].prix);
            printf("le quantiti :%d\n",table[i].quantiti);
            }
        }

    }
    void mettre_ajeur(){
        char nome_cherch[50];
        int neuvau_quantiti =0;

        printf("entre le titre cherch :\n");
        scanf(" %[^\n]s",nome_cherch);
        for(int i=0;i<nbr_livers;i++){
            if(strcmp(table[i].titre,nome_cherch)==0){

                printf("le titre :%s\n",table[i].titre);
                printf("le quantiti :%d\n",table[i].quantiti);



            printf("entre le neuvau quantiti \t");
            scanf("%d",&neuvau_quantiti);
            table[i].quantiti = neuvau_quantiti + table[i].quantiti ;
            printf("LE VEUVAU QUANTITI EST :%d\n",table[i].quantiti);


            }
        }
    }
    void suprime(){
        char liver_suprime[50];
        int exest = 0;
    printf("entre le titre de liver qui seprimer\n");
    scanf(" %[^\n]s",liver_suprime);
        for(int i=0;i<nbr_livers;i++){
            if(strcmp(table[i].titre,liver_suprime)==0){
                for(int j=i;i<nbr_livers-1;i++){
                    table[j] = table[j+1];
                    nbr_livers--;
                    exest++;
                    printf("pass avex ssucsse .\n");
                }

            }
        }
        if(!exest){
            printf("errur");
        }

    }



    void total_livers(){
        int total =0;
        printf("----------------\n");
        for(int i=0;i<nbr_livers;i++){
            total = total + table[i].quantiti;
        }
        printf("le nombre des livers disponible est :%d\n ",total);

        printf("----------------\n");

    }


    int main(){
        int choix;
    do{
        printf("------- MENU-----------\n");
        printf("1 : ajeuter un livre\n");
        printf("2 : afficher tout les livers\n");
        printf("3 : recherche un livre\n");
        printf("4 : mese ajour \n");
        printf("5 : supprimer un livre\n");
        printf("6 : afficher le nombre total\n");
        printf(" choisir votre choix :\n");
        scanf("%d",&choix);

        switch(choix){
            case 1:
                ajeuter();
            break;
            case 2:
                affichage();
            break;
            case 3:
                recherche();
                break;
            case 4:
                mettre_ajeur();
                break;
            case 5:
                suprime();
                break;
            case 6:
                total_livers();
            break;

        }
    }while(choix != 7);


    return 0;
}

