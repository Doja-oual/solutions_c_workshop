#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,z1;
    int x2,y2,z2;
    float D;
    printf("donné la point donnés x1  :");
    scanf("%d",&x1);
     printf("donné la point donnés y1  :");
    scanf("%d",&y1);
     printf("donné la point donnés z1  :");
    scanf("%d",&z1);
     printf("donné la point donnés x2 :");
    scanf("%d",&x2); 
    printf("donné la point donnés y2 :");
    scanf("%d",&y2);
     printf("donné la point donnés z2  :");
    scanf("%d",&z2);
    D= sqrt(
        pow((x2-x1),2)+ pow((y2-y1),2)+ pow((z2-z1),2));
         printf("la distance est : %f\n");
         
}