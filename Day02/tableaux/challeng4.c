#include<stdio.h>

int main(){
    int n,i ;


    printf(" entre le nombre d'éléments du tableu:",n);
    scanf("%d",&n);
 int tab[n];

 for ( i = 0; i < n; i++) {
printf("saisir ces élélment de tableaus tab[%d]",i+1);
scanf("%d",&tab[i]);}

    int max = tab[0];

 for ( i = 1; i < n; i++)
 {
    if(tab[i]>max){
        max =tab[i];
        
    }
   
 }
printf("le max :%d",max);
 
}
 