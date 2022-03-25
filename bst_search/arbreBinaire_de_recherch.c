/*
* MUTEBA MULESHI Josue
* MBOKUMA LOMBA Fabien
* MULENGA MULAPU Elisee
*/

#include "arbreBinaire_de_recherch.h"

Arbre* creeArbre(size_t valeur_taille, orderF comp, freeF free)
{
    assert(valeur_taille > 0);
    assert(comp);

    Arbre* arb = malloc(sizeof(Arbre));

    if (!arb)
        exit(EXIT_FAILURE);

    arb->valeur_taille = valeur_taille;
    arb->comparer = comp;
    arb->free = free;
    arb->racine = NULL;

    return arb;
}

void ajout(Arbre *arb, void* sommet)
{
    assert(arb);
    assert(sommet);

    Arbre_sommet* som = creeArbre_sommet(arb->valeur_taille, sommet);

    if (arb->racine)
        rec_ajout(arb->comparer, arb->racine, som);
    else
        arb->racine = som;
}

Arbre_sommet* creeArbre_sommet(int valeur_taille, void* sommet){
    Arbre_sommet* som = malloc(sizeof(Arbre_sommet));
    if(!som)
        exit(EXIT_FAILURE);

    som->valeur = malloc(valeur_taille);
    if(!(som->valeur))
        exit(EXIT_FAILURE);

    memcpy(som->valeur, sommet, valeur_taille);
    som->gauche = NULL;
    som->droit = NULL;

    return som;
}

void rec_ajout(orderF comp, Arbre_sommet* current, Arbre_sommet* new){
    if(comp(current->valeur, new->valeur) >= 0) {
        if(!current->gauche) 
            current->gauche = new;
        else
            rec_ajout(comp, current->gauche, new);
    } else { 
        if(!current->droit)
            current->droit = new;
        else
            rec_ajout(comp, current->droit, new);
    }
}

void detruireArbre(Arbre* arb) {
    assert(arb);

    if(arb->racine)
        rec_detruireArbre(arb, arb->racine);

    free(arb);
}

void rec_detruireArbre(Arbre* arb, Arbre_sommet* current) {
    if(current->gauche)
        rec_detruireArbre(arb, current->gauche);
    if(current->droit)
        rec_detruireArbre(arb, current->droit);
    detruireArbre_sommet(arb, current);
}

void detruireArbre_sommet(Arbre* arb, Arbre_sommet* sommet) {
    if(arb->free) 
        arb->free(sommet->valeur);

    free(sommet->valeur);
    free(sommet);
}

Arbre_sommet* rechercheArbre(Arbre* arb, void* element) {
    assert(arb);
    if(arb->racine)
        return rechercheArbre_rec(arb->comparer, arb->racine, element);
    
    return NULL;
}

Arbre_sommet* rechercheArbre_rec(orderF compare, Arbre_sommet* current, void* element) {
    if(!current)
        return NULL;
    if(compare(current->valeur, element) > 0) 
        return rechercheArbre_rec(compare, current->gauche, element);
    else if(compare(current->valeur, element) < 0) 
        return rechercheArbre_rec(compare, current->droit, element);
    else 
        return current;
}

void supprimerArbre(Arbre* arb, void* element) {
    assert(arb);

    if(arb->racine)
        supprimerArbre_rec(arb, arb->racine, element);
}

Arbre_sommet* supprimerArbre_rec(Arbre* arb, Arbre_sommet* current, void* element) {
    if(!current)
        return NULL;

    if(arb->comparer(current->valeur, element) > 0)
        current->gauche = supprimerArbre_rec(arb, current->gauche, element);
    else if(arb->comparer(current->valeur, element) < 0)
        current->droit = supprimerArbre_rec(arb, current->droit, element);
    else {

        if(!current->gauche && !current->droit) {
            detruireArbre_sommet(arb, current);
            return NULL;
        }
        else if(!current->droit) { 
            Arbre_sommet* temp = current->gauche;
            detruireArbre_sommet(arb, current);
            return temp;
        }
        else if(!current->gauche) { 
            Arbre_sommet* temp = current->droit;
            detruireArbre_sommet(arb, current);
            return temp;
        }
        else { 
            Arbre_sommet* successor =
            plusGrand(current->gauche);
            memcpy(current->valeur, successor->valeur, arb->valeur_taille);
            current->gauche = supprimerArbre_rec(arb, current->gauche, successor->valeur);
        }
    }
    return current;
}

Arbre_sommet* plusGrand(Arbre_sommet* current) {
    if(!current->droit)
        return current;

    return plusGrand(current->droit);
}

int comp(void* a, void* b) {
    return *((int*) a) - *((int*) b);
}

void print(void* a) {
    printf("%d\n", *((int*) a));
}

/*void iter_Arbre(Arbre* arb, iterFun function) {
    assert(arb);
    assert(function);
    if(arb->racine)
        iter_Arbre_rec(arb->racine, function);
}

static void iter_Arbre_rec(Arbre_sommet* current, iterFun function) {
    if(!current)
        return;
    iter_Arbre_rec(current->gauche, function);
    function(current->valeur);
    iter_Arbre_rec(current->droit, function);
}*/