//Fonction de Factoriel
#include<stdio.h>
#include<stdlib.h>
int fact(int A){
    int F=1;
    for(int i=1;i<=A;i++){
      F=F*i  ;
      }
return F;
}
int main(){
    int A,F;
    printf("entre la valeur de A : ");
    scanf("%d",&A);
    F=fact(A);
    printf(" la factorielle de A est :%d",F);
    return 0;

}