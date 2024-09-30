#include<stdio.h>
#include<string.h>
int main (){
    char chain1[100],chain2[100];
    printf("entre chain de caractere 1 :");
    scanf(" %[^\n]",chain1);
     printf("entre chain de caractere 2 :");
    scanf(" %[^\n]",chain2);
    strcat(chain1,chain2);
    printf("concaténation fe chaines est :%s",chain1);

}