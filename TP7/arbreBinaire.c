#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine){
    arbreBinaire s = (sommet)malloc(sizeof(struct sommet));
    if(s != NULL){
        s->pere = 0;
        s->droit = NULL;
        s->gauche = NULL;
        s->info = racine;
    }
    return s;
}

void ajouterFilsGauche(sommet s, objet o){
    s = creerArbreBinaire('o');
    s->pere->gauche = s->pere++;
    s->gauche++->info = o;
}

void ajouterFilsDroit(sommet s, objet o){

}