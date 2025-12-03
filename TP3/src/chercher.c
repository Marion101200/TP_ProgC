#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, recherche;
    int trouve = 0; // 0 = absent, 1 = présent

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 0 et 999
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demander l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Parcourir le tableau pour vérifier si l'entier est présent
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == recherche) {
            trouve = 1;
            break; // arrêter la boucle dès qu'on le trouve
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
