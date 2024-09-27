#include<stdio.h>

int main(){
    int n,i ;
    int F;



    printf(" entre le nombre d'éléments du tableu:",n);
    scanf("%d",&n);
 int tab[n];

 for ( i = 0; i < n; i++) {
printf("saisir ces élélment de tableaus tab[%d]",i+1);
scanf("%d",&tab[i]);}
printf("entrela facteur "),
scanf("%d",&F);
for ( i = 0; i < n; i++)
{
   tab[i]=tab[i]*F;
   printf("tableu de resulta :");
   printf("tab[%d]=%d",i+1,tab[i]);
}

}