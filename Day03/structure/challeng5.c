#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creerLivre(const char* titre, const char* auteur, int annee) {
    struct Livre monLivre; // Nom de variable plus descriptif

    strcpy(monLivre.titre, titre);
    strcpy(monLivre.auteur, auteur);
    monLivre.annee = annee;

    return monLivre;
}

void afficherLivre(struct Livre livreAffiche) {
    printf("Titre : %s\n", livreAffiche.titre);
    printf("Auteur : %s\n", livreAffiche.auteur);
    printf("Année : %d\n", livreAffiche.annee);
}

int main() {
    struct Livre premierLivre = creerLivre("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
afficherLivre(premierLivre);

    return 0;
}
