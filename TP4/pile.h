/*
    MUTEBA MULESHI Josue
    PUNGU WA MUPENDA Adalbert
    LUKUSA Ruth
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define TAILLEMaX  15
#define NIL -1

typedef int curseur ;
typedef struct cellule
{
    char val;
    curseur precedant;
}Cellule;

typedef struct Pile
{
    int size;
    Cellule tab[TAILLEMaX];
    curseur dernier;
}Pile;

char valeur(Pile *p);
bool pileVide(Pile *p);
bool pilePleine(Pile *p);

void creerPile(Pile *p);
void empiler(Pile *p, char v);
void depiler(Pile *p);
void detruirePile(Pile *p);