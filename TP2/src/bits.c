#include <stdio.h>

int main() {
    int d = 0x10001000;   // Mets ici la valeur que tu veux tester
    int bit4, bit20, resultat;

    // Position des bits en partant de la gauche (32 bits)
    int pos4 = 28;   // 4e bit depuis la gauche = bit 28
    int pos20 = 12;  // 20e bit depuis la gauche = bit 12

    // Extraction des bits
    bit4 = (d >> pos4) & 1;
    bit20 = (d >> pos20) & 1;

    // Vérification : les deux doivent être égaux à 1
    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("Résultat : %d\n", resultat);

    return 0;
}
