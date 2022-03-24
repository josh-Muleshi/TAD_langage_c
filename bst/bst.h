#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct Arbre{
    int valeur;
    struct Arbre *droit;
    struct Arbre *gauche;
    struct Arbre *parent;
}Arbre;

Arbre *creeArbre(int val);
void libererMemoire(Arbre *arb);
Arbre *ajout(Arbre *gauche, Arbre *droit, int sommet);
void AfficherArbre(Arbre *arb);
int nombreSommet(Arbre *arb);