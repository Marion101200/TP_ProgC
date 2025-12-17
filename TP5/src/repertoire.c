#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>

void lire_dossier(const char *nom_repertoire)
{
    DIR *rep;
    struct dirent *fichier;

    rep = opendir(nom_repertoire);

    if (rep == NULL)
    {
        printf("Impossible d'ouvrir le répertoire\n");
        return;
    }

    while ((fichier = readdir(rep)) != NULL)
    {
        printf("%s\n", fichier->d_name);
    }

    closedir(rep);
}
