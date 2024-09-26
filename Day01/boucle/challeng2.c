#include<stdio.h>
int main(){
    int n ,i ,s=1 ;
    printf("entre un nombre positif est :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=s*i;
        

    }
    printf("\n la factoriel de n est :%d",s);
}