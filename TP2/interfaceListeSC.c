#include "interfaceListeSC.h"

void creerListe(listSC *L){
    L->taille = 0;
    L->premier = NIL;
    L->cle = NIL;
    L->prLibre = 0;
    int i;
    for ( i = 0; i < TAILLEMaX; i++)
    {
        L->tab[i].idSuiv = i+1;
    }
    L->tab[i].idSuiv = NIL;
}

curseur prendreCellule(listSC *L){
    curseur n = NIL;
    if (L->prLibre != NIL){
        n = L->prLibre;
        L->prLibre =  L->tab[n].idSuiv;
    }
    return n; 
}

void insereEnTete(listSC *L, char  c){
    curseur n = prendreCellule(L);
    if(n != NIL){
        L->taille++;
        L->cle = n;
        L->tab[n].val = c;
        L->tab[n].idSuiv = L->premier;
        L->premier = n;
    }
}

void insereApres(listSC *L, char  c){
    curseur n = prendreCellule(L);
    if(n != NIL){
        L->taille++;
        L->tab[n].val = c;
        L->tab[n].idSuiv = L->tab[L->cle].idSuiv;
        L->tab[L->cle].idSuiv = n;
    }
}

void suivant(listSC *L){
    if (L->cle != NIL)
    {
        L->cle = L->tab[L->cle].idSuiv;
    }
    
}

void debutListe(listSC *L){
    L->cle = L->premier;
}

int listeVide(listSC *L){
    return L->taille == 0;
}

char valeur(listSC *L){
    if (L->cle != NIL)
    {
        return L->tab[L->cle].val;
    }else {
        return ' ';
    }
}

curseur getCleListe(listSC *L){
    return L->cle;
}

void setCleListe(listSC *L, curseur p){
    L->cle = p;
}

void rendreCelluleA(listSC *L, curseur p ){
    L->tab[p].idSuiv = L->prLibre;
    L->prLibre = p;
}

void supprimeEnTete(listSC *L){
    curseur idSup = L->tab[L->cle].idSuiv;
    curseur n = L->tab[idSup].idSuiv;
    /*L->premier = idSup;
    L->tab[L->cle].idSuiv = n;
    L->taille--;*/
    rendreCelluleA(L, n);
    L->cle = L->premier;
}

void supprimeApres(listSC *L){
    curseur idSup = L->tab[L->cle].idSuiv;
    curseur n = L->tab[idSup].idSuiv;
    L->tab[L->cle].idSuiv = n;
    rendreCelluleA(L, idSup);
    L->taille--;
}

int listePleine(listSC *L){
    return L->taille == TAILLEMaX;
}

