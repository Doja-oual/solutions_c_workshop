#include<stdio.h>
#include<stdlib.h>


int maximun(int tab[],int taille){
    int max=tab[0];
    for (int i=1;i<taille;i++){
        if(tab[i]>max)
            max=tab[i];
        }
        return max;
        
        
        }
        
        
    


    int trouveindic(int tab[],int taille,int indicerecherch){
        
        for(int i=0;i<taille;i++){
            
            
            if(tab[i]==indicerecherch){
                return i;
              
            }

        }
        return -1;
        }
        
        int longueur(char chain[50])
        {
            int i=0;
            
            
            while(chain[i]!='\0'){
                i++;
            
            }

            return i;
        }
    




     int main(){
         int tab[]={2,5,9,3};
         int taille =sizeof(tab)/sizeof(tab[0]);
         printf("%d",taille);
int indicerecherch;
       
        int max=maximun(tab,taille);
         printf("le maximan est :%d",max);
         
         printf("entre l 'indice qui recherche ");
        scanf("%d",&indicerecherch);
       
        
         printf("%d", trouveindic(tab,taille,indicerecherch));
char chain[100];
printf("entre un chaine: ");
scanf("%s", &chain);

printf("%d",longueur(chain));
        
return 0;

     }