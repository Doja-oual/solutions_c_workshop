
 
 #include<stdio.h>
int main(){
    int n,i ;
    int S=0;

    printf(" entre le nombre d'éléments du tableu:",n);
    scanf("%d",&n);
 int tab[n];

 for ( i = 0; i < n; i++)
 {
printf("saisir ces élélment de tableaus tab[%d]",i+1);
scanf("%d",&tab[i]);
 }
 for (i = 0; i < n; i++)
 
 {
    printf("   %d",tab[i]);
 }
 for (i = 0; i < n; i++){
S=S+tab[i];
    printf("la somme est :%d ",S);
 }
 }
 
