#include<stdio.h>



#define Max_contacts 100
#define Max_nom 50
#define max_email 50
#define max_Numtele 50
int Nbrcontact = 0;

struct contact {
    char Nom[Max_nom];
    char Numtele[max_Numtele];
    char Email[max_email];
};

struct contact contacts[Max_contacts];
 
