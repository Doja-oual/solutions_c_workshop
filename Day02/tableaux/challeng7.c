#include <stdio.h>


int main(){

    int n;
    int x;

    printf("entrer le Nombre elements  :");
    scanf("%d", &n);

    int T[n];



    for(int i=0;i<n;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }


    for(int i=0;i<n;i++){

        for(int j=0;j<n - 1 - i;j++){
            if(T[j] > T[j+1]){

               x=T[j];
               T[j]=T[j+1];
               T[j+1]=x;

            }
        }
    }

        for(int i=0;i<n;i++){
        printf("\n T[%d] = %d :",i+1,T[i]);
    }


}