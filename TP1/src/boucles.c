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

#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        // Si divisible par 11 → on saute ce nombre
        if (i % 11 == 0) {
            continue;
        }

        // Si divisible par 5 OU 7 → on l'ajoute
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → on arrête tout
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
