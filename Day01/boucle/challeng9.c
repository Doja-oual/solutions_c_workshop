#include<stdio.h>
int main(){
    int n,Nombre_chiffres=0 ;
    printf("entre un entier positif");
    scanf("%d",&n);
     while (n>0)
     {
        n=n/10;
        Nombre_chiffres++;

        
     }
     printf("le nombre de chiffres dans cet entier :%d",Nombre_chiffres);
     

}