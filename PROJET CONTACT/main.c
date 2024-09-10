#include <stdio.h>
#include <string.h>

struct contact {
    char nom[100];
    int numero;
    char email[100];
    int ID;
};
struct contact st[100];

// Global variables
int nbr_contact = 0;
int choix;
struct contact table[100];
char nomContact_modifier[100];
int lastItem = 0;

// Function to add a new contact
void ajouter_contact() {
    printf("---- Ajouter un contact ----\n");
    printf("Tapez le nom: \t");
    scanf(" %[^\n]s", table[nbr_contact].nom);

    printf("Tapez le numéro: \t");
    scanf("%d", &table[nbr_contact].numero);

    printf("Tapez l'email: \t");
    scanf(" %[^\n]s", table[nbr_contact].email);

    table[nbr_contact].ID = 123 + lastItem;
    lastItem++;
    nbr_contact++;
}

// Function to modify a contact
void modifier_contact() {
    int count = 0, x;

    printf("Entrez le nom du contact à modifier: \t");
    scanf(" %[^\n]s", nomContact_modifier);

    for (int i = 0; i < nbr_contact; i++) {
        if (strcmp(nomContact_modifier, table[i].nom) == 0) {
            printf("-----------------------\n");
            printf("Nom: %s\n", table[i].nom);
            printf("Numéro: %d\n", table[i].numero);
            printf("Email: %s\n", table[i].email);
            printf("ID: %d\n", table[i].ID);
            count++;
        }
    }

    if (count > 1) {
        printf("Entrez l'ID: \t");
        scanf("%d", &x);

        for (int i = 0; i < nbr_contact; i++) {
            if (table[i].ID == x) {
                printf("Modifier le contact:\n");
                printf("Nom: \t");
                scanf(" %[^\n]s", table[i].nom);
                printf("Email: \t");
                scanf(" %[^\n]s", table[i].email);
                printf("Numéro: \t");
                scanf("%d", &table[i].numero);
                printf("*******************************\n");
                return;
            }
        }
    } else if (count == 1) {
        for (int i = 0; i < nbr_contact; i++) {
            if (strcmp(nomContact_modifier, table[i].nom) == 0) {
                printf("Modifier le contact:\n");
                printf("Nom: \t");
                scanf(" %[^\n]s", table[i].nom);
                printf("Email: \t");
                scanf(" %[^\n]s", table[i].email);
                printf("Numéro: \t");
                scanf("%d", &table[i].numero);
                printf("*******************************\n");
                return;
            }
        }
    } else {
        printf("Aucun contact trouvé!!!!!\n");
    }
}

// Function to display all contacts
void affichage() {
    printf("------- Affichage des contacts --------\n");
    for (int i = 0; i < nbr_contact; i++) {
        printf("-------------------\n");
        printf("Nom: %s \n", table[i].nom);
        printf("Numéro: %d \n", table[i].numero);
        printf("Email: %s \n", table[i].email);
    }
}

int main() {
    do {
        printf("----- Acceuil --------\n");
        printf("1) Ajouter un contact...\n");
        printf("2) Modifier un contact...\n");
        printf("3) Supprimer un contact...\n");
        printf("4) Afficher un contact...\n");
        printf("5) Chercher un contact...\n");
        printf("0) Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_contact();
                break;
            case 2:
                modifier_contact();
                break;
            case 3:
                // Ajouter logique pour supprimer le contact (non implémenté)
                break;
            case 4:
                affichage();
                break;
            default:
                if (choix != 6) {
                    printf("Oopps, choix invalide!\n");
                }
                break;
        }
    } while (choix != 6);

    return 0;
}
