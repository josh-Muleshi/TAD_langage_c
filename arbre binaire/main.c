#include "arbreBinaire.c"


int main(){
    sommet arbre = creerArbreBinaire('A');
    printf("%p", &arbre);
    ajouterFilsGauche(arbre, 'C');
    printf("%c", arbre->gauche->info);
    ajouterFilsDroit(arbre, 'D');
    printf("%c", arbre->droit->info);

    return 0;
}
