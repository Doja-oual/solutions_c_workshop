#include <stdio.h>

int main() {

 int Revenu_annuel , Score_credit , Duree_pret;
 
  printf("Entre Revenu annue : ");
  scanf("%d" , &Revenu_annuel);

   printf("Entre Score de credit : ");
   scanf("%d" , &Score_credit);

   printf("Entre Duree de prêt  : ");
   scanf("%d" , &Duree_pret);

   if(Revenu_annuel>= 30000 && Score_credit>=700 && Duree_pret<10  ){
       printf("eligible");
   }

   else if(Revenu_annuel>= 30000 && Score_credit>=700 && Duree_pret<=15  ){
       printf(" eligible avec conditions");
   } 

