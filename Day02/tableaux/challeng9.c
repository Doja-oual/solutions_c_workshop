#include <stdio.h>


int main(){

    int n,i,j;
    int x;

    printf("entrer le Nombre elements  :");
    scanf("%d", &n);

    int T[n];



    for(int i=0;i<n;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }
         printf("les element de tableau B est { ");
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j <n ; j++)
        {
            x=T[j];
        T[j]=T[j+1];
        T[j+1]=x;
printf("T[%d]",T[j]);
        }
        
       
    }
    printf("}");    
}