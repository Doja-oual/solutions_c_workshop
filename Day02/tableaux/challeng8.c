#include <stdio.h>


int main(){

    int n,i;
    

    printf("entrer le Nombre elements  :");
    scanf("%d", &n);

    int T[n];
    int B[n];



    for(int i=0;i<n;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }

     printf("les element de tableau B est { ");
    for ( i = 0; i < n; i++)
    {
        B[i]=T[i];
        printf(" %d ,",B[i]);
    }
    printf("}");
}
    