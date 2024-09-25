#include<stdio.h>
int main(){
int N;
printf("entre la valeur de N : ");
scanf("%d",&N);
if (N>0)
{
    printf("le nombre  %d est positif ");

}
else if( N<0)
{
printf("le nombre %d est negatif ");
}
else{
    printf("le nombre %d null");


}

return 0;

}