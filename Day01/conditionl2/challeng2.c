




#include <stdio.h>

int main() {
    int age, voiture, N_accidents;
     const float P_base= 4000 ;
     float prime = P_base ; 

  

    printf("Âge du conducteur (en années) : ");
    scanf("%d", &age);

    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &voiture);

    printf("Nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &N_accidents);

    

   
    if (age < 25) {
        prime *= 1.5;
    } else if (age > 65) {
        prime *= 1.2;
    }
   
    if (voiture == 1) {
        prime *= 2;
    } else if (voiture == 2) {
        prime *= 1.2;
    } else if (voiture == 3) {
        prime *= 1.1;
    } else {
        printf("Type de voiture invalide.\n");
        return 1;
    }

    
    if (N_accidents > 1) {
        prime =prime+prime * 1.3; 
    }

    
    printf("La prime d'assurance est : %.2f\n", prime);

    return 0;
}