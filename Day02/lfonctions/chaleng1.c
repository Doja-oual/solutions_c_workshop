// Challenge 1 : Fonction de Somme//
 #include<stdio.h>
 #include<stdlib.h>

 int somme(int A,int B){
    int S;
    S=A+B;

    return S;
 }
  int main (){
    int A,B,S;
    printf("entr A ");
    scanf("%d",&A);
    printf("entr B ");
    scanf("%d",&B);
    S=somme(A,B);
    printf("la somme de A et B est : %d",S);
    return 0;
    
  }