//Challenge 2 : Fonction de Multiplication
#include<stdio.h>
 #include<stdlib.h>

 int multipl(int A,int B){
    int M;
    M=A*B;

    return M;
 }
  int main (){
    int A,B,M;
    printf("entr A ");
    scanf("%d",&A);
    printf("entr B ");
    scanf("%d",&B);
    M=multipl(A,B);
    printf("la somme de A et B est : %d",M);
    return 0;
    
  }