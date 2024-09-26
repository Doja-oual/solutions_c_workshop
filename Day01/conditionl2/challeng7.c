#include <stdio.h>

int main() {
    float R, D = 0, impots = 0;
    int S_T;

    
    printf("Entrez votre R annuel en euros : ");
    scanf("%f", &R);
    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &S_T);

    
    switch (S_T) {
        case 1: 
            D = 1000;
            break;
        case 2: 
             D= 2000;
            break;
        case 3: 
                    D = 3000;
            break;
        default:
            printf("Statut fiscal invalide.\n");
            return 1; 
    }

   
    

   
    if (R <= 20000) {
        impots = R * 0.05;
    } else if (R <= 50000) {
        impots = 20000 * 0.05 + (R - 20000) * 0.10;
    } else {
        impots = 20000 * 0.05 + 30000 * 0.10 + (R - 50000) * 0.20;
    }

   
    printf("Le montant des impôts à payer est : %.2f €\n", impots);

    return 0;
}