#include<stdio.h>
#include<stdlib.h>
#include "haedre.h"
#include"variable.h"

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