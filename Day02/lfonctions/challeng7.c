//Challenge 7 : Fonction d'Inversion de Chaîne
#include<stdio.h>
#include<string.h>
void inversionChain(char caract[]){
    int longueur = strlen(caract);
    char X;
    for (int i = 0; i < longueur - 1 - i; i++)
    {
        X = caract[i];
        caract[i] = caract[longueur - 1 - i];
        caract[longueur - 1 - i] = X;
    }
}

int main(){
    char caract[]="khadija";
    
     inversionChain( caract);
    printf("  inverse chaîne de caractère : %s ",caract);

    return 0;
}