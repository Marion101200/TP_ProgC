#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nbTests = 5;

    for (int t = 0; t < nbTests; t++) {
        int n = nombres[t];

        printf("Nombre : %d\nBinaire : ", n);

        // Cas particulier : si n = 0, on affiche simplement 0
        if (n == 0) {
            printf("0\n\n");
            continue;
        }

        // Tableau pour stocker les bits
        int bits[32];
        int index = 0;

        // Conversion en binaire : division par 2 + modulo
        while (n > 0) {
            bits[index] = n % 2; 
            n = n / 2;
            index++;
        }

        // Affichage en ordre inverse (du bit le plus significatif au moins significatif)
        for (int i = index - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }

        printf("\n\n");
    }

    return 0;
}
