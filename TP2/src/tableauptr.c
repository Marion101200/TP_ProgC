#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11  // Taille des tableaux

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    srand(time(NULL)); // Initialiser la graine du générateur aléatoire

    // Remplir les tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tabInt + i) = rand() % 101;            // Entiers entre 0 et 100
        *(tabFloat + i) = ((float)rand() / RAND_MAX) * 10.0; // Float entre 0 et 10
    }

    // Affichage des tableaux avant multiplication
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n\n");

    // Multiplication par 3 des éléments dont l'indice est divisible par 2
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3;
        }
    }

    // Affichage des tableaux après multiplication
    printf("Tableau d'entiers (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n");

    return 0;
}
