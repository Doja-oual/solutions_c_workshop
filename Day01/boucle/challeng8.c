#include<stdio.h>
int main(){
    int n,i;
    int f1=0,f2=1,f;
printf(" entre  n :  ");
scanf("%d",&n);

 for (i = 2; i <= n; i++)

{
    f=f1+f2;
f1=f2;
f2=f;
printf("\n la valeure de f(n) est : %d",f);
}

}