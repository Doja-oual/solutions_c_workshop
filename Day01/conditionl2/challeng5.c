// Challenge 5 : Planification de Voyage

#include<stdio.h>
int main(){
    float Budget ;
    int Destination ,Nombre_personnes;
    printf("entre badget de voyage :");
    scanf("%d",&Budget);
     printf("Entrez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &Destination);
    printf("Entrez le nombre de personnes : ");
    scanf("%d", &Nombre_personnes);
    
    if(Budget >= 1000){
        printf(" Voyage haut de gamme");
    }
    else if(Budget>=500 && Budget<=1000 ){
        printf("Voyage moyen");
    }
    else {
        printf("Voyage économique");
    }
   printf("\n");

    switch(Destination) {
        case 1: 
            if (Budget >= 1000 && Nombre_personnes > 2) {
                printf("Destination recommandée : Plage\n");
            } else {
                printf("Conditions non remplies pour la plage.\n");
            }
            break;

        case 2: 
            if (Budget >= 500 && Nombre_personnes <= 2) {
                printf("Destination recommandée : Montagne\n");
            } else {
                printf("Conditions non remplies pour la montagne.\n");
            }
            break;

        case 3: 
            printf("Destination recommandée : Ville\n");
            break;

       
    }

    return 0;
    
}