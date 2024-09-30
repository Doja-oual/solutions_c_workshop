#include<stdio.h>
#include<string.h>
int main (){
    char chain[100];
    int i;


    printf("entre chain de caractere 1 :");
    scanf(" %[^\n]",chain);
    int cont=strlen(chain);
    for(i=0;i<cont-1;i++)
    {
        for(int i= 0;i<cont - 1;i++){
            if(chain[i] == ' '){
                for(int j=i;j<cont;j++){
                    chain[j] = chain[j+1];
                }
            cont--;
            
        }
    }
    printf("nouvelle  chain est :%s",chain);

}
}

