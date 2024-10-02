#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Max_contacts 100
#define Max_nom 50
#define max_email 50
#define max_Numtele 50
int Nbrcontact = 0;

struct contact {
    char Nom[Max_nom];
    char Numtele[max_Numtele];
    char Email[max_email];
};

struct contact contacts[Max_contacts];

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

void TriAlpha(struct contact CO[]){
    for(int i=0;i<Nbrcontact  - 1;i++){
        for(int j=0, k=0;j<Nbrcontact -i -1;j++){
            if(strcasecmp(CO[j].Nom, CO[j+1].Nom) > 0){
                 struct contact T;
                T = CO[j];
                CO[j] = CO[j+1];
                CO[j+1] = T;
            }
        }
    }affichecontact(contacts);
}
void Trialfaparsiliction(struct contact CO[]){
    for(int i=0;i<Nbrcontact;i++){
        int index=i;
        for(int j=i+1;j<Nbrcontact;j++){
            if(strcasecmp(CO[index].Nom,CO[j].Nom)<0){
                  struct contact T;
                T = CO[i];
                CO[i] = CO[j];
                CO[j] = T;
            }
        }
    }affichecontact(contacts);
}
    
   

void menu() {
    char choix;
    do {
        printf("****************\n");
        printf("1. Ajouter un contact.\n");
        printf("2. Modifier un contact.\n");
        printf("3. Supprimer un contact.\n");
        printf("4. Afficher tous les contacts.\n");
        printf("5. Rechercher un contact.\n");
         printf("6. tri alphabitique tri bublle.\n");
         printf("7. tri alphabitique par silection.\n");
        printf("0. Quitter.\n");
        printf("Entrer un choix: ");
        scanf(" %c", &choix);

        int N = choix - '0';
        if (N >= 0 && N <= 7) {
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
                    case 6:
                  TriAlpha(contacts);
                    break;
                     case 7:
                    Trialfaparsiliction(contacts);
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
    } while (1);//boucle infinie 
}

int main() {
    menu();
    return 0;
}

 