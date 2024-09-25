#include<stdio.h>
int main(){
    int chiox;
    printf("entre un nombre 1 et 100 :");
    scanf("%d",&chiox);
    if("choix % 7==1 "){
        printf("Lindi\n");

    }
    else  if("choix % 7 ==2"){
        printf("Mardi\n");
    }
    else if("choix % 7 ==3"){
        printf("mircredi\n");
    }
    
    else if("choix % 7 ==4"){
        printf("jeudi\n");
    }
    else if("choix % 7 ==5"){
        printf("Vendredi\n");
    }
    else if("choix % 7 ==6"){
        printf("samedi\n");
    }
    else {
        printf("dimench\n");
    }
    printf("\n");

}