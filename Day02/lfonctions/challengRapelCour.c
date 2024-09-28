#include<stdio.h>
#include<stdlib.h>

void signe (int A ,int B){
    if(A*B>0){
        printf("les valeur de A,B  de la meme signe");
    }
else{
            printf("les valeur de A,B  de la  signe different");}
}
int Miniman (int A ,int B){
    int min;
    if(A>B){
        min = B;
    }
    else  {
        min=A;
        return min ;
    }
}
int Maximum (int A,int B){
    int max;
    if(A>B){
        max = A;
    }
    else  {
        max=B;
        return B ;
    }
}

int main(){
    int max,min;
    int A,B;
    printf("entre la valeur de A");
    scanf("%d",&A);
     printf("entre la valeur de B");
    scanf("%d",&B);
    signe(A,B);
    printf("\n");
    min=Miniman(A,B);
    max=Maximum(A,B);
    printf("la valeur min est :%d",min);
    printf("\n");
    printf("la valeur min est :%d",max);




    return 0;

}
