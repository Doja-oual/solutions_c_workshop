#include <stdio.h>


int vérification_de_parite(int nombre)
{
    if (nombre % 2 == 0)
    {
        return 1; }
    else{
        return 0;    }
}
int main(){
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    if (vérification_de_parite(nombre)){
        printf("%d est pair.\n", nombre);
    }
    else{
        printf("%d est impair.\n", nombre);
    }

    return 0;
}
