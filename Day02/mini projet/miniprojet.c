#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_livr 200
#define Max_Titre 100
#define Max_Auteur 100

char titre[Max_livr][Max_Titre];
char auteur[Max_livr][Max_Auteur];
float prix[Max_livr];
int quantite[Max_livr];
int nombre_livr = 0;

void ajoute_livr() {
    if (nombre_livr < Max_livr) {
        printf("Titre de livre: ");
        scanf("%s", titre[nombre_livr]);
        printf("Auteur de livre: ");
        scanf("%s", auteur[nombre_livr]);
        printf("Prix de livre: ");
        scanf("%f", &prix[nombre_livr]);
        printf("Quantité de livre: ");
        scanf("%d", &quantite[nombre_livr]);
        nombre_livr++;
        printf("Livre ajouté.\n");
    } else {
        printf("Pas d'espace dans le stock.\n");
    }
}

void afficherlivre() {
    if (nombre_livr == 0) {
        printf("Aucun livre disponible.\n");
    } else {
        for (int i = 0; i < nombre_livr; i++) {
            printf("Livre %d:\n", i + 1);
            printf("Titre: %s\n", titre[i]);
            printf("Auteur: %s\n", auteur[i]);
            printf("Prix: %.2f\n", prix[i]);
            printf("Quantité: %d\n", quantite[i]);
            printf("----------------------\n");
        }
    }
}
void Rechirch_livr(){
    char titrerecherch[Max_Titre];
    printf("entre un titre de recherch :");
    scanf("%s",titrerecherch);
    for(int i=0;i<nombre_livr;i++){
        if (strcasecmp(titre[i], titrerecherch) == 0) {
           printf("livre de recherch est : %s",titre[i]);
           printf("livre de recherch est : %s",auteur[i]);
           printf("livre de recherch est : %s",quantite[i]);
           }
return;
    }

}

void mettrejourquantit() {
    char titreRecherch[Max_Titre];
    int nouvellequantite;
    printf("Entrez un titre: ");
    scanf("%s", titreRecherch);
    for (int i = 0; i < nombre_livr; i++) {
        if (strcasecmp(titre[i], titreRecherch) == 0) {
            printf("Entrer la nouvelle quantité: ");
            scanf("%d", &nouvellequantite);
            quantite[i] = nouvellequantite;
            printf("Titre de nouvelle quantité: %s\n", titre[i]);
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

void suppremerlivre() {
    char titresupprime[Max_Titre];
    printf("Entrez le titre de livre à supprimer: ");
    scanf("%s", titresupprime);
    for (int i = 0; i < nombre_livr; i++) {
        if (strcasecmp(titre[i], titresupprime) == 0) {
            for (int j = i; j < nombre_livr - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            nombre_livr--;
            printf("Livre supprimé avec succès!\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

void affichertotallivres() {
    int total = 0;
    for (int i = 0; i < nombre_livr; i++) {
        total += quantite[i];
    }
    printf("Nombre total de livres en stock: %d\n", total);
}

int main() {
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
/*Run:1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 1
Titre de livre: khadija
Auteur de livre: khadija
Prix de livre: 125
Quantité de livre: 20
Livre ajouté.
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 
2
Livre 1:
Titre: khadija
Auteur: khadija
Prix: 125.00
Quantité: 20
----------------------
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 3
Entrez un titre: khadija
Entrer la nouvelle quantité: 25
Titre de nouvelle quantité: khadija
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 4
Entrez le titre de livre à supprimer: khadija
Livre supprimé avec succès!
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 4
Entrez le titre de livre à supprimer: khadoja
Livre non trouvé.
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix: 5
Nombre total de livres en stock: 0
1. Ajouter livre
2. Afficher livre
3. Mettre à jour la quantité d'un livre
4. Supprimer un livre
5. Afficher total des livres
6. Quitter
Entrer votre choix:*/