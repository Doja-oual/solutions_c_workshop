#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float calculrectangle(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle r;

    r.longueur = 10.5;
    r.largeur = 5.2;

    float aire = calculrectangle(r);

    printf("L'aire du rectangle est: %.2f\n", aire);

    return 0;
}
