#include<stdio.h>
int main(){
    float Moy;
    printf(" entre le moyenne de ses notes :");
    scanf("%f",&Moy);
    if ( Moy<10){
        printf("il est recalé");
    }
    else if (Moy>=10 && Moy<=12){
        printf("mention passable");

    }
     else if (Moy>12 && Moy<=14){
        printf("mention assez bien");
        
    }
     else if (Moy>14 && Moy<=16){
        printf("mention bien");
        
    }
     else if(Moy>16) {
        printf("mention trés bien");
        
    }
    

    }
