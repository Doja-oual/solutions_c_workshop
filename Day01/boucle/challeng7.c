#include <stdio.h>
 
int main(){
    int nbr,nbrinvers=0;
    printf("entre le nobre à inverse");
    scanf("%d",&nbr);

    while (nbr!=0)
    {
        nbrinvers=nbrinvers*10;
        nbrinvers=nbrinvers+ nbr%10;
        nbr=nbr/10;
    }
       printf("Le nombre en sens inverse est = %d\n", nbrinvers);

    return 0;
    
}