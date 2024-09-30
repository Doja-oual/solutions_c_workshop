#include<stdio.h>
#include<string.h>
int main (){
    char chain[100];
    printf("entre chain de caractere 1 :");
    scanf(" %[^\n]",chain);
    strlwr(chain);
    printf("conversion es minuscules de chain est :%s",chain);

}