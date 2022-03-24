#include "bst.c"

int main(){
    Arbre *arb = ajout(ajout(creeArbre(1), creeArbre(3), 2), ajout(creeArbre(4), creeArbre(7), 5), 6);

    printf("sommet %d\n", arb->valeur);
    AfficherArbre(arb);

    printf("nombre de sommet : %d\n", nombreSommet(arb));

    libererMemoire(arb);

    return 0;
}