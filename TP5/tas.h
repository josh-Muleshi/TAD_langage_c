#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define T_MAX 100
#define RACINE 1
#define NIL -1
#define VIDE '-'

typedef struct TasMin{
    char arbre[T_MAX];
    int s;
    int taille;
}TasMin;

void creerTas(TasMin *t, char x);
    void reorganiserAsc(TasMin *t, int s);
    char pere(TasMin *t, int s);
    void permuter(TasMin *t, int s1, int s2);

char valeur(TasMin *t);
void entasser(TasMin *t, char x);
void supprimer(TasMin *t);
    void reorganiserDsc(TasMin *t, int s);
    void permuterSup(TasMin *t, char r, char pr, char dr);

char filsG(TasMin *t, int s);
char filsD(TasMin *t, int s);
char getValeur(TasMin *t, int s);