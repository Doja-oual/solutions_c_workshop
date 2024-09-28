//Challenge 7 : Fonction d'Inversion de Chaîne
#include<stdio.h>
#include<stdlib.h>
void inversionChain(char caract[50]){
char X;
for (int i = 0; i < 50-1-i; i++){
    X=caract[i];
   caract[i]= caract[50-1-i];
   caract[50-1-i]=X;
    }
}

int main(){
    char caract[50],inverscaract[50];
    printf(" Entrez une chaîne de caractère :  ");
    gets(caract);
    inverscaract[50]= inversionChain( caract[50]);
    printf(" Entrez une chaîne de caractère : %s ",inverscaract[50]);

    return 0;
}