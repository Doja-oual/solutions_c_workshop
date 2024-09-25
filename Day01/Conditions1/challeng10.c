#include <stdio.h>

int main()
{

    char Moin;
    int jj, nnnn;

    printf("Entrez une date jj/moin/nnnn : ");
    scanf("%d/%d/%d", &jj, &Moin, &nnnn);

    switch (Moin)
    {
    case 1:
        printf("C'est un %d-janv-%d\n");
        break;

    case 2:
        printf("C'est un %d-févr-%d\n");
        break;

    case 3:
        printf("C'est un %d-mars-%d\n");
        break;

    case 4:
        printf("C'est un %d-avr-%d\n");
        break;

    case 5:
        printf("C'est un %d-mai-%d\n");
        break;

    case 6:
        printf("C'est un j%d-uin-%d\n");
        break;
    case 7:
        printf("C'est un %d-juil-%d\n");
        break;
    case 8:
        printf("C'est un %d-auot-%d\n");
        break;
    case 9:
        printf("C'est un %d-sept-%d\n");
        break;
    case 10:
        printf("C'est un %d-nov-%d\n");
        break;
    case 11:
        printf("C'est un %d-déc-%d\n");
        break;
    case 12:
        printf("C'est un %d-oct-%d\n");
        break;
    }

    return 0;
}