#include <stdio.h>

// Définition de la structure Couleur RGBA
struct Couleur {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xEF, 0x78, 0x12, 0xFF},
        {0x2C, 0xC8, 0x64, 0xFF},
        {0xFF, 0x00, 0x00, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF},
        {0xAA, 0xBB, 0xCC, 0xFF},
        {0x11, 0x22, 0x33, 0xFF},
        {0x44, 0x55, 0x66, 0xFF},
        {0x77, 0x88, 0x99, 0xFF},
        {0xFF, 0xFF, 0x00, 0xFF}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].R);
        printf("Vert  : %d\n", couleurs[i].G);
        printf("Bleu  : %d\n", couleurs[i].B);
        printf("Alpha : %d\n", couleurs[i].A);
        printf("---------------------\n");
    }

    return 0;
}
