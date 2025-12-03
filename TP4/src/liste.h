#ifndef LISTE_H
#define LISTE_H

#include <stdint.h>

// Structure pour représenter une couleur RGBA
struct couleur {
    uint8_t R;
    uint8_t G;
    uint8_t B;
    uint8_t A;
};

// Structure pour un noeud de la liste
struct noeud {
    struct couleur c;
    struct noeud *suivant;
};

// Structure pour représenter la liste
struct liste_couleurs {
    struct noeud *tete;
};

// Fonctions
void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *coul, struct liste_couleurs *liste);
void parcours(struct liste_couleurs *liste);

#endif
