#include<stdio.h>

int main() {
    float C_E;  
    int T_U;    
    int T_contra;  
    
    printf("Entrez le type de contrat (0 pour standard et 1 pour réduit) : ");
    scanf("%d", &T_contra);  
    
    printf("Entrez le type d'utilisateur (1 pour résidentiel et 2 pour commercial) : ");
    scanf("%d", &T_U); 
    
    switch(T_U) {
        case 1:  
            if (T_contra == 0) {
                printf("Consommation d'électricité est: 0.20 £/kwh\n");
            } else if (T_contra == 1) {
                printf("Consommation d'électricité est: 0.15 £/kwh\n");
            } else {
                printf("Type de contrat non valide.\n");
            }
            break;

        case 2:  
            if (T_contra == 0) {
                printf("Consommation d'électricité est: 0.30 £/kwh\n");
            } else if (T_contra == 1) {
                printf("Consommation d'électricité est: 0.25 £/kwh\n");
            } else {
                printf("Type de contrat non valide.\n");
            }
            break;

        default:
            printf("Type d'utilisateur non valide.\n");
            break;
    }
    printf("entre la Consommation d'électricité ");
    scanf("%f",&C_E);
    if (C_E>500){
        printf("consomation est : %f",C_E*0.1);
    }
    else{
        printf(" pas supplément");
    }
    return 0;
    
}