#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <string.h>

void lire_dossier_recursif(const char *nom_repertoire)
{
    DIR *rep;
    struct dirent *entree;
    char chemin[1024];

    rep = opendir(nom_repertoire);
    if (rep == NULL)
        return;

    while ((entree = readdir(rep)) != NULL)
    {
        /* éviter la récursion infinie */
        if (strcmp(entree->d_name, ".") == 0 ||
            strcmp(entree->d_name, "..") == 0)
            continue;

        /* afficher le nom */
        printf("%s/%s\n", nom_repertoire, entree->d_name);

        /* appel récursif si c'est un répertoire */
        if (entree->d_type == DT_DIR)
        {
            snprintf(chemin, sizeof(chemin),
                     "%s/%s", nom_repertoire, entree->d_name);
            lire_dossier_recursif(chemin);
        }
    }

    closedir(rep);
}

