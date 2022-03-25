/*
* MUTEBA MULESHI Josue
* MBOKUMA LOMBA Fabien
* MULENGA MULAPU Elisee
*/

#include "arbreBinaire_de_recherch.c"


int main(int argc, char* argv[]) {
    Arbre* tree;
    int value = 10;
    printf("Creating tree...\n");
    tree = creeArbre(sizeof(int), comp, NULL);
    printf("Done.\n");
    ajout(tree, &value);
    value = 12;
    ajout(tree, &value);
    value = 5;
    ajout(tree, &value);
    value = 15;
    ajout(tree, &value);
    value = 13;
    ajout(tree, &value);
    value = 17;
    ajout(tree, &value);
    
    print(tree->racine->valeur);
    print(tree->racine->gauche->valeur);
    print(tree->racine->droit->valeur);

    int val = 12;
    supprimerArbre(tree, &val);
    
    Arbre_sommet* s = rechercheArbre(tree, &val)->valeur;
    printf("%d\n", *((int*)s));
    
    printf("Destroying tree...\n");
    detruireArbre(tree);
    printf("Done.\n");

    return EXIT_SUCCESS;
}
