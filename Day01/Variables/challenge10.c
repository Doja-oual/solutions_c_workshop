#include<stdio.h>
#include<math.h>
int main(){
    float V , R;
    const float P = 3.14 ;
    printf("donné la rayon de surface :");
    scanf("%f",&R);
    V = (4.0/3.0) * P * pow(R,3);
    printf(" le volume est :%f",V);
    


}