#include <stdio.h>

int main() {
    int n = 7;  // Nombre de termes à générer (exemple)
    int U0 = 0;
    int U1 = 1;
    int Un;

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    // Affichage des deux premiers termes
    printf("%d, %d", U0, U1);

    // Boucle pour générer les termes suivants
    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;   // Formule Un = Un-1 + Un-2
        printf(", %d", Un);

        // Mise à jour pour la prochaine iteration
        U0 = U1;
        U1 = Un;
    }

    printf("\n");

    return 0;
}
