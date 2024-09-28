// Fonction de Fibonacci
#include<stdio.h>
#include<stdlib.h>
int Fabonacci(int A){
    
   int f1=0,f2=1,f;
   for (int i = 2; i <= A; i++){
    f=f1+f2;
f1=f2;
f2=f;
}
return f ;
  }
int main(){
    int A ,f;
printf(" entre  A :  ");
scanf("%d",&A);
f=Fabonacci(A);


printf("\n la valeure de f(A) est : %d",f);
}

