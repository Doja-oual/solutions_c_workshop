#include<stdio.h>
int main(){
int H1,M1,S1;
int H2,M2,S2;
printf("entre 1'er instant : ");
scanf("%d:%d:%d",&H1, &M1,&S1);
printf("entre 2éme instant : ");
scanf("%d:%d:%d",&H2, &M2,&S2);

if(H2<H1){
    printf("Le premier instant vient avant le deuxième ");

}
else if(H1<H2){
    printf("Le deuxième instant vient avant le premier");
}
 if(H1==H2){
   
 if (M2<M1){
    printf("Le premier instant vient avant le deuxième");

 }
 else if(M1<M2){
    printf("Le deuxième instant vient avant le premier");
    }
 else if(M1==M2){

 if(S2<S1){
    printf("Le premier instant vient avant le deuxième ");
 }
 else if(S1<S2){
    printf("Le deuxième instant vient avant le premier ");
 }
 else {
    printf("Il s'agit du même instant.");
 }

 }
    
 }
}
