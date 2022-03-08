#include "file.h"

void creerFile(File *f){
    f->premier = 0;
    f->dernier = 0;
    f->size = 0;
    int i;
    for (i = 0; i < TAILLEMaX; i++)
    {
        f->tab[i].suivant = NIL;
    }
}

char valeur(File *f){
    if(f->size != 0){
        return f->tab[f->premier].val;
    }  
    else{
        return ' ';
    }  
}

bool fileVide(File *f){
    return f->size == 0;
}

bool filePleine(File *f){
    return f->size == TAILLEMaX;
}

void enfiler(File *f, char v){
    if (!fileVide(f)){
        if(!filePleine(f)){
            f->tab[f->dernier].suivant = f->size + 1 % TAILLEMaX; 
            f->dernier = f->size + 1 % TAILLEMaX;
            f->tab[f->dernier].val = v;
        }
    }else{
        f->dernier = 0;
        f->tab[f->premier].val = v;
    }
    f->size ++;
}

void defiler(File *f){
    if (!fileVide(f)){
        f->tab[f->premier] = f->tab[f->tab[f->premier].suivant];
        f->size--;
    }
}

void detruireFile(File *f){
    while (!fileVide(f))
    {
        defiler(f);
    }
}