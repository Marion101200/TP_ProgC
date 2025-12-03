#include <stdio.h>
#include <string.h>
#include "fichier.h"  // Contient les fonctions lire_fichier et ecrire_dans_fichier

#define N 5

// Définition de la structure étudiant
typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

int main() {
    Etudiant etudiants[N];
    char ligne[300]; // Pour stocker la ligne à écrire dans le fichier
    char buffer_message[5000] = ""; // Pour stocker toutes les lignes avant écriture
    int i;

    for (i = 0; i < N; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf("%49s", etudiants[i].nom);
        getchar(); // consommer le retour à la ligne

        printf("Prénom : ");
        scanf("%49s", etudiants[i].prenom);
        getchar();

        printf("Adresse : ");
        fgets(etudiants[i].adresse, sizeof(etudiants[i].adresse), stdin);
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0'; // enlever le \n

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);
        getchar();

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);
        getchar();

        // Formatage de la ligne pour le fichier
        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%.2f;%.2f\n",
                 etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
                 etudiants[i].note1, etudiants[i].note2);

        // Ajouter la ligne au buffer global
        strncat(buffer_message, ligne, sizeof(buffer_message) - strlen(buffer_message) - 1);
    }

    // Écriture dans le fichier etudiant.txt
    ecrire_dans_fichier("etudiant.txt", buffer_message);

    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    return 0;
}
