#include<stdio.h>
#include<string.h>
int main(){
 int cont=0;
 char chain[10];
  printf("entre un chaine de caractére ");
  scanf("%s",chain);
  while (chain[cont]!='\0')
  {
    cont++;
  }
  
  printf("la longueure est :%d",cont);
  return 0;
 
 }
