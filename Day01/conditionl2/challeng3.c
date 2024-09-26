#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbr_t_j_A, nbr_U, status, jour_R;
    printf("Nombre total de jours de congés accordés :");
    scanf("%d", &nbr_t_j_A);
    
    printf("Nombre de jours de congés utilisés :");
    scanf("%d", &nbr_U);
    
    printf("\nStatut de l'employé (0 pour temps partiel, 1 pour temps plein) :");
    scanf("%d", &status);
    
    
    
    if(nbr_U > nbr_t_j_A) {
        printf("alerte");
        return 0;
    }
    
    if(status == 1){
        jour_R = nbr_t_j_A - nbr_U;
            printf("jour(s) restant(s) = %dj", jour_R);
    } else if (status == 0) {
        jour_R = (nbr_t_j_A/2) - nbr_U;
            printf("jour(s) restant(s) = %dj", jour_R);
    }
    
    return 0;
}