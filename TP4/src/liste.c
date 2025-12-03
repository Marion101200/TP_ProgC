#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

// Initialisation de la liste
void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

// Insertion d'une couleur au début de la liste
void insertion(struct couleur *coul, struct liste_couleurs *liste) {
    struct noeud *nouveau = (struct noeud *)malloc(sizeof(struct noeud));
    if (!nouveau) {
        printf("Erreur allocation mémoire\n");
        return;
    }
    nouveau->c = *coul;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

// Parcours et affichage de la liste
void parcours(struct liste_couleurs *liste) {
    struct noeud *courant = liste->tete;
    int index = 1;
    while (courant != NULL) {
        printf("Couleur %d : R=%02X G=%02X B=%02X A=%02X\n", 
               index, courant->c.R, courant->c.G, courant->c.B, courant->c.A);
        courant = courant->suivant;
        index++;
    }
}
