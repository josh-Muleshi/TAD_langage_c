#include "pile.h"

void creerPile(Pile *p){
    p->dernier = NIL;
    p->size = 0;
    int i;
    for (i = 0; i < TAILLEMaX; i++)
    {
        p->tab[i].precedant = i+1;
    }
    p->tab[i].precedant = NIL;

}

char valeur(Pile *p){
    if(p->size != 0){
        return p->tab[p->size-1].val;
    }  
    else{
        return ' ';
    }  
}

bool pileVide(Pile *p){
    return p->size == 0;
}

bool pilePleine(Pile *p){
    return p->size == TAILLEMaX;
}

void empiler(Pile *p, char v){
    if (!pilePleine(p))
        p->tab[p->size++].val = v;
}
void depiler(Pile *p){
    if (!pileVide(p)){
        p->tab[p->size--].val = NIL;
        p->tab[p->tab[p->size].precedant].val = p->tab[p->size].val;
    }
}
void detruirePile(Pile *p){
    while (!pileVide(p))
    {
        depiler(p);
    }
}