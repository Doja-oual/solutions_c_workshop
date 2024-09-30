#include<stdio.h>
#include<string.h>
int main (){
    char chain[100];
    char ch;
    int cont=0;
    printf("entre chain de caractere 1 :");
   gets(chain);
    printf("entr le caracter qui recherche :");
    scanf("%c",&ch);
    int last =strlen(chain);
    for( int i = 0; i <=last; i++)
    {
       if(chain[i]==ch){
 cont++;
 }
         } 
       printf("le caractère %c apparaît dans la chaîne %d fois ",ch,cont);
      
}