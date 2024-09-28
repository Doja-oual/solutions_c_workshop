#include <stdio.h>


int main(){

    int n,i;
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
        
    
          x=T[i];
        T[i]=T[i+1];
        T[i+1]=x;
printf("%d",T[i]);
        
        
       
    }
    printf("}");    
}