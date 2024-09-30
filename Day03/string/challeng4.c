#include<stdio.h>
#include<string.h>
int main (){
    char chain[100];
    printf("entre chain de caractere 1 :");
    scanf(" %[^\n]",chain);
    strrev(chain);
    printf("invers de chaine  :%s",chain);
}