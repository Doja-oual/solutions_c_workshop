
#include<stdio.h>

#include "fonction.c"


void menu() {
    char choix;
    do {
        printf("****************\n");
        printf("1. Ajouter un contact.\n");
        printf("2. Modifier un contact.\n");
        printf("3. Supprimer un contact.\n");
        printf("4. Afficher tous les contacts.\n");
        printf("5. Rechercher un contact.\n");
        printf("0. Quitter.\n");
        printf("Entrer un choix: ");
        scanf(" %c", &choix);

        int N = choix - '0';
        if (N >= 0 && N <= 5) {
            switch (N) {
                case 1:
                    ajoutecontact();
                    break;
                case 2:
                    modifiercontact();
                    break;
                case 3:
                    Suprimecontact();
                    break;
                case 4:
                    affichecontact();
                    break;
                case 5:
                    recherchecontact();
                    break;
                case 0:
                    printf("Quitter le programme.\n");
                    exit(0);
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
        } else {
            printf("Erreur: entrer un nombre valide.\n");
        }
    } while (1);
}



 