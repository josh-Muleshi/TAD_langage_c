#include "tas.h"

void creerTas(TasMin *t, char x){
    t->taille = 1;
    t->s = 1;
    t->arbre[RACINE] = x;
}
char valeur(TasMin *t){
    return t->arbre[RACINE];
}

void entasser(TasMin *t, char x){
    t->taille ++;
    t-> s++;
    t->arbre[t->s] = x;
    reorganiserAsc(t, t->s);
}

/*
* fonction de reoganisation
*/

void reorganiserAsc(TasMin *t, int s){
    if(s != RACINE){
        if(t->arbre[s] < pere(t, s)){
            permuter(t, s, s/2);
            reorganiserAsc(t, s/2);
        }
    }
}

char pere(TasMin *t, int s){
    return t->arbre[s/2];
}

void permuter(TasMin *t, int s1, int s2) {
    char a = t->arbre[s1];
    t->arbre[s1] = t->arbre[s2];
    t->arbre[s2] = a;
}

/*
* fonction de reoganisation


void supprimer(TasMin *t){
    t->taille --;
    t-> s --;
    reorganiserDsc(t, t->s);
}

/*
* fonction de reoganisation


void reorganiserDsc(TasMin *t, int s){
    if(s > RACINE){
        char r = (t->arbre[RACINE] = t->arbre[s-1]);
        char pr = filsG(t, s);
        char dr = filsD(t, s);
        permuterSup(t, r, pr, dr);
    }
}

void permuterSup(TasMin *t, char r, char pr, char dr) {
    if(pr < dr && pr < r){
        t->arbre[RACINE * 2] = r;
        t->arbre[RACINE] = pr;
    }
    if(dr < pr && dr < r){
        t->arbre[RACINE * 2 + 1] = r;
        t->arbre[RACINE];
    }
}

/*
* fonction de reoganisation
*/

char filsG(TasMin *t, int s){
    if(s*2 < t->taille)
        return t->arbre[s*2];
    else
        return VIDE;
}

char filsD(TasMin *t, int s){
    if(s*2+1 <= t->taille)
        return t->arbre[s*2+1];
    else
        return VIDE;
}

char getValeur(TasMin *t, int s){
    return t->arbre[s];
}

void supprimer(TasMin *t){
    t->taille--;
    t->arbre[RACINE] = t->arbre[t->s];
    t->s --;
    reorganiserDsc(t, RACINE);
}

void reorganiserDsc(TasMin *t, int s){
    char fg = filsG(t, s);
    char fd = filsD(t, s);
    char v = getValeur(t, s);

    if(fg != VIDE && fd != VIDE && fd < fg && fd < v){
        permuter(t, s, s*2+1);
        reorganiserDsc(t, s*2+1);
    }else if (fg != VIDE && fg < v){
        permuter(t, s, s*2);
        reorganiserDsc(t, s*2);
    }
}