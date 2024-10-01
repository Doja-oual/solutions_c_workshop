#include<stdio.h>
#include<string.h>
struct persone{
    char nom[50];
    char prenome[50];
    int notes[50];
};
int main(){
    struct persone persone1;
    strcpy(persone1.nom,"oualla");
    strcpy(persone1.prenome,"khadija");
   persone1.notes[0] = 15;
    persone1.notes[1] = 18;
    persone1.notes[2] = 12;
    persone1.notes[3] = 17;
    persone1.notes[4] = 20;

    printf("Nom: %s\n", persone1.nom);
    printf("Prénom: %s\n", persone1.prenome);
    printf("Notes: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", persone1.notes[i]);
    }
    printf("\n");
}