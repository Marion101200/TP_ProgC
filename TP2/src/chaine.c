#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[100];       // Tableau pour copier str1
    char concatenation[200]; // Tableau pour stocker la concaténation

    // --- 1. Calcul de la longueur de str1 ---
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de str1 ('%s') = %d\n", str1, longueur);

    // --- 2. Copier str1 dans copie ---
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // Terminer la chaîne copiée
    printf("Copie de str1 dans copie : '%s'\n", copie);

    // --- 3. Concaténer str1 et str2 dans concatenation ---
    int j = 0;

    // Copier str1 dans concatenation
    while (str1[j] != '\0') {
        concatenation[j] = str1[j];
        j++;
    }

    // Ajouter str2 après str1
    int k = 0;
    while (str2[k] != '\0') {
        concatenation[j] = str2[k];
        j++;
        k++;
    }
    concatenation[j] = '\0'; // Terminer la chaîne concaténée

    printf("Concaténation de str1 et str2 : '%s'\n", concatenation);

    return 0;
}
