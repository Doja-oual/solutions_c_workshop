#include<stdio.h>k
int main(){
    char ch;
    printf("entr un caractér : ");
    scanf("%s",&ch);
    if(ch>= 'A' && ch<= 'Z'){
        printf("caractér partie des alphabets est majuscule");

    }
    else if (ch>= 'a' && ch<= 'z' ){
        printf("caractér partie des alphabets est minuscule");

    }
    else{
        printf("pas partie ses alphabets");
    }
}