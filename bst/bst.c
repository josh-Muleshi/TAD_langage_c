#include "bst.h"

Arbre *creeArbre(int val){
    Arbre *arb = malloc(sizeof(*arb));

    if (arb != NULL)
    {
        arb->valeur = val;
        arb->droit = NULL;
        arb->gauche = NULL;
        arb->parent = NULL;
    }
    return arb;
}

void libererMemoire(Arbre *arb){

    if (arb == NULL)
        return;

    printf("liberation de : %d\n", arb->valeur);

    libererMemoire(arb->gauche);
    libererMemoire(arb->droit);

    free(arb);
}

Arbre *ajout(Arbre *gauche, Arbre *droit, int sommet){
    Arbre *arb = creeArbre(sommet);

    arb->gauche = gauche;
    arb->droit = droit;

    if (gauche != NULL)
        gauche->parent = arb;
        printf("fils gauche %d\n", arb->gauche->valeur);

    if (droit != NULL)
        droit->parent = arb;
        printf("fils droit %d\n", arb->droit->valeur);

    return arb;
}

void AfficherArbre(Arbre *arb){
    if (arb == NULL)
        return;

    if (arb->parent != NULL)
        printf("[%d] --> [%d]\n", arb->parent->valeur, arb->valeur);
    else
        printf("[%d]\n", arb->valeur);

    if (arb->gauche != NULL)
        AfficherArbre(arb->gauche);

    if (arb->droit != NULL)
        AfficherArbre(arb->droit);
}

int nombreSommet(Arbre *arb){
    if (arb != NULL)
        return (nombreSommet(arb->gauche) + nombreSommet(arb->droit) + 1);

    return 0;
}