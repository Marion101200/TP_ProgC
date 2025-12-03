#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factorielle(int num) {
    if (num == 0) {
        // Cas de base : 0! = 1
        return 1;
    } else {
        return num * factorielle(num - 1);
    }
}

int main() {
    int valeurs[] = {0, 1, 3, 5, 7}; // valeurs à tester
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);
    int i;

    for (i = 0; i < taille; i++) {
        int n = valeurs[i];
        int resultat = factorielle(n);
        printf("%d! = %d\n", n, resultat);
    }

    return 0;
}
