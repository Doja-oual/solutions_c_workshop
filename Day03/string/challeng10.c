//Trouver un Sous-String

#include<stdio.h>
#include<string.h>
int main(){

char chain[100];
char sous_chain[100];
printf("entre un chain de caracter :");
scanf(" %[^\n]",chain);
printf("entre un sous chain de caracter :");
scanf(" %[^\n]",sous_chain);
if(strstr(chain,sous_chain)!=NULL){
        printf("La sous-chaîne est trouvée dans la chaîne principale.\n");
}
else{
            printf("La sous-chaîne n'est pas trouvée dans la chaîne principale.\n");

}
return 0 ;

}
