int main(){

    int S,A;
    float R;

    printf("entrer score (0 - 100):");
    scanf("%d", &S);

    printf("entrer Anciennete (annees):");
    scanf("%d", &A);

    printf("entrer Recompenses (0 pour aucune, 1 pour une, 2 pour deux ou plus):");
    scanf("%f", &R);

    if(S >= 90 && A >= 5){
        printf("Excellente");
    } else if(S >= 75 && A >= 3){
        printf("Bonne");
    } else if(S >= 50 && A < 3){
        printf("Satisfaisante");
    } else if(S < 50) {
        printf("Insuffisante");
    } 

    if(R == 1) {
        printf("Recompense = %.2f", 0.1*R);
    }else if(R >= 2) {
        printf("Recompense = %.2f", 0.2*R);
    }


}