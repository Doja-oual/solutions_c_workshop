#include<stdio.h>
int main(){
    int a ,b,c;
    float x,x1,x2 , D;
    printf("entre valeur a : ");
    scanf("%d",&a);
    printf("entre valeur b : ");
    scanf("%d",&b);
    printf("entre valeur c: ");
    scanf("%d",&c);
    a!=0;
    D= pow(b,2) -4 *a*c ;
     if(D>0){
        x1=(-b+sqrt(D))/(2*a);
         x2=(-b-sqrt(D))/(2*a);
         printf("les deux solution de eqaution est x1= %f et x2=%f",x1,x2);
     }
     else if (D=0)
     {
        x= (-b)/(2*a); printf("la solution est x=%f",x);

     }
     else{
        printf("pas de solution a R ");
     }
     return 0;


}