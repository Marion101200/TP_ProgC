#include <stdio.h>
#include <string.h>

// Définition de la structure Etudiant
struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_progC;
    float note_SE;
};

int main() {
    // Création d'un tableau de 5 étudiants
    struct Etudiant etudiants[5];

    // Initialisation des données pour chaque étudiant
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "10 rue A, Paris");
    etudiants[0].note_progC = 15.5;
    etudiants[0].note_SE = 14.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "20 rue B, Lyon");
    etudiants[1].note_progC = 12.0;
    etudiants[1].note_SE = 13.5;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "15 rue C, Marseille");
    etudiants[2].note_progC = 18.0;
    etudiants[2].note_SE = 17.0;

    strcpy(etudiants[3].nom, "Kumar");
    strcpy(etudiants[3].prenom, "Deepak");
    strcpy(etudiants[3].adresse, "5 rue D, Lille");
    etudiants[3].note_progC = 14.5;
    etudiants[3].note_SE = 15.0;

    strcpy(etudiants[4].nom, "Smith");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etud
