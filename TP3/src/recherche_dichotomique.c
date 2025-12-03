#include <stdio.h>
#include <stdlib.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, recherche;
    int debut, fin, milieu;
    int trouve = 0;

    // Remplir le tableau trié de 100 entiers croissants (ex : 1 à 100)
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = i + 1; // valeurs 1, 2, 3, ..., 100
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demander l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche dichotomique
    debut = 0;
    fin = TAILLE - 1;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tableau[milieu] == recherche) {
            trouve = 1;
            break; // entier trouvé
        } else if (tableau[milieu] < recherche) {
            debut = milieu + 1; // chercher à droite
        } else {
            fin = milieu - 1; // chercher à gauche
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
