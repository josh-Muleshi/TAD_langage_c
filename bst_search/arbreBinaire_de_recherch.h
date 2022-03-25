/*
* MUTEBA MULESHI Josue
* MBOKUMA LOMBA Fabien
* MULENGA MULAPU Elisee
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

typedef int (*orderF)(void *, void *);
typedef void (*freeF)(void *);

typedef struct Arbre_sommet{
    void* valeur;
    struct Arbre_sommet *droit;
    struct Arbre_sommet *gauche;
}Arbre_sommet;

typedef struct{
    size_t valeur_taille;
    Arbre_sommet* racine;
    orderF comparer;
    freeF free;
}Arbre;

Arbre* creeArbre(size_t valeur_taille, orderF comp, freeF free);
void ajout(Arbre *arb, void* sommet);
Arbre_sommet* creeArbre_sommet(int valeur_taille, void* sommet);
void rec_ajout(orderF comp, Arbre_sommet* current, Arbre_sommet* new);
void detruireArbre(Arbre* arb);
void rec_detruireArbre(Arbre* arb, Arbre_sommet* current);
void detruireArbre_sommet(Arbre* arb, Arbre_sommet* sommet);

Arbre_sommet* rechercheArbre(Arbre* arb, void* element);
Arbre_sommet* rechercheArbre_rec(orderF compare, Arbre_sommet* current, void* element);
void supprimerArbre(Arbre* arb, void* element);
Arbre_sommet* supprimerArbre_rec(Arbre* arb, Arbre_sommet* current, void* element);
Arbre_sommet* plusGrand(Arbre_sommet* current);