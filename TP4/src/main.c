#include "liste.h"
#include <stdio.h>

int main() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    // Exemple de 10 couleurs
    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF}, // Rouge
        {0x00, 0xFF, 0x00, 0xFF}, // Vert
        {0x00, 0x00, 0xFF, 0xFF}, // Bleu
        {0xFF, 0xFF, 0x00, 0xFF}, // Jaune
        {0xFF, 0x00, 0xFF, 0xFF}, // Magenta
        {0x00, 0xFF, 0xFF, 0xFF}, // Cyan
        {0x80, 0x80, 0x80, 0xFF}, // Gris
        {0xFF, 0xA5, 0x00, 0xFF}, // Orange
        {0xA5, 0x2A, 0x2A, 0xFF}, // Marron
        {0xFF, 0xC0, 0xCB, 0xFF}  // Rose
    };

    // Ajout des couleurs à la liste
    for (int i = 0; i < 10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}
