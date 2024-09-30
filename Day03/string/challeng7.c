#include<stdio.h>
#include<string.h>
int main (){
    char chain[100];
    printf("entre chain de caractere 1 :");
    scanf(" %[^\n]",chain);
    strupr(chain);
    printf("conversion es majuscule de chain est :%s",chain);

}