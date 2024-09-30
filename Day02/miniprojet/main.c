
#include<stdio.h>
#include"fonction.c"


 main() {
    int choix;
    do {
        printf("1. Ajouter livre\n");
        printf("2. Afficher livre\n");
        printf("3.cherche un livre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher total des livres\n");
        printf("7. Quitter\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajoute_livr();
                break;
            case 2:
                afficherlivre();
                break;
                case 3 :
                Rechirch_livr();
                break;
            case 4:
                mettrejourquantit();
                break;
            case 5:
                suppremerlivre();
                break;
            case 6:
                affichertotallivres();
                break;
            case 7:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix <= 7);

    return 0;
}