#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine){
    //sommet nd = malloc(sizeof(*nd));
    sommet nd = (sommet)malloc(sizeof(struct sommet));
    nd->info = racine;
    nd->gauche = NULL;
    nd->droit = NULL;
    nd->pere = NULL;

    return nd;

}

void ajouterFilsGauche(sommet s, objet o){
    //sommet nd = (sommet)malloc(sizeof(arbreBinaire));
    sommet nd = (sommet)malloc(sizeof(struct sommet));
    s->gauche = nd;
    nd->pere = s;
    nd->info = o;
    nd->droit = NULL;
    nd->gauche = NULL;

}

void ajouterFilsDroit(sommet s, objet o){
    sommet nd = (sommet)malloc(sizeof(arbreBinaire));
    s->droit = nd;
    nd->pere = s;
    nd->info = o;
    nd->droit = NULL;
    nd->gauche = NULL;

}

objet getValeur(sommet s){
    return s->info;
}

void setValeur(sommet s, objet o){
    s->info = o;
}

sommet filsGauche(sommet s){
    if (s->gauche != NULL){
        return s->gauche;
    }else{
        return NULL;
    }
}

sommet filsDroit(sommet s){
    if (s->droit != NULL){
        return s->droit;
    }else{
        return NULL;
    }
}

sommet pere(sommet s){
    if (s->pere != NULL){
        return s->pere;
    }else{
        return NULL;
    }
}

void detruireSommet(sommet s){
    if(s != NULL){
        s = NULL;
    }
}

void supprimerFilsGauche(sommet s){
    if (s->gauche != NULL){
        detruireSommet(s->gauche);
    }
}

void supprimerFilsDroit(sommet s){
    if (s->droit != NULL){
        detruireSommet(s->droit);
    }
}
