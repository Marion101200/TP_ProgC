#include <stdio.h>

int main() {
    int compteur = 5;   // Change la valeur ici (doit être < 10)

    printf("=== VERSION AVEC FOR ===\n");

    // --- Version avec boucles for ---
    for (int i = 1; i <= compteur; i++) {
        printf("* ");  // Toujours une étoile en début de ligne

        // Ajout de symboles en fonction du numéro de ligne
        for (int j = 2; j <= i; j++) {
            if (i % 2 == 0) {
                printf("# ");  // Lignes paires → #
            } else {
                printf("* ");  // Lignes impaires → *
            }
        }
        printf("\n");
    }

    printf("\n=== VERSION AVEC WHILE ===\n");

    // --- Version avec boucle while ---
    int i = 1;
    while (i <= compteur) {
        printf("* ");

        int j = 2;
        while (j <= i) {
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}


