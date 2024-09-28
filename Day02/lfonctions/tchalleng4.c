//Challenge 4 : Fonction de Minimum
#include<stdio.h>
#include<stdlib.h>
int Minimun (int A,int B){
    int min;
    if(A<B){
        min = A;
    }
    else  {
        min=B;
        return B ;
    }
}
 int main(){
       int A,B,min;

    printf("entr A ");
    scanf("%d",&A);
    printf("entr B ");
    scanf("%d",&B);
        min=Minimun ( A,B);
        printf("le maximum de A et B est:%d",min);


    }