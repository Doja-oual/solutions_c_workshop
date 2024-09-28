//Fonction de Maximum
#include<stdio.h>
#include<stdlib.h>
int Maximum (int A,int B){
    int max;
    if(A>B){
        max = A;
    }
    else  {
        max=B;
        return B ;
    }
}
 int main(){
       int A,B,max;

    printf("entr A ");
    scanf("%d",&A);
    printf("entr B ");
    scanf("%d",&B);
        max=Maximum ( A,B);
        printf("le maximum de A et B est:%d",max);


    }
    

