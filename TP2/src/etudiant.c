#include <stdio.h>

int main() {
    // Tableaux de chaînes pour noms, prénoms et adresses
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Kumar", "Smith"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "Deepak", "Emma"};
    char adresses[5][50] = {
        "10 rue A, Paris",
        "20 rue B, Lyon",
        "15 rue C, Marseille",
        "5 rue D, Lille",
        "12 rue E, Toulouse"
    };

    // Tableaux pour les notes
    float notes_progC[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_SE[5] = {14.0, 13.5, 17.0, 15.0, 15.5};

    // Affichage des informations de chaque étudiant.e
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", notes_progC[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notes_SE[i]);
        printf("-------------------------------\n");
    }

    return 0;
}
