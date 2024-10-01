#include<stdio.h>
#include<stdlib.h>
#include"variable.h"
#include"headr.h"



void ajoutecontact() {
    if (Nbrcontact < Max_contacts) {
        printf("entre le nom de contact : ");
        scanf(" %[^\n]", contacts[Nbrcontact].Nom);
        printf("entre le Numtele de contact : ");
        scanf(" %[^\n]", contacts[Nbrcontact].Numtele);
        printf("entre le email de contact : ");
        scanf(" %[^\n]", contacts[Nbrcontact].Email);
        Nbrcontact++;
        printf("Contact ajouté.\n");
    } else {
        printf("pas d'espace pour ajouter");
    }
}

int recherelement(char a[Max_nom]) {
    for (int i = 0; i < Nbrcontact; i++) {
        if (strcasecmp(a, contacts[i].Nom) == 0) {
            return i;
        }
    }
    return -1;
}

void aficherelement(int i) {
    printf("Contact %d:\n", i + 1);
    printf("Nom: %s\n", contacts[i].Nom);
    printf("Email: %s\n", contacts[i].Email);
    printf("Numtele: %s\n", contacts[i].Numtele);
    printf("--------------\n");
}

void modifiercontact() {
    char nomcontact[Max_nom];
    char nouvelleemail[max_email];
    char nouvelleNumtele[max_Numtele];

    printf("Entre le nom du contact à modifier: ");
    scanf(" %[^\n]", nomcontact);

    int output = recherelement(nomcontact);
    if (output != -1) {
        int choix;
        printf("1. Modifier email\n");
        printf("2. Modifier Numtele\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entre la nouvelle email: ");
                scanf(" %[^\n]", nouvelleemail);
                strcpy(contacts[output].Email, nouvelleemail);
                break;
            case 2:
                printf("Entre le nouveau Numtele: ");
                scanf(" %[^\n]", nouvelleNumtele);
                strcpy(contacts[output].Numtele, nouvelleNumtele);
                break;
            default:
                printf("Option invalide.\n");
                break;
        }
    } else {
        printf("Contact non trouvé.\n");
    }
}

void Suprimecontact() {
    char nomcontact[Max_nom];
    printf("Entre le nom du contact à supprimer: ");
    scanf(" %[^\n]", nomcontact);

    int supp = recherelement(nomcontact);
    if (supp != -1) {
        for (int j = supp; j < Nbrcontact - 1; j++) {
            strcpy(contacts[j].Nom, contacts[j + 1].Nom);
            strcpy(contacts[j].Email, contacts[j + 1].Email);
            strcpy(contacts[j].Numtele, contacts[j + 1].Numtele);
        }
        Nbrcontact--;
        printf("Contact supprimé avec succès!\n");
    } else {
        printf("Contact non trouvé.\n");
    }
}

void affichecontact() {
    if (Nbrcontact == 0) {
        printf("Aucun contact à afficher.\n");
    } else {
        for (int i = 0; i < Nbrcontact; i++) {
            aficherelement(i);
        }
    }
}

void recherchecontact() {
    char nomcontact[Max_nom];
    printf("Entre le nom recherché: ");
    scanf(" %[^\n]", nomcontact);

    int index = recherelement(nomcontact);
    if (index != -1) {
        aficherelement(index);
    } else {
        printf("Contact non trouvé.\n");
    }
}