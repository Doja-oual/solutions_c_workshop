#include<stdio.h>
int main (){
    int choix;
    int année ;
    printf("entre année : ");
    scanf("%d",&année);
    
    printf("Menu de Conversion :");
    printf("\n");
    printf("\n1 - Coversion en mois");
    printf("\n2 - Coversion en jours");
    printf("\n3 - Coversion en heures");
    printf("\n4 - Coversion en minutes");
    printf("\n5 - Coversion en secondes");
    printf("\n====Coversion en secondes");
    printf("\n");
    printf("\nentrer une Choix :");
    scanf("%d",&choix);
    
    switch (choix)
    {
    case 1:    printf("les jours de année est : %d",année*356);
    break;
    case 2:    printf("les moins de année est : %d",année*12);
    break;
    case 3:   printf("les Heures de année est : %d",année*356*24);
    break;
    case 4:   printf("les minutes de année est : %d",année*356*24*60);
    break;
    case 5:  printf("les socondes de année est :%d",année*356*24*3600);
    

        break;
        

}


}