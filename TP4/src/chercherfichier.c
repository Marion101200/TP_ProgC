#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_LIGNE 1024

int compter_occurrences(const char *ligne, const char *phrase) {
    int count = 0;
    const char *p = ligne;
    size_t len_phrase = strlen(phrase);

    while ((p = strstr(p, phrase)) != NULL) {
        count++;
        p += len_phrase; // avancer pour rechercher la prochaine occurrence
    }

    return count;
}

int main() {
    char nom_fichier[256];
    char phrase[256];

    printf("Entrez le nom du fichier : ");
    scanf("%255s", nom_fichier);

    FILE *fichier = fopen(nom_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // pour consommer le '\n' laissé par scanf
    fgets(phrase, sizeof(phrase), stdin);

    // supprimer le saut de ligne si présent
    size_t len = strlen(phrase);
    if (len > 0 && phrase[len - 1] == '\n') {
        phrase[len - 1] = '\0';
    }

    char ligne[TAILLE_MAX_LIGNE];
    int numero_ligne = 0;
    int total_trouve = 0;

    printf("\nRésultats de la recherche :\n");
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        numero_ligne++;
        int occurrences = compter_occurrences(ligne, phrase);
        if (occurrences > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, occurrences);
            total_trouve += occurrences;
        }
    }

    if (total_trouve == 0) {
        printf("Phrase non trouvée dans le fichier.\n");
    }

    fclose(fichier);
    return 0;
}
