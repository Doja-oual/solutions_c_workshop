#include<stdio.h>
 #include<string.h>
     struct persone {
    char nom[10];
    char prenome[10];
  int age;};
  

    int main(){
    struct persone p1;
    p1.age=22;
    strcpy(p1.nom,"oualla");
    strcpy(p1.prenome,"khadija");
printf("nom:%d",p1.age);
printf("nom:%s\n",p1.nom);
printf("nom:%s\n",p1.prenome);
return 0;

 }