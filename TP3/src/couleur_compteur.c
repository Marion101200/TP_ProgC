#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Fonction pour comparer deux couleurs
int couleursEgales(Couleur c1, Couleur c2) {
    return (c1.R == c2.R) && (c1.G == c2.G) && (c1.B == c2.B) && (c1.A == c2.A);
}

int main() {
    Couleur tableau[TAILLE];
    Couleur distinctes[TAILLE]; // Pour stocker les couleurs distinctes
    int compteur[TAILLE];       // Pour stocker le nombre d'occurrences de chaque couleur distincte
    int nbDistinctes = 0;       // Nombre de couleurs distinctes
    int i, j;

    srand(time(NULL));

    // Remplir le tableau avec des couleurs aléatoires
    for (i = 0; i < TAILLE; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Parcourir le tableau pour compter les couleurs distinctes
    for (i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (j = 0; j < nbDistinctes; j++) {
            if (couleursEgales(tableau[i], distinctes[j])) {
                compteur[j]++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes] = tableau[i];
            compteur[nbDistinctes] = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et leur nombre d'occurrences
    printf("Couleurs distinctes et leurs occurrences :\n");
    for (i = 0; i < nbDistinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].R,
               distinctes[i].G,
               distinctes[i].B,
               distinctes[i].A,
               compteur[i]);
    }

    return 0;
}
