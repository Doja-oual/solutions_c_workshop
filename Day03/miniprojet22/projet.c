#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 #define Max_contacts 100
#define Max_nom 50
#define max_email 50
#define max_Numtele 50
int Nbrcontact=0 ; 
struct contact
{
    char Nom[Max_nom];
    char Numtele[max_Numtele];
    char Email[max_email];
     
   
};
struct contact C[Max_contacts];
 
int ajoutecontact(){
    
    if (Nbrcontact<Max_contacts){
        printf("entre le nome de contact : ");
        scanf(" %[^\n]",C[Max_contacts].Nom);
        printf("entre le Numtele de contact : ");
        scanf(" %[^\n]",C[Max_contacts].Numtele);
        printf("entre le email de contact : ");
        scanf(" %[^\n]",C[Max_contacts].Email);
        Nbrcontact++;

          printf("Livre ajouté.\n");
    }
    return 0;
}
int recherchcontact(char nomcontact){
    for(int i =0;i<Nbrcontact;i++){
        if(strcasecmp(nomcontact,C[i].Nom)==0){

            return  i;}
    }return ;

}

int modifiercontact(char nomcontact,char nouvelleemail,char nouvelleNumtele){
for(int i=0; i< Nbrcontact;i++){
if(strcasecmp(nomcontact,C[i].Nom)==0){
   strcpy(C[i].Email,nouvelleemail); 
    strcpy(C[i].Numtele,nouvelleNumtele);
}
return i;
}
return ;
}
struct contact Suprimecontact(char nomcontact){
    for(int i;i<nomcontact;i++){
        if(strcasecmp(nomcontact,C[i].Nom)==0){

        }
    }

}






        



 int main(){

 }
 
 